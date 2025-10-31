// Title: ACM Contest and Blackout
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Để chuẩn bị cho “Cuộc thi ACM trường học toàn quốc lần thứ nhất” (vào năm 20??), chính quyền thành phố đã quyết định cung cấp cho tất
 * cả các trường một nguồn điện đáng tin cậy. (Chính phủ thực sự sợ mất điện). Vì vậy, để làm được điều đó, trạm điện “Tương lai” và một
 * trường học (không quan trọng là cái nào) phải được kết nối; Ngoài ra, một số trường học cũng phải được kết nối.
 * 
 * Bạn có thể cho rằng trường học có nguồn điện đáng tin cậy nếu trường đó được kết nối trực tiếp với “Tương lai” hoặc với bất kỳ trường nào
 * khác có nguồn điện đáng tin cậy. Bạn được cung cấp chi phí kết nối giữa một số trường. Chuyên gia đã quyết định chọn ra hai phương án
 * kết nối rẻ nhất - chi phí kết nối bằng tổng kết nối giữa các trường. Nhiệm vụ của bạn là giúp chính - tìm ra chi phí của hai cách kết nối rẻ
 * nhất.
 *
 * Input:
 * Đầu vào bắt đầu với số lượng trường hợp, T (1<T<15) trên một dòng. Sau đó, các trường hợp T theo sau.
 * 
 * Dòng đầu tiên của mỗi test case chứa hai số, được phân tách bằng dấu cách, N (3<N<100) số trường học trong thành phố và M số
 * kết nối có thể có giữa chúng.
 * 
 * M dòng tiếp theo chứa ba số A​i, B​i, C​i, trong đó C​i là chi phí của kết nối (1<C​i<300) giữa các trường A​i và B​i. Các trường được
 * đánh số bằng các số nguyên trong khoảng từ 1 đến N.
 *
 * Output:
 * Đối với mỗi trường hợp, chỉ in một dòng. Dòng này phải chứa hai số cách nhau bởi một khoảng trắng - chi phí của hai cách kết nối rẻ nhất.
 * Đặt S​1 là chi phí rẻ nhất và S​2 là chi phí rẻ nhất tiếp theo. Điều quan trọng là S​1=S​2 nếu và chỉ khi có hai cách rẻ nhất, nếu không thì
 * S​1<S​2. Bạn có thể giả định rằng luôn có thể tìm thấy chi phí S​1 và S​2.
 *
 * Example 1:
 * Input:
 * 2
 * 5 8
 * 1 3 75
 * 3 4 51
 * 2 4 19
 * 3 2 95
 * 2 5 42
 * 5 4 31
 * 1 2 9
 * 3 5 66
 * 9 14
 * 1 2 4
 * 1 8 8
 * 2 8 11
 * 3 2 8
 * 8 9 7
 * 8 7 1
 * 7 9 6
 * 9 3 2
 * 3 4 7
 * 3 6 4
 * 7 6 2
 * 4 6 14
 * 4 5 9
 * 5 6 10
 *
 * Output:
 * 110 121
 * 37 37
 **/
