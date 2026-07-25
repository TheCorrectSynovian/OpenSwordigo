/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8FB0
 * Mangled: ._ZN5Caver14CharacterStateD2Ev
 * Demangled: Caver::CharacterState::~CharacterState()
 *
 * Callers: 2
 *   0x00000000003B589C  Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *   0x00000000003C2F98  Caver::GameState::~GameState()
 *
 * Callees: 1
 *   0x00000000003B5E68  Caver::CharacterState::~CharacterState()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8FB8 string=0x00000000001F8FBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharacterState::~CharacterState(Caver::CharacterState *this)
{
  _ZN5Caver14CharacterStateD2Ev(this);
}

