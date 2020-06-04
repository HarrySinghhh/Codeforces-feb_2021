#include <bits/stdc++.h>
using namespace std; 
 
int main() {
	int n;
	scanf("%d", &n);
 
	pair <int, pair <int, int> > a[n];
 
	int sum = 0, x, y;
	for(int i = 0; i < n; ++i) {
		scanf("%d%d", &x, &y);
		a[i] = make_pair(abs(x)+abs(y), make_pair(x, y));
		if(abs(x) && abs(y)) sum +=6;
		else sum+=4;
	}
 
	sort(a, a+n);
 
	printf("%d\n",sum);
 
	for(int i = 0; i < n; ++i) {
		x = a[i].second.first;
		y = a[i].second.second;
 
		if(abs(x)) printf("1 %d %c\n", abs(x), x>0?'R':'L');
		if(abs(y)) printf("1 %d %c\n", abs(y), y>0?'U':'D');
		printf("2\n");
		if(abs(x)) printf("1 %d %c\n", abs(x), x>0?'L':'R');
		if(abs(y)) printf("1 %d %c\n", abs(y), y>0?'D':'U');
		printf("3\n");
	}
 
	return 0;
}
