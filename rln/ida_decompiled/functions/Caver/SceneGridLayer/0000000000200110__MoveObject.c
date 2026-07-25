/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200110
 * Mangled: ._ZN5Caver14SceneGridLayer10MoveObjectEPNS_14SceneGridEntryERKNS_9RectangleE
 * Demangled: Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x000000000046CB84  Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Callees: 1
 *   0x000000000046DE18  Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200118 string=0x000000000020011C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::MoveObject(
        Caver::SceneGridLayer *this,
        Caver::SceneGridEntry *a2,
        const Caver::Rectangle *a3)
{
  return _ZN5Caver14SceneGridLayer10MoveObjectEPNS_14SceneGridEntryERKNS_9RectangleE(this, a2, a3);
}

