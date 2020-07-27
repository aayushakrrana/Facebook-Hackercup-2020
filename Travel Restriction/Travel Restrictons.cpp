/*
Problem A: Travel Restrictions
10 points

Validate Solution & Submit
Problem
My Submissions
2020 has been a tough year for travelers. Air travel is especially problematic as passengers need to spend long periods in security lines, waiting areas, and crowded cabins where social distancing is difficult to maintain.
To minimize the spread of COVID-19, each airline has decided to reorganize all of their flight routes in a linear fashion. The airlines are hoping that by not making any one country a "hub", the spread of the virus will be significantly limited.
An airline's flights normally service NN countries, running in various directions. Amidst the pandemic, each airline has carefully arranged these NN countries in a sequence with each assigned a number from 11 to NN. Flights are limited to run only between pairs of countries that are adjacent in this sequence, with service in both directions. No other flights are available. That is, flights are available from country ii to country jj if and only if |i - j| = 1∣i−j∣=1.
To make things more complicated, some countries have issued their own restrictions on incoming and outgoing travel. These restrictions are indicated by the characters I_{1..N}I
1..N and O_{1..N}O 1..N	 , each of which is either "N" or "Y":
If I_iIi = "N", then incoming flights to country ii from any other country are disallowed. Otherwise, if I_iI
i
​	  = "Y", they may be allowed.
If O_iO
i
​	  = "N", then outgoing flights from country ii to any other country are disallowed. Otherwise, if O_iO
i
​	  = "Y", they may be allowed.
If a flight between adjacent countries is not disallowed by either the departure or arrival country's restrictions, then it's allowed.
As a consulting data scientist in the airline industry, your job is to determine which trips between the various countries are possible. Let P_{i,j}P
i,j
​	  = "Y" if it's possible to travel from country ii to country jj via a sequence of 0 or more flights (which may pass through other countries along the way), and P_{i,j}P
i,j
​	  = "N" otherwise. Note that P_{i,i}P
i,i
​	  is always "Y". Output this N*NN∗N matrix of characters.
Input
Input begins with an integer TT, the number of airlines. For each airline, there are three lines. The first line contains the integer NN. The second line contains the length-NN string I_{1..N}I
1..N
​	 . The third line contains the length-NN string O_{1..N}O
1..N
​	 .
Output
For the iith airline, output a line containing "Case #i:" followed by NN more lines, the iith of which contains the length-NN string P_{i,1..N}P
i,1..N
​	 .
Constraints
1 1≤T≤100
2 2≤N≤50
Explanation of Sample
In the first case, there are two countries with no restrictions. Therefore, trips between all pairs of countries are possible.
In the second case, there are two countries, and traveling into country 1 is restricted. Since country 2 is the only country adjacent to country 1, the only impossible trip is from country 2 to country 1.
In the third case, there are two countries, both of which restrict inbound travel.
In the fourth case, one may not enter countries 2 or 3, nor exit country 4.



Sample Input
5
2
YY
YY
2
NY
YY
2
NN
YY
5
YNNYY
YYYNY
10
NYYYNNYYYY
YYNYYNYYNY



Sample Output
Case #1:
YY
YY
Case #2:
YY
NY
Case #3:
YN
NY
Case #4:
YNNNN
YYNNN
NNYYN
NNNYN
NNNYY
Case #5:
YYYNNNNNNN
NYYNNNNNNN
NNYNNNNNNN
NNYYNNNNNN
NNYYYNNNNN
NNNNNYNNNN
NNNNNNYYYN
NNNNNNYYYN
NNNNNNNNYN
NNNNNNNNYY

Validate Solution & Submit
*/




#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif



    int test;
    cin>>test;
    for(int z=1;z<=test;z++)
    {
        int n;
        cin>>n;
        string s1,s2;
        char inc[n],out[n];
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
         inc[i]=s1[i];
        }
        for(int i=0;i<n;i++)
        {
         out[i]=s2[i];
        }

       vector<vector <char>>vect(n,vector<char>(n,'N'));



        for(int i=0;i<n;i++)
        {
            char flast='Y';
            for(int j=i;j<n;j++)
            {
                if(i==j)
                {
                    vect[i][j]='Y';
                    flast='Y';
                }
                else
                {
                    if(j-i==1)
                   {
                        if(out[i]=='Y' && inc[j]=='Y')
                        {
                            vect[i][j]='Y';
                            flast='Y';
                        }
                        else    flast='N';
                   }
                   else
                   {
                       if(flast=='Y')
                       {
                        if(out[j-1]=='Y' && inc[j]=='Y')
                        {
                            vect[i][j]='Y';
                            flast='Y';
                        }
                        else    flast='N';
                       }
                    }

                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            char blast='Y';
                for(int j=i-1;j>=0;j--)
                {
                         if(abs(i-j)==1)
                   {
                        if(out[i]=='Y' && inc[j]=='Y')
                        {
                            vect[i][j]='Y';
                            blast='Y';
                        }
                        else    blast='N';
                   }
                   else
                   {
                       if(blast=='Y')
                       {
                        if(out[j+1]=='Y' && inc[j]=='Y')
                        {
                            vect[i][j]='Y';
                            blast='Y';
                        }
                        else    blast='N';
                       }
                   }

                }
        }




        cout<<"Case #"<<z<<":\n";
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               cout<<vect[i][j];
            }
            cout<<"\n";
        }
        //cout<<inc<<" "<<out;

    }




    return 0;
}
