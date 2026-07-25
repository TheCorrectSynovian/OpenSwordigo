/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B9BC
 * Mangled: _ZNK5Caver5Proto19HeroEntityComponent3NewEv
 * Demangled: Caver::Proto::HeroEntityComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000031B9C8 string=0x000000000031B9CC "h"
 *   insn=0x000000000031B9C8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031B9CC string=0x000000000031B9D0 ""
 *   insn=0x000000000031B9DC string=0x000000000031B9E0 "A"
 *   insn=0x000000000031B9E0 string=0x000000000031B9E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::New(Caver::Proto::HeroEntityComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C85C8;
  return result;
}

