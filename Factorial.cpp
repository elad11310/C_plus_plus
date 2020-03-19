//
// Created by elad on 19/03/2020.
//

#include "Factorial.h"
#include "doctest.h"

int fact(int n){
    return n<=1?1 : fact((n-1))*n;
}

TEST_CASE("Factorials of small numbers:"){
    CHECK(fact(0)==1);
    CHECK(fact(1)==1);

}
