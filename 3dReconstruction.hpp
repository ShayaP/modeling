#pragma once

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <fstream>

#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/stitching.hpp"
#include <opencv2/imgproc/imgproc.hpp>

#include "CameraCalib.hpp"

struct CloudPoint {
	Point3d pt;
	vector<int> imgpt_for_img;
	double reprojection_error;
};

//decalre functions:
void processImages(vector<Mat> &images, char* dirName);
Mat_<double> LinearLSTriangulation(Point3d u1, Matx34d P1, Point3d u2, Matx34d P2);
Mat_<double> IterativeLinearLSTriangulation(Point3d u1, Matx34d P1, Point3d u2, Matx34d P2);
double TriangulatePoints(const vector<KeyPoint>& keypoint_img1, 
	const vector<KeyPoint>& keypoint_img2,
	const Mat& K, const Mat& Kinv, 
	const Mat& distanceCoeffs, 
	const Matx34d& P1, const Matx34d& P2,
	vector<CloudPoint>& pointCloud,
	vector<KeyPoint>& correspondingImg1Pt, bool show);
bool DecomposeEssentialMat(Mat_<double>& E, Mat_<double>& R1, Mat_<double>& R2,
	Mat_<double>& t1); 
bool checkRotationMat(Mat_<double>& R1);
bool testTriangulation(const vector<CloudPoint>& pointCloud, const Matx34d& P,
	vector<uchar>& status, bool show);
void transformCloudPoints(vector<Point3d>& points3d, vector<CloudPoint>& cloudPoints);
bool findP2Matrix(Matx34d& P1, Matx34d& P2, const Mat& K, const Mat& distanceCoeffs,
	vector<KeyPoint>& keypoint_img1, vector<KeyPoint>& keypoint_img2,
	Mat_<double> R1, Mat_<double> R2, Mat_<double> t1, bool show);
void useage();