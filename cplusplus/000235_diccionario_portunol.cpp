// Title: Diccionario Portunol
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Portuñol là một ngôn ngữ đặc biệt được phát triển tự nhiên ở Mỹ Latinh. Vì gần một nửa châu Mỹ Latinh nói tiếng Bồ Đào Nha (Português)
 * và gần một nửa nói tiếng Tây Ban Nha (Español), nên sự pha trộn của cả hai ngôn ngữ là điều đương nhiên.
 * 
 * Mỗi từ trong Portuñol được tạo ra bằng cách lấy một tiền tố không rỗng của một từ tiếng Bồ Đào Nha và một hậu tố không rỗng của một
 * từ tiếng Tây Ban Nha, và nối chúng lại với nhau. Tiền tố của một từ là bất kỳ từ nào có thể nhận được bằng cách xóa không hoặc nhiều ký
 * tự từ đầu bên phải của nó. Hậu tố của một từ là bất kỳ từ nào có thể nhận được bằng cách xóa không hoặc nhiều ký tự từ đầu bên trái của
 * nó. Bản thân tên của ngôn ngữ này bắt nguồn từ việc lấy một tiền tố của từ “Português” (Portu) và một hậu tố của từ Español ”(ñol), và
 * ghép chúng lại.
 * 
 * Tất nhiên, không phải mọi cách kết hợp hai từ sẽ tạo ra một cái gì đó có nghĩa, hoặc thậm chí có thể phát âm được, nhưng điều đó không
 * quan trọng. Chúng tôi muốn bạn viết một chương trình để đếm số lượng các từ Portuñol khác nhau.
 * 
 * Bạn sẽ được cung cấp hai bộ từ không rỗng để kiểm tra chương trình của mình. Bộ đầu tiên sẽ đại diện cho các từ tiếng Bồ Đào Nha và bộ
 * thứ hai sẽ đại diện cho các từ tiếng Tây Ban Nha. Bạn cần tính toán số lượng các từ Portuñol khác nhau có thể được tạo ra bằng cách sử
 * dụng quy tắc tiền tố và hậu tố được mô tả ở trên. Lưu ý rằng cùng một từ có thể được cấu tạo theo nhiều cách, nhưng nó vẫn cần được
 * tính là một. Cũng lưu ý rằng các bộ đầu vào chỉ là để kiểm tra chương trình của bạn, vì vậy chúng không cần phải được tạo ra từ các từ
 * tiếng Bồ Đào Nha hoặc tiếng Tây Ban Nha thực tế.
 *
 * Input:
 * Mỗi trường hợp kiểm thử được mô tả bằng một vài dòng. Dòng đầu tiên chứa hai số nguyên P và S lần lượt đại diện cho số từ tiếng Bồ
 * Đào Nha và số từ tiếng Tây Ban Nha (1≤P,S≤1000).
 * 
 * Mỗi dòng trong số P dòng tiếp theo chứa một từ tiếng Bồ Đào Nha và sau đó mỗi dòng trong số S dòng tiếp theo chứa một từ tiếng Tây
 * Ban Nha. Mỗi từ là một chuỗi không rỗng chứa tối đa 1000 ký tự; mỗi ký tự là một trong 26 chữ cái viết thường tiêu chuẩn (từ ‘a’ đến ‘z’).
 * Bạn có thể giả định rằng trong mỗi trường hợp thử nghiệm không có hai từ tiếng Bồ Đào Nha nào giống nhau và tổng độ dài của tất cả các
 * từ tiếng Bồ Đào Nha tối đa là 10^5. Các từ tiếng Tây Ban Nha cũng vậy.
 * 
 * Trường hợp thử nghiệm cuối cùng được theo sau bởi một dòng chứa hai số không.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, xuất ra một dòng với số nguyên đại diện cho số lượng từ khác nhau có thể được tạo bằng cách nối
 * tiền tố không rỗng của một từ trong bộ từ thứ nhất (từ tiếng Bồ Đào Nha) và hậu tố không rỗng của một từ trong bộ từ thứ hai (từ tiếng
 * Tây Ban Nha).
 *
 * Example 1:
 * Input:
 * 3 3
 * mais
 * grande
 * mundo
 * mas
 * grande
 * mundo
 * 1 5
 * a
 * aaaaa
 * aaaaaa
 * aaaaaaa
 * a
 * aaaaaaaaa
 * 1 1
 * abc
 * abc
 * 0 0
 *
 * Output:
 * 182
 * 9
 * 8
 **/
