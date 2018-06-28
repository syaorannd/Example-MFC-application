// SortListCtrlTestDlg.h : header file
//

#if !defined(AFX_SORTLISTCTRLTESTDLG_H__BB9F2394_11A8_4B3E_A790_788BD2E49BDF__INCLUDED_)
#define AFX_SORTLISTCTRLTESTDLG_H__BB9F2394_11A8_4B3E_A790_788BD2E49BDF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef SORTLISTCTRL_H
	#include "SortListCtrl.h"
#endif	// SORTLISTCTRL_H

/////////////////////////////////////////////////////////////////////////////
// CSortListCtrlTestDlg dialog

class CSortListCtrlTestDlg : public CDialog
{
// Construction
public:
	CSortListCtrlTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSortListCtrlTestDlg)
	enum { IDD = IDD_SORTLISTCTRLTEST_DIALOG };
	CSortListCtrl	m_ctlList;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSortListCtrlTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSortListCtrlTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SORTLISTCTRLTESTDLG_H__BB9F2394_11A8_4B3E_A790_788BD2E49BDF__INCLUDED_)
