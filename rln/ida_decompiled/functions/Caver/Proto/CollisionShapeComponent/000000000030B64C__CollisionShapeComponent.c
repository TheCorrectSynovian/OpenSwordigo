/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B64C
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponentC2Ev
 * Demangled: Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000030B64C string=0x000000000030B650 ""
 *   insn=0x000000000030B65C string=0x000000000030B660 "A"
 *   insn=0x000000000030B674 string=0x000000000030B678 "\t0"
 *   insn=0x000000000030B678 string=0x000000000030B67C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 13) = 0;
  *(_QWORD *)(this + 28) = 0;
  *(_QWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 36) = 0;
  *(_QWORD *)(this + 48) = 0;
  *(_QWORD *)(this + 56) = 0;
  *(_QWORD *)(this + 40) = 0;
  *(_BYTE *)(this + 12) = 1;
  *(_QWORD *)this = off_6C7A88;
  *(_DWORD *)(this + 64) = 0;
  return this;
}

