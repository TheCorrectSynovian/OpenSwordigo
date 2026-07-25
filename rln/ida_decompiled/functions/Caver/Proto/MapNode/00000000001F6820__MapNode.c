/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6820
 * Mangled: ._ZN5Caver5Proto7MapNodeC2Ev
 * Demangled: Caver::Proto::MapNode::MapNode(void)
 *
 * Callers: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000002DC5E4  Caver::Proto::MapNode_Portal::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6824 string=0x00000000002DC63C ""
 *   insn=0x00000000001F6828 string=0x00000000001F682C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode *this)
{
  JUMPOUT(0x2DC63C);
}

