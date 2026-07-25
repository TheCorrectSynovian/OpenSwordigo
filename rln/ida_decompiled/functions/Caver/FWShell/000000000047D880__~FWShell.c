/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D880
 * Mangled: _ZN5Caver7FWShellD2Ev
 * Demangled: Caver::FWShell::~FWShell()
 *
 * Callers: 2
 *   0x00000000002014F0  Caver::FWShell::~FWShell()
 *   0x000000000047D754  Caver::FWShell::FWShell(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F66B0  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase(std::_Rb_tree_node<Caver::FWTouch> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000047DA14  Caver::FWShell::~FWShell()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x000000000047D894 string=0x000000000047D898 "U"
 *   insn=0x000000000047D8A0 string=0x000000000047D8A4 "`""
 *   insn=0x000000000047D8A8 string=0x000000000047D8AC "H"
 *   insn=0x000000000047D8AC string=0x000000000047D8B0 ""
 *   insn=0x000000000047D8B0 string=0x000000000047D8B4 "a.@"
 *   insn=0x000000000047D8B4 string=0x000000000047D8B8 "A"
 *   insn=0x000000000047D8B8 string=0x000000000047D8BC "h"
 *   insn=0x000000000047D8BC string=0x000000000047D8C0 "|"
 *   insn=0x000000000047D8C0 string=0x000000000047D8C4 "t"
 *   insn=0x000000000047D8C0 string=0x00000000001F66B0 "0'"
 *   insn=0x000000000047D8CC string=0x000000000047D8D0 "W"
 *   insn=0x000000000047D8CC string=0x000000000047D940 "t"
 *   insn=0x000000000047D8D0 string=0x000000000047D8D4 "8"
 *   insn=0x000000000047D8E8 string=0x000000000047D8EC "\t"
 *   insn=0x000000000047D8E8 string=0x000000000047D900 "\t"
 *   insn=0x000000000047D8EC string=0x000000000047D8F0 "*"
 *   insn=0x000000000047D8F0 string=0x000000000047D8F4 "\n"
 *   insn=0x000000000047D8FC string=0x000000000047D90C "?"
 *   insn=0x000000000047D900 string=0x000000000047D904 "*"
 *   insn=0x000000000047D904 string=0x000000000047D908 "\n"
 *   insn=0x000000000047D92C string=0x000000000047D8E4 "!"
 *   insn=0x000000000047D934 string=0x000000000047D938 "A"
 *   insn=0x000000000047D938 string=0x000000000047D93C "t"
 *   insn=0x000000000047D944 string=0x000000000047D948 "Z"
 *   insn=0x000000000047D948 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047D958 string=0x000000000047D974 "W"
 *   insn=0x000000000047D974 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047D984 string=0x000000000047D988 "W"
 *   insn=0x000000000047D984 string=0x000000000047DA00 "u"
 *   insn=0x000000000047D988 string=0x000000000047D98C "8"
 *   insn=0x000000000047D9A0 string=0x000000000047D9A4 "\t"
 *   insn=0x000000000047D9A0 string=0x000000000047D9C0 "\t"
 *   insn=0x000000000047D9A4 string=0x000000000047D9A8 "*"
 *   insn=0x000000000047D9A8 string=0x000000000047D9AC "\n"
 *   insn=0x000000000047D9B0 string=0x000000000047D9B4 "?"
 *   insn=0x000000000047D9C0 string=0x000000000047D9C4 "*"
 *   insn=0x000000000047D9C4 string=0x000000000047D9C8 "\n"
 *   insn=0x000000000047D9C8 string=0x000000000047D9CC "?"
 *   insn=0x000000000047D9D4 string=0x000000000047D9D8 "s"
 *   insn=0x000000000047D9EC string=0x000000000047D99C "!"
 *   insn=0x000000000047D9F4 string=0x000000000047D9F8 "A"
 *   insn=0x000000000047D9F8 string=0x000000000047D9FC "u"
 *   insn=0x000000000047DA04 string=0x000000000047DA08 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWShell::~FWShell(Caver::FWShell *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  unsigned int *v4; // x8
  int v5; // w9
  __int64 *v6; // x0

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6D5220;
  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_erase();
  v2 = (_QWORD *)*((_QWORD *)this + 1);
  v3 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (__int64 *)(*v2 - 24LL);
      if ( v6 != &qword_6FD2E0 )
      {
        v4 = (unsigned int *)(*v2 - 8LL);
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
          operator delete(v6);
      }
      ++v2;
    }
    while ( v2 != v3 );
    v2 = (_QWORD *)*((_QWORD *)this + 1);
  }
  if ( v2 )
    operator delete(v2);
}

