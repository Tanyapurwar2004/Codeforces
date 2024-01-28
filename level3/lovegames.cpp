#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int length=s.length();
    int c[27]={0};
	for(int i=0 ; i<length ; i++)
	{
		c[s[i]-'a'+1]++;
	}
    long long o=0;
    for(int i=1;i<=26;i++){
        if(c[i]%2!=0){
            o++;
        }
    }
	if(o==0 || o%2==1  )
		cout<<"First\n";
	else 
		cout<<"Second\n";
	return 0;
}