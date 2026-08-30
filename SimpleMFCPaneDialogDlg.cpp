#include "stdafx.h"
#include "framework.h"
#include "SimpleMFCPaneDialog.h"
#include "SimpleMFCPaneDialogDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CSimpleMFCPaneDialogDlg::CSimpleMFCPaneDialogDlg(CWnd* pParent)
	: CDialogEx(IDD_SIMPLEMFCPANEDIALOG_DIALOG, pParent)
{
}

void CSimpleMFCPaneDialogDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CSimpleMFCPaneDialogDlg, CDialogEx)
END_MESSAGE_MAP()

BOOL CSimpleMFCPaneDialogDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	return TRUE;
}
