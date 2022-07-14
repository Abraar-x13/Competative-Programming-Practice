class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        #define pb(a) push_back(a);
        vector<vector<int>> all;
        int rows = numRows;
        for (int i = 0; i < rows; i++)
        {
            vector<int> v;
            int val = 1;
            for (int k = 0; k <= i; k++)
            {
                // cout << " " << val;
                v.pb(val);
                val = val * (i - k) / (k + 1);
            }
            all.pb(v);
            // cout << "\n" << "\n";
        }
        return all;
    }
};


// MAIN CODE :

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
// #define RFFF return false;
// #define RTTT return true;
// #define pb(a) push_back(a);
// #define pii pair<int,int>
// #define debug cout <<"hehe\n"
// #define debug1(x) cout <<"hehe " << x << " hehe\n"
// #define debug2(x,y) cout << x <<" and "<< y <<"\n"
// #define print1(x) cout << x << "\n"
// #define print2(x, y) cout << x <<" "<< y <<"\n"
// const ll N=1e9+2;


// int main(void)
// {
//    FAAST;
//    int TC;  TC = 1; // cin >> TC;
//    for (int tc = 0; tc < TC; tc++)
//    {
//       vector<vector<int>> all;
//       int rows; cin >> rows;
//       for (int i = 0; i < rows; i++)
//       {
//          vector<int> v;
//          int val = 1;
//          for (int k = 0; k <= i; k++)
//          {
//             // cout << " " << val;
//             v.pb(val);
//             val = val * (i - k) / (k + 1);
//          }
//          all.pb(v);
//          // cout << "\n" << "\n";
//       }
//       // // print : 
//       // for (vector<vector<int>>::iterator it = all.begin(); it != all.end(); ++it)
//       // {
//       //    vector<int> c = *it;
//       //    for (vector<int>::iterator i = c.begin(); i != c.end(); ++i)
//       //    {
//       //       cout << *i << " ";
//       //    }  cout << "\n";
//       // }
//    }
//    return 0;
// }
