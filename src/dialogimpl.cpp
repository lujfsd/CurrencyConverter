#include "dialogimpl.h"
DialogImpl::DialogImpl( QWidget * parent, Qt::WFlags f)
  : QDialog(parent, f)
{
  setupUi(this);
  QObject::connect(&manager,SIGNAL(finished(QNetworkReply *)),this,SLOT(replyFinished(QNetworkReply*)));
}

void DialogImpl::displayerror(const QString & error)
{
  QMessageBox messagebox;
  lineEdit_result->clear();
  messagebox.setWindowTitle("Error!");
  messagebox.setText(error);
  messagebox.exec();
}

void DialogImpl::replyFinished(QNetworkReply *replay)
{
  QDomDocument doc;

  if(!doc.setContent(replay->readAll()))
  {
    displayerror("Get URL ERROR!\t");
    return;
  }
  QDomElement docElem = doc.documentElement();
  if(docElem.tagName() == "double")
    lineEdit_result->setText(docElem.text());
  else
  {
    displayerror("Get Rate ERROR!\t");
  }
}
void DialogImpl::get_comBox_Currenttext(QString *ID,const QString comboxtext)
{
  QString x =comboxtext.right(4);
  x.remove(QChar(')'));
  ID->clear();
  ID->append(x);
}

void DialogImpl::convert()
{
  QString path,fromcurrency,tocurrency;

  get_comBox_Currenttext(&fromcurrency,comboBox_src->currentText());
  get_comBox_Currenttext(&tocurrency,comboBox_dst->currentText());

  if(fromcurrency == tocurrency)
  {
    lineEdit_result->setText("1");
    return;
  }

  path.clear();
  path.append("http://www.webservicex.net/CurrencyConvertor.asmx/ConversionRate?");
  path.append("FromCurrency=");
  path.append(fromcurrency);
  path.append("&ToCurrency=");
  path.append(tocurrency);
  manager.get(QNetworkRequest(QUrl(path)));
}
