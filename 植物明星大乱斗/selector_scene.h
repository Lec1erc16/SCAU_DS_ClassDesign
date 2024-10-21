#ifndef _SELECTOR_SCENE_H_
#define _SELECTOR_SCENE_H_

#include <iostream>
#include"animation.h"
#include "scene.h"
#include "scene_manager.h"

extern IMAGE img_VS;													// VS ÒÕÊõ×ÖÍ¼Æ¬
extern IMAGE img_1P;													// 1P ÎÄ±¾Í¼Æ¬
extern IMAGE img_2P;													// 2P ÎÄ±¾Í¼Æ¬
extern IMAGE img_1P_desc;												// 1P ¼üÎ»ÃèÊöÍ¼Æ¬
extern IMAGE img_2P_desc;												// 2P ¼üÎ»ÃèÊöÍ¼Æ¬
extern IMAGE img_gravestone_left;										// ³¯Ïò×óµÄÄ¹±®Í¼Æ¬
extern IMAGE img_gravestone_right; 									// ³¯ÏòÓÒµÄÄ¹±®Í¼Æ¬
extern IMAGE img_selector_tip; 										// Ñ¡½Ç½çÃæÌáÊ¾ÎÄ±¾Í¼Æ¬
extern IMAGE img_selector_background;									// Ñ¡½Ç½çÃæ±³¾°Í¼Æ¬
extern IMAGE img_1P_selector_btn_idle_left; 							// 1P Ïò×óÑ¡Ôñ°´Å¥Ä¬ÈÏ×´Ì¬Í¼Æ¬
extern IMAGE img_1P_selector_btn_idle_right;							// 1P ÏòÓÒÑ¡Ôñ°´Å¥Ä¬ÈÏ×´Ì¬Í¼Æ¬
extern IMAGE img_1P_selector_btn_down_left;							// 1P Ïò×óÑ¡Ôñ°´Å¥°´ÏÂ×´Ì¬Í¼Æ¬
extern IMAGE img_1P_selector_btn_down_right;							// 1P ÏòÓÒÑ¡Ôñ°´Å¥°´ÏÂ×´Ì¬Í¼Æ¬
extern IMAGE img_2P_selector_btn_idle_left;							// 2P Ïò×óÑ¡Ôñ°´Å¥Ä¬ÈÏ×´Ì¬Í¼Æ¬
extern IMAGE img_2P_selector_btn_idle_right;							// 2P ÏòÓÒÑ¡Ôñ°´Å¥Ä¬ÈÏ×´Ì¬Í¼Æ¬
extern IMAGE img_2P_selector_btn_down_left;							// 2P Ïò×óÑ¡Ôñ°´Å¥°´ÏÂ×´Ì¬Í¼Æ¬
extern IMAGE img_2P_selector_btn_down_right;							// 2P ÏòÓÒÑ¡Ôñ°´Å¥°´ÏÂ×´Ì¬Í¼Æ¬
extern IMAGE img_peashooter_selector_background_left;					// Ñ¡½Ç½çÃæ³¯Ïò×óµÄÍñ¶ºÉäÊÖ±³¾°Í¼Æ¬
extern IMAGE img_peashooter_selector_background_right;					// Ñ¡½Ç½çÃæ³¯ÏòÓÒµÄÍñ¶ºÉäÊÖ±³¾°Í¼Æ¬
extern IMAGE img_sunflower_selector_background_left;					// Ñ¡½Ç½çÃæ³¯Ïò×óµÄÁúÈÕ¿û±³¾°Í¼Æ¬
extern IMAGE img_sunflower_selector_background_right;					// Ñ¡½Ç½çÃæ³¯ÏòÓÒµÄÁúÈÕ¿û±³¾°Í¼Æ¬
extern Atlas atlas_peashooter_idle_right;
extern Atlas atlas_sunflower_idle_right;
extern IMAGE img_avatar_peashooter;										// Íñ¶ºÉäÊÖÍ·ÏñÍ¼Æ¬
extern IMAGE img_avatar_sunflower;										// ÁúÈÕ¿ûÍ·ÏñÍ¼Æ¬

extern SceneManager scene_manager;

class SelectorScene :public Scene
{
public:
	SelectorScene() = default;
	~SelectorScene() = default;

private:
	POINT pos_img_VS = { 0 };					// VS ÒÕÊõ×ÖÍ¼Æ¬Î»ÖÃ
	POINT pos_img_tip = { 0 };					// Ñ¡½Ç½çÃæÌáÊ¾ÎÄ±¾Í¼Æ¬Î»ÖÃ
	POINT pos_img_1P = { 0 };					// 1P ÎÄ±¾Í¼Æ¬Î»ÖÃ
	POINT pos_img_2P = { 0 };					// 2P ÎÄ±¾Í¼Æ¬Î»ÖÃ
	POINT pos_img_1P_desc = { 0 };				// 1P ¼üÎ»ÃèÊöÍ¼Æ¬Î»ÖÃ
	POINT pos_img_2P_desc = { 0 };				// 2P ¼üÎ»ÃèÊöÍ¼Æ¬Î»ÖÃ
	POINT pos_img_1P_name = { 0 };				// 1p ½ÇÉ«ÐÕÃûÎÄ±¾Í¼Æ¬Î»ÖÃ
	POINT pos_img_2P_name = { 0 };				// 2p ½ÇÉ«ÐÕÃûÎÄ±¾Í¼Æ¬Î»ÖÃ
	POINT pos_animation_1P = { 0 };				// 1p ½ÇÉ«¶¯»­Î»ÖÃ
	POINT pos_animation_2P = { 0 };				// 2p ½ÇÉ«¶¯»­Î»ÖÃ
	POINT pos_img_1P_gravestone = { 0 };		// 1p Ä¹±®Í¼Æ¬Î»ÖÃ
	POINT pos_img_2P_gravestone = { 0 };		// 2p Ä¹±®Í¼Æ¬Î»ÖÃ
	POINT pos_1P_selector_btn_left = { 0 };		// 1p Ïò×óÑ¡Ôñ°´Å¥Î»ÖÃ
	POINT pos_1P_selector_btn_right = { 0 };	// 1p ÏòÓÒÑ¡Ôñ°´Å¥Î»ÖÃ
	POINT pos_2P_selector_btn_left = { 0 };		// 2p Ïò×óÑ¡Ôñ°´Å¥Î»ÖÃ
	POINT pos_2P_selector_btn_right = { 0 };	// 2p ÏòÓÒÑ¡Ôñ°´Å¥Î»ÖÃ

	Animation animation_peashooter;				// Íñ¶ºÉäÊÖ¶¯»­
	Animation animation_sunflower;				// ÁúÈÕ¿û¶¯»­

public:
	void on_enter()
	{
		animation_peashooter.set_atlas(&atlas_peashooter_idle_right);

		animation_sunflower.set_atlas(&atlas_sunflower_idle_right);

		animation_peashooter.set_interval(100);

		animation_sunflower.set_interval(100);



		static const int OFFSET_X = 50;

		pos_img_VS.x = (getwidth() - img_VS.getwidth()) / 2;

		pos_img_VS.y = (getheight() - img_VS.getheight()) / 2;

		pos_img_tip.x = (getwidth() - img_selector_tip.getwidth()) / 2;

		pos_img_tip.y = getheight() - 125;

		pos_img_1P.x = (getwidth() / 2 - img_1P.getwidth()) / 2 - OFFSET_X;

		pos_img_1P.y = 35;

		pos_img_2P.x = getwidth() / 2 + (getwidth() / 2 - img_2P.getwidth()) / 2 + OFFSET_X;

		pos_img_2P.y = pos_img_1P.y;

		pos_img_1P_desc.x = (getwidth() / 2 - img_1P_desc.getwidth()) / 2 - OFFSET_X;

		pos_img_1P_desc.y = getheight() - 150;

		pos_img_2P_desc.x = getwidth() / 2 + (getwidth() / 2 - img_2P_desc.getwidth()) / 2 + OFFSET_X;

		pos_img_2P_desc.y = pos_img_1P_desc.y;

		pos_img_1P_gravestone.x = (getwidth() / 2 - img_gravestone_right.getwidth()) / 2 - OFFSET_X;

		pos_img_1P_gravestone.y = pos_img_1P.y + img_1P.getheight() + 35;

		pos_img_2P_gravestone.x = getwidth() / 2 + (getwidth() / 2 - img_gravestone_left.getwidth()) / 2 + OFFSET_X;

		pos_img_2P_gravestone.y = pos_img_1P_gravestone.y;

		pos_animation_1P.x = (getwidth() / 2 - atlas_peashooter_idle_right.get_image(0)->getwidth()) / 2 - OFFSET_X;

		pos_animation_1P.y = pos_img_1P_gravestone.y + 80;

		pos_animation_2P.x = getwidth() / 2 + (getwidth() / 2 - atlas_peashooter_idle_right.get_image(0)->getwidth()) / 2 + OFFSET_X;

		pos_animation_2P.y = pos_animation_1P.y;

		pos_img_1P_name.y = pos_animation_1P.y + 155;

		pos_img_2P_name.y = pos_img_1P_name.y;

		pos_1P_selector_btn_left.x = pos_img_1P_gravestone.x - img_1P_selector_btn_idle_left.getwidth();

		pos_1P_selector_btn_left.y = pos_img_1P_gravestone.y + (img_gravestone_right.getheight() - img_1P_selector_btn_idle_left.getheight()) / 2;

		pos_1P_selector_btn_right.x = pos_img_1P_gravestone.x + img_gravestone_right.getwidth();

		pos_1P_selector_btn_right.y = pos_1P_selector_btn_left.y;

		pos_2P_selector_btn_left.x = pos_img_2P_gravestone.x - img_2P_selector_btn_idle_left.getwidth();

		pos_2P_selector_btn_left.y = pos_1P_selector_btn_left.y;

		pos_2P_selector_btn_right.x = pos_img_2P_gravestone.x + img_gravestone_left.getwidth();

		pos_2P_selector_btn_right.y = pos_1P_selector_btn_left.y;
	}
	void on_input(const ExMessage& msg)
	{

	}
	void on_update(int delay)
	{

	}
	void on_draw(const Camera& camera)
	{
		putimage(0, 0, &img_selector_background);
		putimage_alpha(pos_img_VS.x, pos_img_VS.y, &img_VS);
		putimage_alpha(pos_img_1P.x, pos_img_1P.y, &img_1P);
		putimage_alpha(pos_img_2P.x, pos_img_2P.y, &img_2P);
		putimage_alpha(pos_img_1P_gravestone.x, pos_img_1P_gravestone.y, &img_gravestone_right);
		putimage_alpha(pos_img_2P_gravestone.x, pos_img_2P_gravestone.y, &img_gravestone_left);
		putimage_alpha(pos_img_1P_desc.x, pos_img_1P_desc.y, &img_1P_desc);
		putimage_alpha(pos_img_2P_desc.x, pos_img_2P_desc.y, &img_2P_desc);
		putimage_alpha(pos_img_tip.x, pos_img_tip.y, &img_selector_tip);
	}

	void on_exit()
	{

	}
};

#endif // !_SELECTOR_SCENE_H_
