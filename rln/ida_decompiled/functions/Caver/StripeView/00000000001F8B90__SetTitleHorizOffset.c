/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B90
 * Mangled: ._ZN5Caver10StripeView19SetTitleHorizOffsetEf
 * Demangled: Caver::StripeView::SetTitleHorizOffset(float)
 *
 * Callers: 1
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *
 * Callees: 1
 *   0x000000000043F4E4  Caver::StripeView::SetTitleHorizOffset(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8B94 string=0x000000000043F4E4 ""
 *   insn=0x00000000001F8B98 string=0x00000000001F8B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StripeView::SetTitleHorizOffset(Caver::StripeView *this, float a2)
{
  return _ZN5Caver10StripeView19SetTitleHorizOffsetEf(this, a2);
}

