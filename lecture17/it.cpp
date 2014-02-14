#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector (5);  // 5 default-constructed ints

  // Iterate forwards, initializing the vector
  std::cout << "forward:";
  int i=0;
  std::vector<int>::iterator it = myvector.begin();
  for (it = myvector.begin(); it!= myvector.end(); ++it) {
    *it = ++i;   // note that it is a pointer to the current object
    std::cout << ' ' << (*it);
  }
  std::cout << std::endl;

  // Iterate backwards
  std::cout << "backward:";
  std::vector<int>::reverse_iterator rit = myvector.rbegin();
  for (rit = myvector.rbegin(); rit!= myvector.rend(); ++rit)
    std::cout << ' ' << (*rit); // note that rit is a pointer to the current object
  std::cout << std::endl;

  return 0;
}
