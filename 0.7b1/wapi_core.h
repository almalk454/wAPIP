/** ��������� ������� � ������� wAPI+ **/
#define _l (char*)

LRESULT CALLBACK WAPI_W_NDPROC(HWND, UINT, WPARAM, LPARAM);
void CALLBACK _W_API_TIMER_PROC(HWND, UINT, UINT_PTR, DWORD);
long int GLOBAL =7;//������� ������������� ID �����������. ����� ������� � ������/������� ������ wapi+


class TObject
{
public   :
    HWND hWnd;
    HWND _parent;
    UINT _id;

    virtual void SetText( LPSTR );
    virtual void SetPos( int, int, int, int );

    virtual LPSTR getText(  );

    virtual void Show();
    virtual void Hide();
    virtual void Focus();
    virtual void Redraw();
    virtual void ToUp();
    virtual void ToDown();
    virtual void Free();

};

/** Visual classes **/
    #include "T/TForm.h"
        #ifdef WAPI_COMMCTRL
            #include "T/TStatusBar.h"
            #include "T/TProgressBar.h"
        #endif
    #include "T/TButton.h"
    #include "T/TCheckBox.h"
    #include "T/TComboBox.h"
    #include "T/TEdit.h"
    #include "T/TMemo.h"
    #include "T/TEditPassword.h"
    #include "T/TLabel.h"
    #include "T/TListBox.h"
    #include "T/TTimer.h"
/** System Classes **/
    #include "T/app.h"
    #include "T/TResource.h"
    #include "T/TCanvas.h"
    #include "consts.h"

void Message( LPSTR );
void Message( LPSTR, HWND );
void Message( LPSTR, TForm* );

class _WAPI_P
{
public:
    HINSTANCE _H_INST;
    LPSTR _C_LASSNAME;
    WNDCLASSEX _W_ND;
    void(*HotFunction)(int);


    TForm* _T_FORMS[];
    TButton* _T_BUTTONS[];
    TCheckBox* _T_CHECKBOX[];
    TEdit* _T_EDIT[];
    TEditPassword* _T_EDITP[];
    TLabel* _T_LABEL[];
    TMemo* _T_MEMO[];
    TListBox* _T_LISTBOX[];
    TTimer* _T_TIMER[];

    TForm* _T_FORMMAIN;



    int __init( HINSTANCE, LPSTR, HICON );
    void SetMainForm(TForm*);
    TForm* GetMainForm();

};
_WAPI_P *wapi = new _WAPI_P;
TCanvas* canvas = new TCanvas;

/** Visual classes **/
    #include "T_cpp/TForm_cpp.h"
        #ifdef WAPI_COMMCTRL
            #include "T_cpp/TStatusBar.h"
            #include "T_cpp/TProgressBar.h"
        #endif
    #include "T_cpp/TButton.h"
    #include "T_cpp/TEditPassword.h"
    #include "T_cpp/TMemo.h"
    #include "T_cpp/TEdit.h"
    #include "T_cpp/TComboBox.h"
    #include "T_cpp/TCheckBox.h"
    #include "T_cpp/TTimer.h"
    #include "T_cpp/TListBox.h"
    #include "T_cpp/TLabel.h"
/** System Classes **/
    #include "T_cpp/TResource.h"
    #include "T_cpp/TCanvas.h"
    #include "T_cpp/app.h"

void _W_API_Event_Listener( WPARAM, LPARAM );
#include "wapi_core_cpp.h"
