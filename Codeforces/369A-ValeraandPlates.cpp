/*
	SubmissionId	:	5295386
	ContestId	:	369
	Index	:	A
	ProblemName	:	Valera and Plates
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<fstream>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
#define X first
#define Y second
#define pb push_back
#define SQR(x) ((x) * (x))
#define SZ(x) ((int)((x).size()))
#define ALL(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << " = " << x << endl
#define FOREACH(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define FOR(i, a, n) for(__typeof(n) i = (a); i <= (n); i++)
#define FORD(i, n, a) for(__typeof(n) i = (n); i >= (a); i--)
#define INF (1000 * 1000 * 1000)
#define MAXN 100010

int n, m, k, ans;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	FOR (i, 1, n)
	{
		int a;
		cin >> a;
		if (a == 1)
		{
			if (m <= 0)
				ans++;
			else
				m--;
		}
		else
		{
			if (k <= 0)
			{
				if (m <= 0)
					ans++;
				else
					m--;
			}
			else
				k--;
		}
	}
	cout << ans << endl;
	return 0;
}