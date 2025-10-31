// Title: DNA Prefix
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Đưa ra một bộ n mẫu DNA, trong đó mỗi mẫu là một chuỗi chứa các ký tự {A,C,G,T}, chúng tôi đang cố gắng tìm một tập hợp con các
 * mẫu trong tập hợp, trong đó độ dài của tiền tố chung dài nhất nhân với số lượng mẫu trong tập hợp con đó là tối đa.
 * Để cụ thể, hãy để các mẫu là:
 * ACGT
 * ACGTGCGT
 * ACCGTGC
 * ACGCCGT
 * Nếu chúng ta lấy tập con {ACGT} thì kết quả là 4 (4×1).
 * Nếu lấy {ACGT,ACGTGCGT,ACGCCGT} thì kết quả là 3×3=9 (vì ACG là tiền tố chung).
 * Nếu chúng ta lấy {ACGT,ACGTGCGT,ACCGTGC,ACGCCGT} thì kết quả là 2×4=8.
 * Bây giờ nhiệm vụ của bạn là báo cáo kết quả tối đa mà chúng tôi có thể nhận được từ các mẫu.
 *
 * Input:
 * Đầu vào bắt đầu bằng số nguyên T (≤10), biểu thị số lượng trường hợp thử nghiệm.
 * Mỗi trường hợp bắt đầu bằng một dòng chứa số nguyên n (1≤n≤50000) biểu thị số lượng mẫu DNA. Mỗi dòng trong số n dòng tiếp
 * theo chứa một chuỗi không rỗng có độ dài không lớn hơn 50. Và các chuỗi chứa các ký tự {A,C,G,T}.
 *
 * Output:
 * Đối với mỗi trường hợp, in số trường hợp và kết quả tối đa có thể nhận được.
 *
 * Example 1:
 * Input:
 * 3
 * 4
 * ACGT
 * ACGTGCGT
 * ACCGTGC
 * ACGCCGT
 * 3
 * CGCGCGCGCGCGCCCCGCCCGCGC
 * CGCGCGCGCGCGCCCCGCCCGCAC
 * CGCGCGCGCGCGCCCCGCCCGCTC
 * 2
 * CGCGCCGCGCGCGCGCGCGC
 * GGCGCCGCGCGCGCGCGCTC
 *
 * Output:
 * Case 1: 9
 * Case 2: 66
 * Case 3: 20
 **/
