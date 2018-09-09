#ifndef R_PROGRESSBAR_H
#define R_PROGRESSBAR_H

#include <QWidget>


class QProgressBar;


class R_ProgressBarWnd : public QWidget
{
    Q_OBJECT
public:
    explicit R_ProgressBarWnd(QWidget *parent = nullptr);
private:
    QProgressBar*                       m_progress_bar;
    int                                 m_count_step;


signals:

public slots:
    void slotStep();
    void slotReset();
};

#endif // R_PROGRESSBAR_H
