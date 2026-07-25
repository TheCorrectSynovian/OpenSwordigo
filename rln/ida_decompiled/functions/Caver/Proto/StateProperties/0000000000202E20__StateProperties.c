/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202E20
 * Mangled: ._ZN5Caver5Proto15StatePropertiesC2Ev
 * Demangled: Caver::Proto::StateProperties::StateProperties(void)
 *
 * Callers: 2
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *   0x00000000003BAC00  Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *
 * Callees: 1
 *   0x00000000002EBECC  Caver::Proto::PlayerProfile::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202E28 string=0x0000000000202E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::StateProperties::StateProperties(Caver::Proto::StateProperties *this)
{
  JUMPOUT(0x2EBF24);
}

