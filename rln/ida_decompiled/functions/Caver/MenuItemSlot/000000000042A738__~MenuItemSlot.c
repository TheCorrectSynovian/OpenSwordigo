/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042A738
 * Mangled: _ZN5Caver12MenuItemSlotD2Ev
 * Demangled: Caver::MenuItemSlot::~MenuItemSlot()
 *
 * Callers: 1
 *   0x00000000001FEDD0  Caver::MenuItemSlot::~MenuItemSlot()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEDD0  Caver::MenuItemSlot::~MenuItemSlot()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 68
 *   insn=0x000000000042A74C string=0x000000000042A750 "`"
 *   insn=0x000000000042A750 string=0x000000000042A754 ""
 *   insn=0x000000000042A754 string=0x000000000042A758 "A"
 *   insn=0x000000000042A758 string=0x000000000042A75C "h"
 *   insn=0x000000000042A760 string=0x000000000042A764 "@"
 *   insn=0x000000000042A760 string=0x000000000042A780 "`"
 *   insn=0x000000000042A764 string=0x000000000042A768 ""
 *   insn=0x000000000042A768 string=0x000000000042A76C ""
 *   insn=0x000000000042A770 string=0x000000000042A774 ""
 *   insn=0x000000000042A774 string=0x000000000042A778 ""
 *   insn=0x000000000042A784 string=0x000000000042A788 "@"
 *   insn=0x000000000042A784 string=0x000000000042A7A4 "`"
 *   insn=0x000000000042A788 string=0x000000000042A78C ""
 *   insn=0x000000000042A78C string=0x000000000042A790 ""
 *   insn=0x000000000042A794 string=0x000000000042A798 ""
 *   insn=0x000000000042A798 string=0x000000000042A79C ""
 *   insn=0x000000000042A7A8 string=0x000000000042A7AC "@"
 *   insn=0x000000000042A7A8 string=0x000000000042A7C8 "t"
 *   insn=0x000000000042A7AC string=0x000000000042A7B0 ""
 *   insn=0x000000000042A7B0 string=0x000000000042A7B4 ""
 *   insn=0x000000000042A7B8 string=0x000000000042A7BC ""
 *   insn=0x000000000042A7BC string=0x000000000042A7C0 ""
 *   insn=0x000000000042A7C8 string=0x000000000042A7CC "4"
 *   insn=0x000000000042A7CC string=0x000000000042A810 "t"
 *   insn=0x000000000042A7D0 string=0x000000000042A7D4 ""
 *   insn=0x000000000042A7E0 string=0x000000000042A7E4 "\t@"
 *   insn=0x000000000042A7F0 string=0x000000000042A7F4 ""
 *   insn=0x000000000042A800 string=0x000000000042A804 "@"
 *   insn=0x000000000042A810 string=0x000000000042A814 "4"
 *   insn=0x000000000042A818 string=0x000000000042A81C ""
 *   insn=0x000000000042A828 string=0x000000000042A82C "\t@"
 *   insn=0x000000000042A838 string=0x000000000042A83C ""
 *   insn=0x000000000042A848 string=0x000000000042A84C "@"
 *   insn=0x000000000042A864 string=0x000000000042A868 "rQ"
 *   insn=0x000000000042A86C string=0x000000000042A870 "u"
 *   insn=0x000000000042A874 string=0x000000000042A878 "/"
 *   insn=0x000000000042A878 string=0x000000000042A934 "u"
 *   insn=0x000000000042A87C string=0x000000000042A880 "`"
 *   insn=0x000000000042A884 string=0x000000000042A8C0 "@"
 *   insn=0x000000000042A888 string=0x000000000042A8DC "u"
 *   insn=0x000000000042A890 string=0x000000000042A894 "("
 *   insn=0x000000000042A894 string=0x000000000042A898 "\t\t@"
 *   insn=0x000000000042A894 string=0x000000000042A8B8 "`"
 *   insn=0x000000000042A898 string=0x000000000042A89C ")"
 *   insn=0x000000000042A89C string=0x000000000042A8A0 "\t\t"
 *   insn=0x000000000042A8A4 string=0x000000000042A8A8 "\t"
 *   insn=0x000000000042A8A8 string=0x000000000042A8AC ")"
 *   insn=0x000000000042A8B0 string=0x000000000042A8B4 " "
 *   insn=0x000000000042A8C0 string=0x000000000042A8C4 ""
 *   insn=0x000000000042A8C4 string=0x000000000042A8C8 ""
 *   insn=0x000000000042A8CC string=0x000000000042A8D0 ""
 *   insn=0x000000000042A8D0 string=0x000000000042A8D4 ""
 *   insn=0x000000000042A8E4 string=0x000000000042A8E8 ""
 *   insn=0x000000000042A8EC string=0x000000000042A8F0 "!"
 *   insn=0x000000000042A8F4 string=0x000000000042A8F8 "\t@"
 *   insn=0x000000000042A904 string=0x000000000042A908 ""
 *   insn=0x000000000042A90C string=0x000000000042A910 "!"
 *   insn=0x000000000042A914 string=0x000000000042A918 "@"
 *   insn=0x000000000042A934 string=0x000000000042A938 "5"
 *   insn=0x000000000042A93C string=0x000000000042A940 ""
 *   insn=0x000000000042A94C string=0x000000000042A950 "\t@"
 *   insn=0x000000000042A95C string=0x000000000042A960 ""
 *   insn=0x000000000042A96C string=0x000000000042A970 "@"
 *   insn=0x000000000042A97C string=0x000000000042A980 ",Q"
 *   insn=0x000000000042A988 string=0x000000000042A98C "p"
 *   insn=0x000000000042A9AC string=0x000000000042A9B0 "@2"
 *   insn=0x000000000042A9B0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000042A9B8 string=0x000000000042A9BC "=2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MenuItemSlot::~MenuItemSlot(Caver::MenuItemSlot *this)
{
  _DWORD *v2; // x0
  int v3; // w8
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8

  v2 = (_DWORD *)*((_QWORD *)this + 65);
  *(_QWORD *)this = off_6D2F10;
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = (_DWORD *)*((_QWORD *)this + 51);
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (_DWORD *)*((_QWORD *)this + 37);
  if ( v6 )
  {
    v7 = v6[2] - 1;
    v6[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  Caver::GUIView::~GUIView(this);
}

