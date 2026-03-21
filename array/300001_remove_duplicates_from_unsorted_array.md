# 🧩 Remove Duplicates from unsorted array

- **Source:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/remove-duplicates-from-unsorted-array4141/1?page=1&category=Arrays&difficulty=Basic&sortBy=difficulty)
- **Difficulty:** Basic
- **Time Complexity:**
- **Space Complexity:**
- **Topic:** Array

---

# 📘 Problem Description

Given an array arr of integers which may or may not contain duplicate elements. Your task is to remove duplicate elements.

---

# 🧪 Example

### Example 1

**Input:**

arr[] = [1, 2, 3, 1, 4, 2]

**Output:**

[1, 2, 3, 4]

**Explanation:**

2 and 1 have more than 1 occurence.

---

### Example 2

**Input:**

arr[] = [1, 2, 3, 4]

**Output:**

[1, 2, 3, 4]

**Explanation:**

There is no duplicate element.

---

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space:** O(n)

---

# ⚠️ Constraints

- 1<=arr.size()<=10^6
- 1<=arr[i]<=10^5

---

# 💻 Implementation

## C++

```cpp
// User function Template for C++

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        int sz = arr.size();
        unordered_set<int> se;
        vector<int> res;
        for(int i = 0; i < sz; i++){
            if(se.find(arr[i]) == se.end()){
                se.insert(arr[i]);
                res.push_back(arr[i]);
            }
        }

        return res;
    }
};
```
