//
/*
 * Gearsystem - Sega Master System / Game Gear Emulator
 * Copyright (C) 2013  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#ifndef GD_VIDEOSETTINGS_H_
#define GD_VIDEOSETTINGS_H_

#include <QSettings>
#include "ui_VideoSettings.h"

class GLFrame;
class Emulator;
class QColorDialog;

class VideoSettings : public QDialog
{
    Q_OBJECT

public:
    VideoSettings(GLFrame* gl_frame, Emulator* emulator);
    ~VideoSettings();
    void SaveSettings(QSettings& settings);
    void LoadSettings(QSettings& settings);

public slots:
    void PressedOK();
    void PressedCancel();

private:
    Ui::VideoSettings widget;
    Emulator* emulator_;
    GLFrame* gl_frame_;
};

#endif // GD_VIDEOSETTINGS_H_
