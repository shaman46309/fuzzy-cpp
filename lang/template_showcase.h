namespace showcase {

template <class Arg1, class Arg2, class Result>
struct binary_function
{
    typedef Arg1   first_argument_type;
    typedef Arg2   second_argument_type;
    typedef Result result_type;
};

template <class T> // <class T=void> in C++14
struct plus : binary_function<T, T, T>
{
    T operator()(const T& __x, const T& __y) const {
        return __x + __y;
    }
};
}
