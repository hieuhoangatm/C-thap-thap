#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()

struct sv
{
    int stt;
    string msv, hoten, lop, email, doanhnghiep;
};

int main()
{
    int n;
    cin >> n;
    sv a[1005];
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i + 1;
        cin >> a[i].msv;
        cin.ignore();
        getline(cin, a[i].hoten);
        cin >> a[i].lop;
        cin >> a[i].email;
        cin >> a[i].doanhnghiep;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string dn;
        cin >> dn;
        vector<sv> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i].doanhnghiep == dn)
            {
                v.push_back(a[i]);
            }
        }
        sort(all(v), [](sv a, sv b) -> bool
             { return a.hoten < b.hoten; });
        for (sv i : v)
        {
            cout << i.stt << ' ' << i.msv << ' ' << i.hoten << ' ' << i.lop << ' ' << i.email << ' ' << i.doanhnghiep << endl;
        }
    }
}
