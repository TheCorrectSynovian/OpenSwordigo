/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6830
 * Mangled: ._ZN5Caver19AttributePointsView17SetEditingEnabledEb
 * Demangled: Caver::AttributePointsView::SetEditingEnabled(bool)
 *
 * Callers: 1
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Callees: 1
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6838 string=0x00000000001F683C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AttributePointsView::SetEditingEnabled(Caver::AttributePointsView *this)
{
  JUMPOUT(0x3F8698);
}

