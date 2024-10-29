#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<bits/stdc++.h>
#include<QVector>
#include <QMainWindow>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    bool eventFilter(QObject *watched, QEvent *event) override;
private slots:
    void on_showAxis_clicked();

    void on_gridlines_clicked();

    void on_dda_line_clicked();

    void on_draw_bressenheim_line_clicked();

    void on_draw_polar_circle_clicked();

    void on_draw_bressenham_circle_clicked();

    void on_draw_polar_ellipse_clicked();

    void on_draw_bressenham_ellipse_clicked();

    void on_redraw_shape_clicked();

    void on_flood_fill_clicked();

    void on_draw_polygon_clicked();

    void on_boundary_fill_clicked();

    void on_fill_by_scanline_clicked();

    void on_clear_canvas_clicked();

    void on_translate_clicked();

    void on_rotate_clicked();

    void on_apply_shear_clicked();

    void on_xaxis_reflect_clicked();

    void on_yaxis_reflect_clicked();

    void on_scale_clicked();

private:
    Ui::MainWindow *ui;
    void colorPoint(int x,int y,int r,int g, int b, int penwidth);
    void delay(int ms);
    void markBox(int x,int y,int r,int g,int b);
    void draw_dda_line(int x1,int y1,int x2,int y2,int r,int g,int b);
    void draw_bressenham_line(int x1,int x2,int y1,int y2,int r,int g,int b);
    void draw_polar_circle(int centerx,int centery,int radius);
    void draw_bressenham_circle(int x_center,int y_center,int radius);
    void plotPixel(int x,int y,int r,int g,int b);
    void draw_polar_ellipse(int x_center,int y_center,int a,int b);
    void draw_bressenham_ellipse(int x_center,int y_center,int a,int b);
    void flood_fill(int x,int y,int r,int g,int b,set<pair<int,int>> &st);
    void boundary_fill(int x,int y,int r,int g,int b,set<pair<int,int>> &st);
    bool is_inside(int x,int y);
    QPoint clickedPoint;
    QSet<QVector<int>> drawn_points;
    QVector<pair<int,int>> polygon_points;
    QVector<pair<int,int>> vertices;
};
#endif // MAINWINDOW_H
