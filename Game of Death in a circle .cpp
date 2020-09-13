/*There are n people standing in a circle (numbered clockwise 1 to n) waiting to be executed. The counting begins at point 1 in the circle and proceeds around the circle in a fixed direction (clockwise). In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom.
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.
Consider if n = 5 and k = 2, then the safe position is 3.
Firstly, the person at position 2 is killed, then person at position 4 is killed, then person at position 1 is killed. Finally, the person at position 5 is killed. So the person at position 3 survives.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. The first and only line of each test case consists of two space separated positive integers denoting n and k.

Output:
Corresponding to each test case, in a new line, print the safe position.

Constraints:
1 ≤ T ≤ 200
1 ≤ n, k ≤ 200

Example:
Input:
3
2 1
4 2
50 10
Output:
2
1
36

Explanation:
Testcase 1: here n = 2 and k = 1, then safe position is 2 as the person at 1st position will be killed.*/

//round robin 
#include<bits/stdc++.h>
using namespace std;
int round_robin_ele(int n,int k)
{
    int j=0;
    vector<int> v(n,0);
    int i=0;
    for(auto & a : v)
        a=++j;
    while(v.size()!=1)
    {
        i= (i + k-1 )%v.size();
        v.erase(v.begin()+i);
    }
    return v[0];
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
	int n ; 
    int k ;
    cin>>n>>k;
    cout << round_robin_ele(n, k)<<"\n"; 
    }
    return 0; 
}
