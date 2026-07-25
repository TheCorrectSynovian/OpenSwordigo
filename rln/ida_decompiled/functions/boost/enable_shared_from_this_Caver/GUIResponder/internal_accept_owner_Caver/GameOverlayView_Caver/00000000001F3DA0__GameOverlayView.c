/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3DA0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_15GameOverlayViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>(boost::shared_ptr<Caver::GameOverlayView> const*,Caver::GameOverlayView *)
 *
 * Callers: 1
 *   0x00000000003508A0  boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(Caver::GameOverlayView *)
 *
 * Callees: 1
 *   0x00000000003509AC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>(boost::shared_ptr<Caver::GameOverlayView> const*,Caver::GameOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3DA8 string=0x00000000001F3DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_15GameOverlayViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

