/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9CC0
 * Mangled: ._ZN5Caver12GUIAlertView7AddLinkERKSs
 * Demangled: Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Callers: 1
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Callees: 1
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9CC8 string=0x00000000001F9CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIAlertView::AddLink()
{
  return _ZN5Caver12GUIAlertView7AddLinkERKSs();
}

