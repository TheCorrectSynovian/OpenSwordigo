/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D60
 * Mangled: ._ZN5Caver5Proto7MapNodeD2Ev
 * Demangled: Caver::Proto::MapNode::~MapNode()
 *
 * Callers: 1
 *   0x00000000002DCDF8  Caver::Proto::MapNode::~MapNode()
 *
 * Callees: 1
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D68 string=0x0000000000202D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapNode::~MapNode(Caver::Proto::MapNode *this)
{
  JUMPOUT(0x2DCAF8);
}

