// Title: Travelling Cost
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Chính phủ của Spoj_land đã chọn một số địa điểm trong thành phố để xây dựng đường và đánh số các địa điểm đó là 0,1,2,3,...,500.
 * Bây giờ, họ muốn xây dựng các con đường giữa các cặp địa điểm khác nhau (giả sử A và B) và đã cố định chi phí đi lại từ một trong hai đầu
 * giữa các cặp địa điểm đó là W đơn vị.
 * 
 * Bây giờ, Rohit là một cậu bé tò mò muốn tìm chi phí tối thiểu để đi từ địa điểm U (nơi bắt đầu) đến Q địa điểm khác (đích đến).
 *
 * Input:
 * Dòng đầu tiên gồm N, số con đường mà chính phủ đã xây dựng.
 * Dòng N tiếp theo chứa ba số nguyên A, B và W. A và B đại diện cho các địa điểm mà con đường được xây dựng và W là chi phí
 * cố định cho việc đi lại từ A đến B hoặc từ B đến A.
 * Dòng tiếp theo chứa một số nguyên U là nơi mà từ đó Rohit muốn đi đến các địa điểm khác.
 * Dòng tiếp theo chứa Q, số lượng truy vấn (tìm chi phí) mà anh ta muốn thực hiện.
 * Q dòng tiếp theo chứa một số nguyên V (đích đến) địa điểm mà ta cần tìm chi phí tối thiểu khi đi tới từ U.
 * 
 * Constraints
 * 1≤N≤500
 * 0≤A,B≤500
 * 1≤W≤100
 * 0≤U,V≤500
 * 1≤Q≤500
 *
 * Output:
 * In ra câu trả lời trên từng dòng.
 * Nếu Rohit không thể đi từ vị trí U đến V bằng bất kỳ phương tiện nào thì hãy in ra "NO PATH" mà không có dấu ngoặc kép.
 *
 * Example 1:
 * Input:
 * 7
 * 0 1 4
 * 0 3 8
 * 1 4 1
 * 1 2 2
 * 4 2 3
 * 2 5 3
 * 3 4 2
 * 0
 * 4
 * 1
 * 4
 * 5
 * 7
 *
 * Output:
 * 4
 * 5
 * 9
 * NO PATH
 * 
 * Explanation:
 * Truy vấn số 1.
 * 0 → 1: chi phí = 4
 * 
 * Truy vấn số 2.
 * 0 → 4 = 0 → 1 → 4: chi phí = 4 + 1 = 5
 * 
 * Truy vấn số 3.
 * 0 → 5 = 0 → 1 → 2 → 5: chi phí = 4 + 2 + 3 = 9
 * 
 * Truy vấn số 4.
 * 0 → 7 = không tồn tại đường đi nào từ 0 đến 7
 **/
