#include <tuple>
#include <utility>

template <typename ... T>
class any_of {
private:
  template<typename U, size_t ... Indices>
  bool is_impl(const U& item, const std::tuple<T...>& t, std::index_sequence<Indices...> seq) {
    return ( (item == std::get<Indices>(t)) || ... );
  }

public:
  any_of(T... args) : wrapper(std::make_tuple(args...)) {}

  template <typename U>
  bool is(const U& param) {
    using tuple_type = std::tuple<T...>;
    using Indices = std::make_index_sequence<std::tuple_size<tuple_type>::value>;
    return is_impl(param, wrapper, Indices{});
  }

  const std::tuple <T...> wrapper;
};
