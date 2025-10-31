// Title: Cobbled streets
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Biên niên sử thành phố của một thị trấn lớn ở rất xa kể rằng:
 * 
 * Ngày xưa, vị vua mới lên ngôi Günther quyết định đến thăm tất cả các thị trấn trong vương quốc của mình. Người dân của thị trấn không
 * thể tin được rằng vua Günther muốn xem một số tòa nhà nổi tiếng nhất trong thị trấn của họ. Đối với các công dân, tất cả các đường phố
 * trong thị trấn mà nhà vua đi qua phải được rải đá cuội. Thật không may, thị trấn lớn không có nhiều tiền vào thời điểm đó vì họ đã sử dụng
 * hầu hết số tiền tiết kiệm của mình để xây dựng nhà thờ lớn nhất thế giới.
 * 
 * Roumours tiết lộ rằng lý do thực sự cho sự tiết kiệm của họ không phải là kho bạc của thị trấn trống rỗng mà là nhiều người tin rằng vua
 * Günther lên ngôi bằng cách lừa dối vua cha Erwin và khi còn trẻ, ông đã giao ước với ma quỷ. Nhưng dù sao đi nữa, những công dân của
 * thị trấn lớn đã quyết định chỉ lát những con phố thực sự cần thiết để đến mọi tòa nhà lớn.
 * 
 * Bạn có thể giúp các công dân của thị trấn lớn tìm ra những con phố nào nên được lát không? Có thể hữu ích nếu biết rằng tất cả các tòa
 * nhà lớn đều nằm ở cuối đường hoặc ở ngã tư. Thêm vào đó, bạn có thể giả định rằng tất cả các tòa nhà được kết nối bởi các đường phố
 * nhất định.
 *
 * Input:
 * t [số lượng testcase (1≤t≤100)]
 * 
 * p [giá để lát một đoạn đường (số nguyên dương)]
 * 
 * n [số tòa nhà chính trong thị trấn (1≤n≤1000)]
 * 
 * m [số đường trong thị trấn (1≤m≤300000)]
 * 
 * a b c [đường từ tòa nhà a đến tòa nhà b có chiều dài c (các chiều dài được tính theo furlong và các tòa nhà được đánh số từ 1 đến n)]
 *
 * Output:
 * Đối với mỗi testcase đưa ra mức giá rẻ nhất có thể để tiếp cận tất cả các tòa nhà chính trong thành phố trên những con đường lát đá. Bạn
 * có thể giả định rằng kết quả sẽ nhỏ hơn 2^​32.
 *
 * Example 1:
 * Input:
 * 1
 * 2
 * 5
 * 7
 * 1 2 1
 * 2 3 2
 * 2 4 6
 * 5 2 1
 * 5 1 3
 * 4 5 2
 * 3 4 3
 *
 * Output:
 * 12
 **/
