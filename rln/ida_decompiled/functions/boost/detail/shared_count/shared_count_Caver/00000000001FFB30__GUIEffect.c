/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFB30
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver9GUIEffectEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect *)
 *
 * Callers: 4
 *   0x000000000034D7E8  Caver::GameSceneView::GameSceneView(void)
 *   0x000000000034FB34  Caver::GameSceneView::SetCinematicModeEnabled(bool,bool,bool)
 *   0x0000000000363FD4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *   0x00000000004A4F38  Caver::GUIWindow::Effect(void)
 *
 * Callees: 1
 *   0x00000000003506A8  boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFB38 string=0x00000000001FFB3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GUIEffect>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver9GUIEffectEEEPT_();
}

