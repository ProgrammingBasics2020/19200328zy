#include <iostream>
#include <bitset>
using namespace std;
int main(){
	int x;
	scanf("%d",&x);
	cout<<bitset<sizeof(x)*8>(x)<<endl;//intռ4�ֽڣ�һ���ֽ�8λ�������������32��0��1
	return 0;
}

