/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030CB30
 * Mangled: _ZN5Caver5Proto15DamageComponent10SharedCtorEv
 * Demangled: Caver::Proto::DamageComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000030CB3C string=0x000000000030CB40 "P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::SharedCtor(__int64 this)
{
  *(_QWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = 0;
  *(_QWORD *)(this + 21) = 0;
  *(_QWORD *)(this + 32) = 0;
  *(_WORD *)(this + 40) = 256;
  *(_DWORD *)(this + 44) = 0;
  return this;
}

