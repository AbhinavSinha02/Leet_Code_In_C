long long maxEnergyBoost(int* energyDrinkA, int energyDrinkASize, int* energyDrinkB, int energyDrinkBSize) {
   int n=energyDrinkBSize;
    long dpA[n];
    long dpB[n];
    dpA[0]=energyDrinkA[0];
    dpB[0]=energyDrinkB[0];

    for(int i=1; i<n ; i++){
        dpA[i]=(dpA[i-1]+energyDrinkA[i]> dpB[i-1])?dpA[i-1]+energyDrinkA[i]:dpB[i-1];
        dpB[i]=(dpB[i-1]+energyDrinkB[i]> dpA[i-1])?dpB[i-1]+energyDrinkB[i]:dpA[i-1];
    }

    return dpA[n-1]>dpB[n-1]?dpA[n-1]:dpB[n-1];
}
