#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include "finddialog.h"

class FindDialog;
class Spreadsheet;

class mainWindow : public QMainWindow
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = 0);
protected:
	void closeEvent(QCloseEvent *event);
	private slots:
	void newFile();
	void open();
	bool save();
	bool saveAs();
	void find();
	void goToCell();
	void sort();
	void about();
	void openRecentFile();
	void updateStatusBar();
	void spreadsheetModified();
	

private:
	void createActions();
	void createMenus();
	void createContextMenu();
	void createToolBars();
	void createStatusBar();
	void readSettings();
	void writeSettings();
	bool okToContinue();
	bool loadFile(const QString &filename);
	bool saveFile(const QString &filename);
	void setCurrentFile(const QString &filename);
	void updateRecentFileActions();

	QString strippedName(const QString &fullFileName);
	QString curFile;
	QStringList recentFiles;

	enum{ MAXRECENTFILES = 5 };
	QAction *recentFileActions[MAXRECENTFILES];
	QAction *newAction;
	QAction *openAction;
	QAction *exitAction;
	QAction *selectAllAction;
	QAction *showGridAction;
	QAction *aboutQtAction;
	QAction *saveAction;
	QAction *saveAsAction;
	QAction *separatorAction;
	QAction *cutAction;
	QAction *copyAction;
	QAction *pasteAction;
	QAction *deleteAction;
	QAction *selectRowAction;
	QAction *selectColumnAction;
	QAction *findAction;
	QAction *goToCellAction;
	QAction *aboutAction;
	QAction *recalculateAction;
	QAction *sortAction;
	QAction *autoRecalcAction;
	QAction *closeAction;


	Spreadsheet *spreadsheet;
	FindDialog *findDialog;

	QLabel *locationLabel;
	QLabel *formulaLabel;

	QMenu *fileMenu;
	QMenu *editMenu;
	QMenu *selectSubMenu;
	QMenu *toolsMenu;
	QMenu *optionsMenu;
	QMenu *helpMenu;

	QToolBar *fileToolBar;
	QToolBar *editToolBar;


};

#endif // MAINWINDOW_H
