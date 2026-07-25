/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046CC28
 * Mangled: _ZN5Caver9SceneGrid12RemoveObjectEPNS_14SceneGridEntryE
 * Demangled: Caver::SceneGrid::RemoveObject(Caver::SceneGridEntry *)
 *
 * Callers: 1
 *   0x00000000001FF130  Caver::SceneGrid::RemoveObject(Caver::SceneGridEntry *)
 *
 * Callees: 1
 *   0x0000000000202E70  Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGrid::RemoveObject(__int64 a1, Caver::SceneGridLayer **a2)
{
  return Caver::SceneGridLayer::RemoveObject(*a2, (Caver::SceneGridEntry *)a2);
}

