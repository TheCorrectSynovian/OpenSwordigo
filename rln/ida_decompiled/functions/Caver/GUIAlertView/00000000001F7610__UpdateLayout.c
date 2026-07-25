/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7610
 * Mangled: ._ZN5Caver12GUIAlertView12UpdateLayoutEv
 * Demangled: Caver::GUIAlertView::UpdateLayout(void)
 *
 * Callers: 5
 *   0x0000000000490628  Caver::GUIAlertView::SetTitle(std::string const&)
 *   0x0000000000490850  Caver::GUIAlertView::SetMessage(std::string const&)
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *   0x00000000004918F0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *
 * Callees: 1
 *   0x000000000049008C  Caver::GUIAlertView::UpdateLayout(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7618 string=0x00000000001F761C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAlertView::UpdateLayout(Caver::GUIAlertView *this)
{
  return _ZN5Caver12GUIAlertView12UpdateLayoutEv(this);
}

