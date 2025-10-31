// Title: Graph Connectivity
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Xét một đồ thị G được hình thành từ một số lượng lớn các đỉnh được nối bằng các cạnh. G được cho là liên thông nếu tồn tại một đường đi
 * trực tiếp hoặc qua các cạnh giữa hai đỉnh bất kì trong G.
 * 
 * Ví dụ, đồ thị dưới đây không liên thông vì không có đường đi từ A đến C.
 * (/images/000248_graph_connectivity_01.png)
 * 
 * Tuy nhiên, đồ thị này chứa một số đồ thị con liên thông, chúng là các nhóm đỉnh sau: {A}, {B}, {C}, {D}, {E}, {A,B}, {B,D},
 * {C,E}, {A,B,D}.
 * 
 * Một đồ thị con liên thông cực đại nếu không có đỉnh và cạnh nào trong đồ thị ban đầu có thể được thêm vào đồ thị con mà vẫn để nó được
 * liên thông.
 * 
 * Có hai đồ thị con liên thông cực đại ở trên, một đồ thị được liên kết với các đỉnh {A,B,D} và đồ thị còn lại với các đỉnh {C,E}.
 * 
 * Viết chương trình xác định số đồ thị con liên thông cực đại của một đồ thị đã cho.
 *
 * Input:
 * Đầu vào bắt đầu bằng một số nguyên dương duy nhất trên một dòng cho biết số lượng bộ test theo sau, mỗi bộ test được mô tả bên dưới.
 * Dòng này được theo sau bởi một dòng trống và cũng có một dòng trống giữa hai bộ test liên tiếp.
 * 
 * Dòng đầu tiên của mỗi bộ test chứa một ký tự chữ cái viết hoa. Ký tự này đại diện cho tên đỉnh có thứ tự từ điển lớn nhất trong đồ thị. Mỗi
 * dòng kế tiếp chứa một cặp ký tự chữ cái viết hoa biểu thị một cạnh trong đồ thị.
 * 
 * Phần input của ví dụ bên dưới là một bộ test có thể có cho đồ thị bên trên.
 * 
 * Đầu vào kết thúc bằng một dòng trống.
 *
 * Output:
 * Đối với mỗi bộ test, in ra ra số lượng đồ thị con liên thông cực đại. Kết quả đầu ra của hai bộ test liên tiếp được phân tách bằng một dòng
 * trống.
 *
 * Example 1:
 * Input:
 * 1
 * 
 * E
 * AB
 * CE
 * DB
 * EC
 *
 * Output:
 * 2
 **/
