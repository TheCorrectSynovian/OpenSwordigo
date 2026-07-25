/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041CD08
 * Mangled: _ZN5Caver11LoadingViewD2Ev
 * Demangled: Caver::LoadingView::~LoadingView()
 *
 * Callers: 1
 *   0x00000000001F7F20  Caver::LoadingView::~LoadingView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7F20  Caver::LoadingView::~LoadingView()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000041CE70  Caver::MapAnnotation::MapAnnotation(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x000000000041CD18 string=0x000000000041CD1C "H"
 *   insn=0x000000000041CD1C string=0x000000000041CD20 "t"
 *   insn=0x000000000041CD20 string=0x000000000041CD24 "qA"
 *   insn=0x000000000041CD24 string=0x000000000041CD28 "A"
 *   insn=0x000000000041CD28 string=0x000000000041CD2C "h"
 *   insn=0x000000000041CD2C string=0x000000000041CD30 "4"
 *   insn=0x000000000041CD30 string=0x000000000041CD74 "t"
 *   insn=0x000000000041CD34 string=0x000000000041CD38 ""
 *   insn=0x000000000041CD44 string=0x000000000041CD48 "\t@"
 *   insn=0x000000000041CD54 string=0x000000000041CD58 ""
 *   insn=0x000000000041CD64 string=0x000000000041CD68 "@"
 *   insn=0x000000000041CD74 string=0x000000000041CD78 "4"
 *   insn=0x000000000041CD7C string=0x000000000041CD80 ""
 *   insn=0x000000000041CD8C string=0x000000000041CD90 "\t@"
 *   insn=0x000000000041CD9C string=0x000000000041CDA0 ""
 *   insn=0x000000000041CDAC string=0x000000000041CDB0 "@"
 *   insn=0x000000000041CDDC string=0x000000000041CDE0 "5"
 *   insn=0x000000000041CDE4 string=0x000000000041CDE8 ""
 *   insn=0x000000000041CDF4 string=0x000000000041CDF8 "\t@"
 *   insn=0x000000000041CE04 string=0x000000000041CE08 ""
 *   insn=0x000000000041CE14 string=0x000000000041CE18 "@"
 *   insn=0x000000000041CE30 string=0x000000000041CE34 "F"
 *   insn=0x000000000041CE44 string=0x000000000041CE48 "6l"
 *   insn=0x000000000041CE48 string=0x00000000001F7F20 "0'"
 *   insn=0x000000000041CE58 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LoadingView::~LoadingView(Caver::LoadingView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 34);
  *(_QWORD *)this = off_6D2870;
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
  v5 = (_QWORD *)*((_QWORD *)this + 32);
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

