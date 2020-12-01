#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// https://www.geeksforgeeks.org/check-if-any-permutation-of-a-large-number-is-divisible-by-8/
// Solution is also available on the above given link.

int main() {
    // You can generate this list, using one loop.
    string specs[] = {"104","112","120","128","136","144","152","160","168","176",
                      "184","192","200","208","216","224","232","240","248","256",
                      "264","272","280","288","296","304","312","320","328","336",
                      "344","352","360","368","376","384","392","400","408","416",
                      "424","432","440","448","456","464","472","480","488","496",
                      "504","512","520","528","536","544","552","560","568","576",
                      "584","592","600","608","616","624","632","640","648","656",
                      "664","672","680","688","696","704","712","720","728","736",
                      "744","752","760","768","776","784","792","800","808","816",
                      "824","832","840","848","856","864","872","880","888","896",
                      "904","912","920","928","936","944","952","960","968","976",
                      "984","992"};
    
    string s;
    cin>>s;
    // Handling single digit numbers
    if(s.size() == 1)
    {
        if(stoi(s)%8 == 0)
        {
            cout<<"Yes";return 0;
        }
        else
        {
            cout<<"No";return 0;
        }
    }
    
    // Handling 2 digit numbers
    if(s.size() == 2)
    {
        if(stoi(s)%8 == 0)
        {
            cout<<"Yes";return 0;
        }
        reverse(s.begin(), s.end());
        if(stoi(s)%8 == 0)
        {
            cout<<"Yes";return 0;
        }
        else
        {
            cout<<"No";return 0;
        }
    }
    
    std::map<ll,ll> m;
    for(ll i = 0; i < s.size(); i++)
    {
        m[int(s[i])]++;
    }
    
    for(auto spec : specs)
    {
        std::map<int, int> ms;
        ms[int(spec[0])]++;
        ms[int(spec[1])]++;
        ms[int(spec[2])]++;
        
        if(m[int(spec[0])] >= ms[int(spec[0])] && m[int(spec[1])] >= ms[int(spec[1])] && m[int(spec[2])] >= ms[int(spec[2])])
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
    
}
