#include<iostream>
#include<vector>
#include<algorithm>
void print(int i)
{
	std::cout << i*i << std::endl;
}

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);

    for_each(v.begin(), v.end(), print);
   
}
