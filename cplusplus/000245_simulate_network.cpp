// Title: Simulate Network
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Globsoft có một mạng gồm N máy tính được kết nối bằng M cáp lan. Có thể giao tiếp giữa hai máy tính bất kỳ trong mạng bằng các loại
 * cáp này. Có thể có nhiều cáp kết nối 2 máy tính. Máy tính có thể được kết nối qua cáp với chính nó.
 * 
 * Ta nói rằng máy tính A có thể giao tiếp với máy tính B, nếu tồn tại một chuỗi cáp kết nối 2 máy tính này trực tiếp hoặc gián tiếp. Mỗi cáp
 * có độ trễ đi kèm với nó. Giờ đây, công ty đã quyết định cải tạo lại hệ thống mạng hiện có và thay thế một số loại cáp hiện có bằng các loại
 * cáp mới hơn. Bạn được cung cấp Q cáp mới, mỗi loại có độ trễ riêng. Bạn có thể chọn bất kỳ số lượng cáp nào (có thể là 0) từ các cáp Q
 * này và sử dụng nó để thay thế bất kỳ cáp nào trong mạng hiện có. Mỗi cáp mới có thể được sử dụng nhiều nhất một lần. Không nhất thiết
 * phải thay thế mọi cáp từ mạng hiện có.
 * 
 * Bây giờ, khi bạn sử dụng một số lượng cáp mới tùy ý và nhúng chúng vào mạng hiện có, bạn cần chọn N−1 cáp từ mạng này (Có thể bao
 * gồm cả cũ và mới) sao cho sử dụng N−1 cáp này, có thể giao tiếp giữa 2 máy tính bất kỳ trong mạng. Tổng độ trễ tối thiểu của các cáp
 * N−1 này thỏa mãn các ràng buộc ở trên có thể là bao nhiêu, khi bạn thực hiện việc thay thế cáp một cách tối ưu?
 *
 * Input:
 * Dòng đầu tiên bao gồm hai số nguyên N và M, N là số máy tính trong mạng và M là số cáp trong mạng.
 * 
 * M dòng tiếp theo mỗi dòng gồm ba số nguyên: A, B và L, biểu thị rằng có một sợi cáp kết nối các máy tính A và B và có độ trễ L.
 * 
 * Dòng tiếp theo bao gồm một số nguyên Q biểu thị số lượng cáp có sẵn để sử dụng.
 * 
 * Dòng tiếp theo bao gồm một mảng C biểu thị độ trễ của cáp Q.
 *
 * Output:
 * Đưa ra đáp án của bài toán trên một dòng duy nhất.
 * 
 * 1≤N≤10^​5
 * 1≤M≤10^​5
 * 1≤A,B≤N
 * 1≤L≤10^​6
 *
 * Example 1:
 * Input:
 * 4 6
 * 1 2 1
 * 1 3 5
 * 1 4 5
 * 1 2 3
 * 2 1 4
 * 2 3 6
 * 5
 * 5 8 2 2 3
 *
 * Output:
 * 5
 * 
 * Explanation:
 * Máy tính 1 và 2 được kết nối bằng cáp có độ trễ 1, 3 và 4.
 * 
 * Máy tính 1 và 3 được kết nối bằng cáp có độ trễ 5.
 * 
 * Máy tính 1 và 4 được kết nối bằng cáp có độ trễ 5.
 * 
 * Máy tính 2 và 3 được kết nối bằng cáp có độ trễ 6.
 * 
 * Các loại cáp có sẵn có độ trễ: 5, 8, 2, 2, 3.
 * 
 * Nếu chúng ta lấy cáp độ trễ 1 giữa máy tính 1 và 2 (như đã cho trong mạng), cáp độ trễ 2 giữa máy tính 1 và 3 (từ cáp Q), cáp độ trễ 2 giữa
 * máy tính 1 và 4 (từ cáp Q), độ trễ của mạng sẽ là 1+2+2=5, là độ trễ tối thiểu có thể có cho mạng.
 **/
