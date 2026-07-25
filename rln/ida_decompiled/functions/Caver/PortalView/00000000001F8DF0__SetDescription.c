/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8DF0
 * Mangled: ._ZN5Caver10PortalView14SetDescriptionERKSs
 * Demangled: Caver::PortalView::SetDescription(std::string const&)
 *
 * Callers: 2
 *   0x0000000000370748  Caver::PortalViewController::LoadView(void)
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000042FA18  Caver::PortalView::SetDescription(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8DF8 string=0x00000000001F8DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PortalView::SetDescription()
{
  return _ZN5Caver10PortalView14SetDescriptionERKSs();
}

