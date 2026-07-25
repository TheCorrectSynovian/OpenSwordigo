/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003042B0
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponentD0Ev
 * Demangled: Caver::Proto::KeyframeAnimationComponent::~KeyframeAnimationComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003043AC  Caver::Proto::KeyframeAnimationComponent::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x00000000003042BC string=0x00000000003042C0 "T"
 *   insn=0x00000000003042C8 string=0x00000000003042CC "\t"
 *   insn=0x00000000003042D0 string=0x00000000003042D4 ""
 *   insn=0x00000000003042D4 string=0x00000000003042D8 "`\n@"
 *   insn=0x00000000003042D8 string=0x00000000003042DC ""
 *   insn=0x00000000003042DC string=0x00000000003042E0 ")ID"
 *   insn=0x00000000003042E0 string=0x00000000003042E4 "A"
 *   insn=0x00000000003042E8 string=0x00000000003042EC "h"
 *   insn=0x00000000003042EC string=0x00000000003042F0 " "
 *   insn=0x00000000003042F4 string=0x00000000003042F8 "\t"
 *   insn=0x00000000003042F8 string=0x00000000003042FC "\n"
 *   insn=0x00000000003042FC string=0x0000000000304300 "J"
 *   insn=0x0000000000304300 string=0x0000000000304304 "(a"
 *   insn=0x000000000030430C string=0x0000000000304344 "\n"
 *   insn=0x0000000000304310 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000304318 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030432C string=0x0000000000304330 "!"
 *   insn=0x0000000000304344 string=0x0000000000304348 "J=G"
 *   insn=0x0000000000304348 string=0x000000000030434C ")!"
 *   insn=0x0000000000304350 string=0x0000000000304354 "*"
 *   insn=0x0000000000304350 string=0x0000000000304368 "*"
 *   insn=0x0000000000304354 string=0x0000000000304358 "K"
 *   insn=0x0000000000304358 string=0x000000000030435C "+"
 *   insn=0x0000000000304364 string=0x0000000000304374 "_"
 *   insn=0x0000000000304368 string=0x000000000030436C "K"
 *   insn=0x000000000030436C string=0x0000000000304370 "+"
 *   insn=0x0000000000304384 string=0x0000000000304388 ""
 *   insn=0x0000000000304394 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003043A4 string=0x00000000003043A8 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::KeyframeAnimationComponent::~KeyframeAnimationComponent(
        Caver::Proto::KeyframeAnimationComponent *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C7650;
  if ( v2 != &Caver::Proto::KeyframeAnimationComponent::_default_name_ && v2 )
  {
    v3 = (__int64 *)(*v2 - 24);
    if ( v3 != &qword_6FD2E0 )
    {
      v4 = (unsigned int *)(*v2 - 8);
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
      {
        v6 = v2;
        operator delete(v3);
        v2 = v6;
      }
    }
    operator delete(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

