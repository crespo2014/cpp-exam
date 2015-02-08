Which construction/keywords can be used to define template type parameters? Choose all correct answers:

template<static T>
Pocket<T>::Pocket(T v):_v(v) {}
template<typedef T>
Pocket<T>::Pocket(T v):_v(v) {}
template<typename T>
Pocket<T>::Pocket(T v):_v(v) {}
template<class T>
Pocket<T>::Pocket(T v):_v(v) {}
template<volatile T>
Pocket<T>::Pocket(T v):_v(v) {}

/*
Select correct answers (multiple choice)
with static keyword
none of the above
with class keyword
with volatile keyword
with typename keyword
with typedef keyword
*/
