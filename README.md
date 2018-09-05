                                            Description

This project recreates a 3d scene given a series of images from a calibrated camera using Structure From Motion techniques. The camera's intrinsics must be included in the calibinfo.yml, otherwise a folder with calibration images must be given for manual calibration. if nothing is provided auto calibration will take place but the intrinsics will only be an estimate.


                                            Building/Usage

Note: this project requires OpenCV, PCL, and SSBA libraries to build.                                            

mkdir build
cd build
cmake ..
make

then either:
./3drecon <image directory>
./3drecon <image directory> <1 for debug info>
./3drecon <image directory> <calibration image path> <1 or 0 for debug info>

                                            Credit

Multiple View Geometry by Hartley and Zisserman
Mastering OpenCV with Practical Computer Vision Projects
