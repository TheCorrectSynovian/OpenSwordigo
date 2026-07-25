/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202E70
 * Mangled: ._ZN5Caver14SceneGridLayer12RemoveObjectEPNS_14SceneGridEntryE
 * Demangled: Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry *)
 *
 * Callers: 3
 *   0x000000000046CB84  Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *   0x000000000046CC28  Caver::SceneGrid::RemoveObject(Caver::SceneGridEntry *)
 *   0x000000000046D71C  Caver::SceneGridEntry::~SceneGridEntry()
 *
 * Callees: 1
 *   0x000000000046DFCC  Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202E78 string=0x0000000000202E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::RemoveObject(Caver::SceneGridLayer *a1, Caver::SceneGridEntry *a2)
{
  return _ZN5Caver14SceneGridLayer12RemoveObjectEPNS_14SceneGridEntryE(a1, a2);
}

