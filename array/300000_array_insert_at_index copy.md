# 🧩 Array insert at index

- **Source:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/array-insert-at-index/1?page=1&category=Arrays&difficulty=Basic&sortBy=difficulty)
- **Difficulty:** Basic
- **Time Complexity:**
- **Space Complexity:**
- **Topic:** Array

---

# 📘 Problem Description

You are given an array arr(0-based index) and two positive integer index and val. You need to insert an val at given index.

---

# 🧪 Example

### Example 1

**Input:**

arr[] = [1, 2, 3, 4, 5], index = 5, val = 90

**Output:**

1 2 3 4 5 90

**Explanation:**

90 is inserted at index 5(0-based indexing). After inserting,array elements are like [1, 2, 3, 4, 5, 90].

---

### Example 2

**Input:**

arr[] = [1, 2, 3, 4, 5], index = 2, val = 90

**Output:**

[1, 2, 90, 3, 4, 5]

**Explanation:**

90 is inserted at index 2(0-based indexing). After inserting, array elements are like [1, 2, 90, 3, 4, 5].

---

# ⚠️ Constraints

- 1 ≤arr.size() ≤ 10^5
- 0 ≤ element, arr[i] ≤ 10^6
- 0 ≤ index ≤ arr.size()

---

# 💻 Implementation

## C++

```cpp
class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
        arr.insert(arr.begin() + index, val);
    }
};
```
