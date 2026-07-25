/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F99C0
 * Mangled: ._ZN5Caver12ProgramState5AbortEv
 * Demangled: Caver::ProgramState::Abort(void)
 *
 * Callers: 2
 *   0x0000000000232AD8  Caver::ProgramComponent::HandleMessage(int,void *)
 *   0x00000000002676AC  Caver::EntityActionComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000004C1908  Caver::ProgramState::Abort(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F99C8 string=0x00000000001F99CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::Abort(Caver::ProgramState *this)
{
  return _ZN5Caver12ProgramState5AbortEv(this);
}

