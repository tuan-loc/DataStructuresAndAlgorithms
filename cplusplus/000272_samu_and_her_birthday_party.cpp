// Title: Samu and her Birthday Party
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Samu's Birthday is near so she had started planning a party for all of her friends. Being a kind and caring girl she calls each of her friend
 * and asks for his/her favorite dish. Now each friend has own liking/disliking for different dishes.
 * 
 * A friend can only like or dislike a dish it means if we are having three dishes 1,2,3 then if a friend says that he likes Dishes 1 and 2 then it’s
 * obvious that he dislikes Dish 3. So for each friend we are given a string of 1 and 0 where 1 shows that this person like this particular dish.
 * 
 * Now we are given that Samu has N friends and total of K dishes available to make her menu. Now Samu doesn't want to make any of her
 * friend unhappy, After all it’s her birthday.
 * 
 * So she got confused on what dishes to count in menu and calls you for help. You need to find count of minimum dishes to order so that all
 * of her N friends are happy which means everyone has at least one dish to eat in party.
 * 
 * Note: It’s for sure that everyone has at least liking for one dish.
 *
 * Input:
 * Input will contain T test cases and each of the test case has following description:
 * 
 * First line of test case has N denoting the total number of friends and K denoting the total number of dishes available. Both are separated
 * by a space (dishes are numbered from 1 to K).
 * 
 * Then it is followed by N lines each of length K. Each of the N lines contains a string of 0 and 1 where if j-th (1≤j≤K) value in i-th line
 * (1≤i≤N) is set 1 then it shows that dish number j is liked by that i-th Samu's friend.
 * 
 * Constraint
 * 1≤T≤10
 * 1≤N≤500
 * 1≤K≤10
 * 
 * Each string will only contain 0 or 1 and it is sure that there is at least one 1 in each string depicting like/dislike of Samu's friend.
 *
 * Output:
 * You need to tell the minimum number of dishes to be taken in menu so that all friends are happy.
 *
 * Example 1:
 * Input:
 * 1
 * 2 2
 * 10
 * 01
 *
 * Output:
 * 2
 * 
 * Explanation:
 * Both dishes are to be taken into account as Friend 1 don't like Dish 2 and Friend 2 don't like Dish 1.
 **/
