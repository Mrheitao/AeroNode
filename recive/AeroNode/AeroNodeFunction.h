/*********************************************************************
**文件夹名：AeroNode
**Copyright (c) 2012-2013 南京航空航天 航空通信网络研究室
**创建人：李科艳、张雅静
**日期：2013.10
**描述：AN-1型半实物测试节点界面AeroNode是基于QT编程与Linux系统的界面，
        该界面简洁、清晰，代码结构清晰明了，具有很强的可读性与可修改性。
		该界面提供了四个模块，分别为：
		1、系统（AeroNodeSystem）模块
		2、功能（AeroNodeFunction）模块，功能模块还包含高效并发、拓扑
		   透明和弹机协同三个子模块。
		   高效并发界面在AeroNodeCCSMA文件中定义；
		   拓扑透明的骨干节点在AeroNodeESTDMA_Backbone文件中定义；
		   拓扑透明的子网网关节点在AeroNodeESTDMAZZ_SubnetGatway文件中定义；
		   弹机协同的载机节点在AeroNodeDTDMA_Aircraft文件中定义；
		   弹机协同的导弹节点在AeroNodeDTDMA_Missile文件中定义。
		3、同步（AeroNodeSynchronization）模块
		4、帮助（AeroNodeHelp）模块
		AeroNodeConfigDialogall文件设置了整体界面的布局。
		AeroNodePictureViewer文件中设置了图片浏览器的界面。
		AeroNodeVirtualKeyboard文件中设置了虚拟键盘。
**版本：AN-1型AeroNode半实物测试节点界面
**文件名：AeroNodeFunction.h
**功能：AeroNodeFunction.h定义了AeroNodeFunction类。 
*********************************************************************/


#include <QDialog>
#include <QSystemTrayIcon>
#include <QtCore/QTextCodec>
#include <QtGui>
#include <QWidget>
#include <QDate>
#include <QMainWindow>
#include <QtNetwork>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
class QTimer;
class QHBoxLayout;
class QVBoxLayout;
class QPushButton;
class QLabel;
class QTimeEdit;
class QLCDNumber;
class QVariant;
class QTime;
class QAction;
class QTextBrowser;
class QCheckBox;

/*********************************************************************
// 类  名：AeroNodefunction
// 功  能：功能界面的设置
*********************************************************************/
class AeroNodefunction : public QWidget
{
    Q_OBJECT
public:
    AeroNodefunction(QWidget *parent = 0);
    bool isStarted_module;
public slots: 
    void clientDialog_General();
    void clientDialog_Preventjitter_General();
    void timerStrDisplay_module(); 
private:   
	QTimer  *m_timer_module;
    int m_second_module;
    int m_msecond_module;
	QPushButton  *receiver1;
};