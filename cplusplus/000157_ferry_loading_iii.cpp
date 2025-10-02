// Title: Ferry Loading III
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Trước khi có cầu, phà được sử dụng để vận chuyển ô tô qua sông. Phà, không giống như những người anh em họ lớn hơn của chúng, chạy
 * bằng kim chỉ nam và được cung cấp năng lượng bởi dòng chảy của sông. Ô tô lên phà từ một đầu, phà qua sông, và ô tô xuống từ đầu kia
 * của phà.
 * 
 * Có một chuyến phà qua sông có thể đưa n ô tô qua sông trong t phút và quay trở lại sau t phút. Một chiếc ô tô có thể đến một trong hai
 * bờ sông để được phà chở sang bờ đối diện. Phà đi qua lại liên tục giữa hai bờ khi nó đang chở một ô tô hoặc có ít nhất một ô tô đang chờ ở
 * một trong hai bên bờ. Bất cứ khi nào phà đến một trong hai bờ, phà sẽ cho những chiếc xe đang được chở xuống bờ và xếp tối đa n chiếc
 * xe đang đợi để qua sông. Nếu có nhiều hơn n xe, những xe đợi lâu nhất sẽ được chở đi. Nếu không có xe nào đang đợi ở hai bên bờ, phà
 * sẽ đợi cho đến khi xe đến, xếp nó lên (nếu nó đến cùng bờ với phà), và qua sông. Hỏi mỗi ô tô đến bờ bên kia sông lúc nào?
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa c là số lượng trường hợp. Mỗi trường hợp bắt đầu bằng n;t;m. m dòng tiếp theo, mỗi dòng cho biết thời
 * điểm đến của ô tô (tính bằng phút kể từ đầu ngày) và bờ mà ô tô đến lúc đầu (‘left’ hoặc ‘right').
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, in ra một dòng cho mỗi ô tô, theo thứ tự như đầu vào, cho biết thời điểm ô tô đó được xuống ở bờ đối
 * diện. In ra một dòng trống giữa các trường hợp.
 * 
 * Bạn có thể giả định rằng 0<n,t,m≤10000. Thời điểm đến của từng ô tô trong mỗi trường hợp thử nghiệm có giá trị tăng dần (tăng
 * nghiêm ngặt). Ban đầu phà nằm ở bờ bên trái. Thời gian xếp dỡ ô tô có thể được coi là 0.
 *
 * Example 1:
 * Input:
 * 2
 * 2 10 10
 * 0 left
 * 10 left
 * 20 left
 * 30 left
 * 40 left
 * 50 left
 * 60 left
 * 70 left
 * 80 left
 * 90 left
 * 2 10 3
 * 10 right
 * 25 left
 * 40 left
 *
 * Output:
 * 10
 * 30
 * 30
 * 50
 * 50
 * 70
 * 70
 * 90
 * 90
 * 110
 * 
 * 30
 * 40
 * 60
 **/
