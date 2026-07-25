/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF460
 * Mangled: ._ZN5boost10shared_ptrIN5Caver12GUITextFieldEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUITextField>::shared_ptr<Caver::GUITextField>(Caver::GUITextField *)
 *
 * Callers: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Callees: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF468 string=0x00000000001FF46C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GUITextField>::shared_ptr<Caver::GUITextField>()
{
  JUMPOUT(0x39F85C);
}

