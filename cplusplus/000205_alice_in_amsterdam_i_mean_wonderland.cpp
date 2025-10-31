// Title: Alice in Amsterdam, I mean Wonderland
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Đây là một sự thật mà không nhiều người biết, rằng là Alice sống ở Amsterdam. Vâng, đúng vậy. Và như bao đứa trẻ thời đó, cô ấy thường
 * đi tìm một số loại nấm dược liệu cho cửa hàng thuốc (hiệu thuốc, quán cà phê chưa có). Thông thường, giữa những cây nấm bình thường,
 * có thể tìm thấy một cây nấm ma thuật, tạo ra ảo giác đầy bí ẩn và sinh động. Trong một lần gặp ảo giác đó, Alice đã được đưa đến một "thế
 * giới thần tiên", nơi có nhiều điều kỳ lạ đã xảy ra. Có một điều đặc biệt gây kinh ngạc đối với cô: Mặc dù mọi thứ trông khá quen thuộc,
 * nhưng khoảng cách giữa các tượng đài của thành phố đôi khi là âm !!! Dẫu cho khoảng cách bằng không giữa hai tượng đài khác nhau có
 * nghĩa là không tồn tại con đường trực tiếp giữa hai tượng đài đó. Một vòng lặp từ một tượng đài nhất định quay lại chính nó có thể có độ
 * dài bằng 0 (có nghĩa là nó có thể đến được ngay lập tức như trong cuộc sống thực) hoặc âm, như đối với các đường dẫn thông thường.
 * Alice cũng nghĩ rằng cô ấy đã nhìn thấy một số khoảng cách dương cho các vòng lặp, nhưng chúng ta sẽ coi những trường hợp đó là
 * khoảng cách bằng không.
 * 
 * Vốn dĩ là một cô gái rất thông minh, cô ấy đã tìm ra cách để tìm ra con đường ngắn nhất giữa hai tượng đài bất kỳ. Thật không may, đúng
 * như dự đoán, Alice đã quên nó khi cô tỉnh táo trở lại. Cô chỉ có thể nhớ rằng, trong một số trường hợp, cô có thể bị mắc kẹt trong một chu
 * trình với khoảng cách âm. Trong những trường hợp như vậy, sẽ luôn có một con đường ngắn hơn để đến cùng một tượng đài. Đây là một
 * trong số ít những điều có ý nghĩa hoàn hảo đối với cô ấy: Con đường ngắn nhất của bạn sẽ ngắn hơn nếu bạn lặp đi lặp lại chu trình đó,
 * đến vô tận. Alice đã cố gắng tìm ra khoảng cách tối ưu một lần nữa, nhưng cô ấy không thể. Cô ấy không muốn đi du lịch nữa, cô ấy đã
 * quên hơn một năm rồi (tốt cho cô ấy !!). Bạn có thể tốt bụng giúp đỡ cô ấy không?
 * 
 * Đưa ra danh sách các tượng đài trong thành phố và khoảng cách tương đối giữa chúng, hãy tìm đường đi ngắn nhất giữa một số cặp tượng
 * đài.
 *
 * Input:
 * Mỗi bộ test bắt đầu bằng một dòng chứa N - số tượng đài trong thành phố (1≤N≤100). Trong N dòng tiếp theo, mỗi dòng chứa một
 * chuỗi K và N số nguyên K​j, được phân tách bằng một dấu cách. K là tên của một đài kỷ niệm và sẽ bao gồm tối đa 20 ký tự chữ và số.
 * Mỗi số nguyên Kj (0≤j<N) ở dòng i mô tả khoảng cách từ tượng đài i đến j (−2^​30≤Kj≤2^​30). Dòng tiếp theo sẽ chứa một số
 * nguyên Q (1≤Q≤N^​2). Theo sau nó là Q dòng, mỗi dòng có một cặp số nguyên (U, V), cho biết điểm xuất phát và điểm đích cho con
 * đường cần truy vấn (0≤U,U<N).
 * 
 * Kết thúc dữ liệu đầu vào là một bộ test với N=0 và dòng này không được xử lý.
 *
 * Output:
 * Đối với mỗi bộ test, in một dòng "Case #tc:" (không có dấu ngoặc kép), trong đó tc là số thứ tự test, bắt đầu từ 1. Q dòng tiếp theo sẽ mô
 * tả kết quả truy vấn. Nếu khoảng cách tối ưu có thể nhỏ vô hạn, chỉ in "NEGATIVE CYCLE". Trong các trường hợp khác, hãy bắt đầu dòng bằng
 * "start_name-destination_name", theo sau là kết quả tìm được. Nếu không thể đến đích, hãy in "NOT REACHABLE", nếu đến được đích, hãy in
 * khoảng cách tìm được.
 *
 * Example 1:
 * Input:
 * 2
 * Nieuwkerk -1 1
 * Oudekerk 1 0
 * 4
 * 0 0
 * 0 1
 * 1 1
 * 1 0
 * 3
 * Nieuwkerk 0 -5 0
 * Oudekerk 10 0 0
 * Pierteck -100 -100 0
 * 9
 * 0 0
 * 0 1
 * 0 2
 * 1 0
 * 1 1
 * 1 2
 * 2 0
 * 2 1
 * 2 2
 * 0
 *
 * Output:
 * Case #1:
 * NEGATIVE CYCLE
 * NEGATIVE CYCLE
 * NEGATIVE CYCLE
 * NEGATIVE CYCLE
 * Case #2:
 * Nieuwkerk-Nieuwkerk 0
 * Nieuwkerk-Oudekerk -5
 * Nieuwkerk-Pierteck NOT REACHABLE
 * Oudekerk-Nieuwkerk 10
 * Oudekerk-Oudekerk 0
 * Oudekerk-Pierteck NOT REACHABLE
 * Pierteck-Nieuwkerk -100
 * Pierteck-Oudekerk -105
 * Pierteck-Pierteck 0
 **/
