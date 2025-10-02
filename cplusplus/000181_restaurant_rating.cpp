// Title: Restaurant Rating
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Anh đầu bếp đã mở một nhà hàng mới. Giống như mọi nhà hàng khác, các nhà phê bình đánh giá nơi này. Đầu bếp muốn thu thập càng
 * nhiều đánh giá tích cực càng tốt. Ngoài ra, anh ấy cũng nhận thức được thực tế rằng khách hàng thường không có xu hướng xem qua tất
 * cả các bài đánh giá. Vì vậy, anh ấy chọn ra những đánh giá tích cực và đăng nó trên trang web của nhà hàng. Bài đánh giá được thể hiện
 * bằng một số nguyên là điểm xếp hạng của nhà hàng dựa trên bài đánh giá cụ thể đó. Một bài đánh giá được coi là tích cực nếu nó nằm
 * trong một phần ba số bài đầu tiên của tổng số bài đánh giá khi chúng được sắp xếp theo điểm xếp hạng. Ví dụ: giả sử điểm xếp hạng được
 * đưa ra bởi 8 đánh giá khác nhau như sau:
 * 
 * 2 8 3 1 6 4 5 7
 * 
 * Sau đó, một phần ba bài đánh giá đầu tiên sẽ là 8 và 7. Lưu ý rằng chúng ta coi một phần ba số bài đánh giá đầu tiên là 8/3=2 theo phép
 * chia số nguyên. (xem Ghi chú)
 * 
 * Do đó, Đầu bếp muốn nhờ bạn: Với các đánh giá (điểm xếp hạng) của các nhà phê bình khác nhau, bạn cần cho anh ta biết điểm xếp hạng
 * tối thiểu mà trang web của anh ta sẽ hiển thị là bao nhiêu. Ví dụ trong trường hợp trên, điểm xếp hạng tối thiểu sẽ được hiển thị là 7.
 * Ngoài ra, các nhà phê bình đánh giá nhà hàng liên tục. Vì vậy, các bài đánh giá mới vẫn tiếp tục xuất hiện. Đầu bếp muốn xếp hạng trang
 * web của mình được cập nhật. Vì vậy, bạn luôn phải tiếp tục cập nhật số điểm xếp hạng tại đó. Tại bất kỳ thời điểm nào, Đầu bếp có thể
 * muốn biết xếp hạng tối thiểu đang được hiển thị. Bạn sẽ phải trả lời câu hỏi đó. Một điều thú vị cần lưu ý ở đây là một bài đánh giá có thể
 * có trong trang web một thời gian và bị loại sau đó vì những bài đánh giá mới tốt hơn và ngược lại.
 * 
 * Ghi chú: Nói một cách chính xác, số lượng bài đánh giá được hiển thị trên trang web sẽ là floor(n/3), trong đó n là số lượng các bài đánh
 * giá hiện tại.
 *
 * Input:
 * Dòng đầu tiên của đầu vào bao gồm một số nguyên N, số lượng các thao tác cần thực hiện. N dòng tiếp theo, mỗi dòng chứa một thao
 * tác. Một thao tác có thể có 2 loại:
 * 
 * 1 x: Thêm bài đánh giá có điểm xếp hạng x' vào danh sách các bài đánh giá hiện có (x là số nguyên)
 * 2: Trả ra điểm xếp hạng tối thiểu hiện tại trên trang web
 *
 * Output:
 * Đối với mọi thao tác trả ra (thao tác số 2), hãy xuất ra một số nguyên duy nhất cho yêu cầu của Đầu bếp. Nếu số bài đánh giá không đủ
 * điều kiện để thành đánh giá tích cực, hãy xuất "No reviews yet".
 *
 * Example 1:
 * Input:
 * 10
 * 1 1
 * 1 7
 * 2
 * 1 9
 * 1 21
 * 1 8
 * 1 5
 * 2
 * 1 9
 * 2
 *
 * Output:
 * No reviews yet
 * 9
 * 9
 * 
 * Explanation:
 * Trước yêu cầu đầu tiên của Chef, tức là thao tác đầu tiên của loại 2 trong đầu vào, có 2 bài đánh giá với điểm xếp hạng là 1 và 7. Do đó, sẽ
 * có tổng cộng 2/3=0 bài đánh giá tích cực.
 * 
 * Đối với hai thao tác tiếp theo, danh sách đánh giá bây giờ có dạng: 1 5 7 8 9 21. Do đó, một phần ba số bài đánh giá đầu tiên sẽ có
 * 6/3=2 bài đánh giá tích cực. Và điểm xếp hạng hiển thị thấp nhất sẽ là 9. Tương tự đối với thao tác cuối cùng của loại 2.
 * 
 * Lưu ý rằng hiện có hai đánh giá điểm xếp hạng có cùng giá trị 9 và chỉ một trong số chúng có thể nằm trong các bài đánh giá hàng đầu.
 * Trong trường hợp như vậy, bạn có thể chọn bất kỳ một trong số chúng.
 **/
