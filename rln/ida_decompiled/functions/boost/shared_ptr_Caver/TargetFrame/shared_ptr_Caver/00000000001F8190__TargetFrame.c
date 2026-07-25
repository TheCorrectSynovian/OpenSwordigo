/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8190
 * Mangled: ._ZN5boost10shared_ptrIN5Caver11TargetFrameEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::TargetFrame>::shared_ptr<Caver::TargetFrame>(Caver::TargetFrame *)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003D92B8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>(boost::shared_ptr<Caver::ManaBar> const*,Caver::ManaBar *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8198 string=0x00000000001F819C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::TargetFrame>::shared_ptr<Caver::TargetFrame>()
{
  JUMPOUT(0x3D93D8);
}

