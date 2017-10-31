#include "dubins_curve/dubins.hpp"
#include <stdio.h>
#include <iostream>
#include <cmath>

int main()
{
    std::vector<double> q0 = {0, 0, 0};
    std::vector<double> q1 = {5, 5, M_PI/2};
    double len = DubinsSteer::GetDubinsCurveLength(q0, q1, 4.99);
    
    DubinsSteer::SteerData dubins_steer_data;
    dubins_steer_data = DubinsSteer::GetDubinsTrajectoryPointWise(q0, q1, 4.99, 0.1);
    std::vector<std::vector<double>> test_traj_point_wise = dubins_steer_data.traj_point_wise;
    std::vector<double> test_lens_map = dubins_steer_data.traj_len_map;
    std::cout << "Length:  " << dubins_steer_data.traj_length << std::endl;
	for (int i = 0; i < test_traj_point_wise.size(); i++) {
		std::cout << "piece_wise " << i << ": x: " << test_traj_point_wise[i][0] << ", y: " << test_traj_point_wise[i][1] << ", len: " << test_lens_map[i] << std::endl; 
	}
    return 0;
}
