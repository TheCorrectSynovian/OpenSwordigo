/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E3F0
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponentD0Ev
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000030E4EC  Caver::Proto::BoneControlledCollisionShapeComponent::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x000000000030E3FC string=0x000000000030E400 "T"
 *   insn=0x000000000030E414 string=0x000000000030E418 "`\n@"
 *   insn=0x000000000030E418 string=0x000000000030E41C ""
 *   insn=0x000000000030E41C string=0x000000000030E420 ")"
 *   insn=0x000000000030E420 string=0x000000000030E424 "A"
 *   insn=0x000000000030E428 string=0x000000000030E42C "h"
 *   insn=0x000000000030E42C string=0x000000000030E430 " "
 *   insn=0x000000000030E434 string=0x000000000030E438 "\t"
 *   insn=0x000000000030E43C string=0x000000000030E440 "J"
 *   insn=0x000000000030E440 string=0x000000000030E444 "(a"
 *   insn=0x000000000030E450 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030E454 string=0x000000000030E458 "j"
 *   insn=0x000000000030E458 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030E46C string=0x000000000030E470 "!"
 *   insn=0x000000000030E484 string=0x000000000030E488 "J=G"
 *   insn=0x000000000030E488 string=0x000000000030E48C ")!"
 *   insn=0x000000000030E490 string=0x000000000030E494 "*"
 *   insn=0x000000000030E490 string=0x000000000030E4A8 "*"
 *   insn=0x000000000030E494 string=0x000000000030E498 "K"
 *   insn=0x000000000030E498 string=0x000000000030E49C "+"
 *   insn=0x000000000030E4A4 string=0x000000000030E4B4 "_"
 *   insn=0x000000000030E4A8 string=0x000000000030E4AC "K"
 *   insn=0x000000000030E4AC string=0x000000000030E4B0 "+"
 *   insn=0x000000000030E4D4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030E4DC string=0x000000000030E4E0 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent(
        Caver::Proto::BoneControlledCollisionShapeComponent *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C7BF0;
  if ( v2 != &Caver::Proto::BoneControlledCollisionShapeComponent::_default_controlling_bone_name_ && v2 )
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

