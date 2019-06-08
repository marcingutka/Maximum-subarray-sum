#include <iostream>
#include <vector>

using namespace std;

int maxSequence(const vector<int>& arr){

  int sum = 0;
  int max = 0;

  for(auto& v:arr)
  {
    sum += v;

    if (sum < 0) sum = 0;
    else if (max < sum) max = sum;
  }

  return max;
}

int main()
{
    std::vector<int> v{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout<<maxSequence(v);
    return 0;
}
