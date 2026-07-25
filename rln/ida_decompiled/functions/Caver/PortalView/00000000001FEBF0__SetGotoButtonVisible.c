/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEBF0
 * Mangled: ._ZN5Caver10PortalView20SetGotoButtonVisibleEb
 * Demangled: Caver::PortalView::SetGotoButtonVisible(bool)
 *
 * Callers: 1
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000042F9E8  Caver::PortalView::SetGotoButtonVisible(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEBF8 string=0x00000000001FEBFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalView::SetGotoButtonVisible(Caver::PortalView *this, bool a2)
{
  return _ZN5Caver10PortalView20SetGotoButtonVisibleEb(this, a2);
}

