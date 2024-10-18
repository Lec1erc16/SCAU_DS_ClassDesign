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

	void set_pause(bool flag)//������ͣ
	{
		is_pause = flag;
	}

	void set_resume()//�ָ�
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
	int pass_time = 0;//�Ѿ���ȥ��ʱ��
	int wait_time = 0;//�ȴ���ʱ��
	bool is_pause = false;//�Ƿ���ͣ
	bool is_shotted = false;//�Ƿ񴥷�
	bool one_shot = false;//�Ƿ�ֻ����һ��
	std::function<void()> callback = nullptr;
};
