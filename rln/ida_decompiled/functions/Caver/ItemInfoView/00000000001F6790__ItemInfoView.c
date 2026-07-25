/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6790
 * Mangled: ._ZN5Caver12ItemInfoViewC2Ev
 * Demangled: Caver::ItemInfoView::ItemInfoView(void)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x0000000000416B8C  Caver::ItemInfoView::ItemInfoView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6798 string=0x00000000001F679C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemInfoView::ItemInfoView(Caver::ItemInfoView *this)
{
  return _ZN5Caver12ItemInfoViewC2Ev(this);
}

