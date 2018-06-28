// SortListCtrlTest.h : main header file for the SORTLISTCTRLTEST application
//

#if !defined(AFX_SORTLISTCTRLTEST_H__C00271FB_8FE8_4AD0_A14A_100B7F00EF98__INCLUDED_)
#define AFX_SORTLISTCTRLTEST_H__C00271FB_8FE8_4AD0_A14A_100B7F00EF98__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSortListCtrlTestApp:
// See SortListCtrlTest.cpp for the implementation of this class
//

class CSortListCtrlTestApp : public CWinApp
{
public:
	CSortListCtrlTestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSortListCtrlTestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSortListCtrlTestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SORTLISTCTRLTEST_H__C00271FB_8FE8_4AD0_A14A_100B7F00EF98__INCLUDED_)
