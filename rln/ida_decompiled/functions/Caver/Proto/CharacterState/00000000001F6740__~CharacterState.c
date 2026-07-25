/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6740
 * Mangled: ._ZN5Caver5Proto14CharacterStateD2Ev
 * Demangled: Caver::Proto::CharacterState::~CharacterState()
 *
 * Callers: 1
 *   0x00000000002F3710  Caver::Proto::CharacterState::~CharacterState()
 *
 * Callees: 1
 *   0x00000000002F30A8  Caver::Proto::CharacterState::CharacterState(Caver::Proto::CharacterState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6748 string=0x00000000001F674C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CharacterState::~CharacterState(Caver::Proto::CharacterState *this)
{
  JUMPOUT(0x2F321C);
}

