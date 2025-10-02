// Title: Ice Cave
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bạn chơi một trò chơi trên máy tính. Nhân vật của bạn đứng trên một hang động băng có nhiều tầng. Để qua màn, bạn cần phải xuống
 * thấp hơn một tầng và cách duy nhất để làm điều này là rơi qua lớp băng.
 * 
 * Một tầng hang động nơi bạn đang đứng là một lưới hình vuông hình chữ nhật gồm n hàng và m cột. Mỗi ô bao gồm băng nguyên vẹn hoặc
 * băng nứt. Từ mỗi ô, bạn có thể di chuyển đến các ô liền kề với ô của bạn (do một số hạn chế của công cụ trò chơi, bạn không thể thực hiện
 * các bước nhảy trên cùng một vị trí, tức là nhảy tại chính nó). Nếu bạn di chuyển đến ô có băng bị nứt, thì nhân vật của bạn sẽ rơi xuống ô
 * đó và nếu bạn di chuyển đến ô có băng còn nguyên vẹn, thì băng trên ô này sẽ bị nứt.
 * 
 * Hãy đánh số các hàng có số nguyên từ 1 đến n từ trên xuống dưới và các cột có số nguyên từ 1 đến m từ trái sang phải. Hãy biểu thị một ô
 * trên giao điểm của hàng r-th và cột c-th là (r, c).
 * 
 * Bạn đang ở trên ô (r​1, c​1) và ô này bị nứt vì bạn vừa rơi xuống đây từ tầng cao hơn. Bạn cần phải đi xuống ô (r​2, c​2) vì ở đó có lối ra đến
 * màn tiếp theo. Bạn làm được chứ?
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên, n và m (1≤n,m≤500) - số hàng và cột mô tả hang động.
 * 
 * Mỗi dòng trong số n tiếp theo mô tả trạng thái ban đầu của một tầng hang động, mỗi dòng gồm m ký tự " . " (băng nguyên vẹn) và " X "
 * (băng bị nứt).
 * 
 * Dòng tiếp theo chứa hai số nguyên, r​1 và c​1 (1≤r​1≤n,1≤c​1≤m) - tọa độ ban đầu của bạn. Dữ liệu đảm bảo rằng hang động có
 * chứa ký tự " X " tại ô (r​1, c​1), tức là phần băng bị nứt ban đầu.
 * 
 * Dòng tiếp theo chứa hai số nguyên r​2 và c​2 (1≤r​2≤n,1≤c​2≤m) - tọa độ của ô mà bạn cần đến. Ô đó có thể trùng với ô bắt đầu.
 *
 * Output:
 * Nếu bạn có thể đến ô đích, hãy in 'YES', nếu không thì in 'NO'.
 *
 * Example 1:
 * Input:
 * 4 6
 * X...XX
 * ...XX.
 * .X..X.
 * ......
 * 1 6
 * 2 2
 *
 * Output:
 * YES
 * 
 * Example 2:
 * Input:
 * 5 4
 * .X..
 * ...X
 * X.X.
 * ....
 * .XX.
 * 5 3
 * 1 1
 *
 * Output:
 * NO
 * 
 * Example 3:
 * Input:
 * 4 7
 * ..X.XX.
 * .XX..X.
 * X...X..
 * X......
 * 2 2
 * 1 6
 *
 * Output:
 * YES
 **/
