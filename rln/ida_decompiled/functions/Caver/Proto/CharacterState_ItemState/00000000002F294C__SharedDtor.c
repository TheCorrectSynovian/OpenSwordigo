/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F294C
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemState10SharedDtorEv
 * Demangled: Caver::Proto::CharacterState_ItemState::SharedDtor(void)
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
 *   insn=0x00000000002F2958 string=0x00000000002F295C "S"
 *   insn=0x00000000002F295C string=0x00000000002F2960 "h"
 *   insn=0x00000000002F296C string=0x00000000002F2970 ")G"
 *   insn=0x00000000002F2974 string=0x00000000002F2978 " "
 *   insn=0x00000000002F2978 string=0x00000000002F299C "h"
 *   insn=0x00000000002F297C string=0x00000000002F2980 "\t"
 *   insn=0x00000000002F2984 string=0x00000000002F2988 "J"
 *   insn=0x00000000002F2988 string=0x00000000002F298C "(a"
 *   insn=0x00000000002F2990 string=0x00000000002F2994 "A"
 *   insn=0x00000000002F2994 string=0x00000000002F2998 "F"
 *   insn=0x00000000002F2998 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002F29A4 string=0x00000000002F29A8 "!"
 *   insn=0x00000000002F29A8 string=0x00000000002F2A0C "1"
 *   insn=0x00000000002F29BC string=0x00000000002F29C0 "J=G"
 *   insn=0x00000000002F29C0 string=0x00000000002F29C4 ")!"
 *   insn=0x00000000002F29C8 string=0x00000000002F29CC "*"
 *   insn=0x00000000002F29C8 string=0x00000000002F29E0 "*"
 *   insn=0x00000000002F29CC string=0x00000000002F29D0 "K"
 *   insn=0x00000000002F29D0 string=0x00000000002F29D4 "+"
 *   insn=0x00000000002F29DC string=0x00000000002F29EC "_"
 *   insn=0x00000000002F29E0 string=0x00000000002F29E4 "K"
 *   insn=0x00000000002F29E4 string=0x00000000002F29E8 "+"
 *   insn=0x00000000002F29EC string=0x00000000002F29F0 "L"
 *   insn=0x00000000002F29FC string=0x00000000002F2A00 "i"
 *   insn=0x00000000002F2A0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharacterState_ItemState::SharedDtor(Caver::Proto::CharacterState_ItemState *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::CharacterState_ItemState::_default_name_ && v1 )
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

