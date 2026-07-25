/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEFC0
 * Mangled: ._ZN5Caver19AttributePointsView16SetInitialPointsEi
 * Demangled: Caver::AttributePointsView::SetInitialPoints(int)
 *
 * Callers: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003F87EC  Caver::AttributePointsView::SetInitialPoints(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEFC8 string=0x00000000001FEFCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AttributePointsView::SetInitialPoints(Caver::AttributePointsView *this, int a2)
{
  return _ZN5Caver19AttributePointsView16SetInitialPointsEi(this, a2);
}

