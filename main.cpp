#include <QtWidgets>
#include "form.hpp"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QTranslator trn;
  if (trn.load(QLocale::system(), "form", "_", ":/i18n")) {
    app.installTranslator(&trn);
  }

  QWidget* window = new Form();
  window->setWindowTitle("i18n Example");
  window->show();

  return app.exec();
}
