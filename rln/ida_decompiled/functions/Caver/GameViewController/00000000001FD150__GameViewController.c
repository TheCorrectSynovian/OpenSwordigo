/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD150
 * Mangled: ._ZN5Caver18GameViewControllerC2Ev
 * Demangled: Caver::GameViewController::GameViewController(void)
 *
 * Callers: 3
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000347EFC  Caver::GameOverViewController::ShowAdMaybe(void)
 *   0x000000000036E914  Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x00000000003512A8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(boost::shared_ptr<Caver::DebugInfoOverlay> const*,Caver::DebugInfoOverlay *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD158 string=0x00000000001FD15C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameViewController::GameViewController(Caver::GameViewController *this)
{
  JUMPOUT(0x3513C8);
}

