#pragma once

#include <QPushButton>
#include "selfdrive/ui/qt/onroad/buttons.h"

#include "selfdrive/ui/sunnypilot/ui.h"

#include "selfdrive/ui/ui.h"

class ExperimentalButtonSP : public ExperimentalButton {
    Q_OBJECT

  public:
    explicit ExperimentalButtonSP(QWidget *parent = 0) : ExperimentalButton(parent) {};
    void updateState(const UIStateSP &s);
};

class OnroadSettingsButton : public QPushButton {
    Q_OBJECT

  public:
    explicit OnroadSettingsButton(QWidget *parent = 0);
    void updateState(const UIStateSP &s);

private:
    void paintEvent(QPaintEvent *event) override;

    QPixmap settings_img;
};


class MapSettingsButton : public QPushButton {
    Q_OBJECT

  public:
    explicit MapSettingsButton(QWidget *parent = 0);

private:
    void paintEvent(QPaintEvent *event) override;

    QPixmap settings_img;
};