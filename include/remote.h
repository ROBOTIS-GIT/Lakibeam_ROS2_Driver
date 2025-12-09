#ifndef __REMOTE_H__
#define __REMOTE_H__

#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <rclcpp/rclcpp.hpp>

int sensor_config(rclcpp::Node::SharedPtr node_handle, std::string sensor_ipaddr, std::string parameter, std::string value);
int get_telemetry_data(rclcpp::Node::SharedPtr node_handle, std::string sensor_ipaddr);


#endif
