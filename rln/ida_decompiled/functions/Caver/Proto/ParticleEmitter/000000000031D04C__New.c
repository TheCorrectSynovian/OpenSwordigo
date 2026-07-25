/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031D04C
 * Mangled: _ZNK5Caver5Proto15ParticleEmitter3NewEv
 * Demangled: Caver::Proto::ParticleEmitter::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x000000000031D054 string=0x000000000031D058 "ba"
 *   insn=0x000000000031D058 string=0x000000000031D05C ""
 *   insn=0x000000000031D058 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031D05C string=0x000000000031D060 ""
 *   insn=0x000000000031D060 string=0x000000000031D064 "h"
 *   insn=0x000000000031D068 string=0x000000000031D06C "H"
 *   insn=0x000000000031D06C string=0x000000000031D070 "=A"
 *   insn=0x000000000031D07C string=0x000000000031D080 "A"
 *   insn=0x000000000031D080 string=0x000000000031D084 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::ParticleEmitter::New(Caver::Proto::ParticleEmitter *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x58u);
  *(_QWORD *)(v1 + 48) = v1 + 64;
  *(_QWORD *)&result = 0x400000000LL;
  *(_DWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)v1 = off_6C8730;
  *(_QWORD *)(v1 + 56) = 0x400000000LL;
  *(_DWORD *)(v1 + 40) = 0;
  return result;
}

