/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B688
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponent10SharedCtorEv
 * Demangled: Caver::Proto::CollisionShapeComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000030B6A4 string=0x000000000030B6A8 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::SharedCtor(__int64 this)
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
  *(_DWORD *)(this + 64) = 0;
  return this;
}

