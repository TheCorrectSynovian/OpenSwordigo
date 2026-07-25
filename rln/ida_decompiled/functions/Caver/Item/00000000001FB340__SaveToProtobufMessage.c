/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB340
 * Mangled: ._ZNK5Caver4Item21SaveToProtobufMessageEPNS_5Proto4ItemE
 * Demangled: Caver::Item::SaveToProtobufMessage(Caver::Proto::Item *)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000003BA8EC  Caver::Item::SaveToProtobufMessage(Caver::Proto::Item *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB348 string=0x00000000001FB34C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Item::SaveToProtobufMessage(Caver::Item *this, Caver::Proto::Item *a2)
{
  return _ZNK5Caver4Item21SaveToProtobufMessageEPNS_5Proto4ItemE(this, a2);
}

