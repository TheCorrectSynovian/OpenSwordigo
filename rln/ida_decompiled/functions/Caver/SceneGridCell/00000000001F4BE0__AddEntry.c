/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4BE0
 * Mangled: ._ZN5Caver13SceneGridCell8AddEntryEPNS_14SceneGridEntryE
 * Demangled: Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry *)
 *
 * Callers: 2
 *   0x000000000046DC70  Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *   0x000000000046DE18  Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x000000000046D588  Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4BE8 string=0x00000000001F4BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridCell::AddEntry(Caver::SceneGridCell *a1, Caver::SceneGridEntry *a2)
{
  return _ZN5Caver13SceneGridCell8AddEntryEPNS_14SceneGridEntryE(a1, a2);
}

