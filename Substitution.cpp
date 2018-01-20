#include <bits/std++.h>
using namespace std;
char* yourkey();
char* randomkey();
char* encrypt(int kn,int pn,char key[kn],char plaintext[pn])
int main()
{
  cout<<"Enter the maximum size of the Plain text(containing the 26 alphabets only):";
  int n;
  cin>>n;
  char PT[n],CT[n];
  cout<<"Enter the plain text:";	
  getline(cin,PT);
  cout<<"Want to insert yourkey(y) or randomkey(r):?";
  char c;
  cin>>c;
  char YK[26];
  char RK[26];
  if(c=='y')
  {
    YK=yourkey();
    CT=encrypt(26,n,YK,PT);
    cout<<"\nEncrpytion has been done!:\nThis is the key:"<<YK<<"\nThis is the cipher text:"<<CT;
  } 
  else
  { 
  	RK=randomkey();
  	CT=encrypt(26,n,RK,PT)
  	cout<<"\nEncrpytion has been done!:\nThis is the key:"<<RK<<"\nThis is the cipher text:"<<CT;
  }
  
}
char* yourkey()
{
	char YK[26];
  	int i;
  	for(i=0;i<26;i++)
  	{
  		cout<<"Enter the sustitution of "<<(char)(i+65)<<":";
  		cin>>YK[i];
  	}
  	return YK;
}
char* randomkey()
{
  
}
char* encrypt(int kn,int pn,char key[kn],char plaintext[pn])
{

}