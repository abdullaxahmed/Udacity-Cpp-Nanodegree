#include <string>

#include "format.h"
#include "linux_parser.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {   
  	int HH = seconds / 3600;
  	int MM = (seconds % 3600) / 60;
  	int SS = seconds % 60;
  	string HH_str = (HH < 10 ? "0" : "") + std::to_string(HH);
    string MM_str = (MM < 10 ? "0" : "") + std::to_string(MM);
    string SS_str = (SS < 10 ? "0" : "") + std::to_string(SS);
    return HH_str + ":" + MM_str + ":" + SS_str;
}