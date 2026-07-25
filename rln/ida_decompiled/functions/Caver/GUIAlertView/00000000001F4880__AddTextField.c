/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4880
 * Mangled: ._ZN5Caver12GUIAlertView12AddTextFieldERKN5boost10shared_ptrINS_12GUITextFieldEEE
 * Demangled: Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callers: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Callees: 1
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4888 string=0x00000000001F488C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIAlertView::AddTextField()
{
  return _ZN5Caver12GUIAlertView12AddTextFieldERKN5boost10shared_ptrINS_12GUITextFieldEEE();
}

