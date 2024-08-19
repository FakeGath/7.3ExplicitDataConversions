//library that includes basic commands in c++
#include <iostream>

int main(){

    //Implicit cast will add up the doubles,
    //then turn result into int for assignment

    double x {12.5};
    double y {34.6};

    int sum = x+y;

    std::cout<<"the sum is : "<< sum <<std::endl;

    //Explicit conversion : cast then sum up

    sum = static_cast<int>(x)+static_cast<int>(y);
    std::cout<<"the Explicit conversion sum is : "<< sum <<std::endl;

    //Explicit conversion : sum up and then cast, same as impicit cast

    sum = static_cast<int>(x+y);
    std::cout<<"Sum up and then cast : "<< sum <<std::endl;

    //Old style C-cast


    double PI{3.1416};

    int int_pi=(int)PI;
    std::cout <<"PI: "<<PI<<std::endl;
    std::cout <<"int_pi: "<<int_pi<<std::endl;

    int_pi=static_cast<int>(PI);
    std::cout <<"int_pi static cast: "<<int_pi<<std::endl;
    return 0;
}