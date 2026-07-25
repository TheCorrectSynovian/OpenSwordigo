/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA3A0
 * Mangled: ._ZN5Caver3Map14UnflagAllNodesEv
 * Demangled: Caver::Map::UnflagAllNodes(void)
 *
 * Callers: 1
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *
 * Callees: 1
 *   0x00000000003BBFE0  Caver::Map::UnflagAllNodes(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA3A8 string=0x00000000001FA3AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Map::UnflagAllNodes(Caver::Map *this)
{
  return _ZN5Caver3Map14UnflagAllNodesEv(this);
}

