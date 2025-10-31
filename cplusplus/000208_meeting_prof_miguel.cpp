// Title: Meeting Prof. Miguel ...
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Tôi luôn nghĩ rằng một ngày nào đó tôi sẽ được gặp Giáo sư Miguel, người đã cho phép tôi sắp xếp rất nhiều cuộc thi. Nhưng tôi đã bỏ lỡ
 * tất cả các cơ hội trong thực tế. Cuối cùng với sự giúp đỡ của một pháp sư, tôi đã gặp được ông ấy ở Thành phố Hy vọng.
 * 
 * Thành phố Hy vọng có nhiều con đường. Một số trong chúng là đường hai chiều và một số khác là đường một chiều. Một điều quan trọng
 * khác ở những con phố này là một vài con phố dành cho những người có độ tuổi dưới ba mươi và những con phố còn lại dành cho những
 * người khác. Điều này là để cho các thanh niên tự do trong hoạt động của họ.
 * 
 * Mỗi con phố có độ dài nhất định. Cho bạn mô tả về thành phố này và các vị trí ban đầu của chúng tôi, hãy tìm nơi phù hợp nhất để chúng
 * tôi có thể gặp gỡ. Nơi phù hợp nhất là nơi mà chúng tôi tốn ít sức lực nhất. Bạn hãy giả dụ rằng tôi 25 tuổi và Giáo Sư Miguel trên 40 tuổi.
 * (/images/000208_meeting_prof_miguel_01.png)
 *
 * Input:
 * Đầu vào chứa nhiều mô tả về các thành phố. Mỗi mô tả về thành phố được bắt đầu bởi một số nguyên N, cho biết có bao nhiêu con
 * đường. N dòng tiếp theo chứa mô tả về các N con đường.
 * 
 * Mô tả của mỗi con đường bao gồm bốn chữ cái viết hoa và một số nguyên. Chữ cái đầu tiên là Y (cho biết đường dành cho thanh niên)
 * hoặc M (cho biết đường dành cho người từ 30 tuổi trở lên) và ký tự thứ hai là U (cho biết đường là một chiều) hoặc B (cho biết là đường
 * hai chiều).
 * 
 * Ký tự thứ ba và thứ tư, X và Y là chữ cái viết hoa bất kì và chúng biểu thị cho việc địa điểm có tên X và Y của thành phố được kết nối với
 * nhau (trong trường hợp một chiều có nghĩa là có đường đi từ X đến Y) và số nguyên không âm cuối cùng C cho biết năng lượng cần thiết
 * để di chuyển trên con đường đó. Nếu chúng ta ở cùng một nơi, chúng ta có thể gặp nhau mà không tốn sức lực nào. Mỗi giá trị năng lượng
 * đều nhỏ hơn 500.
 * 
 * Sau phần mô tả thành phố, dòng cuối cùng của mỗi input chứa hai địa danh, lần lượt là vị trí ban đầu của tôi và Giáo Sư Miguel. Cuối cùng
 * của dữ liệu nhập là số 0.
 *
 * Output:
 * Đối với mỗi bộ testcase, hãy in ra chi phí năng lượng tối thiểu và địa điểm phù hợp nhất để chúng tôi gặp nhau. phù hợp, hãy in tất cả
 * chúng theo thứ tự từ điển trên cùng một dòng, cách nhau bởi một khoảng trắng. Nếu không có nơi nào để chúng tôi có thể gặp nhau thì
 * hãy in dòng "You will never meet."
 *
 * Example 1:
 * Input:
 * 4
 * Y U A B 4
 * Y U C A 1
 * M U D B 6
 * M B C D 2
 * A D
 * 2
 * Y U A B 10
 * M U C D 20
 * A D
 * 0
 *
 * Output:
 * 10 B
 * You will never meet.
 **/
