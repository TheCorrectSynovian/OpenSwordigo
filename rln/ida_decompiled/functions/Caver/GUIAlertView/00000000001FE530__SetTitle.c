/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE530
 * Mangled: ._ZN5Caver12GUIAlertView8SetTitleERKSs
 * Demangled: Caver::GUIAlertView::SetTitle(std::string const&)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x0000000000490628  Caver::GUIAlertView::SetTitle(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE538 string=0x00000000001FE53C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIAlertView::SetTitle()
{
  return _ZN5Caver12GUIAlertView8SetTitleERKSs();
}

