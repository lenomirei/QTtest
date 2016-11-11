#ifndef HEXSPINBOX_H
#define HEXSPINBOX_H

#include <QtWidgets/QSpinBox>

class HexSpinBox : public QSpinBox
{
	Q_OBJECT

public:
	HexSpinBox(QWidget *parent = 0);

	~HexSpinBox();
protected:
	QValidator::State validate(QString &text, int &pos) const;
	QString textFromValue(int value) const;
	int valueFromText(const QString &text) const;
private:
	QRegExpValidator *validator;
};

#endif // HEXSPINBOX_H
