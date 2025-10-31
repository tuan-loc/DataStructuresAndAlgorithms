// Title: Arbitrage
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Kiếm lời chênh lệch giá là việc sử dụng sự chênh lệnh về tỷ giá hối đoái tiền tệ để chuyển đổi một đơn vị tiền tệ thành nhiều đơn vị của
 * cùng một loại tiền tệ. Ví dụ: giả sử 1 đô la Mỹ mua được 0.5 bảng Anh, 1 bảng Anh mua được 10.0 franc Pháp và 1 franc Pháp mua được
 * 0.21 đô la Mỹ. Sau đó, bằng cách chuyển đổi tiền tệ, một nhà giao dịch thông minh có thể bắt đầu với 1 đô la Mỹ và mua
 * 0,5∗10,0∗0,21=1,05 đô la Mỹ, tạo ra lợi nhuận là 5%
 * 
 * Công việc của bạn là viết một chương trình nhận vào danh sách tỷ giá hối đoái tiền tệ và xác định xem việc kiếm lời chênh lệch giá có khả
 * thi hay không.
 *
 * Input:
 * Dữ liệu nhập có thể có nhiều testcase. Dòng đầu tiên của mỗi testcase là một số nguyên n (1≤n≤30), đại diện cho số lượng đơn vị tiền
 * tệ khác nhau. n dòng tiếp theo, mỗi dòng chứa tên của một loại tiền tệ. Trong tên sẽ không có khoảng trắng nào. Dòng tiếp theo chứa một
 * số nguyên m, đại diện cho độ dài của danh sách tỷ giá. m dòng tiếp theo, mỗi dòng chứa tên c​i của đơn vị tiền tệ ban đầu, một số thực r​ij
 * đại diện cho tỷ giá hối đoái từ c​i đến cj và tên c​j của đơn vị tiền tệ chuyển đổi. Lưu ý rằng c​i và c​j có thể là cùng một đơn vị tiền tệ. Các
 * trao đổi không xuất hiện trong danh sách là không thể xảy ra. Các testcase được phân tách với nhau bằng một dòng trống. Đầu vào được
 * kết thúc bằng giá trị n=0.
 *
 * Output:
 * Với mỗi testcase, hãy in một dòng cho biết liệu có khả năng kinh doanh chênh lệch giá hay không ở định dạng "Case case: Yes", hoặc là
 * "Case case: No".
 *
 * Example 1:
 * Input:
 * 3
 * USDollar
 * BritishPound
 * FrenchFranc
 * 3
 * USDollar 0.5 BritishPound
 * BritishPound 10.0 FrenchFranc
 * FrenchFranc 0.21 USDollar
 * 
 * 3
 * USDollar
 * BritishPound
 * FrenchFranc
 * 6
 * USDollar 0.5 BritishPound
 * USDollar 4.9 FrenchFranc
 * BritishPound 10.0 FrenchFranc
 * BritishPound 1.99 USDollar
 * FrenchFranc 0.09 BritishPound
 * FrenchFranc 0.19 USDollar
 * 
 * 0
 *
 * Output:
 * Case 1: Yes
 * Case 2: No
 **/
