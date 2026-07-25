/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C90
 * Mangled: ._ZN5boost10shared_ptrIN5Caver14OnlineMenuViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OnlineMenuView>::shared_ptr<Caver::OnlineMenuView>(Caver::OnlineMenuView *)
 *
 * Callers: 2
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000397B98  Caver::OnlineMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003958B0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(boost::shared_ptr<Caver::BadgeCountView> const*,Caver::BadgeCountView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203C98 string=0x0000000000203C9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::OnlineMenuView>::shared_ptr<Caver::OnlineMenuView>()
{
  JUMPOUT(0x395DAC);
}

