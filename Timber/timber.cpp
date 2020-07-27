/*
Problem C: Timber
21 points

Validate Solution & Submit
Problem

Every year, millions of logs are sent floating downstream in the great Canadian log drive. But as every Canadian knows, you can't have a successful log drive without logs. The first step in the logging season is to fell a great number of trees, taking care not to pile the trees up in a way that will make them hard to move.
Eva has been assigned a section of forest with NN trees standing in a row. Looking at them from the side and modeling the ground as a number line, the iith tree is at position Pi
(measured in metres) and has a height of Hi metres. All of the trees are at distinct positions.
Each tree may be cut down such that it falls either to the left or to the right, or it may be left standing (it's important to farm trees sustainably). If the iith tree is cut down to the left, it will form a timber interval of [Pi - Hi, Pi] on the ground, while if it is cut down to the right, it will form a timber interval [Pi ,Pi+Hi].
The trees that are cut down will be moved into a nearby river to begin their long journey to the mill. It's hard to move a tree that has another tree on top of it, so Eva will not cut down trees in a way that would cause the intersection of any pair of timber intervals to have positive length. It's fine however, and indeed desirable, for two timber intervals to share an endpoint in common. For example, one tree may be cut down to create a timber interval of [a, b][a,b] and another may be cut down to create a timber interval of [b, c][b,c]. It's also fine for timber intervals to overlap with trees which have not been cut down. Uncut trees are essentially ignored.
A combined timber interval is an interval where each point within it is within at least one timber interval. For example, if you have timber intervals [a, b][a,b] and [b, c][b,c] (for any a < b < ca<b<c), then [a, c][a,c] is a combined timber interval.
Eva would like to form the largest combined timber interval possible, as that represents a series of trees that can all be pushed into the river at once. Determine the maximum possible length that a combined timber interval could have if Eva cuts down trees optimally.

Input
Input begins with an integer TT, the number of forest sections that Eva will work in. For each section, there is first a line containing the single integer NN. Then, NN lines follow, the iith of which contains the space-separated integers
Pi and Hi.
​	 .
Output
For the iith section, print a line containing "Case #i: " followed by a single integer, the length of the largest possible combined timber interval that Eva can create in that section of forest.

Constraints

1≤T≤90

1≤N≤800,000

−500,000,000≤Pi≤500,000,000

1≤Hi≤500,000,000

The sum of NN across all forest sections is at most 4,000,000.
Explanation of Sample
In the first case, if both trees are cut down such that they fall to the right, a combined timber interval of length 9 (between positions 0 and 9) will be formed.
In the second case, if the first tree falls to the right and the second falls to the left, they will similarly form a combined timber interval of length 9.
In the third case, no matter how the trees are cut down, their endpoints cannot coincide. Therefore, the longest possible combined timber interval consists of just the third tree being chopped down.



Sample Input
8
2
0 5
5 4
2
0 5
9 4
3
0 5
9 3
2 6
5
3 2
2 8
-4 5
8 5
1 4
6
-15 15
-9 9
-3 3
5 5
9 9
18 18
8
10 20
20 20
30 20
40 20
50 20
60 20
70 20
80 20
12
13 8
-14 5
2 19
33 10
-31 9
15 21
5 3
-22 16
-6 11
25 12
-40 24
21 18
2
-500000000 500000000
500000000 500000000


Sample Output
Case #1: 9
Case #2: 9
Case #3: 6
Case #4: 12
Case #5: 33
Case #6: 80
Case #7: 56
Case #8: 1000000000
*/

