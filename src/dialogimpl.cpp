#include "dialogimpl.h"
//
DialogImpl::DialogImpl( QWidget * parent, Qt::WFlags f) 
  : QDialog(parent, f)
{
  setupUi(this);
  QObject::connect(&manager,SIGNAL(finished(QNetworkReply *)),this,SLOT(replyFinished(QNetworkReply*)));
}
//

void DialogImpl::replyFinished(QNetworkReply *replay)
{
  QDomDocument doc;
  if(!doc.setContent(replay->readAll()))
    lineEdit_result->setText("Error!");
  QDomElement docElem = doc.documentElement();
  if(docElem.tagName() == "double")
    lineEdit_result->setText(docElem.text());
  else
    lineEdit_result->setText("Error!");
}
void DialogImpl::getCurrencyID(QString *ID,const QString comboxtext)
{
  QString x =comboxtext.right(4);
  x.remove(QChar(')'));
  ID->clear();
  ID->append(x);
}

void DialogImpl::convert()
{
  QString path,fromcurrency,tocurrency;

  getCurrencyID(&fromcurrency,comboBox_src->currentText());
  getCurrencyID(&tocurrency,comboBox_dst->currentText());

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
