// Title: Arrays
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bạn được cho hai mảng A và B gồm các số nguyên được sắp xếp theo thứ tự không giảm. Kiểm tra xem có thể chọn k số từ mảng A và m
 * số từ mảng B sao cho mọi số được chọn trong mảng đầu tiên nhỏ hơn mọi số được chọn trong mảng thứ hai.
 *
 * Input:
 * Dòng đầu tiên gồm hai số nguyên n​A, n​B (1≤n​A, n​B≤10^​5) cách nhau bởi khoảng trắng là kích thước của mảng A và B.
 * 
 * Dòng thứ hai gồm hai số nguyên k và m (1≤k≤n​A, 1≤m≤n​b), cách nhau bởi khoảng trắng.
 * 
 * Dòng thứ ba gồm n​A số a​1, a​2,...,a​n​A (−10^​9≤a1≤a2≤...≤anA≤10^9), cách nhau bởi khoảng trắng — những phần tử trong mảng 
 * A.
 * 
 * Dòng thứ tư gồm n​B số b1, b2,..., bnB (−10^9≤b1≤b2≤...≤bnB≤10^9), cách nhau bởi khoảng trắng — những phần tử trong mảng 
 * B.
 *
 * Output:
 * In "YES" (không có dấu nháy kép) nếu có thể chọn k số từ mảng A và m số từ mảng B sao cho mọi số được chọn từ mảng A nhỏ hơn mọi
 * số được chọn từ mảng B. Ngược lại, in "NO" (không có dấu nháy kép).
 *
 * Example 1:
 * Input:
 * 3 3
 * 2 1
 * 1 2 3
 * 3 4 5
 *
 * Output:
 * YES
 * 
 * Example 2:
 * Input:
 * 3 3
 * 3 3
 * 1 2 3
 * 3 4 5
 *
 * Output:
 * NO
 * 
 * Example 3:
 * Input:
 * 5 2
 * 3 1
 * 1 1 1 1 1
 * 2 2
 *
 * Output:
 * YES
 * 
 * Explanation:
 * Ví dụ 1: có thể chọn 1 và 2 từ mảng A và 3 từ mảng B (1<3 và 2<3).
 * 
 * Ví dụ 2: cách duy nhất để chọn k phần tử từ mảng đầu tiên và m phần tử từ mảng thứ hai là chọn tất cả phần tử trong hai mảng, khi này
 * mọi số trong mảng A không nhỏ hơn mọi số trong mảng B.
 **/
