#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& a) {
    //Implement statistics here
	Stats.max = *max_element(a.begin(), a.end());
	Stats.min = *min_element(a.begin(), a.end());
	
}
