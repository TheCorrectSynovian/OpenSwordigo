/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9280
 * Mangled: ._ZN5Caver9SceneGrid28UpdateVisibleAreasWithCameraEPNS_6CameraE
 * Demangled: Caver::SceneGrid::UpdateVisibleAreasWithCamera(Caver::Camera *)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x000000000046CC30  Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9288 string=0x00000000001F928C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneGrid::UpdateVisibleAreasWithCamera()
{
  JUMPOUT(0x46CDEC);
}

