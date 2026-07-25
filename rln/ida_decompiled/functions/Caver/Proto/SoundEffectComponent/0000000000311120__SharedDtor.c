/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311120
 * Mangled: _ZN5Caver5Proto20SoundEffectComponent10SharedDtorEv
 * Demangled: Caver::Proto::SoundEffectComponent::SharedDtor(void)
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
 *   insn=0x000000000031112C string=0x0000000000311130 "S"
 *   insn=0x0000000000311130 string=0x0000000000311134 "h"
 *   insn=0x0000000000311140 string=0x0000000000311144 ""
 *   insn=0x0000000000311148 string=0x000000000031114C " "
 *   insn=0x000000000031114C string=0x0000000000311170 "h"
 *   insn=0x0000000000311150 string=0x0000000000311154 "\t"
 *   insn=0x0000000000311158 string=0x000000000031115C "J"
 *   insn=0x000000000031115C string=0x0000000000311160 "(a"
 *   insn=0x0000000000311164 string=0x0000000000311168 "A"
 *   insn=0x0000000000311168 string=0x000000000031116C "Q"
 *   insn=0x000000000031116C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000311178 string=0x000000000031117C "!"
 *   insn=0x000000000031117C string=0x00000000003111E0 "<"
 *   insn=0x0000000000311190 string=0x0000000000311194 "J=G"
 *   insn=0x0000000000311194 string=0x0000000000311198 ")!"
 *   insn=0x000000000031119C string=0x00000000003111A0 "*"
 *   insn=0x000000000031119C string=0x00000000003111B4 "*"
 *   insn=0x00000000003111A0 string=0x00000000003111A4 "K"
 *   insn=0x00000000003111A4 string=0x00000000003111A8 "+"
 *   insn=0x00000000003111B0 string=0x00000000003111C0 "_"
 *   insn=0x00000000003111B4 string=0x00000000003111B8 "K"
 *   insn=0x00000000003111B8 string=0x00000000003111BC "+"
 *   insn=0x00000000003111C0 string=0x00000000003111C4 "L"
 *   insn=0x00000000003111D0 string=0x00000000003111D4 "td\t"
 *   insn=0x00000000003111E0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundEffectComponent::SharedDtor(Caver::Proto::SoundEffectComponent *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::SoundEffectComponent::_default_name_ && v1 )
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

