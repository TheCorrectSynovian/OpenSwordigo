/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE8C0
 * Mangled: ._ZN5Caver13SceneGridCell11RemoveEntryEPNS_14SceneGridEntryE
 * Demangled: Caver::SceneGridCell::RemoveEntry(Caver::SceneGridEntry *)
 *
 * Callers: 2
 *   0x000000000046DE18  Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *   0x000000000046DFCC  Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry *)
 *
 * Callees: 1
 *   0x000000000046D6CC  Caver::SceneGridCell::RemoveEntry(Caver::SceneGridEntry *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE8C4 string=0x000000000046D6CC "\n@"
 *   insn=0x00000000001FE8C8 string=0x00000000001FE8CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridCell::RemoveEntry(Caver::SceneGridCell *a1, Caver::SceneGridEntry *a2)
{
  return _ZN5Caver13SceneGridCell11RemoveEntryEPNS_14SceneGridEntryE(a1, a2);
}

