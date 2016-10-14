#include <iostream>
#include <unistd.h>

int main(void)
{ 
  int number;
  std::cout<<"the Pid of this process is:"<<getpid() <<std::endl;
  std::cin>>number;
  return 0;
}
