// Title: Distinct Count
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho một mảng A gồm N số nguyên, hãy phân loại nó là Good, Bad hoặc Average. Nó được gọi là Good, nếu nó chứa chính xác X số
 * nguyên phân biệt, Bad nếu nó chứa ít hơn X số nguyên phân biệt và Average nếu nó chứa nhiều hơn X số nguyên phân biệt.
 *
 * Input:
 * Dòng đầu tiên bao gồm một số nguyên T duy nhất biểu thị số lượng trường hợp.
 * Dòng đầu tiên của mỗi trường hợp kiểm tra bao gồm hai số nguyên được phân tách bằng dấu cách biểu thị N và X.
 * Dòng thứ hai của mỗi trường hợp kiểm tra bao gồm N số nguyên được phân tách bằng dấu cách biểu thị các phần tử của mảng.
 * 
 * Giới Hạn:
 * 1≤T≤50
 * 1≤X,N≤13000
 * 1≤A[i]≤10^​9
 *
 * Output:
 * In câu trả lời cho mỗi trường hợp trên một dòng mới.
 *
 * Example 1:
 * Input:
 * 4
 * 4 1
 * 1 4 2 5
 * 4 2
 * 4 2 1 5
 * 4 3
 * 5 2 4 1
 * 4 4
 * 1 2 4 5
 *
 * Output:
 * Average
 * Average
 * Average
 * Good
 **/
