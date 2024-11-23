#include "StartupScene.h"
#include "proj.win32/Constant.h"
#include "proj.win32/AudioPlayer.h"
#include "proj.win32/InitialScene.h"
#include "ui/CocosGUI.h"

USING_NS_CC;

Scene* StartupScene::createScene()
{
  auto scene = Scene::create();
  auto layer = StartupScene::create();
  scene->addChild(layer);
  return scene;
}

// on "init" you need to initialize your instance
bool StartupScene::init()
{
    // ��������
    if ( !Scene::init() )
    {
        return false;
    }

    // ��������
    audioPlayer("../Resources/mp.mp3", true);//δȷ��
/*
    // ���ر���
    const auto screenSize = cocos2d::Director::getInstance()->getVisibleSize();
    const auto background = Sprite::create("../Resources/HelloWorld.png");//δȷ��
    background->setPosition(Vec2(screenSize.width / 2, screenSize.height / 2));
    this->addChild(background);
    
    // ����������
    auto progressBar = ui::LoadingBar::create("../Resources/HelloWorld.png");//δȷ��
    progressBar->setPosition(Vec2(screenSize.width / 2, screenSize.height / 2 + STARTUP_SCENE_LOADINGBAR_OFFSET_Y));
    progressBar->setPercent(0);
    this->addChild(progressBar);

    // ������ǩ����ʾ����
    auto progressLabel = Label::createWithTTF("0%", "../Resources/Fonts/FangZhengZhaoGeYuan.ttf", STARTUP_SCENE_FONT_SIZE);//δȷ��
    progressLabel->setPosition(Vec2(progressBar->getPosition().x - progressBar->getContentSize().width / 2 + STARTUP_SCENE_LOADING_LABEL_OFFSET_X, progressBar->getPosition().y));
    progressLabel->setVisible(false);
    this->addChild(progressLabel);

    // ���½������ͱ�ǩ
    constexpr float interval = STARTUP_SCENE_DURATION / 100.0f; // ÿ 1% ����ʱ��
    for (int i = 0; i <= 100; i++) {
      this->scheduleOnce([progressBar, progressLabel, i](float dt) {
        progressLabel->setVisible(i >= 10);
        progressBar->setPercent(i);
        progressLabel->setString(std::to_string(i) + "%");
        float percentage = progressBar->getPercent() / 100.0f;
        float xPosition = progressBar->getPosition().x - progressBar->getContentSize().width / 2 + progressBar->getContentSize().width * percentage + STARTUP_SCENE_LOADING_LABEL_OFFSET_X;
        progressLabel->setPosition(Vec2(xPosition, progressBar->getPosition().y));
        }, interval * i, "UpdateStartupLoadingBar" + std::to_string(i));
    }
    
    // ���ü�ʱ��
    this->scheduleOnce([](float dt) {
      auto transition = TransitionFade::create(SCENE_TRANSITION_DURATION, InitialScene::createScene(), Color3B::WHITE);
      Director::getInstance()->replaceScene(transition);
      }, STARTUP_SCENE_DURATION + SCENE_TRANSITION_DURATION, "StartupSceneToInitialScene");
*/
    return true;
}