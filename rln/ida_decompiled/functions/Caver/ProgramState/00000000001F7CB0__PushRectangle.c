/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7CB0
 * Mangled: ._ZN5Caver12ProgramState13PushRectangleERKNS_9RectangleE
 * Demangled: Caver::ProgramState::PushRectangle(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x000000000026D804  sub_26D804
 *
 * Callees: 1
 *   0x00000000004C1AB4  Caver::ProgramState::PushRectangle(Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7CB8 string=0x00000000001F7CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::PushRectangle(Caver::ProgramState *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver12ProgramState13PushRectangleERKNS_9RectangleE(this, a2);
}

