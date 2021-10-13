
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std::literals::string_literals;

int main() {
  size_t constexpr SZ = 10;
  std::cout << "vq\n";
  auto vq = std::vector<int>(SZ);
  std::for_each(vq.begin(), vq.end(), [](auto n) { std::cout << "sorry!\n"; } );
  std::cout << std::string(60, '-') << '\n';

  std::cout << "vs\n";
  std::vector<std::string> vs(SZ);
  std::generate(vs.begin(), vs.end(), []() { return "sorry!\n"s; });
  for (auto & ss : vs) { std::cout << ss; }
  std::cout << std::string(60, '~') << '\n';

  std::cout << "vi\n";
  std::vector<int> vi(SZ);
  std::iota(vi.begin(), vi.end(), 0);
  std::for_each(vi.begin(), vi.end(), [](auto ii) { std::cout << "sorry!\n"; });
  std::cout << std::string(60, '.') << '\n';

  return 0;
}
