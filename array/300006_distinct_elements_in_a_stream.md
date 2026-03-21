# 🧩 Distinct Elements in a Stream

- **Source:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/distinct-elements-in-a-stream1557/1?page=1&category=Arrays&difficulty=Basic&sortBy=difficulty)
- **Difficulty:** Basic
- **Time Complexity:**
- **Space Complexity:**
- **Topic:** Array

---

# 📘 Problem Description

Given an array of integers arr[], the task is to return the no of distinct elements in subarray arr[0, i] for 0 <= i <arr.size().
The array will have positive and negative values. positive value means you have to append it into your data and negative value means you have to remove it from your data.

Note: If the element is not present in the data and you get the -ve of that element then no changes should occur.

---

# 🧪 Example

### Example 1

**Input:**

arr[] = [5, 5, 7, -5, -7, 1, 2, -2]

**Output:**

[1, 1, 2, 2, 1, 2, 3, 2]

**Explanation:**

Proper adding and removal of intgers will give this output.

---

### Example 2

**Input:**

arr[] = [9, 9, 3, -9, -3, -9]

**Output:**

[1, 1, 2, 2, 1, 0]

**Explanation:**

Proper adding and removal of intgers will give this output.

---

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space:** O(1)

---

# ⚠️ Constraints

- 1 ≤ arr.size() ≤ 10^6
- -10^6 ≤ arr[i] ≤ 10^6

---

# 💻 Implementation

## C++

```cpp
class Solution {
  public:
    vector<int> getDistinct(vector<int> &arr) {
        // code here
        int sz = arr.size();
        unordered_map<int, int> mp;
        vector<int> res;
        int cnt = 0;

        for(int i = 0; i < sz; i++){
            if(arr[i] > 0){
                mp[arr[i]]++;
                if(mp[arr[i]] == 1) cnt++;
            }else{
                int abs_num = abs(arr[i]);
                mp[abs_num]--;

                if(mp[abs_num] == 0) cnt--;

                if(mp[abs_num] < 0) mp[abs_num] = 0;
            }
            res.push_back(cnt);
        }

        return res;
    }
};
```
