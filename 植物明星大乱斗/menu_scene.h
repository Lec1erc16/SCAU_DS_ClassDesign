#ifndef _MENU_SCENE_H_
#define _MENU_SCENE_H_

#include <iostream>
#include "scene.h"
#include "scene_manager.h"
#include "animation.h"
#include "camera.h"
#include"timer.h"

extern SceneManager scene_manager;
extern Atlas atlas_peashooter_run_right;

class MenuScene :public Scene
{
public:
	MenuScene() = default;
	~MenuScene() = default;

	void on_enter()
	{
		/*std::cout << "#进入菜单界面#" << std::endl;*/
		animation_peashooter_run_right.set_atlas(&atlas_peashooter_run_right);
		animation_peashooter_run_right.set_interval(75);
		animation_peashooter_run_right.set_loop(true);
		timer.set_wait_time(1000);
		timer.set_callback([this]() {
			std::cout << "定时器回调" << std::endl;
			});
	}
	void on_input(const ExMessage& msg)
	{
		if (msg.message == WM_KEYDOWN)
		{
			//scene_manager.switch_to(SceneManager::SceneType::GAME);
			camera.shake(10, 1000);
		}
	}
	void on_update(int delay)
	{
		/*std::cout << "#更新菜单界面#" << std::endl;*/
		timer.on_update(delay);
		camera.on_update(delay);
		animation_peashooter_run_right.on_update(delay);
	}
	void on_draw()
	{
		/*outtextxy(0, 0, _T("主菜单场景"));*/
		const Vector2& pos = camera.get_position();
		animation_peashooter_run_right.on_draw((int)(100-pos.x), (int)(100-pos.y));
	}

	void on_exit()
	{
		std::cout << "#退出菜单界面#" << std::endl;
	}
private:
	Animation animation_peashooter_run_right;
	Camera camera;
	Timer timer;
};

#endif // !_MENU_SCENE_H_
