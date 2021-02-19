#include <vector>
#include <assert.h>
#include "matrix.h"

void Matrix::reduceCol(const int& col)
{
    //col muse be in bounds, and matrice must not be empty
    assert(col >= 0)
    assert(col < matrice.size())
    assert(!matrice.empty())


    //getting the pivot point from input Col
    const auto pivotNum = matrice[0][col];


    //TODO:iterate through the matrice
    //divide only the input col with the pivotNum
    //transforming the pivot location to 1
    for(auto row = 0; row < matrice.size(); ++row)
    {
        //using at() instead of operator[] to avoid undefined behavior
        //TODO: avoid case that 0 / num
        try{
            (matrice.at(row).at(col) == 0 ) ? : matrice.at(row).at(col) /= pivotNum;
        }
        catch(const auto& e)
        {
            //access out of bound
            throw logic_error("access index location is out of bound")
        }
    }


    //since the pivot number always start at index row 0 and fixed col, turns the remaining row in the col to 0
    for(auto row = 1; row < matrice.size(); ++row)
    {
        matrice.at(i).at(col) = 0;
    }

}