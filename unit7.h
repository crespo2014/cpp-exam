/*
 * unit7.h
 *
 *  Created on: 3 Dec 2014
 *      Author: lester
 */

#ifndef UNIT7_H_
#define UNIT7_H_



template <class Arg, class Result>
  struct unary_function {
    typedef Arg argument_type;
    typedef Result result_type;
  };
template <class Arg1, class Arg2, class Result>
  struct binary_function {
    typedef Arg1 first_argument_type;
    typedef Arg2 second_argument_type;
    typedef Result result_type;
  };

#endif /* UNIT7_H_ */
