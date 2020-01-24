template <class Conteiner, typename T>
T SearchNumber(Conteiner conteiner, int N) {
  auto S = std::accumulate(conteiner.begin(), conteiner.end(), 0);
  auto K = N - 1;
  auto num = (K + 1) * (K + 2) / 2 - S;
  return num;
}
