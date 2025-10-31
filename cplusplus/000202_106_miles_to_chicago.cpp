// Title: 106 Miles To Chicago
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Trong bộ phim "Blues Brothers", trại trẻ mồ côi nơi Elwood và Jake được nuôi dưỡng có thể bị bán cho Hội đồng Giáo dục nếu họ không trả
 * 5000 đô la tiền thuế tại Văn phòng Giám định quận Cook ở Chicago. Sau khi có một hợp đồng biểu diễn trong phòng khiêu vũ của khách
 * sạn Palace để kiếm được 5000 đô la này, họ phải tìm đường đến Chicago. Tuy nhiên, điều này không hề dễ dàng vì họ bị truy đuổi bởi Cảnh
 * sát, một đội dân phòng quốc gia và một nhóm Đức quốc xã. Hơn nữa, cách Chicago 106 dặm, trời tối và họ đang đeo kính râm.
 * 
 * Bởi vì họ đang thực hiện một sứ mệnh từ Chúa, bạn nên giúp họ tìm cách an toàn nhất để đến Chicago. Trong bài toán này, con đường an
 * toàn nhất được coi là con đường tối đa hóa xác suất họ không bị bắt.
 *
 * Input:
 * Dữ liệu đầu vào chứa một số bộ test.
 * 
 * Mỗi bộ test bắt đầu bằng hai số nguyên n và m (2≤n≤100,1≤m≤n∗(n−1)/2). Trong đó, n là số nút giao, m là số con phố
 * được xem xét.
 * 
 * m dòng tiếp theo chứa mô tả về các con phố. Mỗi con phố được mô tả bằng một dòng chứa 3 số nguyên a, b và p
 * (1≤a,b≤n,a≠b,1≤p≤100). Trong đó, a và b là hai điểm cuối của con phố và p là xác suất tính bằng phần trăm để anh em nhà
 * Blues có thể sử dụng con phố này mà không bị bắt. Mỗi con phố có thể được sử dụng theo cả hai hướng. Bạn có thể cho rằng có nhiều
 * nhất một con phố nằm giữa hai nút giao.
 * 
 * Bộ test cuối cùng được theo sau bởi một số 0.
 *
 * Output:
 * Đối với mỗi bộ test, hãy tính xác suất của con đường an toàn nhất từ nút giao 1 (khách sạn Palace) đến nút giao n (trung tâm mua sắm
 * Richard J. Daley Plaza danh dự ở Chicago). Bạn có thể giả sử rằng có ít nhất một con đường giữa nút giao 1 và n.
 * 
 * In xác suất dưới dạng phần trăm có đúng 6 chữ số sau dấu thập phân. Giá trị phần trăm được coi là đúng nếu nó khác nhiều nhất là 10^​−6
 * so với giá trị đầu ra. Tuân thủ định dạng hiển thị bên dưới và in một dòng cho mỗi bộ test.
 *
 * Example 1:
 * Input:
 * 5 7
 * 5 2 100
 * 3 5 80
 * 2 3 70
 * 2 1 50
 * 3 4 90
 * 4 1 85
 * 3 1 70
 * 0
 *
 * Output:
 * 61.200000 percent
 **/
