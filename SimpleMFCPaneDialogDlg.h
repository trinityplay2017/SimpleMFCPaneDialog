#pragma once

class CSimpleMFCPaneDialogDlg : public CDialogEx
{
public:
	CSimpleMFCPaneDialogDlg(CWnd* pParent = nullptr);

enum { IDD = IDD_SIMPLEMFCPANEDIALOG_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
};
