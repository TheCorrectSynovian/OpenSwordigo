/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBA4C
 * Mangled: _ZN5Caver5Proto7MapNode21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::MapNode::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002DBA5C string=0x00000000002DBA60 "`\n"
 *   insn=0x00000000002DBA5C string=0x00000000001FB0B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode::InitAsDefaultInstance(Caver::Proto::MapNode *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector2::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

