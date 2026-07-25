/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E8284
 * Mangled: _ZN5Caver12PurchaseViewD0Ev
 * Demangled: Caver::PurchaseView::~PurchaseView()
 *
 * Callers: 1
 *   0x00000000003E7EEC  Caver::PurchaseView::~PurchaseView()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F81C0  Caver::PurchaseView::~PurchaseView()
 *   0x00000000003E82BC  Caver::PurchaseView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x00000000003E8294 string=0x00000000001F81C0 "0'"
 *   insn=0x00000000003E82A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PurchaseView::~PurchaseView(Caver::PurchaseView *this)
{
  Caver::PurchaseView::~PurchaseView(this);
  operator delete(this);
}

