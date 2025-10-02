// Title: Commandos
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một nhóm biệt kích được giao một nhiệm vụ quan trọng. Họ phải phá hủy trụ sở của kẻ thù. Trụ sở của đối phương bao gồm một số tòa nhà và các tòa nhà được kết nối với nhau bằng đường bộ. Các lính biệt kích phải đến từng tòa nhà và đặt bom ở chân mỗi tòa nhà. Họ bắt đầu sứ mệnh của mình tại cơ sở của một tòa nhà cụ thể và từ đó họ lan rộng để tiếp cận từng tòa nhà. Họ phải sử dụng những con đường có sẵn để di chuyển giữa các tòa nhà. Bất kỳ ai trong số họ đều có thể đi từ tòa nhà này đến tòa nhà khác, nhưng tất cả đều phải tập trung tại một địa điểm chung khi hoàn thành xong nhiệm vụ. Trong bài toán này, bạn sẽ được cung cấp các mô tả về các trụ sở khác nhau của đối phương. Việc của bạn là xác định thời gian tối thiểu cần thiết để hoàn thành nhiệm vụ. Mỗi người mất đúng một đơn vị thời gian để di chuyển giữa các tòa nhà. Bạn có thể cho rằng thời gian cần thiết để đặt bom là không đáng kể. Mỗi người có thể mang theo số lượng bom không giới hạn và không giới hạn số lượng lính biệt kích cho nhiệm vụ.
 *
 * Input:
 * Đầu vào bắt đầu bằng số nguyên T (≤50), biểu thị số lượng trường hợp thử nghiệm.
 * 
 * Dòng đầu tiên của mỗi trường hợp bắt đầu bằng số nguyên dương N (1≤N≤100), trong đó N biểu thị số tòa nhà trong trụ sở chính.
 * Dòng tiếp theo chứa một số nguyên dương R, trong đó R là số đường nối hai tòa nhà. Mỗi R dòng tiếp theo chứa hai số phân biệt u v
 * (0≤u,v<N), điều này có nghĩa là có một con đường nối tòa nhà u với tòa nhà v. Các tòa nhà được đánh số từ 0 đến N−1. Dòng
 * cuối cùng của mỗi trường hợp chứa hai số nguyên s d (0≤s,d<N). Trong đó s biểu thị tòa nhà nơi nhiệm vụ bắt đầu và d biểu thị tòa
 * nhà nơi họ phải gặp nhau. Bạn có thể cho rằng hai tòa nhà sẽ được kết nối trực tiếp với nhau bằng nhiều nhất một con đường. Đầu vào sẽ
 * được cung cấp sao cho có thể đi từ bất kỳ tòa nhà nào đến tòa nhà khác bằng cách sử dụng một hoặc nhiều con đường.
 *
 * Output:
 * Đối với mỗi trường hợp, hãy in số thứ tự của trường hợp và thời gian tối thiểu cần thiết để hoàn thành nhiệm vụ.
 *
 * Example 1:
 * Input:
 * 2
 * 4
 * 3
 * 0 1
 * 2 1
 * 1 3
 * 0 3
 * 2
 * 1
 * 0 1
 * 1 0
 *
 * Output:
 * Case 1: 4
 * Case 2: 1
 **/
