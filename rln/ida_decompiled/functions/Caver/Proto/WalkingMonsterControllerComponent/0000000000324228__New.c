/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324228
 * Mangled: _ZNK5Caver5Proto33WalkingMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000324234 string=0x0000000000324238 ""
 *   insn=0x0000000000324234 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000324238 string=0x000000000032423C ""
 *   insn=0x0000000000324240 string=0x0000000000324244 "A"
 *   insn=0x0000000000324244 string=0x0000000000324248 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WalkingMonsterControllerComponent::New(
        Caver::Proto::WalkingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x18u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C8B68;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

