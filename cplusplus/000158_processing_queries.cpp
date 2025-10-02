// Title: Processing Queries
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Trong bài này, bạn phải mô phỏng quy trình làm việc của máy chủ một luồng. Có n truy vấn cần xử lý, truy vấn thứ i sẽ được tiếp nhận vào
 * thời điểm t​i và cần được xử lý trong d​i đơn vị thời gian. Tất cả t​i được đảm bảo là phân biệt.
 * 
 * Khi một truy vấn xuất hiện, máy chủ có thể phản ứng theo ba cách:
 * 
 * 1. Nếu máy chủ rảnh và hàng đợi truy vấn trống, thì máy chủ ngay lập tức bắt đầu xử lý truy vấn này.
 * 2. Nếu máy chủ đang bận và có ít hơn b truy vấn trong hàng đợi, thì truy vấn mới sẽ được thêm vào cuối hàng đợi.
 * 3. Nếu máy chủ đang bận và đã có b truy vấn đang chờ xử lý trong hàng đợi, thì truy vấn mới sẽ bị từ chối và sẽ không bao giờ được xử
 * lý.
 * 
 * Ngay sau khi máy chủ hoàn tất quá trình xử lý một số truy vấn, nó sẽ chọn một truy vấn mới từ hàng đợi (tất nhiên là nếu hàng đợi không
 * trống). Nếu truy vấn mới xuất hiện tại một thời điểm x nào đó và máy chủ kết thúc xử lý một truy vấn khác vào đúng thời điểm đó, ta coi
 * truy vấn đầu tiên được chọn từ hàng đợi và chỉ sau đó truy vấn mới xuất hiện.
 * 
 * Đối với mỗi truy vấn, hãy tìm thời điểm máy chủ hoàn tất xử lý nó hoặc in ra −1 nếu truy vấn này bị từ chối.
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa hai số nguyên n và b (1≤n,b≤200000) — số lượng truy vấn và kích thước tối đa có thể có của hàng
 * đợi truy vấn.
 * 
 * Sau đó là n dòng với các mô tả truy vấn (theo thứ tự thời gian). Mỗi mô tả bao gồm hai số nguyên t​i và d​i (1≤t​i,d​i≤10^​9), trong đó ti là
 * thời điểm khi truy vấn thứ i xuất hiện và d​i là thời gian máy chủ cần để xử lý nó. Đảm bảo rằng t​i−1<t​i đối với tất cả i>1.
 *
 * Output:
 * In ra dãy n số nguyên e​1, e​2,..., e​n, trong đó e​i là thời điểm máy chủ sẽ hoàn tất xử lý truy vấn thứ i (các truy vấn được đánh số theo thứ
 * tự xuất hiện trong đầu vào) hoặc −1 nếu truy vấn tương ứng sẽ bị từ chối.
 *
 * Example 1:
 * Input:
 * 5 1
 * 2 9
 * 4 8
 * 10 9
 * 15 2
 * 19 1
 *
 * Output:
 * 11 19 -1 21 22 
 * 
 * Example 2:
 * Input:
 * 4 1
 * 2 8
 * 4 8
 * 10 9
 * 15 2
 *
 * Output:
 * 10 18 27 -1 
 * 
 * Explanation:
 * Xét ví dụ đầu tiên.
 * 
 * 1. Máy chủ sẽ bắt đầu xử lý truy vấn đầu tiên vào thời điểm 2 và sẽ kết thúc xử lý vào thời điểm 11.
 * 2. Tại thời điểm 4 truy vấn thứ hai xuất hiện và chuyển đến hàng đợi.
 * 3. Tại thời điểm 10 truy vấn thứ ba xuất hiện. Tuy nhiên, máy chủ vẫn đang bận với truy vấn 1, b = 1 và đã có truy vấn 2 đang chờ xử lý
 * trong hàng đợi, vì vậy truy vấn thứ ba bị từ chối.
 * 4. Tại thời điểm 11, máy chủ sẽ kết thúc xử lý truy vấn đầu tiên và sẽ lấy truy vấn thứ hai từ hàng đợi.
 * 5. Tại thời điểm 15 truy vấn thứ tư xuất hiện. Vì máy chủ hiện đang bận, nó sẽ chuyển vào hàng đợi.
 * 6. Tại thời điểm 19, hai sự kiện xảy ra đồng thời: máy chủ kết thúc xử lý truy vấn thứ hai và truy vấn thứ năm xuất hiện. Như đã nói
 * trong đề bài, đầu tiên máy chủ sẽ kết thúc quá trình xử lý truy vấn thứ hai, sau đó nó sẽ chọn truy vấn thứ tư từ hàng đợi và chỉ sau
 * đó truy vấn thứ năm mới xuất hiện. Khi hàng đợi trống, truy vấn thứ năm được chuyển vào.
 * 7. Máy chủ kết thúc xử lý truy vấn số 4 tại thời điểm 21. Truy vấn số 5 được chọn từ hàng đợi.
 * 8. Máy chủ kết thúc xử lý truy vấn số 5 tại thời điểm 22.
 **/
