/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E10
 * Mangled: ._ZN5Caver9SceneGrid20GetObjectsNearCameraEfPPPv
 * Demangled: Caver::SceneGrid::GetObjectsNearCamera(float,void ***)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x000000000046CE8C  Caver::SceneGrid::GetObjectsNearCamera(float,void ***)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3E18 string=0x00000000001F3E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGrid::GetObjectsNearCamera(Caver::SceneGrid *this, float a2, void ***a3)
{
  return _ZN5Caver9SceneGrid20GetObjectsNearCameraEfPPPv(this, a2, a3);
}

