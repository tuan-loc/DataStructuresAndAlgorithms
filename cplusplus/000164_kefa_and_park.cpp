// Title: Kefa and Park
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Kefa quyết định ăn mừng khoản lương lớn đầu tiên của mình bằng cách đi đến nhà hàng.
 * 
 * Anh ấy sống trên một công viên khác thường. Công viên là một cây có gốc gồm n đỉnh với gốc ở đỉnh 1. Đỉnh 1 chứa ngôi nhà của Kefa.
 * Thật không may cho anh hùng của chúng ta, công viên cũng có mèo. Kefa đã tìm ra đâu là đỉnh có mèo. Các đỉnh lá của công viên có các
 * nhà hàng. Kefa muốn chọn một nhà hàng mà anh ấy sẽ đến, nhưng tiếc là anh ấy rất sợ mèo, vì vậy sẽ không có cách nào anh ấy đến nhà
 * hàng nếu con đường từ nhà hàng đến nhà anh ấy chứa nhiều hơn m đỉnh liên tiếp có mèo.
 * 
 * Nhiệm vụ của bạn là giúp Kefa tính số nhà hàng mà anh ta có thể đến.
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên, n và m, 2≤n≤10^​5, 1≤m≤n - số đỉnh của cây và số đỉnh tối đa liên tiếp có mèo vẫn ổn đối với
 * Kefa.
 * 
 * Dòng thứ hai chứa n số nguyên a​1, a​2,...,a​n, trong đó với mỗi a​i bằng 0 (khi đó đỉnh i không có mèo) hoặc bằng 1 (khi đó đỉnh i có một
 * con mèo).
 * 
 * N−1 dòng tiếp theo chứa các cạnh của cây ở định dạng "x​i y​i" (không có dấu ngoặc kép) (1≤x​i,y​i≤n, x​i≠y​i), trong đó x​i và y​i là
 * các đỉnh của cây, được nối với nhau bằng một cạnh.
 *
 * Output:
 * Một số nguyên duy nhất - Số lá phân biệt của cây biểu thị số đường đi từ nhà Kefa đến nhà hàng mà gặp không quá m đỉnh liên tiếp có
 * mèo.
 *
 * Example 1:
 * Input:
 * 4 1
 * 1 1 0 0
 * 1 2
 * 1 3
 * 1 4
 *
 * Output:
 * 2
 * 
 * Example 2:
 * Input:
 * 7 1
 * 1 0 1 1 0 0 0
 * 1 2
 * 1 3
 * 2 4
 * 2 5
 * 3 6
 * 3 7
 *
 * Output:
 * 2
 * 
 * Explanation:
 * Chú ý rằng cây là một đồ thị liên thông trên n đỉnh và n−1 cạnh. Cây có gốc là cây có một đỉnh đặc biệt gọi là gốc. Trong một cây có gốc
 * trong số hai đỉnh bất kỳ được nối với nhau bằng một cạnh, một đỉnh là cha (đỉnh gần gốc hơn) và đỉnh còn lại là con. Một đỉnh được gọi là
 * lá, nếu nó không có con.
 * 
 * Lưu ý đối với trường hợp mẫu đầu tiên.
 * (/images/000164_kefa_and_park_01.png)
 * 
 * Các đỉnh chứa mèo được đánh dấu màu đỏ. Các nhà hàng ở các đỉnh 2, 3, 4. Kefa chỉ không thể đến nhà hàng nằm ở đỉnh 2.
 * 
 * Lưu ý đối với trường hợp mẫu thứ hai:
 * (/images/000164_kefa_and_park_02.png)
 * 
 * Các nhà hàng nằm ở các đỉnh 4, 5, 6, 7. Kefa không thể đến nhà hàng 6, 7.
 **/
