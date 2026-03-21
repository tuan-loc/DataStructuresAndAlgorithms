# 🧩 Perfect Array

- **Source:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/remove-duplicates-from-unsorted-array4141/1?page=1&category=Arrays&difficulty=Basic&sortBy=difficulty)
- **Difficulty:** Basic
- **Time Complexity:**
- **Space Complexity:**
- **Topic:** Array

---

# 📘 Problem Description

Given an array arr[] of non-negative integers, determine whether the array is perfect. An array is considered perfect if it first strictly increases, then remains constant, and finally strictly decreases. Any of these three parts can be empty.

---

# 🧪 Example

### Example 1

**Input:**

arr[] = [1, 8, 8, 8, 3, 2]

**Output:**

true

**Explanation:**

The array [1, 8, 8, 8, 3, 2] first increases in the range [0, 1], stays constant in the range [1, 3], and then decreases in the range [3, 4]. Thus, the array is perfect.

---

### Example 2

**Input:**

arr[] = [1, 1, 2, 2, 1]

**Output:**

false

**Explanation:**

The array does not follow the required pattern of strictly increasing, constant, and then strictly decreasing.

---

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space:** O(1)

---

# ⚠️ Constraints

- 1 ≤ arr.size() ≤ 10^6
- 1 ≤ arr[i] ≤ 10^8

---

# 💻 Implementation

## C++

```cpp
class Solution {
  public:
    bool isPerfect(vector<int>& arr) {
        // code here
        int sz = arr.size();

        if(sz < 3) return false;

        int i = 1;
        while(i < sz && arr[i] > arr[i-1]) i++;
        while(i < sz && arr[i] == arr[i-1]) i++;
        while(i < sz && arr[i] < arr[i-1]) i++;

        return i == sz;
    }
};
```
