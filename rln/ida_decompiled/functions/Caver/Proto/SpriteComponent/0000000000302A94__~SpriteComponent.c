/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302A94
 * Mangled: _ZN5Caver5Proto15SpriteComponentD0Ev
 * Demangled: Caver::Proto::SpriteComponent::~SpriteComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000302B90  Caver::Proto::SpriteComponent::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x0000000000302AA0 string=0x0000000000302AA4 "T"
 *   insn=0x0000000000302AAC string=0x0000000000302AB0 "\t"
 *   insn=0x0000000000302AB4 string=0x0000000000302AB8 "("
 *   insn=0x0000000000302AB8 string=0x0000000000302ABC "`\n@"
 *   insn=0x0000000000302ABC string=0x0000000000302AC0 "1C"
 *   insn=0x0000000000302AC0 string=0x0000000000302AC4 ")"
 *   insn=0x0000000000302AC4 string=0x0000000000302AC8 "A"
 *   insn=0x0000000000302ACC string=0x0000000000302AD0 "h"
 *   insn=0x0000000000302AD0 string=0x0000000000302AD4 " "
 *   insn=0x0000000000302AD8 string=0x0000000000302ADC "\t"
 *   insn=0x0000000000302ADC string=0x0000000000302AE0 "\n"
 *   insn=0x0000000000302AE0 string=0x0000000000302AE4 "J"
 *   insn=0x0000000000302AE4 string=0x0000000000302AE8 "(a"
 *   insn=0x0000000000302AF0 string=0x0000000000302B28 "\n"
 *   insn=0x0000000000302AF4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000302AFC string=0x00000000001F7600 "0'"
 *   insn=0x0000000000302B10 string=0x0000000000302B14 "!"
 *   insn=0x0000000000302B28 string=0x0000000000302B2C "J=G"
 *   insn=0x0000000000302B2C string=0x0000000000302B30 ")!"
 *   insn=0x0000000000302B34 string=0x0000000000302B38 "*"
 *   insn=0x0000000000302B34 string=0x0000000000302B4C "*"
 *   insn=0x0000000000302B38 string=0x0000000000302B3C "K"
 *   insn=0x0000000000302B3C string=0x0000000000302B40 "+"
 *   insn=0x0000000000302B48 string=0x0000000000302B58 "_"
 *   insn=0x0000000000302B4C string=0x0000000000302B50 "K"
 *   insn=0x0000000000302B50 string=0x0000000000302B54 "+"
 *   insn=0x0000000000302B78 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000302B88 string=0x0000000000302B8C "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpriteComponent::~SpriteComponent(Caver::Proto::SpriteComponent *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C7560;
  if ( v2 != &Caver::Proto::SpriteComponent::_default_texture_name_ && v2 )
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

