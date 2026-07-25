/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6C50
 * Mangled: ._ZNK5Caver11EntityClass21SaveToProtobufMessageEPNS_5Proto11EntityClassE
 * Demangled: Caver::EntityClass::SaveToProtobufMessage(Caver::Proto::EntityClass *)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000003AF720  Caver::EntityClass::SaveToProtobufMessage(Caver::Proto::EntityClass *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6C58 string=0x00000000001F6C5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityClass::SaveToProtobufMessage(Caver::EntityClass *this, Caver::Proto::EntityClass *a2)
{
  return _ZNK5Caver11EntityClass21SaveToProtobufMessageEPNS_5Proto11EntityClassE(this, a2);
}

