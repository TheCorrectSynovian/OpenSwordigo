/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E60
 * Mangled: ._ZN5Caver12GUIAlertView9AddButtonERKN5boost10shared_ptrINS_9GUIButtonEEE
 * Demangled: Caver::GUIAlertView::AddButton(boost::shared_ptr<Caver::GUIButton> const&)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E68 string=0x0000000000200E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIAlertView::AddButton()
{
  JUMPOUT(0x490BF4);
}

