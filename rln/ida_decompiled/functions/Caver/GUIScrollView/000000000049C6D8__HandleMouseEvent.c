/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C6D8
 * Mangled: _ZN5Caver13GUIScrollView16HandleMouseEventERKNS_13GUIMouseEventE
 * Demangled: Caver::GUIScrollView::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *
 * Callers: 1
 *   0x000000000049C584  Caver::GUIScrollView::HitTest(Caver::Vector2 const&)
 *
 * Callees: 2
 *   0x00000000001FE230  Caver::GUIResponder::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *   0x00000000001FFB40  Caver::GUIScrollView::AdjustContentOffset(void)
 *
 * Referenced strings: 17
 *   insn=0x000000000049C6E0 string=0x000000000049C6E4 "H"
 *   insn=0x000000000049C6E4 string=0x000000000049C6E8 "  @"
 *   insn=0x000000000049C6F4 string=0x000000000049C6F8 "  ""
 *   insn=0x000000000049C704 string=0x000000000049C708 "("
 *   insn=0x000000000049C708 string=0x0000000000583944 "\n"
 *   insn=0x000000000049C70C string=0x000000000049C710 " 8 "
 *   insn=0x000000000049C714 string=0x000000000049C718 "!"
 *   insn=0x000000000049C718 string=0x000000000049C71C "  ""
 *   insn=0x000000000049C71C string=0x000000000049C720 "M"
 *   insn=0x000000000049C728 string=0x000000000049C72C ""
 *   insn=0x000000000049C740 string=0x000000000049C744 "  ""
 *   insn=0x000000000049C74C string=0x000000000049C750 "("
 *   insn=0x000000000049C754 string=0x000000000049C758 " 8 "
 *   insn=0x000000000049C75C string=0x000000000049C760 "!"
 *   insn=0x000000000049C760 string=0x000000000049C764 "  ""
 *   insn=0x000000000049C764 string=0x000000000049C768 "M"
 *   insn=0x000000000049C770 string=0x000000000049C774 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIScrollView::HandleMouseEvent(__int64 a1, __int64 a2)
{
  float v2; // s0
  float v3; // s1
  float v4; // s0
  float v5; // s1
  float v6; // s0

  if ( *(_DWORD *)(a2 + 12) != 4 )
    return Caver::GUIResponder::HandleMouseEvent();
  v2 = *(float *)(a2 + 32) * 0.6;
  if ( *(float *)(a1 + 248) <= *(float *)(a1 + 144) )
  {
    if ( *(float *)(a1 + 244) > *(float *)(a1 + 140) )
    {
      v5 = *(float *)(a1 + 264);
      v6 = v5 - v2;
      if ( fabsf(v6 - v5) > 0.01 )
        *(_DWORD *)(a1 + 292) = 0;
      *(_BYTE *)(a1 + 260) = 1;
      *(float *)(a1 + 264) = v6;
    }
  }
  else
  {
    v3 = *(float *)(a1 + 308);
    v4 = v3 - v2;
    if ( fabsf(v4 - v3) > 0.01 )
      *(_DWORD *)(a1 + 336) = 0;
    *(_BYTE *)(a1 + 304) = 1;
    *(float *)(a1 + 308) = v4;
  }
  return Caver::GUIScrollView::AdjustContentOffset((Caver::GUIScrollView *)a1);
}

