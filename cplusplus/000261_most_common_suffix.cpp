// Title: Most Common Suffix
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bạn được cung cấp các chuỗi n và các truy vấn q. Đối với mỗi truy vấn i, nhiệm vụ của bạn là tìm hậu tố chung nhất có độ dài x​i, bạn cần in
 * ra mức độ phổ biến của nó.
 * 
 * Hậu tố i (hoặc hậu tố thứ i) của một chuỗi là một trường hợp đặc biệt của chuỗi con đi từ ký tự thứ i của chuỗi lên đến ký tự cuối cùng của
 * chuỗi. Ví dụ, hậu tố thứ $ 4$ của "development" là "lopment", hậu tố thứ 7 của "development" là "ment" (0-based indexing).
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên T (1≤T≤75), trong đó T là số trường hợp.
 * 
 * Dòng đầu tiên của mỗi trường hợp chứa hai số nguyên n và q (1≤n,q≤10^​4), trong đó n là số chuỗi và q là số truy vấn.
 * 
 * Sau đó n dòng tiếp theo, mỗi dòng chứa một chuỗi s, cho các chuỗi. Tất cả các chuỗi đều không trống bao gồm các chữ cái tiếng Anh viết
 * thường.
 * 
 * Sau đó, các dòng q tiếp theo, mỗi dòng chứa một số nguyên x (1≤x≤m), đưa ra các truy vấn. Trong đó m bằng độ dài của chuỗi dài
 * nhất trong số các chuỗi n đã cho.
 * 
 * Tổng độ dài của các chuỗi trong mỗi trường hợp không vượt quá 10^​5.
 *
 * Output:
 * Đối với mỗi truy vấn, in một dòng duy nhất chứa câu trả lời.
 *
 * Example 1:
 * Input:
 * 1
 * 5 4
 * abccba
 * abddba
 * xa
 * abdcba
 * aneverknow
 * 1
 * 2
 * 4
 * 3
 *
 * Output:
 * 4
 * 3
 * 1
 * 2
 **/
