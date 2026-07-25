/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B75C
 * Mangled: _ZN5Caver13GUIScrollView6UpdateEf
 * Demangled: Caver::GUIScrollView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x00000000001FFB40  Caver::GUIScrollView::AdjustContentOffset(void)
 *   0x0000000000203D60  Caver::GUIScrollLocationController::Update(float)
 *
 * Referenced strings: 84
 *   insn=0x000000000049B76C string=0x000000000049B770 "a"
 *   insn=0x000000000049B770 string=0x000000000049B774 "`"
 *   insn=0x000000000049B774 string=0x000000000049B778 ""
 *   insn=0x000000000049B778 string=0x000000000049B77C " (("
 *   insn=0x000000000049B77C string=0x000000000049B780 "`"
 *   insn=0x000000000049B784 string=0x000000000049B788 "h"
 *   insn=0x000000000049B784 string=0x000000000049B7C4 "h"
 *   insn=0x000000000049B78C string=0x000000000049B790 "h"
 *   insn=0x000000000049B794 string=0x000000000049B798 "  "
 *   insn=0x000000000049B798 string=0x000000000049B79C "l"
 *   insn=0x000000000049B79C string=0x000000000049B7A0 "h"
 *   insn=0x000000000049B79C string=0x000000000049B7A8 "( "
 *   insn=0x000000000049B7A0 string=0x000000000049B7A4 ""
 *   insn=0x000000000049B7A8 string=0x000000000049B7AC "hb"
 *   insn=0x000000000049B7AC string=0x000000000049B7B0 ""
 *   insn=0x000000000049B7B0 string=0x000000000049B7B4 "a"
 *   insn=0x000000000049B7B4 string=0x000000000049B7B8 ""
 *   insn=0x000000000049B7C4 string=0x000000000049B7C8 "t"
 *   insn=0x000000000049B7CC string=0x000000000049B7D0 "anA"
 *   insn=0x000000000049B7CC string=0x000000000049B924 "h"
 *   insn=0x000000000049B7D0 string=0x000000000049B7D4 "H"
 *   insn=0x000000000049B7D4 string=0x0000000000583734 "o"
 *   insn=0x000000000049B7DC string=0x000000000049B7E0 "!(("
 *   insn=0x000000000049B7E4 string=0x000000000049B7E8 "   "
 *   insn=0x000000000049B7E8 string=0x000000000049B7EC "an"
 *   insn=0x000000000049B7EC string=0x000000000049B7F0 ""
 *   insn=0x000000000049B7F0 string=0x000000000049B850 "b"
 *   insn=0x000000000049B7F4 string=0x0000000000597058 "\n"
 *   insn=0x000000000049B7F8 string=0x000000000049B7FC "efA"
 *   insn=0x000000000049B7FC string=0x000000000049B800 "bjA"
 *   insn=0x000000000049B804 string=0x000000000049B808 "c"
 *   insn=0x000000000049B808 string=0x000000000049B80C "  $"
 *   insn=0x000000000049B80C string=0x000000000049B810 "a%"
 *   insn=0x000000000049B814 string=0x000000000049B818 "h"
 *   insn=0x000000000049B814 string=0x000000000049B824 "$"
 *   insn=0x000000000049B828 string=0x000000000049B82C "b""
 *   insn=0x000000000049B82C string=0x000000000049B830 "E"
 *   insn=0x000000000049B830 string=0x000000000049B838 "C"
 *   insn=0x000000000049B838 string=0x000000000049B83C "`  "
 *   insn=0x000000000049B83C string=0x000000000049B840 "a"
 *   insn=0x000000000049B840 string=0x000000000049B844 "E"
 *   insn=0x000000000049B844 string=0x000000000049B84C "b:"
 *   insn=0x000000000049B850 string=0x000000000049B854 "a"
 *   insn=0x000000000049B858 string=0x000000000049B85C "B(("
 *   insn=0x000000000049B85C string=0x000000000049B860 "   "
 *   insn=0x000000000049B860 string=0x000000000049B864 "`"
 *   insn=0x000000000049B864 string=0x000000000049B868 "b"
 *   insn=0x000000000049B86C string=0x000000000049B870 "@"
 *   insn=0x000000000049B86C string=0x000000000049B87C "d"
 *   insn=0x000000000049B87C string=0x000000000049B880 "e"
 *   insn=0x000000000049B880 string=0x000000000049B884 "b"
 *   insn=0x000000000049B884 string=0x000000000049B888 "a"
 *   insn=0x000000000049B888 string=0x000000000049B88C "c8 "
 *   insn=0x000000000049B890 string=0x000000000049B894 "-"
 *   insn=0x000000000049B894 string=0x000000000049B898 "d"
 *   insn=0x000000000049B894 string=0x000000000049B8D8 "d"
 *   insn=0x000000000049B898 string=0x000000000049B89C "e"
 *   insn=0x000000000049B89C string=0x000000000049B8A0 "f\nA"
 *   insn=0x000000000049B8A0 string=0x000000000049B8A4 "H"
 *   insn=0x000000000049B8A4 string=0x0000000000583944 "\n"
 *   insn=0x000000000049B8AC string=0x000000000049B8B0 "EI"
 *   insn=0x000000000049B8C0 string=0x000000000049B8C4 "M"
 *   insn=0x000000000049B8CC string=0x000000000049B8D0 "h"
 *   insn=0x000000000049B8D0 string=0x000000000049B8D4 "d\n"
 *   insn=0x000000000049B8D8 string=0x000000000049B8DC "e"
 *   insn=0x000000000049B8E8 string=0x000000000049B8EC "a6A"
 *   insn=0x000000000049B8EC string=0x000000000049B8F0 "H"
 *   insn=0x000000000049B8F0 string=0x000000000049B8F4 "b""
 *   insn=0x000000000049B8F8 string=0x000000000049B8FC "@( "
 *   insn=0x000000000049B900 string=0x000000000049B904 "!"
 *   insn=0x000000000049B904 string=0x000000000049B908 "  #"
 *   insn=0x000000000049B908 string=0x000000000049B90C "M"
 *   insn=0x000000000049B914 string=0x000000000049B918 "h"
 *   insn=0x000000000049B918 string=0x000000000049B91C "`6"
 *   insn=0x000000000049B928 string=0x000000000049B92C "`BO"
 *   insn=0x000000000049B92C string=0x000000000049B930 "a"
 *   insn=0x000000000049B934 string=0x000000000049B938 "!"
 *   insn=0x000000000049B940 string=0x000000000049B948 ""
 *   insn=0x000000000049B948 string=0x000000000049B94C "h"
 *   insn=0x000000000049B94C string=0x000000000049B950 "<"
 *   insn=0x000000000049B954 string=0x000000000049B958 "h"
 *   insn=0x000000000049B958 string=0x000000000049B95C "y"
 *   insn=0x000000000049B968 string=0x000000000049B96C "`"
 *   insn=0x000000000049B988 string=0x000000000049B98C "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIScrollView::Update(Caver::GUIScrollView *this, float a2)
{
  float v3; // s1
  void (__fastcall ***v4)(_QWORD, char *); // x0
  float v6; // s0
  float v7; // s1
  float v8; // s1
  float v9; // s2
  float v10; // s3
  bool v11; // cc
  float v12; // s1
  float v13; // s2
  float v14; // s1
  float v15; // s2
  float v16; // s0
  float v17; // s2
  float v18; // s1
  float v19; // s3
  float v20; // s4
  float v21; // s0
  unsigned __int64 v22; // d0

  v3 = *((float *)this + 120);
  v4 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 52);
  v6 = v3 + a2;
  *((float *)this + 120) = v6;
  if ( v4 && !*((_BYTE *)this + 432) && *((_QWORD *)this + 43) && (v6 > 0.0 || !*((_BYTE *)this + 435)) )
  {
    *((_WORD *)this + 216) = 257;
    (**v4)(v4, (char *)this + 440);
    *((_BYTE *)this + 433) = 0;
  }
  if ( *((_BYTE *)this + 355) )
  {
    v7 = *((float *)this + 91);
    *((_BYTE *)this + 252) = 0;
    v8 = v7 + a2;
    *((_BYTE *)this + 296) = 0;
    *((float *)this + 91) = v8;
    if ( v8 > 0.001 )
    {
      v9 = *((float *)this + 90);
      v10 = 1.0 / v8;
      v11 = v8 <= 0.04;
      v12 = (float)(1.0 / v8) * *((float *)this + 89);
      if ( !v11 )
      {
        *((_DWORD *)this + 91) = 0;
        *(_QWORD *)((char *)this + 356) = 0;
      }
      v13 = v10 * v9;
      if ( fabsf(v12) < 0.001 )
        *((_BYTE *)this + 252) = 0;
      *((float *)this + 67) = v12;
      if ( fabsf(v13) < 0.001 )
        *((_BYTE *)this + 296) = 0;
      *((float *)this + 78) = v13;
    }
    v14 = *((float *)this + 100);
    v15 = *((float *)this + 101) + a2;
    v16 = 1.0;
    *((float *)this + 101) = v15;
    if ( v14 > 0.001 )
      v16 = fminf(v15 / v14, 1.0);
    v17 = *((float *)this + 97);
    v18 = *((float *)this + 99);
    v19 = 1.0 - v16;
    if ( *((float *)this + 61) > *((float *)this + 35) )
    {
      v20 = (float)(*((float *)this + 96) * v19) + (float)(v16 * *((float *)this + 98));
      if ( fabsf(v20 - *((float *)this + 66)) > 0.01 )
        *((_DWORD *)this + 73) = 0;
      *((_BYTE *)this + 260) = 1;
      *((float *)this + 66) = v20;
    }
    if ( *((float *)this + 62) > *((float *)this + 36) )
    {
      v21 = (float)(v19 * v17) + (float)(v16 * v18);
      if ( fabsf(v21 - *((float *)this + 77)) > 0.01 )
        *((_DWORD *)this + 84) = 0;
      *((_BYTE *)this + 304) = 1;
      *((float *)this + 77) = v21;
    }
  }
  else
  {
    if ( *((_BYTE *)this + 352) )
      v22 = vand_s8(
              vcgt_f32(*(float32x2_t *)((char *)this + 244), *(float32x2_t *)((char *)this + 140)),
              (int8x8_t)0x100000001LL).n64_u64[0];
    else
      v22 = 0;
    *((_BYTE *)this + 252) = v22;
    *((_BYTE *)this + 296) = BYTE4(v22);
    Caver::GUIScrollView::AdjustContentOffset(this);
  }
  Caver::GUIScrollLocationController::Update((Caver::GUIScrollView *)((char *)this + 252), a2);
  Caver::GUIScrollLocationController::Update((Caver::GUIScrollView *)((char *)this + 296), a2);
  return Caver::GUIView::Update(this, a2);
}

