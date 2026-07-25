/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282B70
 * Mangled: _ZN5Caver19FireBreathComponent14StopChannelingEv
 * Demangled: Caver::FireBreathComponent::StopChanneling(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000282B74 string=0x0000000000282B78 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FireBreathComponent::StopChanneling(__int64 this)
{
  *(_BYTE *)(*(_QWORD *)(this + 40) + 232LL) = 1;
  return this;
}

