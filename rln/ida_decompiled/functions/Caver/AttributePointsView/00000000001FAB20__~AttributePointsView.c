/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAB20
 * Mangled: ._ZN5Caver19AttributePointsViewD2Ev
 * Demangled: Caver::AttributePointsView::~AttributePointsView()
 *
 * Callers: 1
 *   0x00000000003F8BE4  Caver::AttributePointsView::UpdateSprite(void)
 *
 * Callees: 1
 *   0x00000000003F8BE4  Caver::AttributePointsView::UpdateSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAB28 string=0x00000000001FAB2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AttributePointsView::~AttributePointsView(Caver::AttributePointsView *this)
{
  JUMPOUT(0x3F8D9C);
}

