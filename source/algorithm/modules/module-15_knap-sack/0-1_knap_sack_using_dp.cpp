#include <bits/stdc++.h>
using namespace std;

int val[105];
int weight[105];
int dp[105][105]; 
int knapSack(int i, int mx_weight)
{

    if(i < 0 || mx_weight <=0)
        return 0; 
    if(dp[i][mx_weight] != -1)
        return dp[i][mx_weight]; 

    if (weight[i] <= mx_weight)
    {
        
        int opt1 = knapSack(i - 1, mx_weight - weight[i]) + val[i];
        int opt2 = knapSack(i - 1, mx_weight);
        dp[i][mx_weight] = max(opt1, opt2);
        return dp[i][mx_weight]; 
        
    }else{
        
        dp[i][mx_weight] =  knapSack(i - 1, mx_weight);
        return dp[i][mx_weight]; 
    }
}

int main()
{

    int n, bag_limit;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> val[i];

    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cin >> bag_limit;

for(int i = 0; i <=n ; i++)
    for(int j = 0; j <=bag_limit ; j++)     
        dp[i][j] = -1;

cout << knapSack(n-1, bag_limit); 

    return 0;
}










/*

Appreciation: 
I had a fantastic experience in this course, especially with Piyash Mahamud bhai’s teaching. The way he breaks complex algorithms into smaller, clear pieces using the blackboard and Epic Pen makes everything simple, fun, and motivating. His style removed the fear of learning algorithms and built a strong starting point for us. This has been one of the best courses I’ve taken  thank you to the Phitron team and especially to Pias Mahamud bhai for his excellent teaching style.


Improvement Suggestions: 
More Real-Life Examples: 
While many examples were shared (like for heaps, tree, graph), adding more real-world use cases. would make the concepts even more relatable and engaging.

Clear End Goals at Each Stage: 
It would be very helpful if, at the start of each new module, new concept, we could see what problems or projects those concepts will eventually help us solve. For example:
if we are in the problem-solving track:
 what type of contest or competitive programming problems will we be solving with this module, concepts. just little hints in real?

if we are in the machine learning track:
how will these data structures or algorithms will be used, type of projects, features we will develop. I mean all about end activity in as intro. This way, we can visualize the “end goal” earlier, making the learning process more exciting and motivating, instead of only realizing the importance at the very end.
I think this will keep motivation strong from the beginning of each module, concepts. 

I already got lots of clarity & examples. And it is best ever experience I had with Pias bhai's teaching styles. Especially he doesn't let any confusion be hidden, or skipped. Keep asking the questions that are ringing in our mind. Thank you so much. 

*/