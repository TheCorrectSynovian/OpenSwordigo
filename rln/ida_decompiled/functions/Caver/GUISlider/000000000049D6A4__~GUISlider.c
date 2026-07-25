/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049D6A4
 * Mangled: _ZN5Caver9GUISliderD2Ev
 * Demangled: Caver::GUISlider::~GUISlider()
 *
 * Callers: 1
 *   0x00000000001FE990  Caver::GUISlider::~GUISlider()
 *
 * Callees: 7
 *   0x00000000001F4DB0  Caver::GUIControl::~GUIControl()
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FE990  Caver::GUISlider::~GUISlider()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000049D874  Caver::GUISwitch::GUISwitch(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x000000000049D6B0 string=0x000000000049D6B4 "H"
 *   insn=0x000000000049D6B4 string=0x000000000049D6B8 "t"
 *   insn=0x000000000049D6B8 string=0x000000000049D6BC ""
 *   insn=0x000000000049D6BC string=0x000000000049D6C0 "A"
 *   insn=0x000000000049D6C0 string=0x000000000049D6C4 "h"
 *   insn=0x000000000049D6C4 string=0x000000000049D6C8 "T"
 *   insn=0x000000000049D6C8 string=0x000000000049D710 "`"
 *   insn=0x000000000049D6CC string=0x000000000049D6D0 "@"
 *   insn=0x000000000049D6D0 string=0x000000000049D6D4 "#^"
 *   insn=0x000000000049D6D4 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000049D6D8 string=0x000000000049D6DC "@"
 *   insn=0x000000000049D6DC string=0x000000000049D6E0 " ^"
 *   insn=0x000000000049D6E8 string=0x000000000049D6EC "@"
 *   insn=0x000000000049D6EC string=0x000000000049D6F0 ""
 *   insn=0x000000000049D6F0 string=0x000000000049D6F4 ""
 *   insn=0x000000000049D6F8 string=0x000000000049D6FC ""
 *   insn=0x000000000049D6FC string=0x000000000049D700 ""
 *   insn=0x000000000049D70C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049D714 string=0x000000000049D718 "@"
 *   insn=0x000000000049D714 string=0x000000000049D734 "`"
 *   insn=0x000000000049D718 string=0x000000000049D71C ""
 *   insn=0x000000000049D71C string=0x000000000049D720 ""
 *   insn=0x000000000049D724 string=0x000000000049D728 ""
 *   insn=0x000000000049D728 string=0x000000000049D72C ""
 *   insn=0x000000000049D738 string=0x000000000049D73C "@"
 *   insn=0x000000000049D738 string=0x000000000049D758 "`"
 *   insn=0x000000000049D73C string=0x000000000049D740 ""
 *   insn=0x000000000049D740 string=0x000000000049D744 ""
 *   insn=0x000000000049D748 string=0x000000000049D74C ""
 *   insn=0x000000000049D74C string=0x000000000049D750 ""
 *   insn=0x000000000049D75C string=0x000000000049D760 "@"
 *   insn=0x000000000049D760 string=0x000000000049D764 ""
 *   insn=0x000000000049D764 string=0x000000000049D768 ""
 *   insn=0x000000000049D76C string=0x000000000049D770 ""
 *   insn=0x000000000049D770 string=0x000000000049D774 ""
 *   insn=0x000000000049D788 string=0x00000000001F4DB0 "P'"
 *   insn=0x000000000049D798 string=0x000000000049D79C "`"
 *   insn=0x000000000049D7A0 string=0x000000000049D7A4 "@"
 *   insn=0x000000000049D7A0 string=0x000000000049D7E0 "`"
 *   insn=0x000000000049D7A4 string=0x000000000049D7A8 ""
 *   insn=0x000000000049D7A8 string=0x000000000049D7AC ""
 *   insn=0x000000000049D7B0 string=0x000000000049D7B4 ""
 *   insn=0x000000000049D7B4 string=0x000000000049D7B8 ""
 *   insn=0x000000000049D7BC string=0x000000000049D7C0 ""
 *   insn=0x000000000049D7CC string=0x000000000049D7D0 "`"
 *   insn=0x000000000049D7D4 string=0x000000000049D80C "@"
 *   insn=0x000000000049D7E4 string=0x000000000049D7E8 "@"
 *   insn=0x000000000049D7E4 string=0x000000000049D804 "`"
 *   insn=0x000000000049D7E8 string=0x000000000049D7EC ""
 *   insn=0x000000000049D7EC string=0x000000000049D7F0 ""
 *   insn=0x000000000049D7F4 string=0x000000000049D7F8 ""
 *   insn=0x000000000049D7F8 string=0x000000000049D7FC ""
 *   insn=0x000000000049D80C string=0x000000000049D810 ""
 *   insn=0x000000000049D810 string=0x000000000049D814 ""
 *   insn=0x000000000049D818 string=0x000000000049D81C ""
 *   insn=0x000000000049D81C string=0x000000000049D820 ""
 *   insn=0x000000000049D828 string=0x000000000049D82C "a]"
 *   insn=0x000000000049D830 string=0x000000000049D834 "$"
 *   insn=0x000000000049D848 string=0x000000000049D84C "Q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUISlider::~GUISlider(Caver::GUISlider *this)
{
  _QWORD *v2; // x20
  void *v3; // x0
  void *v4; // x0
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8

  v2 = (_QWORD *)*((_QWORD *)this + 43);
  *(_QWORD *)this = off_6D64F0;
  if ( v2 )
  {
    v3 = (void *)v2[7];
    if ( v3 )
      operator delete[](v3);
    v4 = (void *)v2[4];
    if ( v4 )
      operator delete[](v4);
    v5 = (_DWORD *)*v2;
    if ( *v2 )
    {
      v6 = v5[2] - 1;
      v5[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    operator delete(v2);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 42);
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 41);
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 40);
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  Caver::GUIControl::~GUIControl(this);
}

