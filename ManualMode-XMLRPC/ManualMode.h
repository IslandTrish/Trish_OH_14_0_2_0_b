// ManualMode.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CManualModeApp:
// See ManualMode.cpp for the implementation of this class
//

extern	char	_startup_path[MAX_PATH];

class CManualModeApp : public CWinApp
{
public:
	CManualModeApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CManualModeApp theApp;