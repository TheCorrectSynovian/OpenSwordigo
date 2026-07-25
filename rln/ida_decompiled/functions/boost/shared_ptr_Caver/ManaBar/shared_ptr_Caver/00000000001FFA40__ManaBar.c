/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFA40
 * Mangled: ._ZN5boost10shared_ptrIN5Caver7ManaBarEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ManaBar>::shared_ptr<Caver::ManaBar>(Caver::ManaBar *)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003D908C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*,Caver::HealthBar *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFA48 string=0x00000000001FFA4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ManaBar>::shared_ptr<Caver::ManaBar>()
{
  JUMPOUT(0x3D91AC);
}

