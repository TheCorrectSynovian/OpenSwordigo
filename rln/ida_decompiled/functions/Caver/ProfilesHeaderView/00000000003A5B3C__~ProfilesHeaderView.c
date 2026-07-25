/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A5B3C
 * Mangled: _ZN5Caver18ProfilesHeaderViewD2Ev
 * Demangled: Caver::ProfilesHeaderView::~ProfilesHeaderView()
 *
 * Callers: 1
 *   0x00000000001F7C90  Caver::ProfilesHeaderView::~ProfilesHeaderView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7C90  Caver::ProfilesHeaderView::~ProfilesHeaderView()
 *   0x00000000001FC000  Caver::GUIFrameView::~GUIFrameView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A5CA4  boost::shared_ptr<Caver::ProfileManager>::~shared_ptr()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000003A5B4C string=0x00000000003A5B50 ""
 *   insn=0x00000000003A5B50 string=0x00000000003A5B54 "t"
 *   insn=0x00000000003A5B54 string=0x00000000003A5B58 ""
 *   insn=0x00000000003A5B58 string=0x00000000003A5B5C "A"
 *   insn=0x00000000003A5B5C string=0x00000000003A5B60 "h"
 *   insn=0x00000000003A5B60 string=0x00000000003A5B64 "4"
 *   insn=0x00000000003A5B64 string=0x00000000003A5BA8 "t"
 *   insn=0x00000000003A5B68 string=0x00000000003A5B6C ""
 *   insn=0x00000000003A5B78 string=0x00000000003A5B7C "\t@"
 *   insn=0x00000000003A5B88 string=0x00000000003A5B8C ""
 *   insn=0x00000000003A5B98 string=0x00000000003A5B9C "@"
 *   insn=0x00000000003A5BA8 string=0x00000000003A5BAC "4"
 *   insn=0x00000000003A5BB0 string=0x00000000003A5BB4 ""
 *   insn=0x00000000003A5BC0 string=0x00000000003A5BC4 "\t@"
 *   insn=0x00000000003A5BD0 string=0x00000000003A5BD4 ""
 *   insn=0x00000000003A5BE0 string=0x00000000003A5BE4 "@"
 *   insn=0x00000000003A5C00 string=0x00000000001FC000 "0'"
 *   insn=0x00000000003A5C10 string=0x00000000003A5C14 "5"
 *   insn=0x00000000003A5C18 string=0x00000000003A5C1C ""
 *   insn=0x00000000003A5C28 string=0x00000000003A5C2C "\t@"
 *   insn=0x00000000003A5C38 string=0x00000000003A5C3C ""
 *   insn=0x00000000003A5C48 string=0x00000000003A5C4C "@"
 *   insn=0x00000000003A5C7C string=0x00000000001F7C90 "0'"
 *   insn=0x00000000003A5C8C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A5C9C string=0x00000000003A5CA0 "\to"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfilesHeaderView::~ProfilesHeaderView(Caver::ProfilesHeaderView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 37);
  *(_QWORD *)this = off_6CE7E0;
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
  v5 = (_QWORD *)*((_QWORD *)this + 35);
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
  Caver::GUIFrameView::~GUIFrameView(this);
}

