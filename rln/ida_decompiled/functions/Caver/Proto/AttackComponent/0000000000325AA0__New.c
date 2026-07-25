/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000325AA0
 * Mangled: _ZNK5Caver5Proto15AttackComponent3NewEv
 * Demangled: Caver::Proto::AttackComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000325AAC string=0x0000000000325AB0 ""
 *   insn=0x0000000000325AAC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000325AB0 string=0x0000000000325AB4 "QC"
 *   insn=0x0000000000325AC0 string=0x0000000000325AC4 "A"
 *   insn=0x0000000000325ACC string=0x0000000000325AD0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::New(Caver::Proto::AttackComponent *this)
{
  __int64 result; // x0

  result = operator new(0x50u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_6C8CD0;
  *(_DWORD *)(result + 72) = 0;
  return result;
}

