#pragma once

class Timer
{
public:
	Timer()=default;
	~Timer() = default;

private:
	int pass_time = 0;//已经过去的时间
	int wait_time = 0;//等待的时间
	bool is_pause = false;//是否暂停
	bool is_shotted = false;//是否触发
	bool one_shot = false;//是否只触发一次
};
