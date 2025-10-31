// Title: Book of Evil
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Paladin Manao caught the trail of the ancient Book of Evil in a swampy area. This area contains 
n
n settlements numbered from 
1
1 to 
n
n. Moving through the swamp is very difficult, so people tramped exactly 
n
−
1
n−1 paths. Each of these paths connects some pair of settlements and is bidirectional. Moreover, it is possible to reach any settlement from any other one by traversing one or several paths.

The distance between two settlements is the minimum number of paths that have to be crossed to get from one settlement to the other one. Manao knows that the Book of Evil has got a damage range 
d
d. This means that if the Book of Evil is located in some settlement, its damage (for example, emergence of ghosts and werewolves) affects other settlements at distance 
d
d or less from the settlement where the Book resides.

Manao has heard of 
m
m settlements affected by the Book of Evil. Their numbers are 
p
1
,
p
2
,
.
.
.
,
p
m
p
​1
​​ ,p
​2
​​ ,...,p
​m
​​ . Note that the Book may be affecting other settlements as well, but this has not been detected yet. Manao wants to determine which settlements may contain the Book. Help him with this difficult task.
 *
 * Input:
 * The first line contains three space-separated integers 
n
n, 
m
m and 
d
d (
1
≤
m
≤
n
≤
1
0
0
0
0
0
1≤m≤n≤100000; 
0
≤
d
≤
n
−
1
0≤d≤n−1). The second line contains 
m
m distinct space-separated integers 
p
1
,
p
2
,
.
.
.
,
p
m
p
​1
​​ ,p
​2
​​ ,...,p
​m
​​  (
1
≤
p
i
≤
n
1≤pi≤n). Then 
n
−
1
n−1 lines follow, each line describes a path made in the area. A path is described by a pair of space-separated integers 
a
i
a
​i
​​  and 
b
i
b
​i
​​  representing the ends of this path.
 *
 * Output:
 * Print a single number — the number of settlements that may contain the Book of Evil. It is possible that Manao received some controversial information and there is no settlement that may contain the Book. In such case, print 0.
 *
 * Example 1:
 * Input:
 * 6 2 3
1 2
1 5
2 3
3 4
4 5
5 6
 *
 * Output:
 * 3
 * 
 * Explanation:
 * Sample 1. The damage range of the Book of Evil equals 3 and its effects have been noticed in settlements 1 and 2. Thus, it can be in settlements 3, 4 or 5.
 * (/images/000268_book_of_evil_01.png)
 **/
