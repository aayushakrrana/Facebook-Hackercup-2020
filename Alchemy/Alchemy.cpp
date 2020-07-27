/*
Problem B: Alchemy
15 points

Validate Solution & Submit
Problem
My Submissions
Edgar and his younger brother Alfred are alchemists in search of the legendary Philosopher's Stone. The Philosopher's Stone (also known as the Red Stone, the Fifth Element, and the Elixir of Life in liquid form) is a powerful alchemical substance rumoured to support the transmutation of silver, gold, and even human lives. Edgar is hoping to use the stone to restore his brother's body to its original form following a terrifying human transmutation accident.
It is known that Philosopher's Stones break apart into an odd number of shards when they're used up. After searching far and wide, Edgar has collected NN shards of what he believes to be a previously-used Philosopher's Stone, where NN is an odd integer. He believes that fusing these shards back together will yield a real stone in its entirety.
Leveraging his encyclopedic knowledge of alchemy, Edgar recalls an ancient book with the following ritual for fusing shards:
Arrange the NN shards in a row, numbered from 1 to NN.
Note the colour C_iC
i
​	  of each shard ii, which is either auburn or black (denoted by the characters "A" and "B" respectively).
Choose a consecutive sequence of three shards, remove them from the row, and fuse them together into one new shard. The three shards must not all be the same colour, or such an intense concentration of similar energies will cause a dangerous rebound explosion. Instead, there must be two differently-coloured shards that will neutralize each other, get converted into energy (via the Law of Equivalent Exchange), and become infused with the third shard. In other words, assuming no explosion, the resulting shard's colour will be equal to the most common colour present amongst the three chosen shards.
Place the resulting shard back into the original gap in the row, with the remaining shards in the same relative order before and after it.
Repeat steps 3 and 4 until only one shard remains.
Note that each time steps 3 and 4 are performed, the number of remaining shards decreases by 2. Therefore, given that the initial number of shards is odd, enough successful repetitions will result in exactly one final shard: the Philosopher's Stone. Help Edgar determine whether or not it's possible to get to that point and hopefully save Alfred, without causing any rebound explosions along the way.
Input
Input begins with an integer TT, the number of Philosopher's Stones that Edgar tries to reconstitute. For each stone there are two lines. The first contains the integer NN. The second contains the length-NN string C_{1..N}C
1..N
​	 .
Output
For the iith stone, output a line containing "Case #i: " followed by a single character, either "Y" if it's possible For Edgar to end up with the Philosopher's Stone, or "N" if not.
Constraints
1≤T≤95
3≤N≤99,999
N is odd
C_belongs to {A, B}

​
The sum of NN over all test cases is at most 1,000,000.
Explanation of Sample
In the first case, Edgar is able to fuse the three shards together, as they include two differently-coloured shards, yielding a single black-coloured shard: the Philosopher's Stone.
In the second case, the three black shards will inevitably cause a rebound explosion if fused.
In the third case, Edgar can begin by fusing the first three shards into a single auburn-coloured shard. The row of shards will then feature colours "ABA", and those shards can be fused into the Philosopher's Stone.
Sample Input
6
3
BAB
3
BBB
5
AABBA
7
BAAABAA
11
BBBAABAAAAB
11
BABBBABBABB
Sample Output
Case #1: Y
Case #2: N
Case #3: Y
Case #4: N
Case #5: Y
Case #6: N

Validate Solution & Submit
*/


#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int z;
    cin>>z;
    for(int test=1;test<=z;test++)
    {
        long int asize;
        cin>>asize;
        vector<int> vect(asize);
        for(long int i=0;i<asize;i++)
        {
            char ch;
            cin>>ch;
            if(ch=='A') vect[i]=1;
            else if (ch=='B') vect[i]=-1;
            else ;
        }

        for(int i =0;i<vect.size()-2;i++)
        {
            int sum = vect[i]+vect[i+1]+vect[i+2];
            //cout<<"sum="<<sum<<" ";
            if(abs(sum)==1)
            {
                vect[i]=sum;
                if(i>0)
                  {
                    vect.erase(vect.begin() + i+1);
                    vect.erase(vect.begin() + i+1);
                  }
                  else{
                        vect.erase(vect.begin() +1);
                        vect.erase(vect.begin() +1);
                  }


                  i=0;

            }
            if(vect.size()<=2) break;

           /* for(long int i=0;i<vect.size();i++)
        {
            cout<<vect[i]<<" ";
        }
        cout<<endl;*/
        }
        int s=0;
        for(long int i=0;i<vect.size();i++)
        {
            s += vect[i];
        }
        //cout<<vect.size()<<" ";
        cout<<"Case #"<<test<<": ";
        if(abs(s)==1) cout<<"Y"<<endl;
        else cout<<"N"<<endl;

        }
    return 0;
}
