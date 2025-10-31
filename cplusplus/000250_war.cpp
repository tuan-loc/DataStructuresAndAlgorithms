// Title: War
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một cuộc chiến đang diễn ra giữa hai quốc gia A và B. Là một công dân trung thành của C, bạn quyết định giúp quốc gia của mình hoạt
 * động gián điệp bằng cách tham dự các cuộc đàm phán hòa bình đang diễn ra vào những ngày này (tất nhiên là ẩn danh). Có n người tại
 * cuộc nói chuyện (không bao gồm bạn), nhưng bạn không biết người đó thuộc quốc gia nào. Bạn có thể thấy mọi người nói chuyện với nhau
 * và thông qua việc quan sát hành vi của họ trong các cuộc trò chuyện không thường xuyên giữa họ, bạn có thể đoán xem họ là bạn bè hay
 * là kẻ thù. Trên thực tế, điều mà đất nước của bạn cần biết là liệu một số cặp người nhất định đến từ cùng một quốc gia hay khác quốc
 * nhau với nhau. Bạn có thể nhận được những câu hỏi như vậy từ chính phủ Cs ngay cả trong quá trình hòa đàm và bạn phải trả lời trên cơ
 * sở quan sát của mình cho đến nay. May mắn thay, không ai nói chuyện với bạn, vì không ai chú ý đến vẻ ngoài khiêm tốn của bạn.
 * 
 * Bây giờ, chính thức hơn, hãy xem xét một hộp đen với các hoạt động sau:
 * 
 * setFriends(x,y) cho biết x và y đến từ cùng một quốc gia
 * setEnemies(x,y) cho biết x và y đến từ các quốc gia khác nhau
 * areFriends(x,y) trả về true nếu bạn chắc chắn rằng x và y là bạn bè
 * areEnemies(x,y) trả về true nếu bạn chắc chắn rằng x và y là kẻ thù
 * 
 * Hai thao tác đầu tiên sẽ báo hiệu lỗi nếu chúng mâu thuẫn với kiến thức cũ của bạn. Hai quan hệ ‘bạn bè’ (kí hiệu là ∼) và ‘kẻ thù’ (kí hiệu là
 * ∗) có các tính chất sau:
 * 
 * ∼ là một quan hệ tương đương, tức là:
 * 
 * 1. Nếu x ∼ y và y ∼ z thì x ∼ z (Bạn của bạn cũng là bạn của tôi)
 * 2. Nếu x ∼ y thì y ∼ x (Tình bạn là lẫn nhau)
 * 3. x ∼ x (Mọi người đều là bạn của chính mình)
 * 
 * ∗ là đối xứng và không linh hoạt
 * 
 * 1. Nếu x ∗ y thì y ∗ x (Hận thù là lẫn nhau)
 * 2. Không phải x ∗ x (Không ai là kẻ thù của chính mình)
 * 
 * Cũng thế
 * 
 * 1. Nếu x ∗ y và y ∗ z thì x ∼ z (Cùng chung kẻ thủ khiến hai người trở thành bạn của nhau)
 * 2. Nếu x ∼ y và y ∗ z thì x ∗ z (Kẻ thù của bạn cũng là kẻ thù của mình)
 * 
 * Các phép toán setFriends(x,y) và setEnemies(x,y) phải bảo toàn các thuộc tính này.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên duy nhất n - số người. Mỗi dòng sau đây chứa ba số nguyên c x y, trong đó c là mã của hoạt động:
 * 
 * c=1, setFriends
 * c=2, setEnemies
 * c=3, areFriends
 * c=4, areEnemies
 * 
 * và x và y là các tham số của nó, là các số nguyên trong phạm vi [0, n) xác định hai người (khác nhau). Dòng cuối cùng chứa ‘0 0 0’.
 * 
 * Tất cả các số nguyên trong dữ liệu đầu vào được phân tách bằng ít nhất một dấu cách hoặc dấu ngắt dòng. Ràng buộc duy nhất là
 * n<10000, số lượng hoạt động không bị giới hạn.
 *
 * Output:
 * Đối với mỗi hoạt động "areFriends" và "areEnemies", hãy xuất ‘0’ (nghĩa là không) hoặc ‘1’ (nghĩa là có) vào đầu ra.
 * 
 * Ngoài ra, đối với mỗi hoạt động "setFriends" hoặc "setEnemies" mâu thuẫn với kiến thức trước đó, hãy xuất một ‘-1’ cho đầu ra; lưu
 * ý rằng một hoạt động như vậy sẽ không tạo ra hoạt động nào và việc thực thi sẽ tiếp tục.
 * 
 * Một "setFriends" hoặc "setEnemies" thành công sẽ không có đầu ra. Tất cả các số nguyên trong tệp đầu ra phải được phân tách
 * bằng một dấu ngắt dòng.
 *
 * Example 1:
 * Input:
 * 10
 * 1 0 1
 * 1 1 2
 * 2 0 5
 * 3 0 2
 * 3 8 9
 * 4 1 5
 * 4 1 2
 * 4 8 9
 * 1 8 9
 * 1 5 2
 * 3 5 2
 * 0 0 0
 *
 * Output:
 * 1
 * 0
 * 1
 * 0
 * 0
 * -1
 * 0
 **/
