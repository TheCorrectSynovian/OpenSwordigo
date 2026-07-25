/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BFF8
 * Mangled: _ZN5Caver5Proto19BackgroundComponent10SharedDtorEv
 * Demangled: Caver::Proto::BackgroundComponent::SharedDtor(void)
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
 *   insn=0x000000000031C004 string=0x000000000031C008 "S"
 *   insn=0x000000000031C008 string=0x000000000031C00C "h"
 *   insn=0x000000000031C010 string=0x000000000031C014 "H"
 *   insn=0x000000000031C018 string=0x000000000031C01C "UC"
 *   insn=0x000000000031C020 string=0x000000000031C024 " "
 *   insn=0x000000000031C024 string=0x000000000031C048 "h"
 *   insn=0x000000000031C028 string=0x000000000031C02C "\t"
 *   insn=0x000000000031C02C string=0x000000000031C030 "J"
 *   insn=0x000000000031C030 string=0x000000000031C034 "J"
 *   insn=0x000000000031C034 string=0x000000000031C038 "(a"
 *   insn=0x000000000031C03C string=0x000000000031C040 "A"
 *   insn=0x000000000031C040 string=0x000000000031C068 "J"
 *   insn=0x000000000031C044 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031C050 string=0x000000000031C054 "!"
 *   insn=0x000000000031C068 string=0x000000000031C06C "J=G"
 *   insn=0x000000000031C06C string=0x000000000031C070 ")!"
 *   insn=0x000000000031C074 string=0x000000000031C078 "*"
 *   insn=0x000000000031C074 string=0x000000000031C08C "*"
 *   insn=0x000000000031C078 string=0x000000000031C07C "K"
 *   insn=0x000000000031C07C string=0x000000000031C080 "+"
 *   insn=0x000000000031C088 string=0x000000000031C098 "_"
 *   insn=0x000000000031C08C string=0x000000000031C090 "K"
 *   insn=0x000000000031C090 string=0x000000000031C094 "+"
 *   insn=0x000000000031C098 string=0x000000000031C09C "L"
 *   insn=0x000000000031C0B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BackgroundComponent::SharedDtor(Caver::Proto::BackgroundComponent *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::BackgroundComponent::_default_texture_name_ && v1 )
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

