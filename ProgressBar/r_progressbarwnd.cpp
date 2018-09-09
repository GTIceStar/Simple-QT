#include <QProgressBar>
#include <QtWidgets>
#include "r_progressbarwnd.h"

R_ProgressBarWnd::R_ProgressBarWnd(QWidget *parent) : QWidget(parent), m_count_step(0)
{
  m_progress_bar = new QProgressBar;
  m_progress_bar->setRange(0, 10);
  m_progress_bar->setMinimumWidth(400);
  m_progress_bar->setAlignment(Qt::AlignCenter);

  QPushButton* btn_step = new QPushButton("Step");
  QPushButton* btn_reset = new QPushButton("Reset");
  QObject::connect(btn_step, SIGNAL(clicked()), SLOT(slotStep()));
  QObject::connect(btn_reset, SIGNAL(clicked()), SLOT(slotReset()));

  QHBoxLayout* hbox_layout = new QHBoxLayout;
  hbox_layout->addWidget(m_progress_bar);
  hbox_layout->addWidget(btn_step);
  hbox_layout->addWidget(btn_reset);

  setLayout(hbox_layout);
}

//SLOTS ============================================================================
void R_ProgressBarWnd::slotStep()
{
    m_progress_bar->setValue(++m_count_step);
}
void R_ProgressBarWnd::slotReset()
{
    m_count_step = 0;
    m_progress_bar->reset();
}
