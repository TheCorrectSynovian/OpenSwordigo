/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200170
 * Mangled: ._ZN5Caver13GameSceneView13overlayEffectEv
 * Demangled: Caver::GameSceneView::overlayEffect(void)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x0000000000363FD4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200178 string=0x000000000020017C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameSceneView::overlayEffect(Caver::GameSceneView *this)
{
  JUMPOUT(0x3640F4);
}

