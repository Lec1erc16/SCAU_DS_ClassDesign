#pragma once
#include <functional>

class Timer
{
public:
	Timer()=default;
	~Timer() = default;

	void restart()
	{
		pass_time = 0;
		is_shotted = false;
	}

	void set_wait_time(int time)
	{
		wait_time = time;
	} 

	void set_one_shot(bool flag)
	{
		one_shot = flag;
	}

	void set_pause(bool flag)//设置暂停
	{
		is_pause = flag;
	}

	void set_resume()//恢复
	{
		is_pause = false;
	}

	void set_callback(const std::function<void()>& cb)
	{
		callback = cb;
	}

	void on_update(int delay)
	{
		if (is_pause) return;
		pass_time += delay;
		if (pass_time >= wait_time)
		{
			if (!one_shot || (one_shot && !is_shotted) || callback)
				callback();
			is_shotted = true;
			pass_time = 0;
		}
	}

private:
	int pass_time = 0;//已经过去的时间
	int wait_time = 0;//等待的时间
	bool is_pause = false;//是否暂停
	bool is_shotted = false;//是否触发
	bool one_shot = false;//是否只触发一次
	std::function<void()> callback = nullptr;
};
