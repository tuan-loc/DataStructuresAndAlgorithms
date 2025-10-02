// Title: ABC Path
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bạn sẽ được cung cấp một lưới 2 chiều gồm các chữ cái. Tìm độ dài của đường đi dài nhất gồm các chữ cái liên tiếp, bắt đầu từ 'A'. Các
 * đường đi có thể chuyển từ một chữ cái trong lưới sang bất kỳ chữ cái nào liền kề (theo chiều ngang, chiều dọc hoặc đường chéo).
 * 
 * Ví dụ: trong lưới sau, có một số đường đi từ 'A' đến 'D', nhưng không có đường đi nào từ 'A' đến 'E':
 * (/images/000174_abc_path_01.png)
 * 
 * Một trong những đường đi như vậy là:
 * (/images/000174_abc_path_02.png)
 *
 * Input:
 * Mỗi trường hợp thử nghiệm sẽ bắt đầu bằng một dòng chứa hai số nguyên H,W lần lượt là chiều cao và chiều rộng của lưới,
 * 1≤H,W≤50. Sau đó là H dòng chỉ gồm W chữ cái viết hoa. Đầu vào kết thúc với H=0 và W=0.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, in “Case C: X” không có dấu ngoặc kép, trong đó C là thứ tự của trường hợp được đánh số bắt đầu từ
 * 1 và X là đáp án.
 *
 * Example 1:
 * Input:
 * 4 3
 * ABE
 * CFG
 * BDH
 * ABC
 * 0 0
 *
 * Output:
 * Case 1: 4
 **/
