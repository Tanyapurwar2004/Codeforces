

// int  ans(pair<int,int>p ,queue<pair<int, int> > q, int m){
//     while(q.size()!=1){
//         int c=p.second;
//         q.pop();
//         if(c>m){
//             c=c-m;
//             q.push({p.first, c});
//         }
//         return p.second;
//     }

// }

int main()
{
    int n, m;
    cin >> n >> m;
    int x;
    unordered_map<int, int> mp;
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        q.push({i, x});
    }
    // int s = ans(q.front(), q, m);
    // cout << s;
    while (q.size() != 1)
    {
        int c = q.front().second;
        int d=q.front().first;
        q.pop();
        if (c > m)
        {
            c = c - m;
            q.push({d, c});
        }
        
    }
    cout<<q.front().first;
    // while (q.size()!=1)
    // {

    //     int c = q.front();
    //     q.pop();
    //     //  cout<<c<<endl;
    //     if (mp[c] > m)
    //     {
    //         mp[c] = mp[c] - m;
    //         q.push(c);
    //     }
    // }
    // cout<<q.front();
}