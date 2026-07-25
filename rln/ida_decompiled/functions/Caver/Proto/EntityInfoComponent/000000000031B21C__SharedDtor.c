/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B21C
 * Mangled: _ZN5Caver5Proto19EntityInfoComponent10SharedDtorEv
 * Demangled: Caver::Proto::EntityInfoComponent::SharedDtor(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x000000000031B228 string=0x000000000031B22C "S"
 *   insn=0x000000000031B22C string=0x000000000031B230 "h"
 *   insn=0x000000000031B234 string=0x000000000031B238 "H"
 *   insn=0x000000000031B23C string=0x000000000031B240 ""
 *   insn=0x000000000031B244 string=0x000000000031B248 " "
 *   insn=0x000000000031B248 string=0x000000000031B26C "h"
 *   insn=0x000000000031B24C string=0x000000000031B250 "\t"
 *   insn=0x000000000031B250 string=0x000000000031B254 "J"
 *   insn=0x000000000031B254 string=0x000000000031B258 "J"
 *   insn=0x000000000031B258 string=0x000000000031B25C "(a"
 *   insn=0x000000000031B260 string=0x000000000031B264 "A"
 *   insn=0x000000000031B264 string=0x000000000031B28C "J"
 *   insn=0x000000000031B268 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031B274 string=0x000000000031B278 "!"
 *   insn=0x000000000031B28C string=0x000000000031B290 "J=G"
 *   insn=0x000000000031B290 string=0x000000000031B294 ")!"
 *   insn=0x000000000031B298 string=0x000000000031B29C "*"
 *   insn=0x000000000031B298 string=0x000000000031B2B0 "*"
 *   insn=0x000000000031B29C string=0x000000000031B2A0 "K"
 *   insn=0x000000000031B2A0 string=0x000000000031B2A4 "+"
 *   insn=0x000000000031B2AC string=0x000000000031B2BC "_"
 *   insn=0x000000000031B2B0 string=0x000000000031B2B4 "K"
 *   insn=0x000000000031B2B4 string=0x000000000031B2B8 "+"
 *   insn=0x000000000031B2BC string=0x000000000031B2C0 "L"
 *   insn=0x000000000031B2CC string=0x000000000031B2D0 "5<\t"
 *   insn=0x000000000031B2DC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityInfoComponent::SharedDtor(Caver::Proto::EntityInfoComponent *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::EntityInfoComponent::_default_entity_class_ && v1 )
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

