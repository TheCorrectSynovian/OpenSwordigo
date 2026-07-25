/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7B70
 * Mangled: ._ZN5Caver12ProgramTable13StringAtIndexEi
 * Demangled: Caver::ProgramTable::StringAtIndex(int)
 *
 * Callers: 1
 *   0x000000000035EB00  sub_35EB00
 *
 * Callees: 1
 *   0x00000000004C2478  Caver::ProgramTable::StringAtIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7B78 string=0x00000000001F7B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramTable::StringAtIndex(Caver::ProgramTable *this, int a2)
{
  return _ZN5Caver12ProgramTable13StringAtIndexEi(this, a2);
}

