/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *workArea;
    QLabel *label;
    QLabel *label_2;
    QLabel *x_coordinate;
    QLabel *y_coordinate;
    QPushButton *showAxis;
    QPushButton *gridlines;
    QSpinBox *gridOffset;
    QSpinBox *axisWidth;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *dda_line;
    QPushButton *draw_bressenheim_line;
    QPushButton *draw_polar_circle;
    QSpinBox *circleRadius;
    QLabel *label_5;
    QPushButton *draw_bressenham_circle;
    QLabel *polar_circle_time;
    QLabel *bressenham_circle_time;
    QTextEdit *polartime;
    QTextEdit *bressenham_time;
    QPushButton *draw_polar_ellipse;
    QPushButton *draw_bressenham_ellipse;
    QLabel *polar_circle_time_2;
    QLabel *polar_circle_time_3;
    QTextEdit *polar_ellipse_time;
    QTextEdit *bressenham_ellipse_time;
    QSpinBox *h_radius;
    QSpinBox *v_radius;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *redraw_shape;
    QPushButton *flood_fill;
    QPushButton *draw_polygon;
    QPushButton *boundary_fill;
    QPushButton *fill_by_scanline;
    QPushButton *clear_canvas;
    QSpinBox *along_x;
    QSpinBox *along_y;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *translate;
    QSpinBox *angle;
    QPushButton *rotate;
    QCheckBox *checkBox;
    QSpinBox *shear_x;
    QSpinBox *shear_y;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *apply_shear;
    QPushButton *xaxis_reflect;
    QPushButton *yaxis_reflect;
    QSpinBox *scale_factor_x;
    QSpinBox *scale_factor_y;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *scale;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1241, 861);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        workArea = new QLabel(centralwidget);
        workArea->setObjectName("workArea");
        workArea->setGeometry(QRect(20, 20, 731, 631));
        workArea->setFrameShape(QFrame::Shape::Box);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(770, 20, 91, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(950, 21, 91, 21));
        x_coordinate = new QLabel(centralwidget);
        x_coordinate->setObjectName("x_coordinate");
        x_coordinate->setGeometry(QRect(880, 20, 63, 31));
        x_coordinate->setFrameShape(QFrame::Shape::Box);
        y_coordinate = new QLabel(centralwidget);
        y_coordinate->setObjectName("y_coordinate");
        y_coordinate->setGeometry(QRect(1060, 20, 63, 31));
        y_coordinate->setFrameShape(QFrame::Shape::Box);
        showAxis = new QPushButton(centralwidget);
        showAxis->setObjectName("showAxis");
        showAxis->setGeometry(QRect(770, 70, 83, 29));
        gridlines = new QPushButton(centralwidget);
        gridlines->setObjectName("gridlines");
        gridlines->setGeometry(QRect(850, 70, 111, 29));
        gridOffset = new QSpinBox(centralwidget);
        gridOffset->setObjectName("gridOffset");
        gridOffset->setGeometry(QRect(860, 110, 81, 29));
        gridOffset->setMinimum(0);
        gridOffset->setSingleStep(10);
        axisWidth = new QSpinBox(centralwidget);
        axisWidth->setObjectName("axisWidth");
        axisWidth->setGeometry(QRect(860, 150, 81, 29));
        axisWidth->setMinimum(1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(770, 110, 81, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(770, 160, 81, 20));
        dda_line = new QPushButton(centralwidget);
        dda_line->setObjectName("dda_line");
        dda_line->setGeometry(QRect(960, 70, 111, 24));
        draw_bressenheim_line = new QPushButton(centralwidget);
        draw_bressenheim_line->setObjectName("draw_bressenheim_line");
        draw_bressenheim_line->setGeometry(QRect(940, 110, 151, 24));
        draw_polar_circle = new QPushButton(centralwidget);
        draw_polar_circle->setObjectName("draw_polar_circle");
        draw_polar_circle->setGeometry(QRect(940, 150, 121, 24));
        circleRadius = new QSpinBox(centralwidget);
        circleRadius->setObjectName("circleRadius");
        circleRadius->setGeometry(QRect(860, 200, 91, 25));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(760, 200, 81, 21));
        draw_bressenham_circle = new QPushButton(centralwidget);
        draw_bressenham_circle->setObjectName("draw_bressenham_circle");
        draw_bressenham_circle->setGeometry(QRect(950, 200, 161, 24));
        polar_circle_time = new QLabel(centralwidget);
        polar_circle_time->setObjectName("polar_circle_time");
        polar_circle_time->setGeometry(QRect(770, 240, 121, 21));
        bressenham_circle_time = new QLabel(centralwidget);
        bressenham_circle_time->setObjectName("bressenham_circle_time");
        bressenham_circle_time->setGeometry(QRect(880, 240, 151, 21));
        polartime = new QTextEdit(centralwidget);
        polartime->setObjectName("polartime");
        polartime->setGeometry(QRect(770, 260, 104, 31));
        bressenham_time = new QTextEdit(centralwidget);
        bressenham_time->setObjectName("bressenham_time");
        bressenham_time->setGeometry(QRect(900, 260, 104, 31));
        draw_polar_ellipse = new QPushButton(centralwidget);
        draw_polar_ellipse->setObjectName("draw_polar_ellipse");
        draw_polar_ellipse->setGeometry(QRect(760, 360, 151, 24));
        draw_bressenham_ellipse = new QPushButton(centralwidget);
        draw_bressenham_ellipse->setObjectName("draw_bressenham_ellipse");
        draw_bressenham_ellipse->setGeometry(QRect(910, 360, 151, 24));
        polar_circle_time_2 = new QLabel(centralwidget);
        polar_circle_time_2->setObjectName("polar_circle_time_2");
        polar_circle_time_2->setGeometry(QRect(770, 390, 131, 21));
        polar_circle_time_3 = new QLabel(centralwidget);
        polar_circle_time_3->setObjectName("polar_circle_time_3");
        polar_circle_time_3->setGeometry(QRect(890, 390, 151, 21));
        polar_ellipse_time = new QTextEdit(centralwidget);
        polar_ellipse_time->setObjectName("polar_ellipse_time");
        polar_ellipse_time->setGeometry(QRect(780, 410, 104, 31));
        bressenham_ellipse_time = new QTextEdit(centralwidget);
        bressenham_ellipse_time->setObjectName("bressenham_ellipse_time");
        bressenham_ellipse_time->setGeometry(QRect(900, 410, 104, 31));
        h_radius = new QSpinBox(centralwidget);
        h_radius->setObjectName("h_radius");
        h_radius->setGeometry(QRect(770, 320, 111, 25));
        v_radius = new QSpinBox(centralwidget);
        v_radius->setObjectName("v_radius");
        v_radius->setGeometry(QRect(880, 320, 111, 25));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(780, 300, 121, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(890, 300, 121, 16));
        redraw_shape = new QPushButton(centralwidget);
        redraw_shape->setObjectName("redraw_shape");
        redraw_shape->setGeometry(QRect(930, 460, 151, 24));
        flood_fill = new QPushButton(centralwidget);
        flood_fill->setObjectName("flood_fill");
        flood_fill->setGeometry(QRect(780, 500, 151, 24));
        draw_polygon = new QPushButton(centralwidget);
        draw_polygon->setObjectName("draw_polygon");
        draw_polygon->setGeometry(QRect(780, 460, 151, 24));
        boundary_fill = new QPushButton(centralwidget);
        boundary_fill->setObjectName("boundary_fill");
        boundary_fill->setGeometry(QRect(780, 550, 151, 24));
        fill_by_scanline = new QPushButton(centralwidget);
        fill_by_scanline->setObjectName("fill_by_scanline");
        fill_by_scanline->setGeometry(QRect(780, 580, 151, 24));
        clear_canvas = new QPushButton(centralwidget);
        clear_canvas->setObjectName("clear_canvas");
        clear_canvas->setGeometry(QRect(930, 500, 151, 24));
        along_x = new QSpinBox(centralwidget);
        along_x->setObjectName("along_x");
        along_x->setGeometry(QRect(970, 560, 81, 25));
        along_x->setMinimum(-338);
        along_y = new QSpinBox(centralwidget);
        along_y->setObjectName("along_y");
        along_y->setGeometry(QRect(1080, 560, 81, 25));
        along_y->setMinimum(-338);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(980, 530, 91, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1090, 530, 91, 16));
        translate = new QPushButton(centralwidget);
        translate->setObjectName("translate");
        translate->setGeometry(QRect(1010, 590, 80, 24));
        angle = new QSpinBox(centralwidget);
        angle->setObjectName("angle");
        angle->setGeometry(QRect(810, 620, 81, 25));
        angle->setMinimum(0);
        angle->setMaximum(360);
        rotate = new QPushButton(centralwidget);
        rotate->setObjectName("rotate");
        rotate->setGeometry(QRect(920, 620, 80, 24));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(810, 530, 91, 22));
        shear_x = new QSpinBox(centralwidget);
        shear_x->setObjectName("shear_x");
        shear_x->setGeometry(QRect(1040, 640, 81, 25));
        shear_x->setMinimum(0);
        shear_x->setMaximum(360);
        shear_y = new QSpinBox(centralwidget);
        shear_y->setObjectName("shear_y");
        shear_y->setGeometry(QRect(1140, 640, 81, 25));
        shear_y->setMinimum(0);
        shear_y->setMaximum(360);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1040, 620, 51, 16));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1150, 620, 51, 16));
        apply_shear = new QPushButton(centralwidget);
        apply_shear->setObjectName("apply_shear");
        apply_shear->setGeometry(QRect(1100, 590, 80, 24));
        xaxis_reflect = new QPushButton(centralwidget);
        xaxis_reflect->setObjectName("xaxis_reflect");
        xaxis_reflect->setGeometry(QRect(1090, 110, 81, 24));
        yaxis_reflect = new QPushButton(centralwidget);
        yaxis_reflect->setObjectName("yaxis_reflect");
        yaxis_reflect->setGeometry(QRect(1070, 70, 81, 24));
        scale_factor_x = new QSpinBox(centralwidget);
        scale_factor_x->setObjectName("scale_factor_x");
        scale_factor_x->setGeometry(QRect(1080, 150, 81, 29));
        scale_factor_x->setMinimum(1);
        scale_factor_y = new QSpinBox(centralwidget);
        scale_factor_y->setObjectName("scale_factor_y");
        scale_factor_y->setGeometry(QRect(1120, 210, 81, 29));
        scale_factor_y->setMinimum(1);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1080, 130, 111, 20));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(1120, 190, 111, 20));
        scale = new QPushButton(centralwidget);
        scale->setObjectName("scale");
        scale->setGeometry(QRect(1120, 240, 61, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1241, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        workArea->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "X Coordinate", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y Coordinate", nullptr));
        x_coordinate->setText(QString());
        y_coordinate->setText(QString());
        showAxis->setText(QCoreApplication::translate("MainWindow", "Show Axes", nullptr));
        gridlines->setText(QCoreApplication::translate("MainWindow", "Show Gridlines", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "GridOffset", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Axis Width", nullptr));
        dda_line->setText(QCoreApplication::translate("MainWindow", "draw dda line", nullptr));
        draw_bressenheim_line->setText(QCoreApplication::translate("MainWindow", "draw bessenheim line", nullptr));
        draw_polar_circle->setText(QCoreApplication::translate("MainWindow", "draw polar circle", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Circle radius", nullptr));
        draw_bressenham_circle->setText(QCoreApplication::translate("MainWindow", "draw Bressenham circle", nullptr));
        polar_circle_time->setText(QCoreApplication::translate("MainWindow", "Polar Circle time(ns)", nullptr));
        bressenham_circle_time->setText(QCoreApplication::translate("MainWindow", "Bressenham Circle time(ns)", nullptr));
        draw_polar_ellipse->setText(QCoreApplication::translate("MainWindow", "draw polar ellipse", nullptr));
        draw_bressenham_ellipse->setText(QCoreApplication::translate("MainWindow", "draw Bressenham ellipse", nullptr));
        polar_circle_time_2->setText(QCoreApplication::translate("MainWindow", "Polar ellipse time(ns)", nullptr));
        polar_circle_time_3->setText(QCoreApplication::translate("MainWindow", "Bressenham ellipse time(ns)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Horizontal Radius", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Vertical Radius", nullptr));
        redraw_shape->setText(QCoreApplication::translate("MainWindow", "redraw shape", nullptr));
        flood_fill->setText(QCoreApplication::translate("MainWindow", "Flood fill", nullptr));
        draw_polygon->setText(QCoreApplication::translate("MainWindow", "Draw polygon", nullptr));
        boundary_fill->setText(QCoreApplication::translate("MainWindow", "Bounday fill", nullptr));
        fill_by_scanline->setText(QCoreApplication::translate("MainWindow", "Fill by scanline", nullptr));
        clear_canvas->setText(QCoreApplication::translate("MainWindow", "Clear canvas", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Along x", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Along y", nullptr));
        translate->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        rotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "8-connected", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Shear_x", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Shear_y", nullptr));
        apply_shear->setText(QCoreApplication::translate("MainWindow", "Apply shear", nullptr));
        xaxis_reflect->setText(QCoreApplication::translate("MainWindow", "X-axis-reflect", nullptr));
        yaxis_reflect->setText(QCoreApplication::translate("MainWindow", "Y-axis-reflect", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Scale factor along x", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Scale factor along y", nullptr));
        scale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
