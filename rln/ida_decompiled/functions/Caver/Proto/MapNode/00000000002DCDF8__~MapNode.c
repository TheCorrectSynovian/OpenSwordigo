/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DCDF8
 * Mangled: _ZN5Caver5Proto7MapNodeD0Ev
 * Demangled: Caver::Proto::MapNode::~MapNode()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202D60  Caver::Proto::MapNode::~MapNode()
 *   0x00000000002DCE30  Caver::Proto::MapNode::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002DCE14 string=0x00000000002DCE18 "&i"
 *   insn=0x00000000002DCE18 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002DCE20 string=0x00000000002DCE24 "#i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MapNode::~MapNode(Caver::Proto::MapNode *this)
{
  Caver::Proto::MapNode::~MapNode(this);
  operator delete(this);
}

