/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F41D0
 * Mangled: ._ZN5Caver5Proto10LevelStateC2Ev
 * Demangled: Caver::Proto::LevelState::LevelState(void)
 *
 * Callers: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 1
 *   0x00000000002F1868  Caver::Proto::GameState::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F41D8 string=0x00000000001F41DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::LevelState::LevelState(Caver::Proto::LevelState *this)
{
  JUMPOUT(0x2F18C0);
}

