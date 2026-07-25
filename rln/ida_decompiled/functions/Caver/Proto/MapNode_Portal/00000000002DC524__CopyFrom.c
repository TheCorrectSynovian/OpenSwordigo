/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DC524
 * Mangled: _ZN5Caver5Proto14MapNode_Portal8CopyFromERKS1_
 * Demangled: Caver::Proto::MapNode_Portal::CopyFrom(Caver::Proto::MapNode_Portal const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200DC0  Caver::Proto::MapNode_Portal::MergeFrom(Caver::Proto::MapNode_Portal const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002DC538 string=0x00000000002DC53C "@"
 *   insn=0x00000000002DC544 string=0x00000000002DC548 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MapNode_Portal::CopyFrom(
        Caver::Proto::MapNode_Portal *this,
        const Caver::Proto::MapNode_Portal *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MapNode_Portal *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MapNode_Portal::MergeFrom();
  }
}

