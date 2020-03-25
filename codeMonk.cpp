/*
Monk loves cycling. He wants to buy his favorite bicycle costing P dollars. But his father won’t give him the money so easily as he wants 
Monk to understand the importance of money. So they made a deal.
Monk starts with Zero dollars in his piggybank. On each day, Monk will go to another city where God of Money lives, 
and will get as much as dollars he wants from him.

At the end of each day, Monk brings the piggybank to his father, who counts the money in the piggybank and deposits as much more money 
as the amount that is present in the piggybank, which eventually doubles the amount in piggybank. As a result, the money in the 
piggybank keeps growing. Note that, his father does not deposit any money if the piggybank is empty.
Monk wants to ask God of Money for as minimum dollars as possible. Find the minimum dollars that Monk has to ask from God of Money, 
so that he has exactly P dollars in his piggybank, irrespective of the number of days he takes.

Input:
The first line consists of integer T. T testcases follow. The first line of each testcase consists of an integer P, 
denoting the cost of the bicycle.

Output:
For each testcase, print the answer in a single line.

Constraints:
1<=T<=10
1<=P<=10^18

SAMPLE INPUT 
2
1
2
SAMPLE OUTPUT 
1
1
Explanation
In the second testcase, Monk asks for 1 dollar from God of Money on the first day. He takes the piggybank with 1 Dollar to his 
father who deposits 1 Dollar, making a total of 2 Dollars i.e. cost of the bicycle.
*/
#include <iostream>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--)
	{
		long long int p;
		cin>>p;
		int count=0;
		while(p)
		{
			p=p&(p-1);
			count++;
		}
		cout<<count<<endl;
	}
}
