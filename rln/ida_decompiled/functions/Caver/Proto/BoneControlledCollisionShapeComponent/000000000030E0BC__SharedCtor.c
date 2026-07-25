/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E0BC
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponent10SharedCtorEv
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000030E0C0 string=0x000000000030E0C4 ""
 *   insn=0x000000000030E0C8 string=0x000000000030E0CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::SharedCtor(__int64 this)
{
  *(_QWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::BoneControlledCollisionShapeComponent::_default_controlling_bone_name_;
  return this;
}

