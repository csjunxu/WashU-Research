#pragma once
#ifndef PLACE_SCAN_DOOR_DETECTOR_H
#define PLACE_SCAN_DOOR_DETECTOR_H

#include <eigen3/Eigen/Eigen>
#include <etw_utils.hpp>
#include <opencv/cv.hpp>

namespace place {
class DoorDetector {
public:
  DoorDetector();
  void run(const std::vector<Eigen::SparseMatrix<double>> &fpPyramid,
           const std::vector<Eigen::SparseMatrix<double>> &erodedFpPyramid,
           const std::vector<Eigen::MatrixXb> &fpMasks);
  const Eigen::SparseMatrix<char> &getResponse(int level) const;

private:
  std::vector<Eigen::SparseMatrix<char>> responsePyr;
  std::vector<cv::Mat> symbols;
  bool loaded;
  const fs::path name;
};
} // place

#endif // PLACE_SCAN_DOOR_DETECTOR_H
