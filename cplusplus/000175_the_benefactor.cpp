// Title: The Benefactor
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một chương khác của biên niên sử thành phố của một thị trấn lớn nổi tiếng kể cho chúng ta câu chuyện sau:
 * 
 * Ngày xửa ngày xưa, các công dân của thị trấn đã quyết định bầu một thiếu tá. Vào thời điểm đó đây là một ý tưởng rất mới và các chiến
 * dịch bầu cử hoàn toàn không được biết đến. Nhưng tất nhiên, một số công dân muốn trở thành thị trưởng và rất nhanh để họ thấy rằng
 * việc hứa hẹn những điều tốt đẹp không bao giờ trở thành hiện thực có xu hướng hữu ích trong tình huống như vậy. Một ứng cử viên có thể
 * được bầu làm thiếu tá là Ivo đôi khi được gọi là ân nhân vì những món quà giá trị của ông cho những công dân của các thị trấn.
 * 
 * Một ngày trước ngày bầu cử, Ivo, nhà hảo tâm đã có một lời hứa với các công dân của thị trấn. Trong trường hợp chiến thắng trong cuộc
 * bầu cử, anh ấy đảm bảo rằng trên một trong những con đường lát đá, đèn đường của thị trấn sẽ được dựng lên và anh ấy sẽ trả số tiền đó
 * bằng tiền của mình. Vì tiết kiệm nên những công dân của thị trấn bầu anh ấy và một ngày sau cuộc bầu cử, họ trình bày cho anh ấy quyết
 * định của họ rằng đường nào nên có đèn đường. Tất nhiên, họ không chỉ chọn con đường dài nhất trong số tất cả các con đường mà còn
 * đổi tên một số con đường để một con đường rất dài trong thị trấn tồn tại.
 * 
 * Bạn có thể biết con đường đó dài bao nhiêu không? Cụ thể hơn, tình huống như sau. Bạn được cho biết một danh sách tất cả các con
 * đường lát đá trong thị trấn. Trong thị trấn, các con đường được lát đá theo cách mà giữa hai điểm tham quan trong thị trấn tồn tại đúng
 * một đường đi lát đá. Nhiệm vụ của bạn là tìm khoảng cách xa nhất tồn tại giữa hai địa điểm tham quan bất kỳ trong thành phố.
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa số lượng trường hợp t.
 * 
 * Dòng đầu tiên của mỗi trường hợp chứa số lượng địa điểm (2≤n≤50000) trong thị trấn. Mỗi con đường được mô tả trên một dòng bởi
 * hai địa điểm (1≤a,b≤n) và độ dài của con đường (0≤l<20000).
 *
 * Output:
 * Đối với mỗi trường hợp, hãy in ra một dòng chứa chiều dài tối đa của con phố dài nhất trong thành phố.
 *
 * Example 1:
 * Input:
 * 1
 * 6
 * 1 2 3
 * 2 3 4
 * 2 6 2
 * 6 4 6
 * 6 5 5
 *
 * Output:
 * 12
 **/
