/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4DD0
 * Mangled: ._ZN5Caver10PortalView20SetHelpButtonVisibleEb
 * Demangled: Caver::PortalView::SetHelpButtonVisible(bool)
 *
 * Callers: 2
 *   0x0000000000370748  Caver::PortalViewController::LoadView(void)
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000042FA04  Caver::PortalView::SetHelpButtonVisible(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4DD4 string=0x000000000042FA04 ""
 *   insn=0x00000000001F4DD8 string=0x00000000001F4DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalView::SetHelpButtonVisible(Caver::PortalView *this, bool a2)
{
  return _ZN5Caver10PortalView20SetHelpButtonVisibleEb(this, a2);
}

