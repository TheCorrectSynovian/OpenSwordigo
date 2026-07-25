/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031E2F0
 * Mangled: _ZNK5Caver5Proto24ParticleEmitterComponent3NewEv
 * Demangled: Caver::Proto::ParticleEmitterComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 11
 *   insn=0x000000000031E2FC string=0x000000000031E300 ""
 *   insn=0x000000000031E2FC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031E300 string=0x000000000031E304 ""
 *   insn=0x000000000031E304 string=0x000000000031E308 "h"
 *   insn=0x000000000031E30C string=0x000000000031E310 "`"
 *   insn=0x000000000031E310 string=0x000000000031E314 " "
 *   insn=0x000000000031E318 string=0x000000000031E31C "P"
 *   insn=0x000000000031E31C string=0x000000000031E320 "H"
 *   insn=0x000000000031E320 string=0x000000000031E324 "5@"
 *   insn=0x000000000031E330 string=0x000000000031E334 "A"
 *   insn=0x000000000031E33C string=0x000000000031E340 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::ParticleEmitterComponent::New(Caver::Proto::ParticleEmitterComponent *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x90u);
  *(_QWORD *)(v1 + 32) = v1 + 48;
  *(_QWORD *)&result = 0x400000000LL;
  *(_QWORD *)(v1 + 64) = v1 + 88;
  *(_DWORD *)(v1 + 80) = 4;
  *(_QWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 24) = 0;
  *(_BYTE *)(v1 + 28) = 0;
  *(_QWORD *)(v1 + 13) = 0;
  *(_QWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 128) = 0;
  *(_QWORD *)v1 = off_6C87A8;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 40) = 0x400000000LL;
  *(_DWORD *)(v1 + 136) = 0;
  return result;
}

