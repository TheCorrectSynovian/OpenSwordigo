/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1AB0
 * Mangled: _ZN5Caver12ProgramState11PushVector3ERKNS_7Vector3E
 * Demangled: Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000001FFCD0  Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C1AB0 string=0x00000000001F7F40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::PushVector3(
        Caver::ProgramState *this,
        const Caver::Vector3 *a2,
        const Caver::Vector3 *a3)
{
  return Caver::ProgramMath::PushVector3(this, a2, a3);
}

