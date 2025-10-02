// Title: Word Transformation
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một câu đố thường xuất hiện trên các tờ báo hoặc tạp chí là câu đố chuyển đổi từ. Bằng cách lấy một từ bắt đầu và liên tục thay thế một
 * chữ cái để tạo ra một từ mới, người ta có thể tạo thành một dãy các từ bắt đầu từ một từ gốc để được một từ kết thúc đã cho. Ví dụ, từ "
 * spice" có thế được chuyển thành từ "stock" qua bốn bước, theo dãy chuyển đổi sau: spice, slice, slick, stick, stock. Mỗi từ phía sau chỉ
 * khác từ phía trước đúng một kí tự và độ dài các từ trong dãy phải giống nhau.
 * 
 * Bạn được cho một từ điển gồm các từ để chuyển đổi và một danh sách bao gồm các từ bắt đầu và các từ kết thúc. Bạn cần xác định số
 * bước tối thiểu để chuyển đổi một từ bắt đầu thành từ kết thúc đã cho.
 *
 * Input:
 * Dòng đầu tiên gồm số N là số lượng trường hợp phải xét, theo sau là một dòng trắng. Mỗi bộ test gồm hai phần:
 * 
 * Phần đầu tiên là từ điển bao gồm các từ cho trước, mỗi từ nằm trên một dòng và một dấu (∗) để dánh dấu kết thúc từ điển. Từ điển
 * có thể bao gồm đến 200 từ, mỗi từ bao gồm các chữ cái latinh và được viết thường, mỗi từ có độ dài không quá 10 kí tự. Các từ xuất
 * hiện trong từ điển theo thứ tự bất kì.
 * Theo sau từ điển là các cặp từ, mỗi cặp từ nằm trên một dòng, mỗi từ trong cặp từ được phân cách bởi một khoảng trắng. Đây là
 * những cặp từ bắt đầu và kết thúc mà ta cần chuyển đổi. Tất cả các cặp từ cần chuyển đổi đều sử dụng các từ có sẵn trong từ điển.
 * 
 * Hai trường hợp được phân cách bởi khoảng trắng.
 *
 * Output:
 * Với mỗi trường hợp, kết quả của một cặp từ cần chuyển đổi được thể hiện trên một dòng bao gồm: từ bắt đầu, từ kết thúc và số bước biến
 * đổi ít nhất có thể (phân cách nhau bởi một khoảng trắng).
 * 
 * Giữa hai bộ test bạn cần in một dòng trắng.
 *
 * Example 1:
 * Input:
 * 1
 * 
 * dip
 * lip
 * mad
 * map
 * maple
 * may
 * pad
 * pip
 * pod
 * pop
 * sap
 * sip
 * slice
 * slick
 * spice
 * stick
 * stock
 * *
 * spice stock
 * may pod
 *
 * Output:
 * spice stock 4
 * may pod 3
 **/
