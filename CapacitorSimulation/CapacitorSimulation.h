
// CapacitorSimulation.h : main header file for the CapacitorSimulation application
//
#pragma once

#ifndef __AFXWIN_H__
#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CCapacitorSimulationApp:
// See CapacitorSimulation.cpp for the implementation of this class
//

class CCapacitorSimulationApp: public CWinAppEx {
public:
	CCapacitorSimulationApp() noexcept;


	// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCapacitorSimulationApp theApp;
