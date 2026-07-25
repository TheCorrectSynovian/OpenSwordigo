/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200690
 * Mangled: ._ZN5Caver12ProgramState19IsFloatAtStackIndexEi
 * Demangled: Caver::ProgramState::IsFloatAtStackIndex(int)
 *
 * Callers: 3
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *   0x00000000003601E8  sub_3601E8
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004C19C4  Caver::ProgramState::IsFloatAtStackIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200698 string=0x000000000020069C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::IsFloatAtStackIndex(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState19IsFloatAtStackIndexEi(this, a2);
}

