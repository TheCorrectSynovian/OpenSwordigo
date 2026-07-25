/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003370C4
 * Mangled: _ZNK5Caver5Proto14SpellComponent3NewEv
 * Demangled: Caver::Proto::SpellComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000003370CC string=0x00000000003370D0 "D"
 *   insn=0x00000000003370D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003370D4 string=0x00000000003370D8 ""
 *   insn=0x00000000003370E4 string=0x00000000003370E8 "A"
 *   insn=0x00000000003370E8 string=0x00000000003370EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::New(Caver::Proto::SpellComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C9AE0;
  return result;
}

