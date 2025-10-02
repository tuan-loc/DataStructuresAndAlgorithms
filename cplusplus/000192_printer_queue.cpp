// Title: Printer Queue
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Máy in duy nhất của hội sinh viên khoa học máy tính đang phải làm khối lượng công việc cực kỳ nặng. Đôi khi có hàng trăm công việc trong
 * hàng đợi cần máy in thực hiện và bạn có thể phải đợi hàng giờ để được in một trang giấy.
 * 
 * Vì một số công việc có mức độ quan trọng hơn những công việc khác, Hacker General đã phát minh và triển khai một hệ thống ưu tiên đơn
 * giản để giải quyết công việc in ấn. Bây giờ, mỗi công việc có mức độ ưu tiên từ 1 đến 9 (với 9 là mức độ ưu tiên cao nhất và 1 là mức độ ưu
 * tiên thấp nhất) và máy in hoạt động như sau:
 * 
 * Công việc đầu tiên J trong hàng đợi được lấy ra.
 * Nếu có công việc khác trong hàng đợi có mức độ ưu tiên cao hơn công việc J, thì di chuyển J đến cuối hàng đợi mà không thực hiện
 * in nó.
 * Nếu không, hãy thực hiện lệnh in J (và không đưa nó trở lại hàng đợi).
 * 
 * Bằng cách này, tất cả các công thức làm bánh Muffin quan trọng mà Hacker General cần in sẽ được thực hiện rất nhanh chóng. Tất nhiên,
 * những tờ giấy mà những người khác cần in có thể phải đợi khá lâu để được in, nhưng đó là cuộc sống.
 * 
 * Vấn đề của bạn với hệ thống in mới trở nên khá khó khăn để xác định khi nào lệnh in của bạn sẽ được thực sự in. Bạn quyết định viết một
 * chương trình để tính được điều này. Chương trình sẽ cung cấp hàng đợi hiện tại (dưới dạng danh sách các ưu tiên) cũng như vị trí công việc
 * của bạn trong hàng đợi và sau đó phải tính toán thời gian sẽ mất bao lâu cho đến khi công việc của bạn được in, giả sử rằng không có công
 * việc bổ sung nào được thêm vào hàng đợi.
 * 
 * Để đơn giản hóa vấn đề, chúng tôi giả định rằng công việc in ấn luôn diễn ra chính xác một phút và việc thêm hay xóa công việc khỏi hàng
 * đợi không đáng kể.
 *
 * Input:
 * Dòng đầu là một số nguyên dương: số lượng trường hợp thử nghiệm (nhiều nhất là 100). Sau đó, đối với mỗi trường hợp thử nghiệm:
 * 
 * Dòng đầu gồm hai số nguyên dương n và m, trong đó n là số lượng công việc trong hàng đợi (1≤n≤100) và m là vị trí công việc
 * của bạn (0≤m≤n−1). Vị trí đầu tiên trong hàng đợi là số 0, vị trí thứ hai là số 1,...
 * 
 * Dòng tiếp theo là n số nguyên trong phạm vi từ 1 đến 9, cho biết mức độ ưu tiên của các công việc trong hàng đợi. Số nguyên đầu
 * tiên là mức độ ưu tiên của công việc đầu tiên, số nguyên thứ hai là mức độ ưu tiên của công việc thứ hai,...
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, in một dòng là một số nguyên duy nhất; số phút cho đến khi lệnh in của bạn được thực hiện, giả sử
 * rằng không có lệnh in bổ sung nào.
 *
 * Example 1:
 * Input:
 * 3
 * 1 0
 * 5
 * 4 2
 * 1 2 3 4
 * 6 0
 * 1 1 9 1 1 1
 *
 * Output:
 * 1
 * 2
 * 5
 **/
