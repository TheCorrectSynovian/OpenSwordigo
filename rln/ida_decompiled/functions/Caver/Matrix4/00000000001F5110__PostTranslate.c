/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5110
 * Mangled: ._ZN5Caver7Matrix413PostTranslateERKNS_7Vector3E
 * Demangled: Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *
 * Callers: 7
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x0000000000228040  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x0000000000457D84  Caver::Camera::EvaluateViewMatrix(void)
 *   0x0000000000497658  Caver::GUIFrameView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Callees: 1
 *   0x00000000004AF1C0  Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5118 string=0x00000000001F511C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::PostTranslate(Caver::Matrix4 *this, const Caver::Vector3 *a2)
{
  return _ZN5Caver7Matrix413PostTranslateERKNS_7Vector3E(this, a2);
}

