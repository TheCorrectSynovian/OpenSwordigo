/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003FF5E0
 * Mangled: _ZThn248_N5Caver13CharacterView31AttributePointsViewValueChangedEPNS_19AttributePointsViewE
 * Demangled: `non-virtual thunk to'Caver::CharacterView::AttributePointsViewValueChanged(Caver::AttributePointsView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E50  Caver::CharacterView::UpdateAvailablePoints(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000003FF5E0 string=0x00000000003FF5E4 ""
 *   insn=0x00000000003FF5E4 string=0x00000000001F6E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::CharacterView::AttributePointsViewValueChanged(
        Caver::CharacterView *this,
        Caver::AttributePointsView *a2)
{
  Caver::CharacterView::UpdateAvailablePoints((Caver::CharacterView *)((char *)this - 248));
}

