/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6080
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13ExperienceBarEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ExperienceBar>::shared_ptr<Caver::ExperienceBar>(Caver::ExperienceBar *)
 *
 * Callers: 2
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003D94E4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>(boost::shared_ptr<Caver::TargetFrame> const*,Caver::TargetFrame *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6088 string=0x00000000001F608C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ExperienceBar>::shared_ptr<Caver::ExperienceBar>()
{
  JUMPOUT(0x3D9604);
}

