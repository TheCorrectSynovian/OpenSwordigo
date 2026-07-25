/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF890
 * Mangled: ._ZN5Caver20PortalViewControllerC2Ev
 * Demangled: Caver::PortalViewController::PortalViewController(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000003705C4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>(boost::shared_ptr<Caver::PauseView> const*,Caver::PauseView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF898 string=0x00000000001FF89C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PortalViewController::PortalViewController(Caver::PortalViewController *this)
{
  JUMPOUT(0x3706E4);
}

