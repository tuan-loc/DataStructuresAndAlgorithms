// Title: Bank and Vulnerable Passwords
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Có một ngân hàng cấp cho khách hàng của họ một mật khẩu 'chỉ' để giao dịch (không có tên người dùng) qua ATM. Ngoài ra, máy ATM
 * không có bất kỳ phím Enter nào, nó sẽ tự động đăng nhập vào tài khoản của bạn ngay khi bạn nhập đúng mật khẩu. Có một vấn đề lớn
 * trong loại hệ thống như vậy, tức là giả sử rằng nếu hai người A và B lần lượt dùng “aadil” và “aadilahmad” làm mật khẩu của họ, thì bất cứ
 * khi nào B cố gắng đăng nhập, máy sẽ tự động đăng nhập B vào của tài khoản của A.
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa số nguyên N, số lượng người dùng trong ngân hàng. N dòng tiếp theo chứa các chuỗi là mật khẩu của
 * người dùng. Hãy cho biết ngân hàng bảo mật tốt hay không tốt?
 * 
 * Constraints:
 * 
 * N≤10^​5
 * Tất cả mật khẩu bao gồm bảng chữ cái tiếng Anh viết thường.
 * 1 ≤ độ dài của mật khẩu ≤ 50
 *
 * Output:
 * In "vulnerable" nếu ngân hàng bảo mật không tốt hoặc "non vulnerable" nếu ngân hàng bảo mật tốt.
 *
 * Example 1:
 * Input:
 * 2
 * likemeifyoucan
 * likeme
 *
 * Output:
 * vulnerable
 **/
