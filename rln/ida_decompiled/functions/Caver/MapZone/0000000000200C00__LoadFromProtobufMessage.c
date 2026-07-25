/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200C00
 * Mangled: ._ZN5Caver7MapZone23LoadFromProtobufMessageERKNS_5Proto7MapZoneE
 * Demangled: Caver::MapZone::LoadFromProtobufMessage(Caver::Proto::MapZone const&)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BF8CC  Caver::MapZone::LoadFromProtobufMessage(Caver::Proto::MapZone const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200C08 string=0x0000000000200C0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapZone::LoadFromProtobufMessage(Caver::MapZone *this, const Caver::Proto::MapZone *a2)
{
  return _ZN5Caver7MapZone23LoadFromProtobufMessageERKNS_5Proto7MapZoneE(this, a2);
}

