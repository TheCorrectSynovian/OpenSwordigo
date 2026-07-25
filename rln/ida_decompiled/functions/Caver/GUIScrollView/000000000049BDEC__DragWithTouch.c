/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049BDEC
 * Mangled: _ZN5Caver13GUIScrollView13DragWithTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIScrollView::DragWithTouch(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001F4BA0  Caver::GUIScrollView::DragWithTouch(Caver::FWTouch const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *
 * Referenced strings: 42
 *   insn=0x000000000049BDF8 string=0x000000000049BDFC "T"
 *   insn=0x000000000049BE18 string=0x000000000049BE1C "`"
 *   insn=0x000000000049BE1C string=0x000000000049BE20 "azA"
 *   insn=0x000000000049BE20 string=0x000000000049BE24 "f~A"
 *   insn=0x000000000049BE24 string=0x000000000049BE28 "d"
 *   insn=0x000000000049BE28 string=0x000000000049BE2C "`"
 *   insn=0x000000000049BE30 string=0x000000000049BE34 "e"
 *   insn=0x000000000049BE34 string=0x000000000049BE38 "pvA"
 *   insn=0x000000000049BE38 string=0x000000000049BE3C "brA"
 *   insn=0x000000000049BE3C string=0x000000000049BE40 "c8!"
 *   insn=0x000000000049BE48 string=0x000000000049BE4C "!(0"
 *   insn=0x000000000049BE50 string=0x000000000049BE54 "f"
 *   insn=0x000000000049BE50 string=0x000000000049BEA4 "d"
 *   insn=0x000000000049BE54 string=0x000000000049BE58 "g"
 *   insn=0x000000000049BE70 string=0x000000000049BE74 "h"
 *   insn=0x000000000049BE70 string=0x000000000049BE88 "  $"
 *   insn=0x000000000049BE7C string=0x000000000049BE80 "!&"
 *   insn=0x000000000049BE8C string=0x000000000049BE90 "H"
 *   insn=0x000000000049BE94 string=0x000000000049BE98 "!8$"
 *   insn=0x000000000049BE98 string=0x000000000049BE9C "!%"
 *   insn=0x000000000049BEA4 string=0x000000000049BEA8 "e"
 *   insn=0x000000000049BEA8 string=0x000000000049BEAC "b(""
 *   insn=0x000000000049BEB4 string=0x000000000049BEB8 "c"
 *   insn=0x000000000049BEB4 string=0x000000000049BF08 "h"
 *   insn=0x000000000049BEB8 string=0x000000000049BEBC "f"
 *   insn=0x000000000049BECC string=0x000000000049BED0 "c8&"
 *   insn=0x000000000049BED4 string=0x000000000049BED8 "h"
 *   insn=0x000000000049BED4 string=0x000000000049BEEC "@ #"
 *   insn=0x000000000049BEE0 string=0x000000000049BEE4 "B%"
 *   insn=0x000000000049BEF0 string=0x000000000049BEF4 "H"
 *   insn=0x000000000049BEF8 string=0x000000000049BEFC "B8#"
 *   insn=0x000000000049BEFC string=0x000000000049BF00 "B$"
 *   insn=0x000000000049BF00 string=0x000000000049BF04 "b(""
 *   insn=0x000000000049BF08 string=0x000000000049BF0C "b"
 *   insn=0x000000000049BF0C string=0x000000000049BF10 "a"
 *   insn=0x000000000049BF14 string=0x000000000049BF18 "i"
 *   insn=0x000000000049BF18 string=0x000000000049BF1C "h"
 *   insn=0x000000000049BF1C string=0x000000000049BF20 "#"
 *   insn=0x000000000049BF20 string=0x000000000049BF24 """
 *   insn=0x000000000049BF24 string=0x000000000049BF28 "@"
 *   insn=0x000000000049BF2C string=0x000000000049BF30 " "
 *   insn=0x000000000049BF54 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::GUIScrollView::DragWithTouch(Caver::GUIScrollView *this, const Caver::FWTouch *a2)
{
  float32x2_t v3; // d0
  float v4; // s1
  float v5; // s6
  float v6; // s4
  float v7; // s5
  float v8; // s3
  float v9; // s1
  float v10; // s6
  float v11; // s7
  float v12; // s5
  float v13; // s4
  float v14; // s4
  float v15; // s5
  float32x2_t v16; // d2
  float v17; // s3
  float v18; // s6
  float v19; // s4
  float v20; // s3
  int v21; // w8
  float32x2_t result; // d0
  __int64 v23[2]; // [xsp+0h] [xbp-20h] BYREF

  v23[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::FWTouch::LocationInView(v23, a2, this);
  v3.n64_u64[0] = *(_QWORD *)((unsigned __int64)this + 392);
  v4 = *((float *)this + 94);
  v5 = *((float *)this + 95);
  v6 = *((float *)this + 62);
  *((float32x2_t *)this + 48) = v3;
  v7 = *((float *)this + 36);
  v8 = *(float *)v23 - v4;
  v9 = (float)(*((float *)v23 + 1) - v5) + *((float *)this + 93);
  if ( v6 > v7 )
  {
    v10 = *((float *)this + 34);
    v11 = *((float *)this + 60);
    v12 = (float)(v7 + v10) - (float)(v6 + v11);
    v13 = v10 - v11;
    if ( v12 > v9 )
      v9 = v12 + (float)((float)(v12 - v9) * -0.4);
    if ( v9 > v13 )
      v9 = v13 + (float)((float)(v9 - v13) * 0.4);
  }
  v14 = *((float *)this + 61);
  v15 = *((float *)this + 35);
  v16.n64_f32[0] = v8 + *((float *)this + 92);
  if ( v14 > v15 )
  {
    v17 = *((float *)this + 33);
    v18 = *((float *)this + 59);
    v19 = (float)(v15 + v17) - (float)(v14 + v18);
    v20 = v17 - v18;
    if ( v19 > v16.n64_f32[0] )
      v16.n64_f32[0] = v19 + (float)((float)(v19 - v16.n64_f32[0]) * -0.4);
    if ( v16.n64_f32[0] > v20 )
      v16.n64_f32[0] = v20 + (float)((float)(v16.n64_f32[0] - v20) * 0.4);
  }
  v21 = *((_DWORD *)this + 101);
  *((_DWORD *)this + 98) = v16.n64_u32[0];
  *((float *)this + 99) = v9;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 100) = v21;
  v16.n64_f32[1] = v9;
  result.n64_u64[0] = vadd_f32(vsub_f32(v16, v3), *(float32x2_t *)((char *)this + 356)).n64_u64[0];
  *(float32x2_t *)((char *)this + 356) = result;
  return result;
}

