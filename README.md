<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/0/09/YouTube_full-color_icon_%282017%29.svg/512px-YouTube_full-color_icon_%282017%29.svg.png" alt="" align="center" width="225" height="150"><h1 align="center">3D Spatial Mapping using RTAB SLAM for sparse featured environments</h1>
<p align="center"><a href="#project-description">Project Description</a> - <a href="#key-features">Key Features</a> - <a href="#technology-stack">Tech Stack</a></p>

<img src="https://repolaunch.vercel.app/assets/img/yt.webp" alt="" align="center" width="auto" height="auto">

## Project Description

Mapping indoor environments can often be challenging, especially in areas with sparse features like long tunnels. However, with the power of RTAB-Map (Real-Time Appearance-Based Mapping), we aimed to create precise 3D maps of such spaces—offering a practical, semi-automated solution for tasks that traditionally relied on manual labor or costly professional services.

This project was conducted in Northeastern University's tunnel system, a complex environment with minimal distinct visual features. Despite these challenges, the RTAB-Map framework successfully generated highly accurate maps, proving its capability even in difficult conditions.

**Why This Project?**

Have you ever needed to calculate how much paint or wallpaper a space needs and struggled with guesswork? High-quality materials can be expensive, and overbuying or underestimating can lead to wasted time and money. With indoor 3D mapping, we bridge this gap, offering:

Accurate space measurements. Real-time visual feedback for map creation. Minimal need for professional intervention.

## Key Features

**Robust SLAM Framework**

*   Utilizes RTAB-Map’s graph-based SLAM for highly accurate real-time mapping.
*   Implements advanced loop closure techniques to minimize drift and improve map quality

**Functionality in Sparse Environments**

*   Designed to work effectively in feature-sparse environments like tunnels or long corridors, where traditional mapping methods often fail.
*   Incorporates Bayesian approaches and feature-based matching for superior loop detection in low-feature scenarios.

**Real-Time Visualization**

*   Seamlessly integrates with RViz2 for on-the-fly visualization of mapping progress, allowing immediate feedback on data collection.

**Versatile Hardware Compatibility**

*   Compatible with RGB-D sensors like Stereo Labs ZED Mini and Intel RealSense.
*   Supports IMU and laser-based systems for increased flexibility in sensor setups.

**Optimized Mapping Output**

*   Produces 2D and 3D maps with graph optimization techniques (G2O, GTSAM, TORO).
*   Easily exportable and storable map data for future reference or comparison with ground truth.

**Stabilized Operation**

*   Innovatively tested with stabilized mounts (e.g., rolling chairs or desks) for smoother and more reliable data acquisition.
*   Adaptable to both handheld and mounted operation based on environmental conditions.

**User-Friendly and Modular**

*   Built on ROS 2 Humble for modularity and scalability, making it accessible to robotics enthusiasts and professionals alike.
*   Open-source and easy to customize for diverse applications.

## Tech Stack

**Hardware:** Stereo Labs ZED Mini Camera, Acer Nitro Laptop, Intel RealSense D435i (optional)

**Software:** ROS 2 Humble, RTAB-Map SDK, ZED SDK, CUDA Toolkit, RViz2

**Graph Optimization:** G2O, GTSAM, TORO

**Visualization**: RViz2, rqt\_graph

**Other**: ROSbag for data storage, loop closure algorithms
