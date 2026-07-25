/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB080
 * Mangled: ._ZN5Caver14OnlineMenuViewC2Ev
 * Demangled: Caver::OnlineMenuView::OnlineMenuView(void)
 *
 * Callers: 2
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000397B98  Caver::OnlineMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB088 string=0x00000000001FB08C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OnlineMenuView::OnlineMenuView(Caver::OnlineMenuView *this)
{
  JUMPOUT(0x395FD8);
}

