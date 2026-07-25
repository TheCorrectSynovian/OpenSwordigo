/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F6E8
 * Mangled: _ZN5Caver5Proto17ParticleComponentD0Ev
 * Demangled: Caver::Proto::ParticleComponent::~ParticleComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000031F7E4  Caver::Proto::ParticleComponent::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x000000000031F6F4 string=0x000000000031F6F8 "T"
 *   insn=0x000000000031F700 string=0x000000000031F704 ")"
 *   insn=0x000000000031F708 string=0x000000000031F70C "("
 *   insn=0x000000000031F70C string=0x000000000031F710 "`\n@"
 *   insn=0x000000000031F710 string=0x000000000031F714 "%E"
 *   insn=0x000000000031F714 string=0x000000000031F718 ")"
 *   insn=0x000000000031F718 string=0x000000000031F71C "A"
 *   insn=0x000000000031F720 string=0x000000000031F724 "h"
 *   insn=0x000000000031F724 string=0x000000000031F728 " "
 *   insn=0x000000000031F72C string=0x000000000031F730 "\t"
 *   insn=0x000000000031F730 string=0x000000000031F734 "*"
 *   insn=0x000000000031F734 string=0x000000000031F738 "J"
 *   insn=0x000000000031F738 string=0x000000000031F73C "(a"
 *   insn=0x000000000031F744 string=0x000000000031F77C "*"
 *   insn=0x000000000031F748 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031F750 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031F764 string=0x000000000031F768 "!"
 *   insn=0x000000000031F77C string=0x000000000031F780 "J=G"
 *   insn=0x000000000031F780 string=0x000000000031F784 ")!"
 *   insn=0x000000000031F788 string=0x000000000031F78C "*"
 *   insn=0x000000000031F788 string=0x000000000031F7A0 "*"
 *   insn=0x000000000031F78C string=0x000000000031F790 "K"
 *   insn=0x000000000031F790 string=0x000000000031F794 "+"
 *   insn=0x000000000031F79C string=0x000000000031F7AC "_"
 *   insn=0x000000000031F7A0 string=0x000000000031F7A4 "K"
 *   insn=0x000000000031F7A4 string=0x000000000031F7A8 "+"
 *   insn=0x000000000031F7CC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031F7DC string=0x000000000031F7E0 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleComponent::~ParticleComponent(Caver::Proto::ParticleComponent *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C8820;
  if ( v2 != &Caver::Proto::ParticleComponent::_default_texture_name_ && v2 )
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

