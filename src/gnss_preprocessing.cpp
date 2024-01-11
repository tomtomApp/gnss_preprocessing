#include <ros/ros.h>
#include "gnss_preprocessing_core.hpp"
//#include "gnss_preprocessing_component.hpp"

int main(int argc, char**argv)
{
    ros::init(argc, argv, "gnss_preprocessing");
    //ros::NodeHandle n;

    // for utbm_robocar_dataset_20190131_noimage.bag
    // Init gps position(latitude, longitude)
    //double lat0 = 36.0828625;
    double lat0 = 35.6944632;
    //double lon0 = 140.0769904;
    double lon0 = 139.4537385;
    double hig0 = 0.0;

    //GnssPreprocessingCore gnss_preprocessing_core(n, lat0, lon0, hig0);
    GnssPreprocessingCore gnss_preprocessing_core(lat0, lon0, hig0);
    //GnssPreprocessingComponent gnss_preprocessing_component(lat0, lon0, hig0);

	while(ros::ok()){
        ros::spinOnce();
	}

    return 0;
}
