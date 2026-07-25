/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF000
 * Mangled: ._ZN5Caver8GUILabel7AddTextERKSsRKN5boost10shared_ptrINS_13GradientColorEEE
 * Demangled: Caver::GUILabel::AddText(std::string const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Callers: 2
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *
 * Callees: 1
 *   0x0000000000498130  Caver::GUILabel::AddText(std::string const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF008 string=0x00000000001FF00C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUILabel::AddText()
{
  return _ZN5Caver8GUILabel7AddTextERKSsRKN5boost10shared_ptrINS_13GradientColorEEE();
}

