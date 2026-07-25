/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6D00
 * Mangled: ._ZN5Caver7MapNodeC2Ev
 * Demangled: Caver::MapNode::MapNode(void)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BEAEC  Caver::MapNode::MapNode(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6D08 string=0x00000000001F6D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapNode::MapNode(Caver::MapNode *this)
{
  return _ZN5Caver7MapNodeC2Ev(this);
}

