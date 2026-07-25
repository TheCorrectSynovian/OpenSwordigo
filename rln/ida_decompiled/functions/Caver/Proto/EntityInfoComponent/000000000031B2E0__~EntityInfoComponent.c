/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B2E0
 * Mangled: _ZN5Caver5Proto19EntityInfoComponentD0Ev
 * Demangled: Caver::Proto::EntityInfoComponent::~EntityInfoComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000031B3DC  Caver::Proto::EntityInfoComponent::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x000000000031B2EC string=0x000000000031B2F0 "T"
 *   insn=0x000000000031B2F8 string=0x000000000031B2FC "I"
 *   insn=0x000000000031B300 string=0x000000000031B304 "H"
 *   insn=0x000000000031B304 string=0x000000000031B308 "`\n@"
 *   insn=0x000000000031B308 string=0x000000000031B30C ""
 *   insn=0x000000000031B30C string=0x000000000031B310 ")"
 *   insn=0x000000000031B310 string=0x000000000031B314 "A"
 *   insn=0x000000000031B318 string=0x000000000031B31C "h"
 *   insn=0x000000000031B31C string=0x000000000031B320 " "
 *   insn=0x000000000031B324 string=0x000000000031B328 "\t"
 *   insn=0x000000000031B328 string=0x000000000031B32C "J"
 *   insn=0x000000000031B32C string=0x000000000031B330 "J"
 *   insn=0x000000000031B330 string=0x000000000031B334 "(a"
 *   insn=0x000000000031B33C string=0x000000000031B374 "J"
 *   insn=0x000000000031B340 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031B348 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031B35C string=0x000000000031B360 "!"
 *   insn=0x000000000031B374 string=0x000000000031B378 "J=G"
 *   insn=0x000000000031B378 string=0x000000000031B37C ")!"
 *   insn=0x000000000031B380 string=0x000000000031B384 "*"
 *   insn=0x000000000031B380 string=0x000000000031B398 "*"
 *   insn=0x000000000031B384 string=0x000000000031B388 "K"
 *   insn=0x000000000031B388 string=0x000000000031B38C "+"
 *   insn=0x000000000031B394 string=0x000000000031B3A4 "_"
 *   insn=0x000000000031B398 string=0x000000000031B39C "K"
 *   insn=0x000000000031B39C string=0x000000000031B3A0 "+"
 *   insn=0x000000000031B3C4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031B3D4 string=0x000000000031B3D8 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityInfoComponent::~EntityInfoComponent(Caver::Proto::EntityInfoComponent *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C8550;
  if ( v2 != &Caver::Proto::EntityInfoComponent::_default_entity_class_ && v2 )
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

