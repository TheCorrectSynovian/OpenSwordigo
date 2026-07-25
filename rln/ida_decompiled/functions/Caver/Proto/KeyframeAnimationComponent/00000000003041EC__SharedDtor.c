/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003041EC
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponent10SharedDtorEv
 * Demangled: Caver::Proto::KeyframeAnimationComponent::SharedDtor(void)
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
 *   insn=0x00000000003041F8 string=0x00000000003041FC "S"
 *   insn=0x00000000003041FC string=0x0000000000304200 "h"
 *   insn=0x0000000000304204 string=0x0000000000304208 ""
 *   insn=0x000000000030420C string=0x0000000000304210 "ID"
 *   insn=0x0000000000304214 string=0x0000000000304218 " "
 *   insn=0x0000000000304218 string=0x000000000030423C "h"
 *   insn=0x000000000030421C string=0x0000000000304220 "\t"
 *   insn=0x0000000000304220 string=0x0000000000304224 "\n"
 *   insn=0x0000000000304224 string=0x0000000000304228 "J"
 *   insn=0x0000000000304228 string=0x000000000030422C "(a"
 *   insn=0x0000000000304230 string=0x0000000000304234 "A"
 *   insn=0x0000000000304234 string=0x000000000030425C "\n"
 *   insn=0x0000000000304238 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000304244 string=0x0000000000304248 "!"
 *   insn=0x0000000000304248 string=0x00000000003042AC "\t"
 *   insn=0x000000000030425C string=0x0000000000304260 "J=G"
 *   insn=0x0000000000304260 string=0x0000000000304264 ")!"
 *   insn=0x0000000000304268 string=0x000000000030426C "*"
 *   insn=0x0000000000304268 string=0x0000000000304280 "*"
 *   insn=0x000000000030426C string=0x0000000000304270 "K"
 *   insn=0x0000000000304270 string=0x0000000000304274 "+"
 *   insn=0x000000000030427C string=0x000000000030428C "_"
 *   insn=0x0000000000304280 string=0x0000000000304284 "K"
 *   insn=0x0000000000304284 string=0x0000000000304288 "+"
 *   insn=0x000000000030428C string=0x0000000000304290 "L"
 *   insn=0x000000000030429C string=0x00000000003042A0 "A"
 *   insn=0x00000000003042AC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::KeyframeAnimationComponent::SharedDtor(Caver::Proto::KeyframeAnimationComponent *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::KeyframeAnimationComponent::_default_name_ && v1 )
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

