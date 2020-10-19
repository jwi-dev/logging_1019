
#include "logfile.h"

void getFileInfo(std::string& s) {
    std::time_t t = std::time(nullptr);
    std::tm* time_ptr = std::localtime(&t);

    std::stringstream oss;
    oss << "[";
    oss << time_ptr->tm_year + 1900 << "-";
    oss << std::setw(2) << time_ptr->tm_mon << "-";
    oss << std::setw(2) << time_ptr->tm_mday << ", ";
    oss << std::setw(2) << time_ptr->tm_hour << "]";

    s = oss.str();
}