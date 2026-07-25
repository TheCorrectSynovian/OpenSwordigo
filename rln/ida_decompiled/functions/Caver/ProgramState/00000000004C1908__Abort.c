/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1908
 * Mangled: _ZN5Caver12ProgramState5AbortEv
 * Demangled: Caver::ProgramState::Abort(void)
 *
 * Callers: 1
 *   0x00000000001F99C0  Caver::ProgramState::Abort(void)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004C190C string=0x00000000004C1910 "L"
 *   insn=0x00000000004C1910 string=0x00000000004C1914 "\tH"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::Abort(__int64 this)
{
  *(_BYTE *)(this + 83) = 1;
  *(_DWORD *)(this + 72) = 2;
  return this;
}

