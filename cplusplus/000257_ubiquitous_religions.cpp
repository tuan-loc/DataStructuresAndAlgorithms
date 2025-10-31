// Title: Ubiquitous Religions
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Có rất nhiều tôn giáo khác nhau trên thế giới ngày nay nên rất khó để theo dõi tất cả. Bạn quan tâm đến việc tìm hiểu có bao nhiêu tôn
 * giáo khác nhau mà sinh viên trong trường đại học của bạn tin tưởng.
 * 
 * Bạn biết rằng có n sinh viên trong trường đại học của bạn (0 < n ≤ 50000). Bạn không thể hỏi mọi học sinh về niềm tin tôn giáo của họ. Hơn
 * nữa, nhiều học sinh không thoải mái khi bày tỏ niềm tin của mình. Một cách để tránh những vấn đề này là hỏi m (0 ≤ m ≤ n (n − 1) / 2) cặp
 * sinh viên và hỏi họ xem họ có tin theo cùng một tôn giáo hay không (ví dụ: họ có thể biết nếu cả hai đều đi cùng một nhà thờ) . Từ dữ liệu
 * này, bạn có thể không biết mỗi người tin vào điều gì, nhưng bạn có thể biết được giới hạn trên của số lượng tôn giáo khác nhau có thể
 * được có trong khuôn viên trường.
 * 
 * Bạn có thể giả định rằng mỗi sinh viên tin tưởng nhiều nhất một tôn giáo.
 *
 * Input:
 * Đầu vào bao gồm nhiều trường hợp. Mỗi trường hợp bắt đầu bằng một dòng gồm các số nguyên n và $$. m dòng tiếp theo, mỗi dòng gồm
 * hai số nguyên i và j, cho biết rằng các học sinh i và j tin theo cùng một tôn giáo.
 * 
 * Các học sinh được đánh số từ 1 đến n. Phần cuối của đầu vào được xác định bởi một dòng trong đó n=m=0.
 *
 * Output:
 * Đối với mỗi trường hợp, in trên một dòng số trường hợp (bắt đầu bằng 1), sau đó là số lượng tối đa các tôn giáo khác nhau mà sinh viên
 * trong trường đại học tin tưởng.
 *
 * Example 1:
 * Input:
 * 10 9
 * 1 2
 * 1 3
 * 1 4
 * 1 5
 * 1 6
 * 1 7
 * 1 8
 * 1 9
 * 1 10
 * 10 4
 * 2 3
 * 4 5
 * 4 8
 * 5 8
 * 0 0
 *
 * Output:
 * Case 1: 1
 * Case 2: 7
 **/
