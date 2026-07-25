/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200790
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13OverlayButtonEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OverlayButton>::shared_ptr<Caver::OverlayButton>(Caver::OverlayButton *)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003D8954  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>(boost::shared_ptr<Caver::OverlayMenuButton> const*,Caver::OverlayMenuButton *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200798 string=0x000000000020079C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::OverlayButton>::shared_ptr<Caver::OverlayButton>()
{
  JUMPOUT(0x3D8A74);
}

