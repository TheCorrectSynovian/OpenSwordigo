/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB50
 * Mangled: ._ZN5Caver9GUIEffectC2Ev
 * Demangled: Caver::GUIEffect::GUIEffect(void)
 *
 * Callers: 5
 *   0x000000000034D7E8  Caver::GameSceneView::GameSceneView(void)
 *   0x000000000034FB34  Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *   0x0000000000363FD4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *   0x00000000004A4F38  Caver::GUIWindow::Effect(void)
 *   0x00000000004A74F4  Caver::GUIEffectView::GUIEffectView(void)
 *
 * Callees: 1
 *   0x00000000004A6CD4  Caver::GUIEffect::GUIEffect(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDB54 string=0x00000000004A6CD4 "H3"
 *   insn=0x00000000001FDB58 string=0x00000000001FDB5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::GUIEffect(Caver::GUIEffect *this)
{
  return _ZN5Caver9GUIEffectC2Ev(this);
}

