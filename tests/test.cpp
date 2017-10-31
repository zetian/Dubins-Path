#include "dubins_path/dubins_path.h"
#include <iostream>

int main()
{
    std::vector<double> q0 = {0, 0, 0};
    std::vector<double> q1 = {5, 5, 3.14159/2};
    DubinsPath::PathData dubins_path_data;
    dubins_path_data = DubinsPath::GetDubinsPathPointWise(q0, q1, 4.99, 0.1);

    std::cout << "Length of the path:  " << dubins_path_data.traj_length << std::endl;
    std::cout << "Piece wise sequence: x, y, theta, length" << std::endl;
	for (int i = 0; i < dubins_path_data.traj_point_wise.size(); i++) {
        std::cout << "x: " << dubins_path_data.traj_point_wise[i][0] << 
        ", y: " << dubins_path_data.traj_point_wise[i][1] << 
        ", theta: " << dubins_path_data.traj_point_wise[i][2] <<
        ", length: " << dubins_path_data.traj_len_map[i] << std::endl; 
	}
    return 0;
}
