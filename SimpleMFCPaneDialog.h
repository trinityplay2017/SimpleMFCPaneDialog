#pragma once

#ifndef __AFXWIN_H__
	error "include 'framework.h' before including this file"
#endif

#include "resource.h"

class CSimpleMFCPaneDialogApp : public CWinApp
{
public:
	CSimpleMFCPaneDialogApp();
	virtual BOOL InitInstance();
	DECLARE_MESSAGE_MAP()
};

extern CSimpleMFCPaneDialogApp theApp;
