// Title: Guilty Prince
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Xưa có một vị vua tên là Akbar. Ông có một con trai tên là Shahjahan. Vì một lý do không thể tha thứ mà nhà vua muốn anh rời khỏi vương
 * quốc. Vì yêu con trai mình, ông quyết định con trai mình sẽ bị đày đến một nơi mới. Hoàng tử trở nên buồn bã, nhưng anh ấy đã làm theo
 * ý muốn của cha mình. Trên đường đi, anh ta phát hiện nơi đây là giao giữa đất liền và nước. Vì không biết bơi nên anh chỉ có thể di chuyển
 * trên cạn. Anh không biết mình có thể đi đến bao nhiêu nơi. Vì vậy, anh ấy đã nhờ đến sự giúp đỡ của bạn.
 * 
 * Để đơn giản, bạn có thể coi nơi đây như một lưới hình chữ nhật bao gồm một số ô. Một ô có thể là một vùng đất hoặc có thể chứa nước.
 * Mỗi lần như vậy, hoàng tử có thể di chuyển đến một ô mới từ vị trí hiện tại của mình nếu nó kế nhau.
 * 
 * Bây giờ, hãy viết một chương trình để tìm số ô (đất) mà anh ta có thể đến được bao gồm cả ô mà anh ta đang đứng.
 *
 * Input:
 * Đầu vào bắt đầu bằng một số nguyên T (T≤500), biểu thị số lượng trường hợp thử nghiệm.
 * 
 * Mỗi trường hợp bắt đầu bằng một dòng chứa hai số nguyên dương W và H; W và H lần lượt là số ô theo hướng x và y. W và H không
 * quá 20.
 * 
 * Sẽ có thêm H dòng trong tập dữ liệu, mỗi dòng bao gồm các ký tự W. Mỗi ký tự đại diện cho trạng thái của một ô như sau.
 * 1. ' . ' - đất
 * 2. ' # ' - nước
 * 3. ' @ ' - vị trí ban đầu của hoàng tử (xuất hiện chính xác một lần trong tập dữ liệu)
 *
 * Output:
 * Đối với mỗi trường hợp, hãy in số trường hợp và số ô anh ta có thể đến được từ vị trí ban đầu (bao gồm chính nó).
 *
 * Example 1:
 * Input:
 * 4
 * 6 9
 * ....#.
 * .....#
 * ......
 * ......
 * ......
 * ......
 * ......
 * #@...#
 * .#..#.
 * 11 9
 * .#.........
 * .#.#######.
 * .#.#.....#.
 * .#.#.###.#.
 * .#.#..@#.#.
 * .#.#####.#.
 * .#.......#.
 * .#########.
 * ...........
 * 11 6
 * ..#..#..#..
 * ..#..#..#..
 * ..#..#..###
 * ..#..#..#@.
 * ..#..#..#..
 * ..#..#..#..
 * 7 7
 * ..#.#..
 * ..#.#..
 * ###.###
 * ...@...
 * ###.###
 * ..#.#..
 * ..#.#..
 *
 * Output:
 * Case 1: 45
 * Case 2: 59
 * Case 3: 6
 * Case 4: 13
 **/
