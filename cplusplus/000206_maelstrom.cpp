// Title: Maelstrom
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * BIT gần đây đã nhận giao hàng siêu máy tính mới của họ, máy bộ nhớ dùng chung phân tán Apollo Odyssey 32 bộ xử lý với hệ thống con
 * giao tiếp phân cấp. Cố vấn nghiên cứu của Valentine McKee, Jack Swigert, đã yêu cầu cô đánh giá hệ thống mới.
 * 
 * Valentine nói với Swigert: “Vì Apollo là một máy bộ nhớ dùng chung phân tán, thời gian truy cập bộ nhớ và giao tiếp không đồng nhất.
 * “Giao tiếp nhanh hơn giữa các máy chủ chia sẻ cùng hệ thống con bộ nhớ, nhưng chậm hơn giữa các máy chủ không thuộc cùng hệ thống
 * con. Giao tiếp giữa tàu Apollo và máy móc trong phòng thí nghiệm của chúng tôi còn chậm hơn ”.
 * 
 * “Cổng Giao diện truyền thông báo (MPI) của Apollo hoạt động như thế nào?” Swigert hỏi.
 * 
 * “Không tốt lắm,” Valentine trả lời. “Để thực hiện việc phát một thông điệp từ một máy chủ đến tất cả n−1 máy chủ khác, chúng cần thực
 * hiện một chuỗi n−1 lần gửi. Điều đó phải lần lượt và làm hỏng màn trình diễn ”. "Bạn có thể làm gì để khắc phục điều đó không?"
 * 
 * "Vâng," Valentine mỉm cười. "Có. Khi bộ xử lý đầu tiên đã gửi tin nhắn cho một máy chủ khác, hai bộ xử lý đó sau đó có thể gửi tin nhắn cho
 * hai máy chủ khác cùng một lúc. Sau đó, sẽ có bốn máy chủ có thể gửi, v.v. ”
 * 
 * “À, vậy bạn có thể thực hiện việc phát sóng như một cây nhị phân!”
 * 
 * “Không hẳn là một cây nhị phân - có một số tính năng cụ thể của mạng mà chúng ta nên khai thác.
 * 
 * Các thẻ giao diện mà chúng tôi có cho phép mỗi máy chủ đồng thời gửi tin nhắn đến bất kỳ số bộ xử lý nào khác được kết nối với nó. Tuy
 * nhiên, các tin nhắn không nhất thiết phải đến đích cùng một lúc - có liên quan đến chi phí truyền thông. Nói chung, chúng tôi cần tính đến
 * chi phí truyền thông cho mỗi liên kết trong cấu trúc liên kết mạng của chúng tôi và lập kế hoạch phù hợp để giảm thiểu tổng thời gian cần
 * thiết để thực hiện một chương trình phát sóng. ”
 *
 * Input:
 * Dữ liệu đầu vào sẽ mô tả cấu trúc liên kết của một mạng kết nối n máy chủ. Dòng đầu tiên của đầu vào sẽ là n - số lượng máy chủ, sao cho
 * 1≤n≤100.
 * 
 * Phần còn lại xác định một ma trận kề A. Ma trận kề là ma trận vuông và có kích thước n∗n. Mỗi phần tử của ma trận là một số nguyên
 * hoặc ký tự ‘x’. Giá trị của A(i,j) cho biết chi phí gửi một tin nhắn trực tiếp từ máy i đến máy j. Giá trị ‘x’ cho A(i,j) chỉ ra rằng không thể
 * gửi trực tiếp tin nhắn từ máy i đến máy j.
 * 
 * Lưu ý rằng để một máy chủ gửi một tin nhắn đến chính nó thì không yêu cầu giao tiếp mạng, vì vậy A(i,i)=0 với 1≤i≤n. Ngoài ra,
 * bạn có thể giả định rằng mạng là vô hướng (tin nhắn có thể đi theo một trong hai hướng với chi phí bằng nhau), do đó A(i,j)=A(j,i).
 * 
 * Đầu vào cho chương trình của bạn sẽ là phần hình tam giác dưới của A. Nghĩa là, dòng thứ hai của đầu vào sẽ chứa một giá trị A(2,1).
 * Dòng tiếp theo sẽ chứa hai giá trị, A(3,1) và A(3,2), v.v.
 *
 * Output:
 * Chương trình của bạn phải in ra thời gian giao tiếp tối thiểu cần thiết để gửi tin nhắn từ máy chủ đầu tiên đến tất cả các máy chủ khác.
 *
 * Example 1:
 * Input:
 * 5
 * 50
 * 30 5
 * 100 20 50
 * 10 x x 10
 *
 * Output:
 * 35
 **/
