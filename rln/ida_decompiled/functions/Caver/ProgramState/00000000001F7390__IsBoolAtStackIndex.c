/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7390
 * Mangled: ._ZN5Caver12ProgramState18IsBoolAtStackIndexEi
 * Demangled: Caver::ProgramState::IsBoolAtStackIndex(int)
 *
 * Callers: 2
 *   0x0000000000469290  sub_469290
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004C1A00  Caver::ProgramState::IsBoolAtStackIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7398 string=0x00000000001F739C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::IsBoolAtStackIndex(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState18IsBoolAtStackIndexEi(this, a2);
}

