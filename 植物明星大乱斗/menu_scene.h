#ifndef _MENU_SCENE_H_
#define _MENU_SCENE_H_

#include <iostream>
#include "scene.h"
#include "scene_manager.h"
#include "animation.h"

extern SceneManager scene_manager;
extern Atlas atlas_peashooter_run_right;

class MenuScene :public Scene
{
public:
	MenuScene() = default;
	~MenuScene() = default;

	void on_enter()
	{
		/*std::cout << "#����˵�����#" << std::endl;*/
		animation_peashooter_run_right.set_atlas(&atlas_peashooter_run_right);
		animation_peashooter_run_right.set_interval(75);
		animation_peashooter_run_right.set_loop(true);
	}
	void on_input(const ExMessage& msg)
	{
		if (msg.message == WM_KEYDOWN)
		{
			scene_manager.switch_to(SceneManager::SceneType::GAME);
		}
	}
	void on_update(int delay)
	{
		/*std::cout << "#���²˵�����#" << std::endl;*/
		animation_peashooter_run_right.on_update(delay);
	}
	void on_draw()
	{
		/*outtextxy(0, 0, _T("���˵�����"));*/
		animation_peashooter_run_right.on_draw(100, 100);
	}

	void on_exit()
	{
		std::cout << "#�˳��˵�����#" << std::endl;
	}
private:
	Animation animation_peashooter_run_right;
};

#endif // !_MENU_SCENE_H_
