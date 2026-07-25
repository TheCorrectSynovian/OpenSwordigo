/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC2E0
 * Mangled: ._ZN5Caver10StripeView9SetHasTagEbf
 * Demangled: Caver::StripeView::SetHasTag(bool,float)
 *
 * Callers: 2
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *
 * Callees: 1
 *   0x000000000043ED40  Caver::StripeView::SetHasTag(bool,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC2E8 string=0x00000000001FC2EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StripeView::SetHasTag(Caver::StripeView *this, bool a2, float a3)
{
  return _ZN5Caver10StripeView9SetHasTagEbf(this, a2, a3);
}

