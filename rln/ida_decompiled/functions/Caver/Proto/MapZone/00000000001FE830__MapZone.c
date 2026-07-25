/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE830
 * Mangled: ._ZN5Caver5Proto7MapZoneC2Ev
 * Demangled: Caver::Proto::MapZone::MapZone(void)
 *
 * Callers: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000002DDE8C  Caver::Proto::MapNode::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE834 string=0x00000000002DDEE4 ""
 *   insn=0x00000000001FE838 string=0x00000000001FE83C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone *this)
{
  JUMPOUT(0x2DDEE4);
}

