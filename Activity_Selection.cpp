#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cout << "Enter number of Activity: ";
    cin >> n;
    int a[n+1];

    vector<pair<int, int> > Time(n+1);
    vector<int> ans;

    cout << "\nEnter start time and End time: ";

    for(int i=1; i<=n;i++)
    {
        cin >> Time[i].first ;
        cin >>Time[i].second;
    }

    ans.push_back(1);
    int k = 1;

    for(int m=2; m<=n; m++)
    {
        if(Time[m].first >= Time[k].second)
        {
            ans.push_back(m);
            k = m;
        }
    }

    cout << "\nSelected Activity is: ";
    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << ' ';
    }
    cout << endl;

    return 0;
}
