/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F80E0
 * Mangled: ._ZN5Caver12PurchaseViewC2Ev
 * Demangled: Caver::PurchaseView::PurchaseView(void)
 *
 * Callers: 1
 *   0x00000000003E8354  Caver::PurchaseViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F80E8 string=0x00000000001F80EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PurchaseView::PurchaseView(Caver::PurchaseView *this)
{
  return _ZN5Caver12PurchaseViewC2Ev(this);
}

