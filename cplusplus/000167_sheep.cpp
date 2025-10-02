// Title: Sheep
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Mirko có một đàn cừu, sân sau có hàng rào bao quanh. Trong lúc anh ta đang ngủ, những con sói đã lẻn vào khu vực có hàng rào và tấn
 * công đàn cừu. Sân sau có dạng hình chữ nhật, bao gồm các ô đất được sắp xếp theo hàng và cột. Ký tự '.' (dấu chấm) đại diện cho một ô
 * đất trống. Ký tự '#' đại diện cho hàng rào. Ký tự 'k' đại diện cho một con cừu. Ký tự 'v' đại diện cho một con sói.
 * 
 * Hai ô đất thuộc cùng một khu vực nếu chúng ta có thể di chuyển từ ô đất A sang ô đất B mà không cần vượt qua hàng rào, bằng cách chỉ
 * thực hiện các bước ngang và dọc (chúng ta không thể di chuyển theo đường chéo). Nếu chúng ta có thể thoát khỏi ô đất A từ sân sau, ô đó
 * đó không thuộc về khu vực nào. May mắn thay, Mirko đã dạy những con cừu của mình kỹ năng Kung-Fu, và chúng có thể tự vệ trước
 * những con sói chỉ khi chúng đông hơn số sói trong lĩnh vực đó. Khi có nhiều cừu trong khu vực hơn sói, tất cả sói chết mà không có cừu
 * thương vong. Nếu không, tất cả cừu bị chết và sói không hề hấn gì. Nếu một cánh đồng không thuộc bất kỳ khu vực nào, cừu sẽ bỏ chạy và
 * sói sẽ bị bỏ lại mà không có con mồi, vì vậy mọi con vật đều sống sót.
 * 
 * Viết một chương trình xác định có bao nhiêu cừu và sói sẽ sống sót qua đêm đẫm máu này.
 *
 * Input:
 * Các số nguyên N và M, số hàng và cột đại diện cho sân sau của Mirko.
 * 
 * Trên N dòng, có M ký tự đại diện cho sự xuất hiện của sân sau của Mirko - vị trí của hàng rào, sói và cừu.
 * 
 * Giới hạn:
 * 3≤N,M≤250.
 *
 * Output:
 * Trên một dòng duy nhất, in số cừu và sói sẽ sống sót.
 *
 * Example 1:
 * Input:
 * 8 8
 * .######.
 * #..k...#
 * #.####.#
 * #.#v.#.#
 * #.#.k#k#
 * #k.##..#
 * #.v..v.#
 * .######.
 *
 * Output:
 * 3 1
 **/
