# 🧩 Quick Left Rotation

- **Source:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/quick-left-rotation3806/1?page=1&category=Arrays&difficulty=Basic&sortBy=difficulty)
- **Difficulty:** Basic
- **Time Complexity:**
- **Space Complexity:**
- **Topic:** Array

---

# 📘 Problem Description

Given an array, arr[] of positive elements, and an integer k, the task is to left-rotate the array k indexes.
Note: Rotate the array even if the k is greater than the size of the array. In these cases after every full array rotation, the array comes the same as the original array.

---

# 🧪 Example

### Example 1

**Input:**

arr[] = [1, 2, 3, 4, 5, 6, 7], k = 2

**Output:**

[3, 4, 5, 6, 7, 1, 2]

**Explanation:**

Rotating the above array by 2 will make the output array.

---

### Example 2

**Input:**

arr[] = [1, 2, 3, 4, 5, 6], k = 12

**Output:**

[1, 2, 3, 4, 5, 6]

**Explanation:**

left Rotation of above array 12 times gives same array as output.

---

### Example 3

**Input:**

arr[] = [1, 2, 3, 4, 5, 6], k = 11

**Output:**

[6, 1, 2, 3, 4, 5]

**Explanation:**

left Rotation of above array 11 times & in resultant output 6 comes to the statring position.

---

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space:** O(1)

---

# ⚠️ Constraints

- 1 ≤ arr.size, arr[i] ≤ 10^5
- 0 ≤ k ≤ 10^9

---

# 💻 Implementation

## C++

```cpp
class Solution {

  public:
    void reverse(vector<int>& arr, int start, int end){
        while(start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    void leftRotate(vector<int>& arr, int k) {
        // Your code goes here
        int sz = arr.size();
        k = k % sz;
        reverse(arr, 0, k-1);
        reverse(arr, k, sz-1);
        reverse(arr, 0, sz-1);
    }
};
```
