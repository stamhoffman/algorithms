template <class Conteiner, typename T>
T SearchNumber(Conteiner conteiner, int N) {
  auto S = std::accumulate(conteiner.begin(), conteiner.end(), 0);
  auto K = N - 1;
  auto num = (K + 1) * (K + 2) / 2 - S;
  return num;
}

template <class Conteiner, typename T>
size_t Count(Conteiner conteiner, int number) {
  T count = 0;
  for (const auto &unit : conteiner) {
    if (unit == number) {
      count += 1;
    }
  }
  return static_cast<size_t>(count);
}

template <class Conteiner, typename T>
std::pair<T, T> MinMax(Conteiner conteiner) {
  T min = *conteiner.begin();
  T max = *conteiner.begin();
  for (const auto &unit : conteiner) {
    if (unit < min) {
      min = unit;
    }
    if (unit > max) {
      if (unit > max) {
        max = unit;
      }
    }
  }
  return {min, max};
}

