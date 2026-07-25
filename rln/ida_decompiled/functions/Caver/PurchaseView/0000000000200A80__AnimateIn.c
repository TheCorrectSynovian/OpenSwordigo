/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A80
 * Mangled: ._ZN5Caver12PurchaseView9AnimateInEv
 * Demangled: Caver::PurchaseView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000003EB2B8  Caver::PurchaseViewController::ViewDidAppear(void)
 *
 * Callees: 1
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200A88 string=0x0000000000200A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PurchaseView::AnimateIn(Caver::PurchaseView *this)
{
  return _ZN5Caver12PurchaseView9AnimateInEv(this);
}

