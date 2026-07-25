/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF860
 * Mangled: ._ZN5Caver7MapView17SelectNodeAtIndexEm
 * Demangled: Caver::MapView::SelectNodeAtIndex(ulong)
 *
 * Callers: 1
 *   0x000000000042FA20  Caver::PortalView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x0000000000427990  Caver::MapView::SelectNodeAtIndex(ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF868 string=0x00000000001FF86C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::SelectNodeAtIndex(Caver::MapView *this, unsigned __int64 a2)
{
  return _ZN5Caver7MapView17SelectNodeAtIndexEm(this, a2);
}

