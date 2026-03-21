# 🧩 Count number of elements between two given elements in array

- **Source:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1?page=1&category=Arrays&difficulty=Basic&sortBy=difficulty)
- **Difficulty:** Basic
- **Time Complexity:**
- **Space Complexity:**
- **Topic:** Array

---

# 📘 Problem Description

Given an unsorted array arr[] and two elements num1 and num2. The task is to count the number of elements that occur between the given elements (excluding num1 and num2). If there are multiple occurrences of num1 and num2, we need to consider the leftmost occurrence of num1 and the rightmost occurrence of num2.

---

# 🧪 Example

### Example 1

**Input:**

arr[] = [4, 2, 1, 10, 6], num1 = 4, and num2 = 6

**Output:**

3

**Explanation:**

We have an array [4, 2, 1, 10, 6] and num1 = 4 and num2 = 6. So, the left most index of num1 is 0 and rightmost index of num2 is 4. So, the total number of element between them is [2, 1, 10] So, answer is 3.

---

### Example 2

**Input:**

arr[] = [3, 2, 1, 4], num1 = 2, and num2 = 4

**Output:**

1

**Explanation:**

here in array [3, 2, 1, 4] only one element [1] occur betweeen 2 and 4, So, answer is 1.

---

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space:** O(1)

---

# ⚠️ Constraints

- 2 ≤ arr.size() ≤ 10^6
- 1 ≤ arr[i], num1, num2 ≤ 10^6

---

# 💻 Implementation

## C++

```cpp
class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.
        int sz = arr.size();
        int i, j;

        for(i = 0; i < sz; i++){
            if(arr[i] == num1) break;
        }

        for(j = sz - 1; j > 0; j--){
            if(arr[j] == num2) break;
        }

        if(j < i) return 0;

        return (j - i - 1);
    }
};
```
