// Title: Approximating a Constant Range
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Khi Xellos đang thực hiện một khóa học thực hành ở trường đại học, anh ấy đã từng phải đo cường độ của một hiệu ứng từ từ tiến đến
 * trạng thái cân bằng. Một cách tốt để xác định cường độ bình quân sẽ là chọn một số lượng lớn nhất có thể các điểm dữ liệu liên tiếp gần
 * như không đổi và lấy giá trị trung bình của chúng. Tất nhiên, với kích thước thông thường của dữ liệu thì không có gì khó - nhưng tại sao ta
 * không đặt ra một vấn đề tương tự trong cuộc thi lập trình?
 * 
 * Bạn được cung cấp một dãy gồm n điểm dữ liệu a​1,...,a​n. Không có bất kỳ bước nhảy lớn nào giữa các điểm dữ liệu liên tiếp - với
 * 1≤i<n, ta đảm bảo rằng ∣a​i+1−a​i∣≤1.
 * 
 * Đoạn dữ liệu [l,r] được cho là gần như không đổi nếu hiệu giữa giá trị lớn nhất và nhỏ nhất trong đoạn đó lớn nhất là 1. Về mặt hình thức,
 * gọi M là giá trị lớn nhất và m là giá trị nhỏ nhất của a​i với l≤i≤r; đoạn [l,r] gần như không đổi nếu M−m≤1.
 * 
 * Tìm độ dài của đoạn dài nhất gần như không đổi.
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa một số nguyên duy nhất n (2≤n≤100 000) - số điểm dữ liệu.
 * 
 * Dòng thứ hai chứa n số nguyên a​1, a​2,...,a​n (1≤a​i≤100 000).
 *
 * Output:
 * In ra một số duy nhất - độ dài lớn nhất của một đoạn gần như không đổi của dãy đã cho.
 *
 * Example 1:
 * Input:
 * 5
 * 1 2 3 3 2
 *
 * Output:
 * 4
 * 
 * Example 2:
 * Input:
 * 11
 * 5 4 5 5 6 7 8 8 8 7 6
 *
 * Output:
 * 5
 * 
 * Explanation:
 * Trong ví dụ đầu tiên, đoạn gần như không đổi dài nhất là [2,5]; độ dài của nó (số điểm dữ liệu trong đó) là 4.
 * 
 * Trong ví dụ thứ hai, có ba đoạn gần như không đổi độ dài 4: [1,4],[6,9] và [7,10]; đoạn gần như không đổi duy nhất có độ dài 5 lớn nhất
 * là [6,10].
 **/
