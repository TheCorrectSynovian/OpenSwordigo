/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030D78C
 * Mangled: _ZN5Caver5Proto15HealthComponentC2Ev
 * Demangled: Caver::Proto::HealthComponent::HealthComponent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000030D78C string=0x000000000030D790 ""
 *   insn=0x000000000030D79C string=0x000000000030D7A0 "A"
 *   insn=0x000000000030D7A0 string=0x000000000030D7A4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::HealthComponent(__int64 this)
{
  *(_DWORD *)(this + 16) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_QWORD *)this = off_6C7B78;
  *(_QWORD *)(this + 8) = 0;
  return this;
}

