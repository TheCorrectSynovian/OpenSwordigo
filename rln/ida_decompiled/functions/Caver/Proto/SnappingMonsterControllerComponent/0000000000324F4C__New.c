/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324F4C
 * Mangled: _ZNK5Caver5Proto34SnappingMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000324F58 string=0x0000000000324F5C ""
 *   insn=0x0000000000324F58 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000324F5C string=0x0000000000324F60 "yB"
 *   insn=0x0000000000324F68 string=0x0000000000324F6C "A"
 *   insn=0x0000000000324F6C string=0x0000000000324F70 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SnappingMonsterControllerComponent::New(
        Caver::Proto::SnappingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_6C8C58;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

