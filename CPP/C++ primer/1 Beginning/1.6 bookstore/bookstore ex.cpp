#include<iostream>
#include"Sales_item.hpp"
int main()
{
    Sales_item total;
    if(std::cin>>total)
    {
        Sales_item trans;//先定义一个再定义一个来解决第二组数字
        while(std::cin>>trans)
        {
            if(total.isbn() == trans.isbn())
            {
                total +=trans;                
            }
            else
            {
                std::cout<<total<<std::endl;
                total = trans;
            }
        }
        std::cout<<total<<std::endl;
    }
    else
    {
        std::cerr<<"No data!?"<<std::endl;
        return -1;
    }
    return 0;
}