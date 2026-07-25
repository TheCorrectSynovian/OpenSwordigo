/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB300
 * Mangled: ._ZN5Caver18InventoryItemPanel24AddToggleLabelsAnimationEv
 * Demangled: Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *
 * Callers: 1
 *   0x000000000040CD60  Caver::InventoryItemPanel::ToggleLabelsFadeInAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000040BD50  Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB308 string=0x00000000001FB30C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryItemPanel::AddToggleLabelsAnimation(Caver::InventoryItemPanel *this)
{
  return _ZN5Caver18InventoryItemPanel24AddToggleLabelsAnimationEv(this);
}

