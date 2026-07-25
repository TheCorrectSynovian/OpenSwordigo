/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C0BC
 * Mangled: _ZN5Caver5Proto19BackgroundComponentD0Ev
 * Demangled: Caver::Proto::BackgroundComponent::~BackgroundComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000031C1B8  Caver::Proto::BackgroundComponent::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 32
 *   insn=0x000000000031C0C8 string=0x000000000031C0CC "T"
 *   insn=0x000000000031C0D4 string=0x000000000031C0D8 "I"
 *   insn=0x000000000031C0DC string=0x000000000031C0E0 "H"
 *   insn=0x000000000031C0E0 string=0x000000000031C0E4 "`\n@"
 *   insn=0x000000000031C0E4 string=0x000000000031C0E8 "9E"
 *   insn=0x000000000031C0E8 string=0x000000000031C0EC ")UC"
 *   insn=0x000000000031C0EC string=0x000000000031C0F0 "A"
 *   insn=0x000000000031C0F4 string=0x000000000031C0F8 "h"
 *   insn=0x000000000031C0F8 string=0x000000000031C0FC " "
 *   insn=0x000000000031C100 string=0x000000000031C104 "\t"
 *   insn=0x000000000031C104 string=0x000000000031C108 "J"
 *   insn=0x000000000031C108 string=0x000000000031C10C "J"
 *   insn=0x000000000031C10C string=0x000000000031C110 "(a"
 *   insn=0x000000000031C118 string=0x000000000031C11C "el"
 *   insn=0x000000000031C118 string=0x000000000031C150 "J"
 *   insn=0x000000000031C11C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031C120 string=0x000000000031C124 "7m"
 *   insn=0x000000000031C124 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031C128 string=0x000000000031C12C "al"
 *   insn=0x000000000031C138 string=0x000000000031C13C "!"
 *   insn=0x000000000031C13C string=0x000000000031C1A0 "Lh"
 *   insn=0x000000000031C150 string=0x000000000031C154 "J=G"
 *   insn=0x000000000031C154 string=0x000000000031C158 ")!"
 *   insn=0x000000000031C15C string=0x000000000031C160 "*"
 *   insn=0x000000000031C15C string=0x000000000031C174 "*"
 *   insn=0x000000000031C160 string=0x000000000031C164 "K"
 *   insn=0x000000000031C164 string=0x000000000031C168 "+"
 *   insn=0x000000000031C170 string=0x000000000031C180 "_"
 *   insn=0x000000000031C174 string=0x000000000031C178 "K"
 *   insn=0x000000000031C178 string=0x000000000031C17C "+"
 *   insn=0x000000000031C1A0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031C1A8 string=0x000000000031C1AC "Al"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BackgroundComponent::~BackgroundComponent(Caver::Proto::BackgroundComponent *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C8640;
  if ( v2 != &Caver::Proto::BackgroundComponent::_default_texture_name_ && v2 )
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

