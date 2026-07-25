/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200600
 * Mangled: ._ZNK5Caver7MapNode21SaveToProtobufMessageEPNS_5Proto7MapNodeE
 * Demangled: Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *
 * Callers: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000003BEE30  Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200608 string=0x000000000020060C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapNode::SaveToProtobufMessage(Caver::MapNode *this, Caver::Proto::MapNode *a2)
{
  return _ZNK5Caver7MapNode21SaveToProtobufMessageEPNS_5Proto7MapNodeE(this, a2);
}

