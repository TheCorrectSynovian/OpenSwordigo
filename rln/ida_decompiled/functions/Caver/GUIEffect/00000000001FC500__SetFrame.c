/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC500
 * Mangled: ._ZN5Caver9GUIEffect8SetFrameERKNS_9RectangleE
 * Demangled: Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *
 * Callers: 6
 *   0x000000000034EB34  Caver::GameSceneView::LayoutSubviews(void)
 *   0x000000000034FB34  Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *   0x0000000000363FD4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *   0x00000000004A2280  Caver::GUIWindow::LayoutSubviews(void)
 *   0x00000000004A4F38  Caver::GUIWindow::Effect(void)
 *   0x00000000004A7628  Caver::GUIEffect::~GUIEffect()
 *
 * Callees: 1
 *   0x00000000004A6D0C  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC504 string=0x00000000004A6D0C " "
 *   insn=0x00000000001FC508 string=0x00000000001FC50C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::SetFrame(Caver::GUIEffect *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver9GUIEffect8SetFrameERKNS_9RectangleE(this, a2);
}

