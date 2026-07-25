/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4A90
 * Mangled: ._ZN5boost10shared_ptrIN5Caver20ConfigureOverlayViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ConfigureOverlayView>::shared_ptr<Caver::ConfigureOverlayView>(Caver::ConfigureOverlayView *)
 *
 * Callers: 1
 *   0x000000000033DE4C  Caver::ConfigureOverlayViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000033E6D8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(boost::shared_ptr<Caver::GUILoadingView> const*,Caver::GUILoadingView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4A98 string=0x00000000001F4A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ConfigureOverlayView>::shared_ptr<Caver::ConfigureOverlayView>()
{
  JUMPOUT(0x33E7F8);
}

