//
//  coronasurveysSNSampler.hpp
//  snap-xcode
//
//  Created by Davide Frey on 21/07/2020.
//  Copyright © 2020 Davide Frey. All rights reserved.
//

#ifndef socialNetworkSimulator_hpp
#define socialNetworkSimulator_hpp

#include <stdio.h>

#include <iostream>
#include <filesystem>
#include "Snap.h"
#include "shash.h"
#include "abstractGraphBasedSurveySampler.hpp"
using namespace std;
using namespace TSnap;

class SocialGraphSurveySampler: public AbstractGraphBasedSurveySampler {
private:
    string topologyFile;
public:
    SocialGraphSurveySampler(int fwdFanout, int rndSeed, int reach, double ansProb, double fwdProb, string filename);
    void initializeGraph();
    
};

#endif /* coronasurveysSNSampler_hpp */
