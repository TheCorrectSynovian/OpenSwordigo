/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBFBC
 * Mangled: _ZNK5Caver5Proto14MapNode_Portal13SetCachedSizeEi
 * Demangled: Caver::Proto::MapNode_Portal::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002DBEC0  Caver::Proto::MapNode_Portal::~MapNode_Portal()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode_Portal::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

