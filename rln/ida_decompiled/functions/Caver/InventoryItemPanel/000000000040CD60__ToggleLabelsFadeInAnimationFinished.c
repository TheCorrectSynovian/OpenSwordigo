/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040CD60
 * Mangled: _ZN5Caver18InventoryItemPanel35ToggleLabelsFadeInAnimationFinishedEPvPNS_8GUIEventE
 * Demangled: Caver::InventoryItemPanel::ToggleLabelsFadeInAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x000000000040C508  Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000001FB300  Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000040CD60 string=0x00000000001FB300 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryItemPanel::ToggleLabelsFadeInAnimationFinished(Caver::InventoryItemPanel *a1)
{
  return Caver::InventoryItemPanel::AddToggleLabelsAnimation(a1);
}

