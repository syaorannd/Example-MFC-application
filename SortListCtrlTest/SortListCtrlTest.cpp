// SortListCtrlTest.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "SortListCtrlTest.h"
#include "SortListCtrlTestDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSortListCtrlTestApp

BEGIN_MESSAGE_MAP(CSortListCtrlTestApp, CWinApp)
	//{{AFX_MSG_MAP(CSortListCtrlTestApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSortListCtrlTestApp construction

CSortListCtrlTestApp::CSortListCtrlTestApp()
{
}

// The one and only CSortListCtrlTestApp object
CSortListCtrlTestApp g_app;

/////////////////////////////////////////////////////////////////////////////
// CSortListCtrlTestApp initialization

BOOL CSortListCtrlTestApp::InitInstance()
{
#ifdef _AFXDLL
	VERIFY( Enable3dControls() );				// Call this when using MFC in a shared DLL
#else
	VERIFY( Enable3dControlsStatic() );	// Call this when linking to MFC statically
#endif

	SetRegistryKey( _T("MJSoft") );

	CSortListCtrlTestDlg dlg;
	m_pMainWnd = &dlg;
	(void)dlg.DoModal();

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
