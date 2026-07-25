/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC84C
 * Mangled: _ZN5Caver5Proto10QuestState10SharedDtorEv
 * Demangled: Caver::Proto::QuestState::SharedDtor(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 23
 *   insn=0x00000000002EC858 string=0x00000000002EC85C "S"
 *   insn=0x00000000002EC85C string=0x00000000002EC860 "h"
 *   insn=0x00000000002EC86C string=0x00000000002EC870 ""
 *   insn=0x00000000002EC874 string=0x00000000002EC878 " "
 *   insn=0x00000000002EC878 string=0x00000000002EC89C "h"
 *   insn=0x00000000002EC87C string=0x00000000002EC880 "\t"
 *   insn=0x00000000002EC884 string=0x00000000002EC888 "J"
 *   insn=0x00000000002EC888 string=0x00000000002EC88C "(a"
 *   insn=0x00000000002EC890 string=0x00000000002EC894 "A"
 *   insn=0x00000000002EC898 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002EC8A4 string=0x00000000002EC8A8 "!"
 *   insn=0x00000000002EC8A8 string=0x00000000002EC90C "q&"
 *   insn=0x00000000002EC8BC string=0x00000000002EC8C0 "J=G"
 *   insn=0x00000000002EC8C0 string=0x00000000002EC8C4 ")!"
 *   insn=0x00000000002EC8C8 string=0x00000000002EC8CC "*"
 *   insn=0x00000000002EC8C8 string=0x00000000002EC8E0 "*"
 *   insn=0x00000000002EC8CC string=0x00000000002EC8D0 "K"
 *   insn=0x00000000002EC8D0 string=0x00000000002EC8D4 "+"
 *   insn=0x00000000002EC8DC string=0x00000000002EC8EC "_"
 *   insn=0x00000000002EC8E0 string=0x00000000002EC8E4 "K"
 *   insn=0x00000000002EC8E4 string=0x00000000002EC8E8 "+"
 *   insn=0x00000000002EC8EC string=0x00000000002EC8F0 "L"
 *   insn=0x00000000002EC90C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::QuestState::SharedDtor(Caver::Proto::QuestState *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::QuestState::_default_quest_name_ && v1 )
  {
    v2 = (__int64 *)(*v1 - 24);
    if ( v2 != &qword_6FD2E0 )
    {
      v3 = (unsigned int *)(*v1 - 8);
      if ( &pthread_create )
      {
        do
          v4 = __ldaxr(v3);
        while ( __stlxr(v4 - 1, v3) );
      }
      else
      {
        v4 = (*v3)--;
      }
      if ( v4 <= 0 )
      {
        v5 = v1;
        operator delete(v2);
        v1 = v5;
      }
    }
    operator delete(v1);
  }
}

