// Title: Hardwood Species
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cây gỗ cứng là một nhóm thực vật gồm các cây có lá rộng, tạo quả hoặc hạt, và thường ngủ đông vào mùa đông.
 * 
 * Khí hậu ôn đới của Mỹ tạo ra những khu rừng với hàng trăm loài gỗ cứng — những loài có chung đặc điểm sinh học nhất định. Mặc dù sồi,
 * phong và anh đào đều là những loại cây gỗ cứng, nhưng chúng là những loài khác nhau. Cùng với nhau, tất cả các loài gỗ cứng chiếm 40%
 * số cây ở Hoa Kỳ.
 * 
 * Mặt khác, gỗ mềm, hoặc cây lá kim, từ tiếng Latin có nghĩa là "mang hình nón", có kim. Các loại gỗ mềm của Hoa Kỳ có sẵn rộng rãi bao
 * gồm tuyết tùng, linh sam, cây huyết dụ, thông, gỗ đỏ, vân sam và cây bách. Trong một ngôi nhà, các loại gỗ mềm được sử dụng chủ yếu
 * làm gỗ kết cấu như 2×4 và 2×6, với một số ứng dụng trang trí.
 * 
 * Sử dụng công nghệ chụp ảnh vệ tinh, Sở Tài nguyên đã lập một bản thống kê về từng cây vào một ngày cụ thể. Bạn phải tính số lượng của
 * mỗi loài.
 *
 * Input:
 * Dòng đầu tiên là số lượng trường hợp, tiếp theo là một dòng trống.
 * 
 * Mỗi trường hợp bao gồm một danh sách các loài cây được quan sát bởi vệ tinh; mỗi cây một dòng. Không có tên loài nào vượt quá 30 ký
 * tự. Có không quá 10,000 loài và không quá 1,000,000 cây.
 * 
 * Có một dòng trống giữa hai trường hợp liên tiếp.
 *
 * Output:
 * Với mỗi trường hợp, in ra tên của từng loài đại quần thể, theo thứ tự bảng chữ cái, sau đó là phần trăm của quần thể mà nó đại diện, đến 4
 * chứ số thập phân.
 * 
 * In ra một dòng trống giữa 2 trường hợp liên tiếp.
 *
 * Example 1:
 * Input:
 * 1
 * 
 * Red Alder
 * Ash
 * Aspen
 * Basswood
 * Ash
 * Beech
 * Yellow Birch
 * Ash
 * Cherry
 * Cottonwood
 * Ash
 * Cypress
 * Red Elm
 * Gum
 * Hackberry
 * White Oak
 * Hickory
 * Pecan
 * Hard Maple
 * White Oak
 * Soft Maple
 * Red Oak
 * Red Oak
 * White Oak
 *
 * Output:
 * Ash 16.6667
 * Aspen 4.1667
 * Basswood 4.1667
 * Beech 4.1667
 * Cherry 4.1667
 * Cottonwood 4.1667
 * Cypress 4.1667
 * Gum 4.1667
 * Hackberry 4.1667
 * Hard Maple 4.1667
 * Hickory 4.1667
 * Pecan 4.1667
 * Red Alder 4.1667
 * Red Elm 4.1667
 * Red Oak 8.3333
 * Soft Maple 4.1667
 * White Oak 12.5000
 * Yellow Birch 4.1667
 **/
