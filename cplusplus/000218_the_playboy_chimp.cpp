// Title: The Playboy Chimp
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Ngày xưa, có một con tinh tinh được gọi là Luchu Bandor (hay còn gọi là Playboy Tinh tinh). Luchu không hạnh phúc khi kết hôn với
 * Bunty Mona, một cô tinh tinh thấp bé nhưng dễ thương. Luchu cao ráo và đẹp trai - anh ấy cảm thấy không thoải mái khi đưa Bunty đến
 * những nơi công cộng cùng với anh ấy. Mọi người sẽ nhìn chằm chằm vào họ mọi lúc. Đã đến lúc Luchu không thể chịu đựng được nữa và
 * anh quyết định đòi lại công bằng cho tên tuổi của mình. Anh ấy bắt đầu tìm kiếm một niềm hy vọng mới ở trường trung học Lady Chimps
 * ’. Mỗi ngày Luchu sẽ trèo lên một cây tre và đợi cuộc tập trận buổi sáng bắt đầu. Từ đó anh có thể nhìn thấy từng con tinh tinh phụ nữ
 * đang thực hiện cuộc diễn tập thường ngày của họ. Bây giờ, Luchu đang tìm kiếm con tinh tinh phụ nữ cao nhất sẽ thấp hơn anh ta; anh ấy
 * cũng muốn coi ai đó cao hơn mình một chút. Nhưng ai đó có cùng chiều cao với anh ấy sẽ không bao giờ có trong danh sách của anh ấy.
 * Mỗi sáng, Luchu chọn một dòng tinh tinh phụ nữ và tìm ra hai con tốt nhất theo tiêu chí của anh ta. Công việc của anh ấy đã trở nên dễ
 * dàng bởi thực tế là các tinh tinh phụ nữ trong mỗi dòng được sắp xếp theo chiều cao của chúng, con thấp nhất ở phía trước và con cao
 * nhất ở phía sau. Nhiệm vụ của bạn là giúp Luchu vào một ngày cụ thể để tìm ra hai con tinh tinh: con cao nhất thấp hơn anh và con thấp
 * nhất cao hơn anh.
 *
 * Input:
 * Sẽ chỉ có một bộ test cho bài toán này. Dòng đầu tiên của dữ liệu nhập cung cấp cho bạn một số N (1≤N≤50000), số tinh tinh phụ
 * nữ trên dòng. Trong dòng tiếp theo, bạn sẽ có N số nguyên (trong phạm vi từ 1 đến 2^​31−1) cho biết chiều cao của N tinh tinh. Sẽ có một
 * khoảng trắng sau mỗi số. Bạn có thể giả định rằng tinh tinh được sắp xếp theo thứ tự không giảm chiều cao của chúng. Ở dòng tiếp theo,
 * bạn sẽ có một số nguyên Q (1≤Q≤25000) cho biết số lượng truy vấn. Sau đó, trong dòng tiếp theo là Q truy vấn sẽ theo sau. Lúc này,
 * bạn sẽ có các số Q cho biết chiều cao của Luchu! Đừng lo lắng, Luchu đến từ vùng đất mà mọi người có thể có 3 ngày sinh; một con tinh
 * tinh có nhiều chiều cao sẽ không có gì đặc biệt ở đây. Các số Q được liệt kê trên một dòng và phạm vi của chúng từ 1 đến 2^​31−1, và như
 * trước đây bạn sẽ tìm thấy một khoảng trắng sau mỗi số truy vấn. Các số truy vấn không được phép theo bất kỳ thứ tự cụ thể nào.
 *
 * Output:
 * Đối với mỗi chiều cao truy vấn, hãy in hai số trên một dòng. Số đầu tiên sẽ là chiều cao của cô tinh tinh cao nhất thấp hơn Luchu, và số tiếp
 * theo sẽ là chiều cao của cô tinh tinh thấp nhất cao hơn anh ta. Hai số này phải được phân tách bằng một khoảng trắng. Bất cứ khi nào
 * không thể tìm thấy bất kỳ độ cao nào trong hai độ cao này, hãy thay thế độ cao đó bằng chữ hoa ‘X’.
 *
 * Example 1:
 * Input:
 * 4
 * 1 4 5 7
 * 4
 * 4 6 8 10
 *
 * Output:
 * 1 5
 * 5 7
 * 7 X
 * 7 X
 **/
