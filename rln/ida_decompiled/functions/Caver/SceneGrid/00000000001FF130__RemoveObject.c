/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF130
 * Mangled: ._ZN5Caver9SceneGrid12RemoveObjectEPNS_14SceneGridEntryE
 * Demangled: Caver::SceneGrid::RemoveObject(Caver::SceneGridEntry *)
 *
 * Callers: 1
 *   0x00000000004653C4  Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *
 * Callees: 1
 *   0x000000000046CC28  Caver::SceneGrid::RemoveObject(Caver::SceneGridEntry *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF134 string=0x000000000046CC28 " "
 *   insn=0x00000000001FF138 string=0x00000000001FF13C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGrid::RemoveObject(Caver::SceneGrid *this, Caver::SceneGridEntry *a2)
{
  return _ZN5Caver9SceneGrid12RemoveObjectEPNS_14SceneGridEntryE(this, a2);
}

