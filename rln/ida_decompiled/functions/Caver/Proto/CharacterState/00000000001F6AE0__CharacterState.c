/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6AE0
 * Mangled: ._ZN5Caver5Proto14CharacterStateC2Ev
 * Demangled: Caver::Proto::CharacterState::CharacterState(void)
 *
 * Callers: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 1
 *   0x00000000002F2F5C  Caver::Proto::CharacterState_ItemState::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6AE8 string=0x00000000001F6AEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CharacterState::CharacterState(Caver::Proto::CharacterState *this)
{
  JUMPOUT(0x2F2FB4);
}

