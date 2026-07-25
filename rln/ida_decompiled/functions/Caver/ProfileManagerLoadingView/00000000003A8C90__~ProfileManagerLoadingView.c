/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A8C90
 * Mangled: _ZN5Caver25ProfileManagerLoadingViewD2Ev
 * Demangled: Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView()
 *
 * Callers: 2
 *   0x00000000001FC9B0  Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView()
 *   0x00000000003A899C  Caver::ProfileManagerLoadingView::Update(float)
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC9B0  Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A8DF8  Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x00000000003A8CA4 string=0x00000000003A8CA8 "t"
 *   insn=0x00000000003A8CA8 string=0x00000000003A8CAC ""
 *   insn=0x00000000003A8CAC string=0x00000000003A8CB0 "A"
 *   insn=0x00000000003A8CB0 string=0x00000000003A8CB4 "h"
 *   insn=0x00000000003A8CB4 string=0x00000000003A8CB8 "4"
 *   insn=0x00000000003A8CB8 string=0x00000000003A8CFC "t~@"
 *   insn=0x00000000003A8CBC string=0x00000000003A8CC0 ""
 *   insn=0x00000000003A8CCC string=0x00000000003A8CD0 "\t@"
 *   insn=0x00000000003A8CDC string=0x00000000003A8CE0 ""
 *   insn=0x00000000003A8CEC string=0x00000000003A8CF0 "@"
 *   insn=0x00000000003A8CFC string=0x00000000003A8D00 "4"
 *   insn=0x00000000003A8D04 string=0x00000000003A8D08 ""
 *   insn=0x00000000003A8D14 string=0x00000000003A8D18 "\t@"
 *   insn=0x00000000003A8D24 string=0x00000000003A8D28 ""
 *   insn=0x00000000003A8D34 string=0x00000000003A8D38 "@"
 *   insn=0x00000000003A8D50 string=0x00000000003A8D54 "7X"
 *   insn=0x00000000003A8D64 string=0x00000000003A8D68 "5"
 *   insn=0x00000000003A8D6C string=0x00000000003A8D70 ""
 *   insn=0x00000000003A8D7C string=0x00000000003A8D80 "\t@"
 *   insn=0x00000000003A8D8C string=0x00000000003A8D90 ""
 *   insn=0x00000000003A8D9C string=0x00000000003A8DA0 "@"
 *   insn=0x00000000003A8DAC string=0x00000000003A8DB0 " X"
 *   insn=0x00000000003A8DB8 string=0x00000000003A8DBC "d"
 *   insn=0x00000000003A8DD0 string=0x00000000001FC9B0 "0'"
 *   insn=0x00000000003A8DDC string=0x00000000003A8DE0 "49"
 *   insn=0x00000000003A8DE0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A8DE8 string=0x00000000003A8DEC "19"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView(Caver::ProfileManagerLoadingView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 33);
  *(_QWORD *)this = off_6CEA10;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  Caver::GUIView::~GUIView(this);
}

