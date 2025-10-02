// Title: Mice and Maze
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một nhóm chuột trong phòng thí nghiệm đang được huấn luyện để thoát khỏi một mê cung. Mê cung được tạo thành từ các ô, và mỗi ô
 * được kết nối với một số ô khác. Tuy nhiên, có những chướng ngại vật trong việc đi lại giữa các ô và do đó có một hình phạt thời gian để
 * vượt qua lối đi đó. Ngoài ra, một số đoạn cho phép chuột đi một chiều, nhưng không theo chiều ngược lại.
 * 
 * Giả sử rằng tất cả các con chuột hiện đã được huấn luyện và khi được đặt vào một ô tùy ý trong mê cung, sẽ đi theo con đường dẫn chúng
 * đến ô lối ra trong thời gian tối thiểu.
 * 
 * Chúng ta sẽ tiến hành thí nghiệm sau: mỗi con chuột được đặt trong một ô của mê cung và đồng hồ đếm ngược được bắt đầu. Khi bộ đếm
 * thời gian dừng, chúng ta đếm số lượng chuột ra khỏi mê cung.
 * 
 * Problem
 * Viết một chương trình, với mô tả về mê cung và giới hạn thời gian, dự đoán số lượng chuột sẽ thoát ra khỏi mê cung. Giả sử rằng không có
 * giới hạn cho mê cung, tức là tất cả các ô đều có chỗ cho một số lượng chuột tùy ý.
 *
 * Input:
 * Các ô trong mê cung được đánh số 1,2,...,N, trong đó N là tổng số ô. Bạn có thể giả định rằng N≤100.
 * 
 * Ba dòng đầu tiên chứa N, số ô trong mê cung, E, số ô lối ra và giá trị bắt đầu T cho đồng hồ đếm ngược (đơn vị thời gian tùy ý).
 * 
 * Dòng thứ tư chứa số M là số các kết nối trong mê cung và theo sau là M dòng, mỗi dòng là một kết nối với ba số nguyên: hai ô a và b
 * (trong phạm vi 1,..,N) và số đơn vị thời gian để đi từ a đến b.
 * 
 * Lưu ý rằng mỗi kết nối là một chiều, tức là chuột không thể di chuyển từ b đến a trừ khi có một dòng khác chỉ định kết nối đó. Cũng lưu ý
 * rằng thời gian cần thiết để di chuyển theo mỗi hướng có thể khác nhau.
 *
 * Output:
 * Kết quả bao gồm một dòng duy nhất với số lượng chuột đã đến ô lối ra E với nhiều nhất là T đơn vị thời gian.
 *
 * Example 1:
 * Input:
 * 4
 * 2
 * 1
 * 8
 * 1 2 1
 * 1 3 1
 * 2 1 1
 * 2 4 1
 * 3 1 1
 * 3 4 1
 * 4 2 1
 * 4 3 1
 *
 * Output:
 * 3
 **/
