/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043F4E4
 * Mangled: _ZN5Caver10StripeView19SetTitleHorizOffsetEf
 * Demangled: Caver::StripeView::SetTitleHorizOffset(float)
 *
 * Callers: 2
 *   0x00000000001F8B90  Caver::StripeView::SetTitleHorizOffset(float)
 *   0x000000000043F15C  Caver::StripeView::SetTitle(std::string const&)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000043F4E8 string=0x000000000043F4EC "("
 *   insn=0x000000000043F4EC string=0x000000000043F4F0 "(\n"
 *   insn=0x000000000043F4F0 string=0x0000000000583944 "\n"
 *   insn=0x000000000043F500 string=0x000000000043F504 ""
 *   insn=0x000000000043F508 string=0x000000000043F50C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StripeView::SetTitleHorizOffset(__int64 this, float a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(this + 288);
  *(float *)(this + 308) = a2;
  if ( v2 )
  {
    if ( *(float *)(this + 140) > 0.01 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 88LL))(this);
  }
  return this;
}

