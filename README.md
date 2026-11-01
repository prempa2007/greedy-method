# DESIGN AND ANALYSIS OF ALGORITHMS
## Greedy Method

This repository contains C implementations of standard and lab problems using the Greedy Method.

---

### Problems & Solutions

#### 1. Indian Coin Change (`question1.c`)
- **Problem Statement**:
  Given a value $V$, find the minimum number of coins/notes needed using standard Indian currency denominations $\{1000, 500, 100, 50, 20, 10, 5, 2, 1\}$.
- **Greedy Strategy**:
  Always pick the largest denomination that is less than or equal to the remaining value.
- **Time Complexity**: $O(D)$ where $D = 9$ is the number of denominations $\rightarrow O(1)$.
- **Space Complexity**: $O(1)$.

---

#### 2. Assign Cookies (`question2.c`)
- **Problem Statement**:
  Maximize the number of content children where each child has greed factor $g[i]$ and each cookie has size $s[j]$ ($s[j] \ge g[i]$).
- **Greedy Strategy**:
  Sort children's greed factors and cookie sizes in ascending order. Give the smallest cookie that satisfies each child.
- **Time Complexity**: $O(n \log n + m \log m)$
- **Space Complexity**: $O(1)$ auxiliary.

---

#### 3. Minimum Running Distance for Burger Calories (`question3.c`)
- **Problem Statement**:
  Given $n$ burgers each with calorie count $c$, eating the $i$-th burger requires running $n^i \times c$ km. Find the minimum distance required.
- **Greedy Strategy**:
  Sort calorie counts in descending order so the largest calories are multiplied by the lowest powers ($n^0, n^1, \dots$).
- **Time Complexity**: $O(n^2)$ (or $O(n \log n)$ with QuickSort)
- **Space Complexity**: $O(1)$ auxiliary.

---

#### 4. Maximize Sum of $\sum arr[i] \times i$ (`question4.c`)
- **Problem Statement**:
  Given an array of $n$ integers, rearrange elements to maximize $\sum_{i=0}^{n-1} arr[i] \times i$.
- **Greedy Strategy**:
  Sort the array in ascending order so that largest values are multiplied by largest index weights.
- **Time Complexity**: $O(n \log n)$ using `qsort`.
- **Space Complexity**: $O(1)$ auxiliary.

---

#### 5. Minimum Sum of Product of Two Arrays (`question5.c`)
- **Problem Statement**:
  Rearrange two arrays $A$ and $B$ of size $n$ such that $\sum_{i=0}^{n-1} A[i] \times B[i]$ is minimized.
- **Greedy Strategy**:
  Sort array $A$ in ascending order and array $B$ in descending order (pairing largest with smallest).
- **Time Complexity**: $O(n \log n)$ using `qsort`.
- **Space Complexity**: $O(1)$ auxiliary.

---

### How to Compile & Run

Compile any file with GCC:
```bash
gcc question1.c -o question1
./question1
```
