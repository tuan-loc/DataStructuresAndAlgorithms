// Title: Friends
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Có một thị trấn với N người dân. Biết rằng một số cặp người là bạn của nhau. Theo câu nói nổi tiếng “Bạn của bạn cũng là bạn của tôi”, nó
 * dẫn tới nếu A và B là bạn và B và C là bạn thì A và C cũng là bạn bè. Nhiệm vụ của bạn là đếm xem trong nhóm bạn đông nhất có bao
 * nhiêu người.
 *
 * Input:
 * Đầu vào bao gồm một số bộ dữ liệu. Dòng đầu tiên của đầu vào bao gồm một dòng với số lượng bộ test.
 * 
 * Dòng đầu tiên của mỗi tập dữ liệu chứa các số N and M, trong đó N là số người dân của thị trấn (1≤N≤30000) và M là số cặp
 * người là bạn của nhau (0≤M≤500000). Mỗi dòng M theo sau bao gồm 2 số nguyên A và B (1≤A≤N,1≤B≤N,A≠B) mô
 * tả rằng A và B là bạn bè. Có thể có sự lặp lại giữa các cặp đã cho.
 *
 * Output:
 * Đầu ra cho mỗi bộ test chứa một số biểu thị có bao nhiêu người trong nhóm bạn bè đông nhất trên một dòng.
 *
 * Example 1:
 * Input:
 * 2
 * 3 2
 * 1 2
 * 2 3
 * 10 12
 * 1 2
 * 3 1
 * 3 4
 * 5 4
 * 3 5
 * 4 6
 * 5 2
 * 2 1
 * 7 1
 * 1 2
 * 9 10
 * 8 9
 *
 * Output:
 * 3
 * 7
 * 
 * Explanation:
 * Ví dụ gồm 2 bộ test:
 * 
 * Bộ 1: Tất cả mọi người đều nằm trong cùng một nhóm bạn. Do đó nhóm bạn có số lượng lớn nhất sẽ là 3.
 * Bộ 2: Với dữ liệu đề cho, ta thu được 2 nhóm bạn như hình bên: một nhóm có 3 bạn và một nhóm có 7 bạn. Như vậy ta chọn nhóm
 * có nhiều người hơn là 7 bạn.
 **/
