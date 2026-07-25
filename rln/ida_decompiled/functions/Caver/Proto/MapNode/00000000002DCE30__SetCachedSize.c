/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DCE30
 * Mangled: _ZNK5Caver5Proto7MapNode13SetCachedSizeEi
 * Demangled: Caver::Proto::MapNode::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002DCDF8  Caver::Proto::MapNode::~MapNode()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

