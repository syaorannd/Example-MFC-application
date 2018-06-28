// SortListCtrlTestDlg.cpp : implementation file
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
// CSortListCtrlTestDlg dialog

CSortListCtrlTestDlg::CSortListCtrlTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSortListCtrlTestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSortListCtrlTestDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSortListCtrlTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSortListCtrlTestDlg)
	DDX_Control(pDX, IDC_LIST, m_ctlList);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSortListCtrlTestDlg, CDialog)
	//{{AFX_MSG_MAP(CSortListCtrlTestDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSortListCtrlTestDlg message handlers

BOOL CSortListCtrlTestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	(void)m_ctlList.SetExtendedStyle( LVS_EX_FULLROWSELECT );
	m_ctlList.SetHeadings( _T("Name,120;Date of Birth,90;Score,50") );
	m_ctlList.LoadColumnInfo();

	(void)m_ctlList.AddItem( _T("Mark Jackson"), _T("09/08/1974"), _T("100") );
	(void)m_ctlList.AddItem( _T("Trevor McSplatt"), _T("03/12/1970"), _T("25") );
	(void)m_ctlList.AddItem( _T("Sidney Finkelstein"), _T("01/01/1960"), _T("40") );

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSortListCtrlTestDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSortListCtrlTestDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSortListCtrlTestDlg::OnDestroy() 
{
	m_ctlList.SaveColumnInfo();
	CDialog::OnDestroy();
}
