# 🧩 Print Elements of Array

- **Source:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/print-elements-of-array4910/1?page=1&category=Arrays&difficulty=Basic&sortBy=difficulty)
- **Difficulty:** Basic
- **Time Complexity:**
- **Space Complexity:**
- **Topic:** Array

---

# 📘 Problem Description

Given an array arr[], print all its elements space-separated.

Note: You don't need to move to the next line after printing all elements of the array (space-separated)

---

# 🧪 Example

### Example 1

**Input:**

arr[] = [1, 2, 3, 4, 5]

**Output:**

1 2 3 4 5

---

### Example 2

**Input:**

arr[] = [2, 3, 5, 5]

**Output:**

2 3 5 5

---

# ⚠️ Constraints

- 1 <= arr.size <= 10^6
- 1 <= arr[i] <= 10^8

---

# 💻 Implementation

## C++

```cpp
// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    void printArray(vector<int> &arr) {
        // code here
        int sz = arr.size();
        for(int i = 0; i < sz; i++){
            cout << arr[i] << " ";
        }
    }
};
```
