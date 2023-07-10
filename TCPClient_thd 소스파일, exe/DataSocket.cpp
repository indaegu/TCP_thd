// DataSocket.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "TCPClient_thd.h"
#include "DataSocket.h"
#include "TCPClient_thdDlg.h"


// CDataSocket

CDataSocket::CDataSocket(CTCPClient_thdDlg*pDlg)
{
	m_pDlg = pDlg;
}

CDataSocket::~CDataSocket()
{
}


// CDataSocket ��� �Լ�
void CDataSocket::OnReceive(int nErrorCode)
{
	CSocket::OnReceive(nErrorCode);
	m_pDlg->ProcessReceive(this, nErrorCode);
}