#include <iostream>
#include <bitset>
using namespace std;
int main(){
	int x;
	scanf("%d",&x);
	cout<<bitset<sizeof(x)*8>(x)<<endl;//int占4字节，一个字节8位，最终输出的是32个0或1
	return 0;
}

