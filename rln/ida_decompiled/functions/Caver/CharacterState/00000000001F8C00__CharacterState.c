/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C00
 * Mangled: ._ZN5Caver14CharacterStateC2Ev
 * Demangled: Caver::CharacterState::CharacterState(void)
 *
 * Callers: 1
 *   0x00000000003B589C  Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *
 * Callees: 1
 *   0x00000000003AB11C  Caver::CharacterState::CharacterState(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8C08 string=0x00000000001F8C0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterState::CharacterState(Caver::CharacterState *this)
{
  return _ZN5Caver14CharacterStateC2Ev(this);
}

