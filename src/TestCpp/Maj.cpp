// Maj.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define GLOG_NO_ABBREVIATED_SEVERITIES 0
#include <iostream>
#include <gflags/gflags.h>
#include <glog/logging.h>
#include "Assistant.h"

int main()
{

	google::InitGoogleLogging("AABB");
	//FLAGS_logtostdout = false;
	FLAGS_alsologtostderr = true;
	//FLAGS_logtostderr = true;
	FLAGS_stderrthreshold = google::GLOG_WARNING;
	FLAGS_colorlogtostdout = true;
	FLAGS_colorlogtostderr = true;

	LOG(INFO) << "Hello World!\n";
	google::ShutdownGoogleLogging();
}


