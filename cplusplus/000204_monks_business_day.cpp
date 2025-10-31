// Title: Monk's Business Day
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Monk đến thăm Biksy - chợ buôn bán lớn nhất vùng đất. Biksy có các nhà giao dịch từ khắp nơi trên thế giới.
 * 
 * Có tổng số N mặt hàng được đánh chỉ số từ 1 đến N, được buôn bán trên thị trường bởi tổng số M người buôn bán. Mỗi nhà giao dịch
 * được đặc trưng bởi ba số nguyên, chẳng hạn như i, j, C, nghĩa là nhà giao dịch sẽ lấy vật phẩm thứ i từ bạn và cung cấp cho bạn vật phẩm
 * thứ j và C đơn vị tiền. Giá trị âm của C có nghĩa rằng, để nhận được món hàng thứ j từ nhà giao dịch, bạn sẽ phải đưa món hàng thứ i và
 * C đơn vị tiền. Lưu ý rằng có thể có nhiều đại lý giao dịch cùng một cặp mặt hàng và một số đại lý điên rồ cũng có thể kinh doanh cùng một
 * mặt hàng, tức là i=j.
 * 
 * Monk có món đồ số 1. Anh ta thu thập dữ liệu của tất cả các nhà giao dịch và muốn biết liệu có cách nào mà anh ta có thể trở nên giàu có
 * vô hạn nếu anh ta hành động thông minh, tức là nếu có một loạt lợi nhuận lặp đi lặp lại, sẽ luôn làm tăng số lượng đơn vị tiền của anh ta.
 * Hãy giúp Monk tìm câu trả lời cho câu hỏi này. Lưu ý rằng Monk có thể đến bất kỳ đại lý nào với bất kỳ lần nào.
 *
 * Input:
 * Dòng đầu tiên gồm một số nguyên T (1≤T≤10) – số lượng bộ test. Mỗi bộ test có định dạng như sau:
 * 
 * Dòng đầu chứa hai số nguyên N, M (1≤N≤100;1≤M≤1000).
 * 
 * M dòng tiếp theo, mỗi dòng chứa bộ 3 số nguyên i, j, C thể hiện giao dịch của các đại lý (1≤i,j≤N;−1000≤C≤1000).
 *
 * Output:
 * Với mỗi bộ test, in ra trên một dòng “Yes” nếu Monk có thể thu được lợi nhuận vô tận và ngược lại in “No” nếu ông không thể thực hiện
 * được dự định đó.
 *
 * Example 1:
 * Input:
 * 2
 * 5 6
 * 1 2 2
 * 2 3 -1
 * 3 4 -7
 * 4 5 0
 * 2 3 -7
 * 3 5 6
 * 5 8
 * 1 5 10
 * 2 3 -6
 * 5 2 5
 * 4 5 9
 * 1 5 1
 * 2 4 -10
 * 2 3 -2
 * 4 1 1
 *
 * Output:
 * No
 * Yes
 **/
