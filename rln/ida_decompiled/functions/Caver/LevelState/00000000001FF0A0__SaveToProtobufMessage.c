/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF0A0
 * Mangled: ._ZNK5Caver10LevelState21SaveToProtobufMessageEPNS_5Proto10LevelStateE
 * Demangled: Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *
 * Callers: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 1
 *   0x00000000003BAC00  Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF0A8 string=0x00000000001FF0AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LevelState::SaveToProtobufMessage(Caver::LevelState *this, Caver::Proto::LevelState *a2)
{
  return _ZNK5Caver10LevelState21SaveToProtobufMessageEPNS_5Proto10LevelStateE(this, a2);
}

