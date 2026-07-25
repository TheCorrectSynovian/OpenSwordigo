/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8420
 * Mangled: ._ZN5Caver22GameMenuViewControllerC2Ev
 * Demangled: Caver::GameMenuViewController::GameMenuViewController(void)
 *
 * Callers: 1
 *   0x0000000000356DCC  Caver::GameViewController::ShowMenu(void)
 *
 * Callees: 1
 *   0x0000000000342AEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*,Caver::GUIBubbleView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8428 string=0x00000000001F842C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameMenuViewController::GameMenuViewController(Caver::GameMenuViewController *this)
{
  JUMPOUT(0x342C0C);
}

