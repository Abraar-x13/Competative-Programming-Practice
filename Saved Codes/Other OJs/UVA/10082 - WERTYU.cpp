#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;

char translate(char c) 
{
   switch (c) 
   {
      case '1':
         return '`';
      case '2':
         return '1';
      case '3':
         return '2';
      case '4':
         return '3';
      case '5':
         return '4';
      case '6':
         return '5';
      case '7':
         return '6';
      case '8':
         return '7';
      case '9':
         return '8';
      case '0':
         return '9';
      case '-':
         return '0';
      case '=':
         return '-';
      case 'W':
         return 'Q';
      case 'E':
         return 'W';
      case 'R':
         return 'E';
      case 'T':
         return 'R';
      case 'Y':
         return 'T';
      case 'U':
         return 'Y';
      case 'I':
         return 'U';
      case 'O':
         return 'I';
      case 'P':
         return 'O';
      case '[':
         return 'P';
      case ']':
         return '[';
      case '\\':
         return ']';
      case 'S':
         return 'A';
      case 'D':
         return 'S';
      case 'F':
         return 'D';
      case 'G':
         return 'F';
      case 'H':
         return 'G';
      case 'J':
         return 'H';
      case 'K':
         return 'J';
      case 'L':
         return 'K';
      case ';':
         return 'L';
      case '\'':
         return ';';
      case 'X':
         return 'Z';
      case 'C':
         return 'X';
      case 'V':
         return 'C';
      case 'B':
         return 'V';
      case 'N':
         return 'B';
      case 'M':
         return 'N';
      case ',':
         return 'M';
      case '.':
         return ',';
      case '/':
         return '.';
      case ' ':
         return ' ';
      case '\n':
         return '\n';
   }
   return ' ';
}

int main(void) 
{
   FAAST;
   int TC; TC = 1; //cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      continue;
   }

   char c;
   while (scanf("%c", &c) != EOF) 
   {
      printf("%c", translate(c));
   }
   return 0;
}


// CLEVER METHOD :
int main(){
    
    string s1="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    
    string s2;
    int n;
    vector<string> v;
    
    while(getline(cin, s2))
    {
        v.push_back(s2);
    }
    for(int j=0;j<v.size();j++)
    {
        s2=v[j];        
        string ans="";
        for(int i=0;i<s2.size();i++)
        {        
            if(s2[i]!='Q' && s2[i]!='A' && s2[i]!='Z')
            {
                n=s1.find(s2[i]);
                if(n!=-1)
                {
                    ans.append(s1,n-1,1);
                }else ans.append(s2,i,1);
            }else ans.append(s2,i,1);
        }
        cout<<ans<<endl;
    }
    return 0;
}