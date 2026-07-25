/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003190BC
 * Mangled: _ZNK5Caver5Proto24BreakableObjectComponent3NewEv
 * Demangled: Caver::Proto::BreakableObjectComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000003190C4 string=0x00000000003190C8 "Fq"
 *   insn=0x00000000003190C8 string=0x00000000003190CC "h"
 *   insn=0x00000000003190C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003190CC string=0x00000000003190D0 "1E"
 *   insn=0x00000000003190DC string=0x00000000003190E0 "A"
 *   insn=0x00000000003190E0 string=0x00000000003190E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::New(Caver::Proto::BreakableObjectComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 12) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C8370;
  *(_DWORD *)(result + 32) = 0;
  return result;
}

