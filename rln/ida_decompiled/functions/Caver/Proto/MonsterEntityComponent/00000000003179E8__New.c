/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003179E8
 * Mangled: _ZNK5Caver5Proto22MonsterEntityComponent3NewEv
 * Demangled: Caver::Proto::MonsterEntityComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000003179F4 string=0x00000000003179F8 "h"
 *   insn=0x00000000003179F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003179F8 string=0x00000000003179FC ""
 *   insn=0x0000000000317A08 string=0x0000000000317A0C "A"
 *   insn=0x0000000000317A0C string=0x0000000000317A10 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::New(Caver::Proto::MonsterEntityComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C8280;
  *(_WORD *)(result + 32) = 0;
  return result;
}

