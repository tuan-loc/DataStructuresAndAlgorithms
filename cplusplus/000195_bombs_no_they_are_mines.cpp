// Title: Bombs! NO they are Mines!!
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Đây là năm 3002. Các robot của "ROBOTS'R US (R: US)" đã nắm quyền kiểm soát toàn thế giới. Bạn là một trong số ít những người còn sống
 * chỉ để đóng vai trò là chú chuột lang của chúng. Đôi khi, robot sử dụng bạn để xem thử chúng có thể trở nên thông minh hơn không. Bạn,
 * là một chàng trai thông minh, luôn thành công trong việc chứng tỏ mình thông minh hơn.
 * 
 * Hôm nay là ngày quan trọng của bạn. Nếu bạn có thể đánh bại robot nhanh nhất ở vùng đất IRQ2003, bạn sẽ được tự do. Những con robot
 * này rất thông minh. Tuy nhiên, chúng vẫn chưa thể khắc phục được sự thiếu sót lớn trong thiết kế vật lý của chúng - chúng chỉ có thể di
 * chuyển theo 4 hướng: Tiến, lùi, lên và xuống. Và chúng mất 1 đơn vị thời gian để đi được 1 đơn vị quãng đường. Vì bạn chỉ có một cơ hội,
 * nên bạn đang lên kế hoạch kỹ lưỡng cho nó. Các robot đã cử một trong những robot nhanh nhất để thi đấu với bạn. Bạn cần lập trình một
 * con rô bốt khác để có thể đưa bạn vượt qua địa hình hiểm trở. Một phần quan trọng trong kế hoạch của bạn yêu cầu bạn phải tìm ra
 * khoảng thời gian mà robot thi đấu kia sẽ cần để đến đích của bạn. Nếu bạn có thể đánh bại nó, bạn sẽ tự do.
 * 
 * Chúng tôi phải cảnh báo bạn rằng vùng đất IRQ2003 không phải là một nơi dễ dàng để đi lung tung. R:US đã thả rất nhiều quả bom khi
 * chúng xâm lược vùng đất của con người. Hầu hết các quả bom đã phát nổ. Vẫn còn một số quả bom vẫn hoạt động như mìn đất. Chúng tôi
 * đã quản lý để có được một bản đồ hiển thị các khu vực không an toàn của vùng IRQ2003; Rất tiếc, con robot thi đất với bạn cũng có một
 * bản sao của bản đồ. Chúng tôi biết rằng nhiều nhất 40% khu vực có thể không an toàn. Nếu bạn muốn đánh bại con robot kia, bạn phải
 * tìm ra con đường nhanh nhất trước khi anh ta tìm thấy nó.
 *
 * Input:
 * Đầu vào bao gồm nhiều trường hợp thử nghiệm. Mỗi trường hợp bắt đầu bằng hai số nguyên dương R (1≤R≤1000), C
 * (1≤C≤1000) - cung cấp cho bạn số hàng và số cột trong lưới bản đồ của vùng đất. Sau đó, quan sát vị trí của các quả bom. Nó bắt đầu
 * với rows, (0≤rows≤R) số hàng chứa bom.
 * 
 * Đối với mỗi rows, bạn sẽ có một dòng. Các dòng này bắt đầu bằng số thứ tự hàng, tiếp theo là số bom trong hàng đó. Sau đó, bạn sẽ có vị
 * trí cột của những quả bom trong hàng đó. Trường hợp thử nghiệm kết thúc với vị trí bắt đầu (row,column) tiếp theo là vị trí điểm đến
 * của bạn (row,column). Tất cả các vị trí trong bảng đều nằm trong phạm vi từ (0,0) đến (R−1,C−1).
 * 
 * Đầu vào kết thúc bằng một trường hợp thử nghiệm trong đó R=0 và C=0, bạn không phải xử lý trường hợp thử nghiệm này.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, hãy xuất thời gian robot thi đấu kia sẽ mất để đi từ vị trí xuất phát đến vị trí đích.
 *
 * Example 1:
 * Input:
 * 10 10
 * 9
 * 0 1 2
 * 1 1 2
 * 2 2 2 9
 * 3 2 1 7
 * 5 3 3 6 9
 * 6 4 0 1 2 7
 * 7 3 0 3 8
 * 8 2 7 9
 * 9 3 2 3 4
 * 0 0
 * 9 9
 * 0 0
 *
 * Output:
 * 18
 **/
