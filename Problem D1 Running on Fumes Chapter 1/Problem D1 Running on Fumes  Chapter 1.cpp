/*

Problem D1: Running on Fumes - Chapter 1
16 points

Validate Solution & Submit
Problem
My Submissions
Note: This problem shares similarities with Chapter 2. The solution to either chapter may help with solving the other, so please consider reading both first.
You just landed yourself a gig as a delivery driver for a nationwide supply chain. You've been assigned a series of long-haul jobs, so it's time to get to work.
For each job, you will be provided with a map of the relevant region, which includes NN cities (numbered from 1 to NN) and N-1N−1 two-way roads running amongst them. The cities are connected by roads in a single line, such that there's a road between each pair of consecutive cities. In other words, cities ii and jj are directly connected by a road if and only if |i - j| = 1∣i−j∣=1.
You will begin in city 11 with a shipment of supplies to be delivered to city NN, and with a full gas tank having a capacity of MM gallons. You will then have two options at each point in time:
Drive along a road from your current city to an adjacent one, using up 1 gallon of gas. You may not do this if your tank is empty, but it's fine if your tank becomes empty as a result.
Fill your tank all the way back up to MM gallons of gas at a cost of C_iC
i
​	  dollars, where ii is your current city. Note that the cost is independent of how much gas your tank had before refueling. You may not do this if city ii has no gas station (indicated with C_i = 0C
i
​	 =0).
Determine the minimum cost required to arrive at city NN, if it's possible at all.
Input
Input begins with an integer TT, the number of long-haul jobs you've been assigned. For each job there is first a line containing the space-separated integers NN and MM. Then, NN lines follow, the iith of which contains the single integer C_iC
i
​	 .
Output
For the iith job, output a line containing "Case #i: " followed by a single integer, the minimum cost in dollars to get from city 1 to city NN, or -1−1 if it's impossible.
Constraints
1≤T≤85
2≤N≤1,000,000
1≤M≤N
0≤C ≤1,000,000,000
The sum of NN across all jobs is at most 4,000,000.
Sample Explanation
In the first job, you will begin in city 1 with 3 gallons of gas. You cannot drive all the way to your destination (city 5) without refueling along the way, as that would require a total of 4 gallons of gas. The cheapest option is to drive to city 2, top up your tank for a cost of $20, and then drive through cities 3 and 4 before reaching city 5 with no more gas to spare.
In the second job, your gas tank only has a capacity of 2 gallons. In this case, the cheapest strategy involves depleting all of your gas to drive to city 3, refueling there for $30, and then depleting all of your gas to reach city 5.
In the third job, your gas tank only has a capacity of 1 gallon. No matter what you do, you will deplete all of your gas in the drive from city 3 to city 4, where there will be no way to refuel to reach city 5.
Sample Input
7
5 3
0
20
30
0
10
5 2
0
20
30
0
10
5 1
0
20
30
0
10
4 1
99
88
77
66
4 4
99
88
77
66
6 2
0
0
20
30
0
10
12 3
0
1
4
7
0
5
9
8
0
3
0
6



Sample Output
Case #1: 20
Case #2: 30
Case #3: -1
Case #4: 165
Case #5: 0
Case #6: 50
Case #7: 19
*/

#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);
/*
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
*/

int T;
cin>>T;
for(int Mloop=1;Mloop<=T;Mloop++)
{
long long int n,m;
cin>>n>>m;
vector <long long int> vect (n);
for(long long int i=0;i<n;i++)
{
cin>>vect[i];
}


}

return 0;
}
