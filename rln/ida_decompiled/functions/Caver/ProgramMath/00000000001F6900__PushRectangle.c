/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6900
 * Mangled: ._ZN5Caver11ProgramMath13PushRectangleEPNS_12ProgramStateERKNS_9RectangleE
 * Demangled: Caver::ProgramMath::PushRectangle(Caver::ProgramState *,Caver::Rectangle const&)
 *
 * Callers: 2
 *   0x00000000004C1AB4  Caver::ProgramState::PushRectangle(Caver::Rectangle const&)
 *   0x00000000004D56A4  sub_4D56A4
 *
 * Callees: 1
 *   0x00000000004D4BE0  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6908 string=0x00000000001F690C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ProgramMath::PushRectangle()
{
  JUMPOUT(0x4D4D38);
}

