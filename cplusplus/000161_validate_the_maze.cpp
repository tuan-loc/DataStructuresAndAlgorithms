// Title: Validate The Maze
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Có nhiều thuật toán để tạo mê cung. (http://en.wikipedia.org/wiki/Maze\_generation\_algorithm). Sau khi tạo được mê cung, chúng ta phải
 * xác thực xem đó có phải là mê cung hợp lệ hay không. Một mê cung hợp lệ có chính xác một điểm vào và chính xác một điểm ra (chính xác
 * là 2 cửa mở ở các cạnh) và phải có ít nhất một con đường từ điểm vào đến điểm ra.
 * (/images/000161_validate_the_maze_01.png)
 * 
 * Cho một mê cung, cần kiểm tra xem mê cung là "valid" hay "invalid".
 * 
 * Giới hạn dữ liệu đầu vào:
 * 1≤t≤10000
 * 1≤m≤20
 * 1≤n≤20
 *
 * Input:
 * Dòng đầu tiên bao gồm một số nguyên t, số lượng các trường hợp thử nghiệm. Sau đó, đối với mỗi trường hợp thử nghiệm, dòng đầu tiên
 * bao gồm hai số nguyên m và n, số hàng và cột trong mê cung. Tiếp đó chứa mô tả của ma trận M kích thước m x n. M​i,j = ' # ' đại diện
 * cho một bức tường và M​i,j = ' . ' đại diện cho một ô trống.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, hãy kiểm tra xem mê cung là "valid" hay "invalid".
 *
 * Example 1:
 * Input:
 * 6
 * 4 4
 * ####
 * #...
 * #.##
 * #.##
 * 5 5
 * #.###
 * #..##
 * ##..#
 * #.#.#
 * ###.#
 * 1 1
 * .
 * 5 1
 * #
 * #
 * .
 * .
 * #
 * 2 2
 * #.
 * .#
 * 3 4
 * #..#
 * #.##
 * #.##
 *
 * Output:
 * valid
 * valid
 * invalid
 * valid
 * invalid
 * invalid
 **/
