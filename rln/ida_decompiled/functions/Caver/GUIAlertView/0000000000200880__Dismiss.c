/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200880
 * Mangled: ._ZN5Caver12GUIAlertView7DismissEv
 * Demangled: Caver::GUIAlertView::Dismiss(void)
 *
 * Callers: 5
 *   0x00000000003A0780  Caver::ProfilePanelView::TextFieldShouldReturn(Caver::GUITextField *)
 *   0x00000000003A07D8  `non-virtual thunk to'Caver::ProfilePanelView::TextFieldShouldReturn(Caver::GUITextField *)
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *   0x0000000000491DD0  Caver::GUIAlertView::TextFieldDidEndEditing(Caver::GUITextField *)
 *   0x0000000000491E6C  `non-virtual thunk to'Caver::GUIAlertView::TextFieldDidEndEditing(Caver::GUITextField *)
 *
 * Callees: 1
 *   0x0000000000491B58  Caver::GUIAlertView::Dismiss(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200888 string=0x000000000020088C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAlertView::Dismiss(Caver::GUIAlertView *this)
{
  return _ZN5Caver12GUIAlertView7DismissEv(this);
}

