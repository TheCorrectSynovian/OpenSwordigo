/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316F8C
 * Mangled: _ZNK5Caver5Proto16ProgramComponent3NewEv
 * Demangled: Caver::Proto::ProgramComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000316F98 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000316F9C string=0x0000000000316FA0 ""
 *   insn=0x0000000000316FAC string=0x0000000000316FB0 "A"
 *   insn=0x0000000000316FB4 string=0x0000000000316FB8 "\t"
 *   insn=0x0000000000316FB8 string=0x0000000000316FBC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::New(Caver::Proto::ProgramComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 8) = 0;
  *(_WORD *)(result + 12) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 16) = 1;
  *(_QWORD *)result = off_6C8208;
  *(_DWORD *)(result + 32) = 0;
  return result;
}

