/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311988
 * Mangled: _ZNK5Caver5Proto28AnimationControllerComponent3NewEv
 * Demangled: Caver::Proto::AnimationControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000311994 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000311998 string=0x000000000031199C "QD"
 *   insn=0x00000000003119A4 string=0x00000000003119A8 "A"
 *   insn=0x00000000003119A8 string=0x00000000003119AC "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AnimationControllerComponent::New(Caver::Proto::AnimationControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 13) = 0;
  *(_QWORD *)result = off_6C7E48;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

