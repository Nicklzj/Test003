#include <string>
#include<iostream>
using namespace std;
int main()
{

std::string str = "Hello, world!\n 1111111111 \n 22222 \n333333";

cout << str << endl;
// 查找换行符的位置


// 如果找到了换行符
size_t pos = str.find('\n');
while (pos!=-1)
{
	if (pos != std::string::npos) {
		// 在换行符的位置删除一个字符，即删除换行符
		str.erase(pos, 1);
	}
	  pos = str.find('\n');
}


// 输出 "Hello, world!"
std::cout << str << std::endl;
return 0;
}

 