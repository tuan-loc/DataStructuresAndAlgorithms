// Title: Lakes in Berland
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bản đồ Berland là một hình chữ nhật có kích thước n × m, bao gồm các ô có kích thước 1 × 1. Mỗi ô là đất hoặc nước. Bản đồ được bao
 * quanh bởi đại dương.
 * 
 * Hồ là vùng cực đại của các ô nước, được kết nối với nhau bằng các cạnh, không nối với đại dương. Về mặt hình thức, hồ là một tập hợp các
 * ô nước, sao cho có thể từ bất kỳ ô nào của tập hợp này sang bất kỳ ô nào khác cũng trong tập hợp mà không cần rời khỏi tập hợp, và chỉ di
 * chuyển đến các ô kề cạnh, không ô nào trong số chúng nằm trên đường viền của hình chữ nhật và không thể thêm một ô nước nữa nào
 * vào tập hợp mà nó được kết nối với bất kỳ ô nào khác trong tập hợp.
 * 
 * Nhiệm vụ của bạn là lấp đầy đất vào ít ô nước nhất để có đúng k hồ ở Berland. Lưu ý rằng số lượng hồ ban đầu trên bản đồ không nhỏ
 * hơn k.
 *
 * Input:
 * Dòng đầu tiên của dữ liệu vào chứa ba số nguyên n,m và k (1≤n,m≤50,0≤k≤50) — kích thước của bản đồ và số lượng hồ sẽ
 * được để lại trên bản đồ.
 * 
 * n dòng tiếp theo mỗi dòng chứa m ký tự — mô tả bản đồ. Mỗi ký tự là ký tự ' . ' (có nghĩa là ô tương ứng là nước) hoặc ký tự ' * ' (có nghĩa
 * là ô tương ứng là đất).
 * 
 * Dữ liệu đảm bảo rằng bản đồ sẽ chứa ít nhất k hồ.
 *
 * Output:
 * Trong dòng đầu tiên, in số lượng ô tối thiểu cần được chuyển đổi từ nước sang đất.
 * 
 * Trong n dòng tiếp theo, in m ký tự — bản đồ sau những thay đổi. Định dạng phải tuân theo đúng định dạng của bản đồ trong dữ liệu đầu
 * vào (không cần in kích thước của bản đồ). Nếu có nhiều câu trả lời, hãy in bất kỳ câu trả lời nào trong số đó.
 * 
 * Dữ liệu đảm bảo rằng câu trả lời tồn tại.
 *
 * Example 1:
 * Input:
 * 5 4 1
 * ****
 * *..*
 * ****
 * **.*
 * ..**
 *
 * Output:
 * 1
 * ****
 * *..*
 * ****
 * ****
 * ..**
 * 
 * Example 2:
 * Input:
 * 3 3 0
 * ***
 * *.*
 * ***
 *
 * Output:
 * 1
 * ***
 * ***
 * ***
 **/
