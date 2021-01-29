#include "stats.h"
#include <math.h>

Stats Statistics::ComputeStatistics(const std::vector<double>& a) {
    //Implement statistics here
	double sum = 0.0;
	int vecSize;
	Stats.maximum = *max_element(a.begin(), a.end());
	Stats.minimum = *min_element(a.begin(), a.end());
    vecSize = a.size();
	if(vecSize != 0)
	{
		for ( int x : a ) sum += x;  	
		Stats.average = sum/vecSize;	
    }
	else{
		Stats.average = NAN;
	}
}
