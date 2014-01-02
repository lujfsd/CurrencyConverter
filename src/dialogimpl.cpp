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
void DialogImpl::getCurrencyID(QString *ID,int comboxIndex)
{
  ID->clear();
  switch(comboxIndex)
    {
    case 0:ID->append("CNY");break;
    case 1:ID->append("HKD");break;
    case 2:ID->append("TWD");break;
    case 3:ID->append("USD");break;
    }
}

void DialogImpl::convert()
{
  QString path,fromcurrency,tocurrency;
  int combox_src_Index,combox_dst_Index;

  combox_src_Index = comboBox_src->currentIndex();
  combox_dst_Index = comboBox_dst->currentIndex();

  getCurrencyID(&fromcurrency,combox_src_Index);
  getCurrencyID(&tocurrency,combox_dst_Index);

  path.clear();
  path.append("http://www.webservicex.net/CurrencyConvertor.asmx/ConversionRate?");
  path.append("FromCurrency=");
  path.append(fromcurrency);
  path.append("&ToCurrency=");
  path.append(tocurrency);
  manager.get(QNetworkRequest(QUrl(path)));
}
