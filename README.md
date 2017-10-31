# Dubins Curves

This software finds the shortest paths between configurations for the Dubins' car model, the forward only car-like vehicle with a constrained turning radius.

# Examples

The following code demos how to generate a sequence of points along the shortest path between a pair of configuration (x, y, theta).


```cpp
    #include "dubins_curve/dubins.h"
    #include <iostream>

    int main()
    {
        std::vector<double> q0 = {0, 0, 0};
        std::vector<double> q1 = {5, 5, 3.14159/2};
        DubinsSteer::SteerData dubins_steer_data;
        dubins_steer_data = DubinsSteer::GetDubinsTrajectoryPointWise(q0, q1, 4.99, 0.1);

        std::cout << "Length of the path:  " << dubins_steer_data.traj_length << std::endl;
        std::cout << "Piece wise sequence: x, y, theta, length" << std::endl;
        for (int i = 0; i < dubins_steer_data.traj_point_wise.size(); i++) {
            std::cout << "x: " << dubins_steer_data.traj_point_wise[i][0] << 
            ", y: " << dubins_steer_data.traj_point_wise[i][1] << 
            ", theta: " << dubins_steer_data.traj_point_wise[i][2] <<
            ", length: " << dubins_steer_data.traj_len_map[i] << std::endl; 
        }
        return 0;
    }
```

