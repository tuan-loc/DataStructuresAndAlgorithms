// Title: Audiophobia
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Hãy xem bản thân rất may mắn đi! Hãy tự coi mình là người may mắn khi vẫn còn thở và vui vẻ khi tham gia cuộc thi này. Nhưng chúng tôi
 * e rằng nhiều con cháu của bạn có thể không có được sự xa xỉ này. Vì, như bạn biết, chúng ta là cư dân của một trong những thành phố ô
 * nhiễm nhất trên trái đất. Ô nhiễm ở khắp mọi nơi, cả trong môi trường và xã hội và sự thiếu ý thức của chúng ta đã làm trầm trọng thêm
 * tình hình đó.
 * 
 * Tuy nhiên, trước mắt, chúng ta sẽ chỉ xem xét một loại ô nhiễm - ô nhiễm âm thanh. Độ lớn hoặc mức cường độ của âm thanh thường
 * được đo bằng decibel và âm thanh có mức cường độ 130 decibel trở lên được coi là đau đớn. Mức cường độ của cuộc trò chuyện bình
 * thường là 60−65 decibel và của giao thông đông đúc là 70−80 decibel.
 * 
 * Hãy xem xét bản đồ thành phố sau đây, trong đó các cạnh là các đường phố và các nút đề cập đến các giao lộ. Số nguyên trên mỗi cạnh là
 * mức cường độ âm thanh trung bình (tính bằng decibel) trên đường phố tương ứng.
 * (/images/000244_audiophobia_01.png)
 * 
 * Để đi từ A đến băng qua G, bạn có thể đi theo con đường sau: A→C→F→G. Trong trường hợp đó, bạn có khả năng phải chịu được
 * cường độ âm thanh cao tới 140 decibel. Đối với các đường dẫn A→B→E→G, A→B→D→G và A→C→F→D→G,
 * bạn phải chịu được cường độ âm thanh lần lượt là 90, 120 và 80 decibel. Cũng có những con đường khác. Tuy nhiên, rõ ràng
 * A→C→F→D→G là con đường thoải mái nhất vì nó không yêu cầu bạn chịu đựng hơn 80 decibel.
 * 
 * Trong bài này, cho bản đồ thành phố, bạn được yêu cầu xác định mức cường độ âm thanh nhỏ nhất mà bạn có thể phải chịu để đi từ giao
 * lộ này sang giao lộ khác.
 *
 * Input:
 * Đầu vào có thể chứa nhiều trường hợp.
 * 
 * Dòng đầu tiên của mỗi trường hợp chứa ba số nguyên C (C≤100), S (S≤1000) và Q (Q≤10000) trong đó C cho biết số lượng
 * đường giao nhau (đường giao nhau được đánh số bằng các số nguyên riêng biệt từ 1 đến C), S đại diện cho số đường và Q là số lượng
 * truy vấn.
 * 
 * Mỗi dòng trong số S tiếp theo chứa ba số nguyên: c​1, c​2 và d cho biết mức cường độ âm thanh trung bình trên đường phố nối các ngã tư
 * c​1 và c​2 (c​1≠c​2) là d decibel.
 * 
 * Mỗi dòng trong số Q tiếp theo chứa hai số nguyên c​1 và c​2 (c​1≠c​2) yêu cầu mức cường độ âm thanh tối thiểu mà bạn phải có thể chịu
 * được để từ vượt qua c​1 đến nơi vượt c​2. Đầu vào sẽ kết thúc với ba số 0 biểu diễn C, S và Q.
 *
 * Output:
 * Đối với mỗi trường hợp trong đầu vào, đầu tiên xuất ra số thứ tự trường hợp (bắt đầu từ 1) như được hiển thị trong ví dụ mẫu. Sau đó, đối
 * với mỗi truy vấn trong đầu vào, in một dòng cho mức cường độ âm thanh tối thiểu (tính bằng decibel) mà bạn phải có khả năng chịu đựng
 * để đi từ điểm giao nhau thứ nhất đến thứ hai trong truy vấn. Nếu không tồn tại đường dẫn giữa chúng, chỉ cần in dòng "no path".
 * 
 * In một dòng trống giữa hai trường hợp liên tiếp.
 *
 * Example 1:
 * Input:
 * 7 9 3
 * 1 2 50
 * 1 3 60
 * 2 4 120
 * 2 5 90
 * 3 6 50
 * 4 6 80
 * 4 7 70
 * 5 7 40
 * 6 7 140
 * 1 7
 * 2 6
 * 6 2
 * 7 6 3
 * 1 2 50
 * 1 3 60
 * 2 4 120
 * 3 6 50
 * 4 6 80
 * 5 7 40
 * 7 5
 * 1 7
 * 2 4
 * 0 0 0
 *
 * Output:
 * Case #1
 * 80
 * 60
 * 60
 * 
 * Case #2
 * 40
 * no path
 * 80
 **/
