#include "stdafx.h"
#include "framework.h"
#include "SimpleMFCPaneDialog.h"
#include "SimpleMFCPaneDialogDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CSimpleMFCPaneDialogApp, CWinApp)
END_MESSAGE_MAP()

CSimpleMFCPaneDialogApp::CSimpleMFCPaneDialogApp()
{
}

CSimpleMFCPaneDialogApp theApp;

BOOL CSimpleMFCPaneDialogApp::InitInstance()
{
	CWinApp::InitInstance();

	CSimpleMFCPaneDialogDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();

	return FALSE;
}
