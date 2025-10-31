// Title: Cthulhu
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Ngày xửa ngày xưa có một người đến biển. Biển nổi giông tố và tối đen. Người đàn ông bắt đầu kêu gọi nàng tiên cá nhỏ xuất hiện nhưng
 * than ôi, anh ta chỉ đánh thức Cthulhu ...
 * 
 * Trong khi ở đầu bên kia của thế giới, Pentagon đang tích cực thu thập thông tin cố gắng dự đoán hành vi của con quái vật và chuẩn bị siêu
 * vũ khí bí mật. Do hoạt động địa chấn cao và điều kiện thời tiết xấu, các vệ tinh vẫn chưa thể chụp ảnh rõ ràng về con quái vật. Việc phân
 * tích lần chụp đầu tiên cho kết quả là một đồ thị vô hướng với n đỉnh và m cạnh. Bây giờ những bộ óc giỏi nhất thế giới sắp xác định xem
 * liệu đồ thị này có thể được coi là Cthulhu hay không.
 * 
 * Để đơn giản hơn, hãy giả sử rằng Cthulhu nhìn từ không gian giống như một vật thể hình cầu có gắn các xúc tu trên đó. Về mặt hình thức,
 * chúng ta sẽ coi Cthulhu là một đồ thị vô hướng có thể được biểu diễn dưới dạng một tập hợp gồm ba hoặc nhiều cây có gốc, mà các gốc
 * của chúng được nối với nhau bằng một chu trình đơn.
 * 
 * Đảm bảo rằng đồ thị không chứa nhiều cạnh và các vòng lặp.
 * (/images/000252_cthulhu_01.png)
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên - số đỉnh n và số cạnh m của đồ thị (1≤n≤100,0≤m≤(​n∗(n−1))/2).
 * 
 * Mỗi dòng trong số m dòng tiếp theo chứa một cặp số nguyên x và y, cho thấy rằng một cạnh tồn tại giữa các đỉnh x và y
 * (1≤x,y≤n,x≠y). Đối với mỗi cặp đỉnh sẽ có nhiều nhất một cạnh giữa chúng, không có cạnh nào nối một đỉnh với chính nó.
 *
 * Output:
 * In "NO", nếu đồ thị không phải là Cthulhu và "FHTAGN!" nếu đúng là nó.
 *
 * Example 1:
 * Input:
 * 6 5
 * 5 6
 * 4 6
 * 3 1
 * 5 1
 * 1 2
 *
 * Output:
 * NO
 * 
 * Example 2:
 * Input:
 * 6 6
 * 6 3
 * 6 4
 * 5 1
 * 2 5
 * 1 4
 * 5 4
 *
 * Output:
 * FHTAGN!
 * 
 * Explanation:
 * Hãy biểu diễn dưới dạng một chu trình đơn, một tập v đỉnh có thể được đánh số sao cho các cạnh chỉ tồn tại giữa các đỉnh số 1 và 2, 2 và
 * 3, ..., v−1 và v, v và 1.
 * 
 * Cây là một đồ thị vô hướng liên thông bao gồm n đỉnh và n−1 cạnh (n>0).
 * 
 * Cây có gốc là cây mà một đỉnh được chọn làm gốc.
 **/
