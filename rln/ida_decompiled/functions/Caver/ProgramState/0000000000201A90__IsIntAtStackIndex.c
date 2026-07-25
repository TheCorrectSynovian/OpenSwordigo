/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201A90
 * Mangled: ._ZN5Caver12ProgramState17IsIntAtStackIndexEi
 * Demangled: Caver::ProgramState::IsIntAtStackIndex(int)
 *
 * Callers: 1
 *   0x0000000000362C58  sub_362C58
 *
 * Callees: 1
 *   0x00000000004C198C  Caver::ProgramState::IsIntAtStackIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201A98 string=0x0000000000201A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::IsIntAtStackIndex(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState17IsIntAtStackIndexEi(this, a2);
}

