# 3D Mapping with RTAB-Map SLAM

RTABMap-based 3D spatial mapping in sparse-featured environments — specifically tested in Northeastern University's underground tunnel system, where traditional feature-matching SLAM struggles. Built on ROS 2 Humble with real-time RViz2 visualization.

## Motivation

Standard visual SLAM relies on rich texture and distinctive features. Tunnels and corridors with uniform surfaces cause feature-matching failures and loop closure drift. This project evaluates RTAB-Map's graph-based approach in exactly these conditions.

## Tech Stack

- **SLAM**: RTAB-Map 0.21.9 (graph-based, appearance-based loop closure)
- **ROS**: ROS 2 Humble
- **Sensors**: Stereo Labs ZED Mini, Intel RealSense D435i (RGB-D / stereo)
- **Optimization**: G2O, GTSAM, TORO
- **Visualization**: RViz2, rqt_graph
- **Data recording**: ROSbag

## Key Capabilities

- Real-time 3D map building with loop closure detection
- 2D and 3D map export
- Multi-sensor support (stereo, RGB-D, lidar)
- Handheld and stationary deployment modes

## Workspace Structure

```
rtab_ws/
└── build/
    └── rtabmap/
        └── bin/
            ├── rtabmap                    # Main SLAM node
            ├── rtabmap-rgbd_mapping       # RGB-D mapping
            ├── rtabmap-lidar_mapping      # LiDAR mapping
            └── rtabmap-databaseViewer     # Map inspection
```

## Setup

```bash
# Install ROS 2 Humble and RTAB-Map
sudo apt install ros-humble-rtabmap-ros

# Clone and build
git clone https://github.com/shrirag10/3D-Mapping-RTAB-SLAM.git
cd 3D-Mapping-RTAB-SLAM/rtab_ws
colcon build
source install/setup.bash
```

## Usage

```bash
# RGB-D mapping (RealSense D435i)
ros2 launch rtabmap_ros rtabmap.launch.py

# Record a mapping session
ros2 bag record -o tunnel_map /camera/depth/image_raw /camera/color/image_raw /tf

# Visualize map database
rtabmap-databaseViewer ~/.ros/rtabmap.db
```

## Notes

- RTAB-Map's appearance-based loop closure (bag-of-words) is more robust than geometric-only methods in texture-poor environments
- G2O post-optimization recommended for final map export
- Mounting stability significantly affects map quality

## License

MIT
