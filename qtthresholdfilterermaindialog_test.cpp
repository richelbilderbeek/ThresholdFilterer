#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include "qtthresholdfilterermaindialog.h"

#include <boost/lexical_cast.hpp>
#include <boost/math/constants/constants.hpp>
#include <QFileDialog>
#include <QLabel>

#include "thresholdfilterermaindialog.h"
#include "ui_qtthresholdfilterermaindialog.h"
#pragma GCC diagnostic pop

void ribi_QtThresholdFiltererMainDialog_Test() noexcept
{
  QPixmap source(":/thresholdfilterer/images/ThresholdFiltererTest.png");
  assert(!source.isNull());
  assert(source.width() > 0);
  assert(source.height() > 0);
  const int max = source.width() + 1; //Be nasty
  for (int pixel_size = 1; pixel_size != max; ++pixel_size)
  {
    const QPixmap target {
      ThresholdFiltererMainDialog::DoThresholdFiltering(source,pixel_size)
    };
    assert(!target.isNull());
    assert(target.width() > 0);
    assert(target.height() > 0);
  }
}
