/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4270
 * Mangled: ._ZN5Caver12GUIAlertView13AddCustomViewERKN5boost10shared_ptrINS_7GUIViewEEE
 * Demangled: Caver::GUIAlertView::AddCustomView(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 1
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Callees: 1
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4278 string=0x00000000001F427C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIAlertView::AddCustomView()
{
  JUMPOUT(0x49187C);
}

