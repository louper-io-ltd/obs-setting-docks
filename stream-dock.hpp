
#include <QComboBox>
#include <QLabel>
#include <QDockWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

#include "obs-frontend-api.h"

class StreamDock : public QDockWidget {
	Q_OBJECT

private:
	QVBoxLayout *mainLayout;
	QComboBox *protocolDropdown;
	QLineEdit *serverEdit;
	QLineEdit *keyEdit;
	QPushButton *showButton;
	QLabel *keyLabel;
	QString protocol;
	QString key;
	QString server;
private slots:


public:
	StreamDock(QWidget *parent = nullptr);
	~StreamDock();
	void UpdateValues();
	void ProtocolSwitched();
};
