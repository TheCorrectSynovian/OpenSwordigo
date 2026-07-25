/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E50
 * Mangled: ._ZN5Caver13CharacterView21UpdateAvailablePointsEv
 * Demangled: Caver::CharacterView::UpdateAvailablePoints(void)
 *
 * Callers: 4
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x00000000003FF5DC  Caver::CharacterView::AttributePointsViewValueChanged(Caver::AttributePointsView *)
 *   0x00000000003FF5E0  `non-virtual thunk to'Caver::CharacterView::AttributePointsViewValueChanged(Caver::AttributePointsView *)
 *
 * Callees: 1
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E58 string=0x00000000001F6E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharacterView::UpdateAvailablePoints(Caver::CharacterView *this)
{
  JUMPOUT(0x3FD6B8);
}

