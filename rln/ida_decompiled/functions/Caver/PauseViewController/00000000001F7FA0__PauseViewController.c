/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7FA0
 * Mangled: ._ZN5Caver19PauseViewControllerC2Ev
 * Demangled: Caver::PauseViewController::PauseViewController(void)
 *
 * Callers: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x000000000036FFC4  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>(boost::shared_ptr<Caver::ProfileSelectionViewController> const*,Caver::ProfileSelectionViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7FA8 string=0x00000000001F7FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PauseViewController::PauseViewController(Caver::PauseViewController *this)
{
  JUMPOUT(0x3700E4);
}

