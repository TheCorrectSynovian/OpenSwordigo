/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8D74
 * Mangled: _ZN5Caver5Proto21PlayerProfile_Counter10SharedDtorEv
 * Demangled: Caver::Proto::PlayerProfile_Counter::SharedDtor(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x00000000002E8D80 string=0x00000000002E8D84 "S"
 *   insn=0x00000000002E8D84 string=0x00000000002E8D88 "h"
 *   insn=0x00000000002E8D94 string=0x00000000002E8D98 ""
 *   insn=0x00000000002E8D9C string=0x00000000002E8DA0 " "
 *   insn=0x00000000002E8DA0 string=0x00000000002E8DC4 "h"
 *   insn=0x00000000002E8DA4 string=0x00000000002E8DA8 "\t"
 *   insn=0x00000000002E8DAC string=0x00000000002E8DB0 "J"
 *   insn=0x00000000002E8DB0 string=0x00000000002E8DB4 "(a"
 *   insn=0x00000000002E8DB8 string=0x00000000002E8DBC "A"
 *   insn=0x00000000002E8DBC string=0x00000000002E8DC0 "<9"
 *   insn=0x00000000002E8DC0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E8DCC string=0x00000000002E8DD0 "!"
 *   insn=0x00000000002E8DD0 string=0x00000000002E8E34 "'5"
 *   insn=0x00000000002E8DE4 string=0x00000000002E8DE8 "J=G"
 *   insn=0x00000000002E8DE8 string=0x00000000002E8DEC ")!"
 *   insn=0x00000000002E8DF0 string=0x00000000002E8DF4 "*"
 *   insn=0x00000000002E8DF0 string=0x00000000002E8E08 "*"
 *   insn=0x00000000002E8DF4 string=0x00000000002E8DF8 "K"
 *   insn=0x00000000002E8DF8 string=0x00000000002E8DFC "+"
 *   insn=0x00000000002E8E04 string=0x00000000002E8E14 "_"
 *   insn=0x00000000002E8E08 string=0x00000000002E8E0C "K"
 *   insn=0x00000000002E8E0C string=0x00000000002E8E10 "+"
 *   insn=0x00000000002E8E14 string=0x00000000002E8E18 "L"
 *   insn=0x00000000002E8E24 string=0x00000000002E8E28 "_"
 *   insn=0x00000000002E8E34 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PlayerProfile_Counter::SharedDtor(Caver::Proto::PlayerProfile_Counter *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::PlayerProfile_Counter::_default_name_ && v1 )
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

