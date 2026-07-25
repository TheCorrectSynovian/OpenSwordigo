/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F54F0
 * Mangled: ._ZN5Caver13InventoryView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x0000000000411A84  Caver::InventoryView::AnimateIn(void)
 *
 * Callees: 1
 *   0x0000000000411444  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F54F8 string=0x00000000001F54FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::InventoryView::ButtonPressed()
{
  return _ZN5Caver13InventoryView13ButtonPressedEPvPNS_8GUIEventE();
}

