/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F624
 * Mangled: _ZN5Caver5Proto17ParticleComponent10SharedDtorEv
 * Demangled: Caver::Proto::ParticleComponent::SharedDtor(void)
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
 *   insn=0x000000000031F630 string=0x000000000031F634 "S"
 *   insn=0x000000000031F634 string=0x000000000031F638 "h"
 *   insn=0x000000000031F63C string=0x000000000031F640 "("
 *   insn=0x000000000031F644 string=0x000000000031F648 ""
 *   insn=0x000000000031F64C string=0x000000000031F650 " "
 *   insn=0x000000000031F650 string=0x000000000031F674 "h"
 *   insn=0x000000000031F654 string=0x000000000031F658 "\t"
 *   insn=0x000000000031F658 string=0x000000000031F65C "*"
 *   insn=0x000000000031F65C string=0x000000000031F660 "J"
 *   insn=0x000000000031F660 string=0x000000000031F664 "(a"
 *   insn=0x000000000031F668 string=0x000000000031F66C "A"
 *   insn=0x000000000031F66C string=0x000000000031F694 "*"
 *   insn=0x000000000031F670 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031F67C string=0x000000000031F680 "!"
 *   insn=0x000000000031F694 string=0x000000000031F698 "J=G"
 *   insn=0x000000000031F698 string=0x000000000031F69C ")!"
 *   insn=0x000000000031F6A0 string=0x000000000031F6A4 "*"
 *   insn=0x000000000031F6A0 string=0x000000000031F6B8 "*"
 *   insn=0x000000000031F6A4 string=0x000000000031F6A8 "K"
 *   insn=0x000000000031F6A8 string=0x000000000031F6AC "+"
 *   insn=0x000000000031F6B4 string=0x000000000031F6C4 "_"
 *   insn=0x000000000031F6B8 string=0x000000000031F6BC "K"
 *   insn=0x000000000031F6BC string=0x000000000031F6C0 "+"
 *   insn=0x000000000031F6C4 string=0x000000000031F6C8 "L"
 *   insn=0x000000000031F6D4 string=0x000000000031F6D8 "3+\t"
 *   insn=0x000000000031F6E4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleComponent::SharedDtor(Caver::Proto::ParticleComponent *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::ParticleComponent::_default_texture_name_ && v1 )
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

