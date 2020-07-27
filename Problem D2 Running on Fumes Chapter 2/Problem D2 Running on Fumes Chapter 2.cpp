/*

Problem D2: Running on Fumes - Chapter 2
38 points



My Submissions
Note: This problem shares similarities with Chapter 1. The solution to either chapter may help with solving the other, so please consider reading both first.
After working for many months as a delivery driver for a nationwide supply chain, you've finally received a promotion! This promotion has come with a nice pay bump, but also with the responsibility of serving regions with more complex maps. With no opportunity for a vacation, you've promptly been assigned a new series of long-haul jobs.
For each job, you will be provided with a map of the relevant region, which includes N cities (numbered from 1 to N) and N−1 two-way roads running amongst them. In computer science terms, the map is organized like a tree rooted at city 1, such each city i is connected to its parent city Pi by a road (aside from city 1, which has no parent, with P1
given as 0). It's possible to drive from any city to any other city by following a sequence of roads. Note that each road may be driven along in either direction (either from city i to city Pi, or vice versa).
You will begin in a given city AA with a shipment of supplies to be delivered to another given city B, and with a full gas tank having a capacity of MM gallons. You will then have two options at each point in time:
Drive along a road from your current city to an adjacent one, using up 1 gallon of gas. You may not do this if your tank is empty, but it's fine if your tank becomes empty as a result.
Fill your tank all the way back up to MM gallons of gas at a cost of Ci dollars, where i is your current city. Note that the cost is independent of how much gas your tank had before refueling. You may not do this if city i has no gas station (indicated with Ci= 0).
Determine the minimum cost required to complete your delivery, if it's possible at all.

Input
Input begins with an integer T, the number of long-haul jobs you are assigned. For each job there is first a line containing
the space-separated integers N, M, A, and B. Then, N lines follow, the i th of which contains the space-separated integers Pi
 and Ci
​	 .
Output
For the i th job, output a line containing "Case #i: " followed by a single integer, the minimum cost in dollars to get from city
A to city B, or  −1 if it's impossible.

Constraints

1≤T≤80
2≤N≤1,000,000
1≤M≤N
1≤A,B≤N
A≠B
0≤Pi≤N
0≤Ci≤1,000,000,000

The sum of NN across all jobs is at most 3,000,000.
Explanation of Sample
The regional map for the first job looks as follows:

You will begin in city 2 with 1 gallon of gas. The cheapest strategy involves driving to city 4, refueling there for a cost of $40, and then driving onwards to city 3.
The regional map for the next 3 jobs looks as follows, such that you need to drive from city 5 to city 3:

In the second job, your gas tank has a capacity of 1 gallon. No matter what you do, you will deplete all of your gas in the drive from city 8 to city 6, where there will be no way to refuel and proceed to eventually reach city 3.
In the third job, your gas tank has a capacity of 2 gallons. The cheapest strategy involves refueling at both cities 8 and 1 on the way to city 3, costing a total of $30 + $30 = $60.
In the fourth job, your gas tank has a capacity of 3 gallons. This isn't quite enough to drive all the way to city 3 without refueling. The cheapest strategy involves depleting all of your gas to drive through cities 8 and 6 to city 7, refueling there for $20, and then depleting all of your gas to drive through cities 6 and 1 to reach city 3.

Sample Input

6
4 1 2 3
0 10
4 20
4 30
1 40
8 1 5 3
0 30
3 20
1 0
7 10
8 0
1 0
6 20
6 30
8 2 5 3
0 30
3 20
1 0
7 10
8 0
1 0
6 20
6 30
8 3 5 3
0 30
3 20
1 0
7 10
8 0
1 0
6 20
6 30
15 1 3 14
0 28
1 18
1 17
2 8
4 13
4 2
2 6
5 37
8 37
9 21
6 22
2 33
1 11
8 5
12 8
15 5 11 12
0 0
7 28
1 19
6 5
15 0
5 0
15 0
1 12
8 6
5 20
2 0
4 0
6 10
4 8
1 22


Sample Output
Case #1: 40
Case #2: -1
Case #3: 60
Case #4: 20
Case #5: 104
Case #6: 17

*/
