/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB60
 * Mangled: ._ZN5Caver12GUIAlertView10SetMessageERKSs
 * Demangled: Caver::GUIAlertView::SetMessage(std::string const&)
 *
 * Callers: 2
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Callees: 1
 *   0x0000000000490850  Caver::GUIAlertView::SetMessage(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBB68 string=0x00000000001FBB6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIAlertView::SetMessage()
{
  return _ZN5Caver12GUIAlertView10SetMessageERKSs();
}

