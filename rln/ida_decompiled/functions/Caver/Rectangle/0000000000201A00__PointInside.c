/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201A00
 * Mangled: ._ZNK5Caver9Rectangle11PointInsideERKNS_7Vector2E
 * Demangled: Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Callers: 10
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x0000000000238BD4  Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000040B21C  Caver::InventoryItemPanel::HitTest(Caver::Vector2 const&)
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000473CE8  Caver::SceneObject::ContainsPoint(Caver::Vector2 const&)
 *   0x0000000000491C84  Caver::GUIAlertView::TouchBegan(Caver::FWTouch const&)
 *   0x0000000000491D10  Caver::GUIAlertView::TouchEnded(Caver::FWTouch const&)
 *   0x00000000004962DC  Caver::GUIButton::TouchMoved(Caver::FWTouch const&)
 *   0x000000000049DE68  Caver::GUISwitch::TouchMoved(Caver::FWTouch const&)
 *   0x00000000004A08F4  Caver::GUIView::PointInside(Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004B17B4  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201A04 string=0x00000000004B17B4 " "
 *   insn=0x0000000000201A08 string=0x0000000000201A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::PointInside(Caver::Rectangle *this, const Caver::Vector2 *a2)
{
  return _ZNK5Caver9Rectangle11PointInsideERKNS_7Vector2E(this, a2);
}

