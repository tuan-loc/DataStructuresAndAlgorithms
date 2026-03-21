# 🧩 Maximum triplet sum in array

- **Source:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/maximum-triplet-sum-in-array0129/1?page=1&category=Arrays&difficulty=Basic&sortBy=difficulty)
- **Difficulty:** Basic
- **Time Complexity:**
- **Space Complexity:**
- **Topic:** Array

---

# 📘 Problem Description

Given an array arr, the task is to find the maximum triplet sum in the array.

---

# 🧪 Example

### Example 1

**Input:**

Input : arr[] = [4, 2, 7, 9]

**Output:**

20

**Explanation:**

Here are total 4 combination: (0, 1, 2), (0, 1, 3), (0, 2, 3), (1, 2, 3).
So, the Sum of these combinations is 13, 15, 20, and 18. The maximum sum is 20.

---

### Example 2

**Input:**

arr[] = [1, 0, 8, 6, 4, 2]

**Output:**

18

**Explanation:**

(2, 3, 4), this triplet is going to give us a sum of 18.

---

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space:** O(1)

---

# ⚠️ Constraints

- 3 ≤ arr.size() ≤ 10^6
- -10^5 ≤ arr[i] ≤ 10^5

---

# 💻 Implementation

## C++

```cpp
class Solution {
  public:
    // Function to find the maximum triplet sum in the array.
    int maxTripletSum(vector<int> &arr) {
        // Complete the function
        int sz = arr.size();
        int max_a = INT_MIN, max_b = INT_MIN, max_c = INT_MIN;

        for(int i = 0; i < sz; i++){
            if(arr[i] > max_a){
                max_c = max_b;
                max_b = max_a;
                max_a = arr[i];
            }else if(arr[i] > max_b){
                max_c = max_b;
                max_b = arr[i];
            }else if(arr[i] > max_c){
                max_c = arr[i];
            }
        }

        return (max_a + max_b + max_c);
    }
};
```
