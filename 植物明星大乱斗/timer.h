#pragma once

class Timer
{
public:
	Timer()=default;
	~Timer() = default;

private:
	int pass_time = 0;//�Ѿ���ȥ��ʱ��
	int wait_time = 0;//�ȴ���ʱ��
	bool is_pause = false;//�Ƿ���ͣ
	bool is_shotted = false;//�Ƿ񴥷�
	bool one_shot = false;//�Ƿ�ֻ����һ��
};
