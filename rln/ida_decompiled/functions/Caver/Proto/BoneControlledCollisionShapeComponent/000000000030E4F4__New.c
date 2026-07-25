/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E4F4
 * Mangled: _ZNK5Caver5Proto37BoneControlledCollisionShapeComponent3NewEv
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 7
 *   insn=0x000000000030E4FC string=0x000000000030E500 "8"
 *   insn=0x000000000030E500 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030E504 string=0x000000000030E508 ""
 *   insn=0x000000000030E510 string=0x000000000030E514 ")"
 *   insn=0x000000000030E514 string=0x000000000030E518 "A"
 *   insn=0x000000000030E518 string=0x000000000030E51C ""
 *   insn=0x000000000030E520 string=0x000000000030E524 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::New(
        Caver::Proto::BoneControlledCollisionShapeComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C7BF0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 16) = &Caver::Proto::BoneControlledCollisionShapeComponent::_default_controlling_bone_name_;
  return result;
}

