#include <iostream>
#include <vector>

int main() {
  // create a vector to store int values
  std::vector<int> my_array;

  // add some elements to the vector
  my_array.push_back(10);
  my_array.push_back(20);
  my_array.push_back(30);
  my_array.push_back(2004);

  // print the second element of the array
  std::cout << "The second element is: " << my_array[1] << std::endl;

  // get the size of the vector
  std::cout << "The vector has " << my_array.size() << " elements" << std::endl;

  return 0;
}
