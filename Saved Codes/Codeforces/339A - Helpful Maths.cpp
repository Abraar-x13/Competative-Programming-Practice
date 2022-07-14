#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	string s;
	cin>>s;
    
    int l = s.size();
    int A[101],numbers=0;
    
	for(int i=0; i<l; i++)
    {
	    if( s[i]=='+' ){ continue; }
        else{ A[numbers++]=s[i]-'0'; } //note : converting to int
	}
	sort(A,A+numbers);
	for(int i=0;i<numbers;i++)
    {
	    cout<<A[i];
	    if(i==numbers-1) { break; }
	    cout<<"+";
	}
	return 0;
}
