/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8060
 * Mangled: ._ZN5Caver22AndroidQuitApplicationEv
 * Demangled: Caver::AndroidQuitApplication(void)
 *
 * Callers: 3
 *   0x00000000003946B0  Caver::MainMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x000000000042CEEC  Caver::PauseView::TouchEnded(Caver::FWTouch const&)
 *   0x0000000000491C10  Caver::GUIAlertView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x00000000004794D4  Caver::AndroidQuitApplication(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8068 string=0x00000000001F806C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidQuitApplication(Caver *this)
{
  return _ZN5Caver22AndroidQuitApplicationEv(this);
}

