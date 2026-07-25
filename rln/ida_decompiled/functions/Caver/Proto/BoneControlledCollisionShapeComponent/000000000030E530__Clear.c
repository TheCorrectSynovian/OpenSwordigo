/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E530
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponent5ClearEv
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 5
 *   insn=0x000000000030E53C string=0x000000000030E540 "hb@9"
 *   insn=0x000000000030E548 string=0x000000000030E54C "h"
 *   insn=0x000000000030E550 string=0x000000000030E554 "`\n@"
 *   insn=0x000000000030E554 string=0x000000000030E558 ""
 *   insn=0x000000000030E560 string=0x000000000030E564 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 24);
  if ( v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::BoneControlledCollisionShapeComponent::_default_controlling_bone_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

