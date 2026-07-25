/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002024C0
 * Mangled: ._ZN5Caver19AttributePointsView12SetMaxPointsEi
 * Demangled: Caver::AttributePointsView::SetMaxPoints(int)
 *
 * Callers: 1
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *
 * Callees: 1
 *   0x00000000003F89D0  Caver::AttributePointsView::SetMaxPoints(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002024C8 string=0x00000000002024CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AttributePointsView::SetMaxPoints(Caver::AttributePointsView *this, int a2)
{
  return _ZN5Caver19AttributePointsView12SetMaxPointsEi(this, a2);
}

