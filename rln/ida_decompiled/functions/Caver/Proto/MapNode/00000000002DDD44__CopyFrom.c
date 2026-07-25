/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DDD44
 * Mangled: _ZN5Caver5Proto7MapNode8CopyFromERKS1_
 * Demangled: Caver::Proto::MapNode::CopyFrom(Caver::Proto::MapNode const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200EC0  Caver::Proto::MapNode::MergeFrom(Caver::Proto::MapNode const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002DDD58 string=0x00000000002DDD5C "@"
 *   insn=0x00000000002DDD64 string=0x00000000002DDD68 ""
 *   insn=0x00000000002DDD7C string=0x00000000002DDD80 "P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MapNode::CopyFrom(Caver::Proto::MapNode *this, const Caver::Proto::MapNode *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MapNode *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MapNode::MergeFrom(this, a2);
  }
}

