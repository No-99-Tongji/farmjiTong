#pragma once
#ifndef _STARTUP_SCENE_H_
#define _STARTUP_SCENE_H_

#include "cocos2d.h"

class StartupScene : public cocos2d::Scene {
public:
  // 创建场景
  static Scene* createScene();
  // 初始化场景
  virtual bool init();
  // 实现 StartupScene 类的 create 方法
  CREATE_FUNC(StartupScene);
};
#endif // !_STARTUP_SCENE_H_