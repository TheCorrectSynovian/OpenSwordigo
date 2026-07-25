/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B90
 * Mangled: ._ZN5Caver5Proto7MapNode10SharedDtorEv
 * Demangled: Caver::Proto::MapNode::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *
 * Callees: 1
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3B98 string=0x00000000001F3B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapNode::SharedDtor(Caver::Proto::MapNode *this)
{
  JUMPOUT(0x2DCC00);
}

