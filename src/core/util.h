//
// Created by smcho on 5/30/13.
// Copyright (c) 2013 ___MPC___. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//



#ifndef __Util_H_
#define __Util_H_

#include <iostream>
#include <list>
#include <algorithm>
namespace bloomier {
    
/**
 * Utility class. All of the methods are static to be used 
 * as static function. 
 */

class Util {
public:
    /**
     * vectorA += vectorB
     * 
     * @param std::vector<T> vectorA
     * @param std::vector<T> vectorB
     */
    template <class T>
    static void addAll(std::vector<T>&, const std::vector<T>);

    /**
     * all the members in map that has vectorA will be removed
     * before: map = {'a':10, 'b':20}, vectorA = [20]
     * after:  map = {'a':10 }
     * 
     * @param std::map<T1, T2> map
     * @param std::vector<T> vectorA
     */
    template <class T1, class T2, class T3>
    static void removeAll(std::map<T1, T2>&, const std::vector<T3>);
    
    /**
     * For all the elements in the arrays:
     * result = result ^ input
     *
     * @param unsigned char result
     * @param unsigned char input
     */
    static void byteArrayXor(unsigned char result[], const unsigned char input[]);
    
    /** 
     * get the "byte" size when given "bit" size
     *  return q//8 + (1 if q % 8 != 0 else 0)
     */ 
    static int getByteSize(int value);
};
}

#endif //__Util_H_
