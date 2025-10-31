// Title: Phone List
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Đưa ra danh sách các số điện thoại, hãy xác định xem nó có nhất quán theo kiểu không có số nào là tiền tố của số khác. Giả sử danh mục
 * điện thoại liệt kê những số này:
 * 
 * Khẩn cấp: 911
 * Alice: 97 625 999
 * Bob: 91 12 54 26
 * 
 * Trong trường hợp này, không thể gọi cho Bob vì trung tâm sẽ chuyển cuộc gọi của bạn đến đường dây khẩn cấp ngay sau khi bạn quay ba
 * chữ số đầu tiên trong số điện thoại của Bob. Vì vậy, danh sách này sẽ không nhất quán.
 *
 * Input:
 * Dòng đầu tiên của đầu vào cung cấp một số nguyên duy nhất, 1≤t≤40, số lượng trường hợp.
 * 
 * Mỗi trường hợp thử nghiệm bắt đầu với n, số lượng số điện thoại, trên một dòng riêng, 1≤n≤10000.
 * 
 * Sau đó, theo sau n dòng với một số điện thoại duy nhất trên mỗi dòng. Số điện thoại là một dãy có nhiều nhất mười chữ số.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, xuất “YES” nếu danh sách nhất quán hoặc “NO” nếu không.
 *
 * Example 1:
 * Input:
 * 2
 * 3
 * 911
 * 97625999
 * 91125426
 * 5
 * 113
 * 12340
 * 123440
 * 12345
 * 98346
 *
 * Output:
 * NO
 * YES
 **/
