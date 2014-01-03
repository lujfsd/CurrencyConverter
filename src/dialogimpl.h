#ifndef DIALOGIMPL_H
#define DIALOGIMPL_H

#include <QDialog>
#include <QLineEdit>
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QDomDocument>
#include <QDomElement>
#include <QMessageBox>
#include "ui_dialog.h"

class DialogImpl : public QDialog, public Ui::Dialog
{
    Q_OBJECT
  public:
    DialogImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
  private slots:
    void convert();
    void replyFinished(QNetworkReply *replay);
  private:
    QNetworkAccessManager manager;
    void displayerror(const QString & error);
    void get_comBox_Currenttext(QString *ID,const QString comboxtext);
};
#endif
