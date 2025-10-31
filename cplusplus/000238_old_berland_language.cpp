// Title: Old Berland Language
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Các nhà khoa học Berland biết rằng ngôn ngữ Berland cổ đại có chính xác N từ. Các từ đó có độ dài là l​1, l​2, ..., lN chữ cái. Mỗi từ bao gồm
 * hai chữ cái 0 và 1. Người Berland cổ đại nói nhanh và không ngắt lời giữa các từ, nhưng đồng thời họ luôn có thể hiểu nhau một cách hoàn
 * hảo. Điều này có thể xảy ra vì không có từ nào là tiền tố của từ khác. Tiền tố của một chuỗi được coi là một trong các chuỗi con của nó bắt
 * đầu từ chữ cái đầu tiên.
 * 
 * Hãy giúp các nhà khoa học xác định rằng liệu tất cả các từ của ngôn ngữ Berland cổ đại có thể được tái tạo lại hay không .Và nếu họ có thể,
 * hãy xuất ra các từ đó.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên N (1≤N≤1000) - số lượng từ trong ngôn ngữ Berland cổ đại. Dòng thứ hai chứa N số nguyên
 * được phân tách bằng dấu cách - là độ dài của những từ này. Tất cả các độ dài là số tự nhiên không quá 1000.
 *
 * Output:
 * Nếu không có tập hợp từ nào thỏa mãn thì in ra NO. Nếu tìm được bộ N từ thỏa mãn thì in ra YES, và trong N dòng tiếp theo, in ra các từ
 * theo thứ tự độ dài của chúng đã được đưa ra trong dữ liệu đầu vào. Nếu câu trả lời không phải là duy nhất thì in ra một bộ bất kỳ.
 *
 * Example 1:
 * Input:
 * 3
 * 1 2 3
 *
 * Output:
 * YES
 * 0
 * 10
 * 110
 * 
 * Example 2:
 * Input:
 * 3
 * 1 1 1
 *
 * Output:
 * NO
 **/
