/*
Name: KDLInterface.h
Author(s):
Date:
Assignment:
Copyright:
*/

#ifndef KDLINTERFACE_H_
#define KDLINTERFACE_H_

#include <iostream>
#include <iomanip>
using namespace std;

#include <vector>
#include <math.h>
#include <Eigen/Core>

#include <kdl/chain.hpp>
#include <kdl/chainfksolver.hpp>
#include <kdl_parser/kdl_parser.hpp>
#include <kdl/chainfksolverpos_recursive.hpp>
#include <kdl/frames.hpp>
#include <kdl/frames_io.hpp>

class KDLInterface{
private:
    double d2r(double v);
    KDL::Chain chain_dh;
    KDL::Chain chain_urdf;
    int nr_joints;
    KDL::Frame pos;

public:
    KDLInterface();
    ~KDLInterface();
    bool fksolver(double joint_positions[], KDL::Frame &pos);
    bool fksolver(double joint_positions[], KDL::Frame &pos, int link);

};


#endif /* KDLINTERFACE_H_*/
