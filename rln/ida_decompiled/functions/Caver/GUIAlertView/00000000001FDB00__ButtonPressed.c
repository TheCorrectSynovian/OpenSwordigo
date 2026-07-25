/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB00
 * Mangled: ._ZN5Caver12GUIAlertView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::GUIAlertView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x0000000000491C10  Caver::GUIAlertView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDB08 string=0x00000000001FDB0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIAlertView::ButtonPressed()
{
  JUMPOUT(0x490E34);
}

