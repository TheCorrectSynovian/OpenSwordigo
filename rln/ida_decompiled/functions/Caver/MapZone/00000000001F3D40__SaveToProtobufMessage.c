/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D40
 * Mangled: ._ZNK5Caver7MapZone21SaveToProtobufMessageEPNS_5Proto7MapZoneE
 * Demangled: Caver::MapZone::SaveToProtobufMessage(Caver::Proto::MapZone *)
 *
 * Callers: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000003BF918  Caver::MapZone::SaveToProtobufMessage(Caver::Proto::MapZone *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3D48 string=0x00000000001F3D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapZone::SaveToProtobufMessage(Caver::MapZone *this, Caver::Proto::MapZone *a2)
{
  return _ZNK5Caver7MapZone21SaveToProtobufMessageEPNS_5Proto7MapZoneE(this, a2);
}

