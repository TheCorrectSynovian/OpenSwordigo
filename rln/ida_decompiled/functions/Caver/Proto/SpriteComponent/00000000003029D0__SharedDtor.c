/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003029D0
 * Mangled: _ZN5Caver5Proto15SpriteComponent10SharedDtorEv
 * Demangled: Caver::Proto::SpriteComponent::SharedDtor(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 27
 *   insn=0x00000000003029DC string=0x00000000003029E0 "S"
 *   insn=0x00000000003029E0 string=0x00000000003029E4 "h"
 *   insn=0x00000000003029E8 string=0x00000000003029EC ""
 *   insn=0x00000000003029F0 string=0x00000000003029F4 ""
 *   insn=0x00000000003029F8 string=0x00000000003029FC " "
 *   insn=0x00000000003029FC string=0x0000000000302A20 "h"
 *   insn=0x0000000000302A00 string=0x0000000000302A04 "\t"
 *   insn=0x0000000000302A04 string=0x0000000000302A08 "\n"
 *   insn=0x0000000000302A08 string=0x0000000000302A0C "J"
 *   insn=0x0000000000302A0C string=0x0000000000302A10 "(a"
 *   insn=0x0000000000302A14 string=0x0000000000302A18 "A"
 *   insn=0x0000000000302A18 string=0x0000000000302A1C "%"
 *   insn=0x0000000000302A18 string=0x0000000000302A40 "\n"
 *   insn=0x0000000000302A1C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000302A28 string=0x0000000000302A2C "!"
 *   insn=0x0000000000302A40 string=0x0000000000302A44 "J=G"
 *   insn=0x0000000000302A44 string=0x0000000000302A48 ")!"
 *   insn=0x0000000000302A4C string=0x0000000000302A50 "*"
 *   insn=0x0000000000302A4C string=0x0000000000302A64 "*"
 *   insn=0x0000000000302A50 string=0x0000000000302A54 "K"
 *   insn=0x0000000000302A54 string=0x0000000000302A58 "+"
 *   insn=0x0000000000302A60 string=0x0000000000302A70 "_"
 *   insn=0x0000000000302A64 string=0x0000000000302A68 "K"
 *   insn=0x0000000000302A68 string=0x0000000000302A6C "+"
 *   insn=0x0000000000302A70 string=0x0000000000302A74 "L"
 *   insn=0x0000000000302A80 string=0x0000000000302A84 "H"
 *   insn=0x0000000000302A90 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpriteComponent::SharedDtor(Caver::Proto::SpriteComponent *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::SpriteComponent::_default_texture_name_ && v1 )
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

