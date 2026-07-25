/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A60
 * Mangled: ._ZNK5Caver14CharacterState21SaveToProtobufMessageEPNS_5Proto14CharacterStateE
 * Demangled: Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *
 * Callers: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 1
 *   0x00000000003AC040  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203A68 string=0x0000000000203A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterState::SaveToProtobufMessage(
        Caver::CharacterState *this,
        Caver::Proto::CharacterState *a2)
{
  return _ZNK5Caver14CharacterState21SaveToProtobufMessageEPNS_5Proto14CharacterStateE(this, a2);
}

