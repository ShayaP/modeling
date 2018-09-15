<p align="center">
  <b>Description</b><br/>
</p>  

This project recreates a 3d scene given a series of images from a calibrated camera using Structure From Motion techniques. The camera's intrinsics must be included in the calibinfo.yml, otherwise a folder with calibration images must be given for manual calibration. if nothing is provided auto calibration will take place but the intrinsics will only be an estimate.<br/>

<p align="center">
  <b>Building/Usage</b><br/>
</p>

Note: this project requires OpenCV, PCL, and SSBA libraries to build.<br/>                                        

mkdir build<br/>
cd build<br/>
cmake ..<br/>
make<br/>

then either:<br/>
./3drecon <image directory><br/>
./3drecon <image directory> <1 for debug info><br/>
./3drecon <image directory> <calibration image path> <1 or 0 for debug info><br/>

<p align="center">
  <b>Examples</b><br/>
</p>
Some examples of reconstructions from the res folder:<br/>

1- testPics (contains 3 images of a russian doll):<br/>
<p align="center">
  <img src="https://raw.githubusercontent.com/ShayaP/3DReconstruction/master/result1.png"/><br/>
  <img src="https://raw.githubusercontent.com/ShayaP/3DReconstruction/master/result2.png"/><br/>
</p>

<p align="center">
  <b>Credits</b><br/>
</p>

* Multiple View Geometry by Hartley and Zisserman<br/>
* Mastering OpenCV with Practical Computer Vision Projects<br/>
