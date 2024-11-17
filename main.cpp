#include <iostream>
#include <vector>
template<typename T>
void print (T arg){
    std::cout << arg << '\n'; 
}

template<typename T, typename... Types>
void print (T firstArg,Types... args){
    std::cout << firstArg << std::endl; 
    print(args...); 
}
template<typename... T>
auto foldSum (T... s) {
return (... - s); 
}
template<typename... T>
auto foldSub (T... s) {
return  (s - ...); 
}
template<typename T, typename... Types>
void print (T firstArg, Types... args)
{
std::cout << firstArg << std::endl;
if (sizeof...(args) > 0) { 
    print(args...); 
    }
}


int main(){
    std::string s("world");
    print (10,12,13,14,15);
    int a = foldSum(1,2,3,4,5,6);
    int b = foldSub(1,2,3,4,5,6);
    std::cout << a;
    std::cout << b;
}
