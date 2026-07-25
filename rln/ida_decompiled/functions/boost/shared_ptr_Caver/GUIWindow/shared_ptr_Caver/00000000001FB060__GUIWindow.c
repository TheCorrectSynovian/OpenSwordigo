/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB060
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9GUIWindowEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>(Caver::GUIWindow *)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callees: 1
 *   0x0000000000211894  boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>(Caver::GUIWindow *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB068 string=0x00000000001FB06C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>()
{
  return _ZN5boost10shared_ptrIN5Caver9GUIWindowEEC2IS2_EEPT_();
}

