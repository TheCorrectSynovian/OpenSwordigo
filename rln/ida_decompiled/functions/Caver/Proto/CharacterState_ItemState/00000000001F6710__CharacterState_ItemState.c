/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6710
 * Mangled: ._ZN5Caver5Proto24CharacterState_ItemStateC2Ev
 * Demangled: Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(void)
 *
 * Callers: 1
 *   0x00000000003AC040  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *
 * Callees: 1
 *   0x00000000002F2648  Caver::Proto::LevelState::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6718 string=0x00000000001F671C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(
        Caver::Proto::CharacterState_ItemState *this)
{
  JUMPOUT(0x2F26A0);
}

