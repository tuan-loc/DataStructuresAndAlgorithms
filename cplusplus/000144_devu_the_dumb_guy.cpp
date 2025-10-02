// Title: Devu, the Dumb Guy
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Devu là một chàng ngốc, anh ấy học rất chậm. Bạn phải dạy anh ta n môn học, môn học thứ i có c​i chương. Khi dạy anh ấy, bạn phải dạy
 * liên tục tất cả các chương của môn học.
 * 
 * Giả sử rằng sức học ban đầu cho mỗi chương của môn học là x giờ. Nói cách khác, anh ta có thể học một chương của một môn học cụ thể
 * trong x giờ.
 * 
 * Tuy nhiên Devu không hoàn toàn ngốc, cũng có một điều tốt về anh ta. Nếu bạn dạy anh ta một môn học, thì thời gian cần thiết để dạy
 * bất kỳ chương nào của môn học tiếp theo sẽ cần ít hơn chính xác 1 giờ so với chương trước đó (xem ví dụ để hiểu rõ hơn). Lưu ý rằng sức học
 * mỗi chương của anh ta không thể dưới 1 giờ.
 * 
 * Bạn có thể dạy anh ta n môn học theo bất kỳ thứ tự nào có thể. Tìm ra khoảng thời gian tối thiểu (tính bằng giờ) Devu sẽ dành để hiểu tất
 * cả các môn học và bạn sẽ tự do làm một số công việc thích thú hơn là dạy một anh chàng ngốc.
 * 
 * Hãy cẩn thận rằng câu trả lời có thể không phù hợp với kiểu dữ liệu 32 bit.
 *
 * Input:
 * Dòng đầu tiên sẽ chứa hai số nguyên cách nhau bằng dấu cách n,x (1≤n,x≤10^​5).
 * 
 * Dòng tiếp theo sẽ chứa n số nguyên c​1, c​2,...,c​n (1≤c​i≤10^​5) cách nhau bởi một khoảng trắng.
 *
 * Output:
 * Đưa ra một số nguyên duy nhất là câu trả lời cho vấn đề.
 *
 * Example 1:
 * Input:
 * 2 3
 * 4 1
 *
 * Output:
 * 11
 * 
 * Example 2:
 * Input:
 * 4 2
 * 5 1 2 1
 *
 * Output:
 * 10
 * 
 * Example 3:
 * Input:
 * 3 3
 * 1 1 1
 *
 * Output:
 * 6
 * 
 * Explanation:
 * Nhìn vào ví dụ đầu tiên.
 * 
 * Hãy xem xét thứ tự của các môn học: 1,2. Khi bạn dạy Devu môn học đầu tiên, cậu ấy sẽ mất 3 giờ mỗi chương, vì vậy sẽ mất 12 giờ
 * để dạy môn đầu tiên. Sau khi dạy môn đầu tiên, thời gian học mỗi chương của cậu ấy sẽ là 2 giờ. Bây giờ dạy anh ta môn thứ hai sẽ
 * mất 2×1=2 giờ. Do đó, bạn sẽ cần dành 12+2=14 giờ.
 * 
 * Hãy xem xét thứ tự của các môn học: 2,1. Khi bạn dạy Devu môn thứ hai, thì cậu ấy sẽ mất 3 giờ mỗi chương, vậy sẽ mất 3×1=3
 * giờ để dạy môn thứ hai. Sau khi dạy môn thứ hai, thời gian học mỗi chương của cậu ấy sẽ là 2 giờ. Bây giờ dạy anh ta môn đầu tiên
 * sẽ mất 2×4=8 giờ. Do đó, bạn sẽ cần phải dành 11 giờ.
 * 
 * Vì vậy, tổng thể, tối thiểu của cả hai trường hợp là 11 giờ.
 * 
 * Nhìn vào ví dụ thứ ba. Thứ tự trong ví dụ này không quan trọng. Khi bạn dạy Devu môn học đầu tiên, anh ta sẽ mất 3 giờ mỗi chương. Khi
 * bạn dạy Devu môn thứ hai, anh ta sẽ mất 2 giờ mỗi chương. Khi bạn dạy Devu môn thứ ba, anh ta sẽ mất 1 giờ mỗi chương. Tổng cộng
 * mất 6 giờ.
 **/
