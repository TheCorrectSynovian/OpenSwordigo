/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F35B0
 * Mangled: ._ZN5Caver8GUILabel9ClearTextEv
 * Demangled: Caver::GUILabel::ClearText(void)
 *
 * Callers: 2
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *
 * Callees: 1
 *   0x0000000000497FA8  Caver::GUILabel::ClearText(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F35B8 string=0x00000000001F35BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUILabel::ClearText(Caver::GUILabel *this)
{
  return _ZN5Caver8GUILabel9ClearTextEv(this);
}

