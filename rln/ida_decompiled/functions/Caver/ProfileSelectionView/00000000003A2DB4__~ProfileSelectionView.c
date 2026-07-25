/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A2DB4
 * Mangled: _ZN5Caver20ProfileSelectionViewD2Ev
 * Demangled: Caver::ProfileSelectionView::~ProfileSelectionView()
 *
 * Callers: 1
 *   0x0000000000202510  Caver::ProfileSelectionView::~ProfileSelectionView()
 *
 * Callees: 7
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000201F20  boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(boost::shared_ptr<Caver::ProfilePanelView> *)
 *   0x0000000000202510  Caver::ProfileSelectionView::~ProfileSelectionView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A2F40  Caver::ProfileSelectionView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x00000000003A2DC0 string=0x00000000003A2DC4 "("
 *   insn=0x00000000003A2DC8 string=0x00000000003A2DCC "\tC"
 *   insn=0x00000000003A2DCC string=0x00000000003A2DD0 "t"
 *   insn=0x00000000003A2DD0 string=0x00000000003A2DD4 "\tA"
 *   insn=0x00000000003A2DD4 string=0x00000000003A2DD8 ""
 *   insn=0x00000000003A2DD8 string=0x00000000003A2DDC "i"
 *   insn=0x00000000003A2DDC string=0x00000000003A2DE0 "hz"
 *   insn=0x00000000003A2DE0 string=0x00000000003A2DE4 "4"
 *   insn=0x00000000003A2DE4 string=0x00000000003A2E28 "`"
 *   insn=0x00000000003A2DE8 string=0x00000000003A2DEC ""
 *   insn=0x00000000003A2DF8 string=0x00000000003A2DFC "\t@"
 *   insn=0x00000000003A2E08 string=0x00000000003A2E0C ""
 *   insn=0x00000000003A2E18 string=0x00000000003A2E1C "@"
 *   insn=0x00000000003A2E28 string=0x00000000003A2E2C "=|"
 *   insn=0x00000000003A2E2C string=0x00000000003A2E30 "t"
 *   insn=0x00000000003A2E30 string=0x00000000003A2E34 "4"
 *   insn=0x00000000003A2E38 string=0x00000000003A2E3C ""
 *   insn=0x00000000003A2E48 string=0x00000000003A2E4C "\t@"
 *   insn=0x00000000003A2E58 string=0x00000000003A2E5C ""
 *   insn=0x00000000003A2E68 string=0x00000000003A2E6C "@"
 *   insn=0x00000000003A2E9C string=0x00000000003A2EA0 " |"
 *   insn=0x00000000003A2EA4 string=0x00000000003A2EAC "u"
 *   insn=0x00000000003A2EAC string=0x00000000003A2EB0 "5"
 *   insn=0x00000000003A2EB4 string=0x00000000003A2EB8 ""
 *   insn=0x00000000003A2EC4 string=0x00000000003A2EC8 "\t@"
 *   insn=0x00000000003A2ED4 string=0x00000000003A2ED8 ""
 *   insn=0x00000000003A2EE4 string=0x00000000003A2EE8 "@"
 *   insn=0x00000000003A2EFC string=0x00000000003A2F00 "qz"
 *   insn=0x00000000003A2F14 string=0x00000000003A2F18 "~}"
 *   insn=0x00000000003A2F28 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A2F38 string=0x00000000003A2F3C "bz"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileSelectionView::~ProfileSelectionView(Caver::ProfileSelectionView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 37);
  *(_QWORD *)this = off_6CE430;
  *((_QWORD *)this + 30) = off_6CE580;
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
  boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(*((void **)this + 35));
  v5 = (_QWORD *)*((_QWORD *)this + 33);
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

