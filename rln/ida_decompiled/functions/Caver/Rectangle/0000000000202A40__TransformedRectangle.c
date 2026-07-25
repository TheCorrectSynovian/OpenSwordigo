/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202A40
 * Mangled: ._ZNK5Caver9Rectangle20TransformedRectangleERKNS_7Matrix4E
 * Demangled: Caver::Rectangle::TransformedRectangle(Caver::Matrix4 const&)
 *
 * Callers: 3
 *   0x0000000000235720  Caver::ShadowComponent::UpdateShadowBounds(void)
 *   0x0000000000458650  Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Callees: 1
 *   0x00000000004B2358  Caver::Rectangle::TransformedRectangle(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202A48 string=0x0000000000202A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::TransformedRectangle(Caver::Rectangle *this, const Caver::Matrix4 *a2)
{
  return _ZNK5Caver9Rectangle20TransformedRectangleERKNS_7Matrix4E(this, a2);
}

