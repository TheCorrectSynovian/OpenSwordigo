/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003FFEB0
 * Mangled: _ZN5Caver12MenuViewPageD2Ev
 * Demangled: Caver::MenuViewPage::~MenuViewPage()
 *
 * Callers: 1
 *   0x00000000003FF5E8  Caver::CharacterView::~CharacterView()
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 21
 *   insn=0x00000000003FFEBC string=0x00000000003FFEC0 "T"
 *   insn=0x00000000003FFEC8 string=0x00000000003FFECC ")"
 *   insn=0x00000000003FFECC string=0x00000000003FFED0 "*"
 *   insn=0x00000000003FFED4 string=0x00000000003FFED8 "hz@"
 *   insn=0x00000000003FFED8 string=0x00000000003FFEDC ")"
 *   insn=0x00000000003FFEDC string=0x00000000003FFEE0 "J"
 *   insn=0x00000000003FFEE4 string=0x00000000003FFEE8 ")A"
 *   insn=0x00000000003FFEEC string=0x00000000003FFEF0 "i"
 *   insn=0x00000000003FFEF0 string=0x00000000003FFEF4 "a"
 *   insn=0x00000000003FFEF4 string=0x00000000003FFF20 ")"
 *   insn=0x00000000003FFF20 string=0x00000000003FFF24 ")=G"
 *   insn=0x00000000003FFF24 string=0x00000000003FFF28 "!"
 *   insn=0x00000000003FFF2C string=0x00000000003FFF30 "\t"
 *   insn=0x00000000003FFF2C string=0x00000000003FFF44 "\t"
 *   insn=0x00000000003FFF30 string=0x00000000003FFF34 "*"
 *   insn=0x00000000003FFF34 string=0x00000000003FFF38 "\n"
 *   insn=0x00000000003FFF40 string=0x00000000003FFF50 "?"
 *   insn=0x00000000003FFF44 string=0x00000000003FFF48 "*"
 *   insn=0x00000000003FFF48 string=0x00000000003FFF4C "\n"
 *   insn=0x00000000003FFF50 string=0x00000000003FFF54 ","
 *   insn=0x00000000003FFF64 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MenuViewPage::~MenuViewPage(Caver::MenuViewPage *this)
{
  __int64 v2; // x8
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 30);
  v3 = (void *)(v2 - 24);
  *(_QWORD *)this = off_6D13B8;
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v2 - 8);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
  Caver::GUIView::~GUIView(this);
}

