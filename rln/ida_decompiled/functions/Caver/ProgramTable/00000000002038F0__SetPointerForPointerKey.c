/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002038F0
 * Mangled: ._ZN5Caver12ProgramTable23SetPointerForPointerKeyEPvS1_
 * Demangled: Caver::ProgramTable::SetPointerForPointerKey(void *,void *)
 *
 * Callers: 2
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004C109C  Caver::ProgramState::~ProgramState()
 *
 * Callees: 1
 *   0x00000000004C2044  Caver::ProgramTable::SetPointerForPointerKey(void *,void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002038F8 string=0x00000000002038FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramTable::SetPointerForPointerKey(Caver::ProgramTable *this, void *a2, void *a3)
{
  return _ZN5Caver12ProgramTable23SetPointerForPointerKeyEPvS1_(this, a2, a3);
}

