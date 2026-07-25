/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8100
 * Mangled: ._ZN5Caver13InventoryView9AnimateInEv
 * Demangled: Caver::InventoryView::AnimateIn(void)
 *
 * Callers: 1
 *   0x0000000000411444  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x0000000000411A84  Caver::InventoryView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8108 string=0x00000000001F810C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryView::AnimateIn(Caver::InventoryView *this)
{
  return _ZN5Caver13InventoryView9AnimateInEv(this);
}

