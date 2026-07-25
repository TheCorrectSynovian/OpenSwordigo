/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002019B0
 * Mangled: ._ZN5Caver19AttributePointsView12SetNumPointsEi
 * Demangled: Caver::AttributePointsView::SetNumPoints(int)
 *
 * Callers: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003F8914  Caver::AttributePointsView::SetNumPoints(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002019B8 string=0x00000000002019BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AttributePointsView::SetNumPoints(Caver::AttributePointsView *this, int a2)
{
  return _ZN5Caver19AttributePointsView12SetNumPointsEi(this, a2);
}

