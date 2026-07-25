/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF740
 * Mangled: ._ZN5Caver12MainMenuView22SetGoogleSignInVisibleEb
 * Demangled: Caver::MainMenuView::SetGoogleSignInVisible(bool)
 *
 * Callers: 2
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000036BE98  Caver::MainMenuViewController::GoogleSignInCompletion(bool,std::string const&)
 *
 * Callees: 1
 *   0x0000000000394244  Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF744 string=0x000000000039463C "4A"
 *   insn=0x00000000001FF748 string=0x00000000001FF74C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MainMenuView::SetGoogleSignInVisible(Caver::MainMenuView *this)
{
  JUMPOUT(0x39463C);
}

