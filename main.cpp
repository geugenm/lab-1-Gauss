#include "Headers/RelativeError.h"

int main() {
    Matrix initialMatrix(3, 4);
    initialMatrix.ReadFromFile("../matrix.txt");
    initialMatrix.Print();

    GaussMatrix solvedGaussMatrix(initialMatrix);
    solvedGaussMatrix.Print();

    InconsistencyVector inconsistencyVector(solvedGaussMatrix, initialMatrix);
    inconsistencyVector.Print();

    RelativeError relativeError(inconsistencyVector, initialMatrix);
    relativeError.Print();

    return 0;
}