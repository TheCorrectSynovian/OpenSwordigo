/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F73F0
 * Mangled: ._ZNK5Caver15StateProperties21SaveToProtobufMessageEPNS_5Proto15StatePropertiesE
 * Demangled: Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *
 * Callers: 2
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *   0x00000000003BAC00  Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *
 * Callees: 1
 *   0x00000000003C3E94  Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F73F8 string=0x00000000001F73FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StateProperties::SaveToProtobufMessage(
        Caver::StateProperties *this,
        Caver::Proto::StateProperties *a2)
{
  return _ZNK5Caver15StateProperties21SaveToProtobufMessageEPNS_5Proto15StatePropertiesE(this, a2);
}

