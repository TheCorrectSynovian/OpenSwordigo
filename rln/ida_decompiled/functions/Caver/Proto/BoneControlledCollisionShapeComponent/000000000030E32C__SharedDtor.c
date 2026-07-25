/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E32C
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponent10SharedDtorEv
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::SharedDtor(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 22
 *   insn=0x000000000030E338 string=0x000000000030E33C "S"
 *   insn=0x000000000030E33C string=0x000000000030E340 "h"
 *   insn=0x000000000030E34C string=0x000000000030E350 ""
 *   insn=0x000000000030E354 string=0x000000000030E358 " "
 *   insn=0x000000000030E358 string=0x000000000030E37C "h"
 *   insn=0x000000000030E35C string=0x000000000030E360 "\t"
 *   insn=0x000000000030E364 string=0x000000000030E368 "J"
 *   insn=0x000000000030E368 string=0x000000000030E36C "(a"
 *   insn=0x000000000030E370 string=0x000000000030E374 "A"
 *   insn=0x000000000030E378 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030E384 string=0x000000000030E388 "!"
 *   insn=0x000000000030E39C string=0x000000000030E3A0 "J=G"
 *   insn=0x000000000030E3A0 string=0x000000000030E3A4 ")!"
 *   insn=0x000000000030E3A8 string=0x000000000030E3AC "*"
 *   insn=0x000000000030E3A8 string=0x000000000030E3C0 "*"
 *   insn=0x000000000030E3AC string=0x000000000030E3B0 "K"
 *   insn=0x000000000030E3B0 string=0x000000000030E3B4 "+"
 *   insn=0x000000000030E3BC string=0x000000000030E3CC "_"
 *   insn=0x000000000030E3C0 string=0x000000000030E3C4 "K"
 *   insn=0x000000000030E3C4 string=0x000000000030E3C8 "+"
 *   insn=0x000000000030E3CC string=0x000000000030E3D0 "L"
 *   insn=0x000000000030E3EC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::SharedDtor(
        Caver::Proto::BoneControlledCollisionShapeComponent *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::BoneControlledCollisionShapeComponent::_default_controlling_bone_name_ && v1 )
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

