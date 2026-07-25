/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D00
 * Mangled: ._ZN5Caver7MapNode23LoadFromProtobufMessageERKNS_5Proto7MapNodeE
 * Demangled: Caver::MapNode::LoadFromProtobufMessage(Caver::Proto::MapNode const&)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BEB34  Caver::MapNode::LoadFromProtobufMessage(Caver::Proto::MapNode const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D08 string=0x00000000001F4D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapNode::LoadFromProtobufMessage(Caver::MapNode *this, const Caver::Proto::MapNode *a2)
{
  return _ZN5Caver7MapNode23LoadFromProtobufMessageERKNS_5Proto7MapNodeE(this, a2);
}

