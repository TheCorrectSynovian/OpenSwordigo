/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD080
 * Mangled: ._ZNK5Caver9GameState21SaveToProtobufMessageEPNS_5Proto9GameStateE
 * Demangled: Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callers: 1
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD088 string=0x00000000001FD08C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameState::SaveToProtobufMessage(Caver::GameState *this, Caver::Proto::GameState *a2)
{
  return _ZNK5Caver9GameState21SaveToProtobufMessageEPNS_5Proto9GameStateE(this, a2);
}

