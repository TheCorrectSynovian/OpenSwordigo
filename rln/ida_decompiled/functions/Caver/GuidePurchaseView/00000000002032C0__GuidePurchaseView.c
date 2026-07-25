/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002032C0
 * Mangled: ._ZN5Caver17GuidePurchaseViewC2Ev
 * Demangled: Caver::GuidePurchaseView::GuidePurchaseView(void)
 *
 * Callers: 1
 *   0x00000000003656F4  Caver::GuidePurchaseViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002032C8 string=0x00000000002032CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GuidePurchaseView::GuidePurchaseView(Caver::GuidePurchaseView *this)
{
  return _ZN5Caver17GuidePurchaseViewC2Ev(this);
}

