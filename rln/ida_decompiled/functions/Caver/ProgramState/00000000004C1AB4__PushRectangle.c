/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1AB4
 * Mangled: _ZN5Caver12ProgramState13PushRectangleERKNS_9RectangleE
 * Demangled: Caver::ProgramState::PushRectangle(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F7CB0  Caver::ProgramState::PushRectangle(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000001F6900  Caver::ProgramMath::PushRectangle(Caver::ProgramState *,Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C1AB4 string=0x00000000001F6900 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProgramState::PushRectangle(Caver::ProgramState *this, const Caver::Rectangle *a2)
{
  Caver::ProgramMath::PushRectangle();
}

