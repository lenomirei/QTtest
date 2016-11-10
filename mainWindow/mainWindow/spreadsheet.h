#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QTableWidget>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QApplication>
#include "cell.h"
class SpreadsheetCompare;


class Spreadsheet : public QTableWidget
{
	Q_OBJECT

public:
	Spreadsheet(QWidget *parent);
	bool autoRecalculate() const { return autoRecalc; }
	QString currentLocation() const;
	QString currentFormula() const;
	QTableWidgetSelectionRange selectedRange() const;
	void clear();
	bool readFile(const QString &filename);
	bool writeFile(const QString &filename);
	void sort(const SpreadsheetCompare &compare);
	~Spreadsheet();

	public slots:
	void cut();
	void copy();
	void paste();
	void del();
	void selectCurrentColumn();
	void selectCurrentRow();
	void recalculate();
	void setAutoRecalculate(bool recalc);
	void findNext(const QString &str,Qt::CaseSensitivity cs);
	void findPrevious(const QString &str, Qt::CaseSensitivity cs);
signals:
	void modified();
	private slots:
	void somethingChanged();
private:
	enum{ MagicNumber = 0x7F51C883, RowCount = 999, ColumnCount = 26 };
	Cell *cell(int row, int column) const;
	QString text(int row, int column) const;
	QString formula(int row, int column) const;
	void setFormula(int row, int column, const QString &fomula);

	bool autoRecalc;
	
};

class SpreadsheetCompare
{
public:
	bool operator()(const QStringList row1, const QStringList &row2) const;
	enum{ KeyCount = 3 };
	int keys[KeyCount];
	bool ascending[KeyCount];
};

#endif // SPREADSHEET_H
