/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F43E0
 * Mangled: ._ZN5Caver3Map27RecursivelySetNodePositionsEPNS_7MapNodeE
 * Demangled: Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BC04C  Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F43E8 string=0x00000000001F43EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Map::RecursivelySetNodePositions(Caver::Map *this, Caver::MapNode *a2)
{
  return _ZN5Caver3Map27RecursivelySetNodePositionsEPNS_7MapNodeE(this, a2);
}

