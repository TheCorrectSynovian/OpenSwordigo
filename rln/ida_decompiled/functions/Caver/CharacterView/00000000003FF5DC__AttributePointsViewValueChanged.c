/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003FF5DC
 * Mangled: _ZN5Caver13CharacterView31AttributePointsViewValueChangedEPNS_19AttributePointsViewE
 * Demangled: Caver::CharacterView::AttributePointsViewValueChanged(Caver::AttributePointsView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E50  Caver::CharacterView::UpdateAvailablePoints(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000003FF5DC string=0x00000000001F6E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharacterView::AttributePointsViewValueChanged(
        Caver::CharacterView *this,
        Caver::AttributePointsView *a2)
{
  Caver::CharacterView::UpdateAvailablePoints(this);
}

