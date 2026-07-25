/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5610
 * Mangled: ._ZN5Caver12ProgramState3PopEi
 * Demangled: Caver::ProgramState::Pop(int)
 *
 * Callers: 1
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *
 * Callees: 1
 *   0x00000000004C18A8  Caver::ProgramState::Pop(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5618 string=0x00000000001F561C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::Pop(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState3PopEi(this, a2);
}

