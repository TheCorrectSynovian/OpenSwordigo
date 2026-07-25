/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318154
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponent10SharedCtorEv
 * Demangled: Caver::Proto::PhysicsObjectComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000318168 string=0x000000000031816C "0"
 *   insn=0x000000000031816C string=0x0000000000318170 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = 0;
  *(_QWORD *)(this + 44) = 0;
  *(_QWORD *)(this + 33) = 0;
  *(_BYTE *)(this + 12) = 1;
  *(_DWORD *)(this + 24) = 1065353216;
  *(_QWORD *)(this + 28) = 0;
  return this;
}

