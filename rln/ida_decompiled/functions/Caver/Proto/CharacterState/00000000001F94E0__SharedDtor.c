/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F94E0
 * Mangled: ._ZN5Caver5Proto14CharacterState10SharedDtorEv
 * Demangled: Caver::Proto::CharacterState::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002F30A8  Caver::Proto::CharacterState::CharacterState(Caver::Proto::CharacterState const&)
 *
 * Callees: 1
 *   0x00000000002F30A8  Caver::Proto::CharacterState::CharacterState(Caver::Proto::CharacterState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F94E8 string=0x00000000001F94EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CharacterState::SharedDtor(Caver::Proto::CharacterState *this)
{
  JUMPOUT(0x2F33BC);
}

