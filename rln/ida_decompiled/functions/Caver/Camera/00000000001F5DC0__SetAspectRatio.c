/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5DC0
 * Mangled: ._ZN5Caver6Camera14SetAspectRatioEf
 * Demangled: Caver::Camera::SetAspectRatio(float)
 *
 * Callers: 3
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x000000000034EB34  Caver::GameSceneView::LayoutSubviews(void)
 *   0x00000000003721E4  Caver::SceneView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x0000000000457BB4  Caver::Camera::SetAspectRatio(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5DC8 string=0x00000000001F5DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::SetAspectRatio(Caver::Camera *this, float a2)
{
  return _ZN5Caver6Camera14SetAspectRatioEf(this, a2);
}

