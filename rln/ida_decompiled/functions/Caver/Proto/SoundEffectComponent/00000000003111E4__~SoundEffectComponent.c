/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003111E4
 * Mangled: _ZN5Caver5Proto20SoundEffectComponentD0Ev
 * Demangled: Caver::Proto::SoundEffectComponent::~SoundEffectComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003112E0  Caver::Proto::SoundEffectComponent::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x00000000003111F0 string=0x00000000003111F4 "T"
 *   insn=0x0000000000311208 string=0x000000000031120C "`\n@"
 *   insn=0x000000000031120C string=0x0000000000311210 "UB"
 *   insn=0x0000000000311210 string=0x0000000000311214 ")"
 *   insn=0x0000000000311214 string=0x0000000000311218 "A"
 *   insn=0x000000000031121C string=0x0000000000311220 "h"
 *   insn=0x0000000000311220 string=0x0000000000311224 " "
 *   insn=0x0000000000311228 string=0x000000000031122C "\t"
 *   insn=0x0000000000311230 string=0x0000000000311234 "J"
 *   insn=0x0000000000311234 string=0x0000000000311238 "(a"
 *   insn=0x0000000000311240 string=0x0000000000311244 ""
 *   insn=0x0000000000311244 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031124C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000311260 string=0x0000000000311264 "!"
 *   insn=0x0000000000311278 string=0x000000000031127C "J=G"
 *   insn=0x000000000031127C string=0x0000000000311280 ")!"
 *   insn=0x0000000000311284 string=0x0000000000311288 "*"
 *   insn=0x0000000000311284 string=0x000000000031129C "*"
 *   insn=0x0000000000311288 string=0x000000000031128C "K"
 *   insn=0x000000000031128C string=0x0000000000311290 "+"
 *   insn=0x0000000000311298 string=0x00000000003112A8 "_"
 *   insn=0x000000000031129C string=0x00000000003112A0 "K"
 *   insn=0x00000000003112A0 string=0x00000000003112A4 "+"
 *   insn=0x00000000003112B8 string=0x00000000003112BC ":d\t"
 *   insn=0x00000000003112C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003112D8 string=0x00000000003112DC "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundEffectComponent::~SoundEffectComponent(Caver::Proto::SoundEffectComponent *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C7DD0;
  if ( v2 != &Caver::Proto::SoundEffectComponent::_default_name_ && v2 )
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

