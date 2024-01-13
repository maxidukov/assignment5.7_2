#include <iostream>
#include <list>
#include <functional> //std::greater, unnecessary for Linux

int main() {
  std::cout << "[IN]: " << std::endl;
  int num{};
  std::cin>>num;
  std::list<int> list;
  int elem{};
  while(num--){
    std::cin >> elem;
    list.push_back(elem);
  }
  list.sort(std::greater<int>());
  list.unique();
  std::cout << "[OUT]: " << std::endl;
  for(const auto& el:list){
    std::cout << el << std::endl;
  }
}
