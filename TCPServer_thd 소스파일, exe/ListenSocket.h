#pragma once

// CListenSocket ��� ����Դϴ�.
class CTCPServer_thdDlg;

class CListenSocket : public CSocket
{
public:
	CListenSocket(CTCPServer_thdDlg *pDlg);
	virtual ~CListenSocket();
	CTCPServer_thdDlg *m_pDlg;
	virtual void OnAccept(int nErrorCode);
};


