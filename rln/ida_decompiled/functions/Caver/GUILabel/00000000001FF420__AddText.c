/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF420
 * Mangled: ._ZN5Caver8GUILabel7AddTextERKSsNS_5ColorE
 * Demangled: Caver::GUILabel::AddText(std::string const&,Caver::Color)
 *
 * Callers: 3
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *
 * Callees: 1
 *   0x00000000004980FC  Caver::GUILabel::AddText(std::string const&,Caver::Color)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF428 string=0x00000000001FF42C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUILabel::AddText(int a1, int a2, Caver::Color *a3)
{
  return _ZN5Caver8GUILabel7AddTextERKSsNS_5ColorE(a1, a2, a3);
}

