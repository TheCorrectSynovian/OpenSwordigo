/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049BBEC
 * Mangled: _ZN5Caver13GUIScrollView19ScrollRectToVisibleERKNS_9RectangleEb
 * Demangled: Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *
 * Callers: 1
 *   0x00000000001F6F20  Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *
 * Callees: 0
 *
 * Referenced strings: 29
 *   insn=0x000000000049BBF8 string=0x000000000049BBFC "$"
 *   insn=0x000000000049BBFC string=0x000000000049BC00 "'"
 *   insn=0x000000000049BC00 string=0x000000000049BC04 ""
 *   insn=0x000000000049BC04 string=0x000000000049BC08 " "
 *   insn=0x000000000049BC08 string=0x000000000049BC0C "_"
 *   insn=0x000000000049BC0C string=0x000000000049BC10 "\t"
 *   insn=0x000000000049BC10 string=0x000000000049BC14 ""
 *   insn=0x000000000049BC14 string=0x000000000049BC18 "\n"
 *   insn=0x000000000049BC1C string=0x000000000049BC20 "#(#"
 *   insn=0x000000000049BC20 string=0x000000000049BC24 "08%"
 *   insn=0x000000000049BC28 string=0x000000000049BC2C "+"
 *   insn=0x000000000049BC2C string=0x000000000049BC30 "a8!"
 *   insn=0x000000000049BC30 string=0x000000000049BC34 "c"
 *   insn=0x000000000049BC44 string=0x000000000049BC48 "D8$"
 *   insn=0x000000000049BC4C string=0x000000000049BC50 "C"
 *   insn=0x000000000049BC54 string=0x000000000049BC58 "K"
 *   insn=0x000000000049BC58 string=0x0000000000583944 "\n"
 *   insn=0x000000000049BC68 string=0x000000000049BC6C "cEI"
 *   insn=0x000000000049BC88 string=0x000000000049BC8C "M"
 *   insn=0x000000000049BC94 string=0x000000000049BC98 "  ""
 *   insn=0x000000000049BC98 string=0x000000000049BC9C "!L""
 *   insn=0x000000000049BCA0 string=0x000000000049BCA4 ""8$"
 *   insn=0x000000000049BCA4 string=0x000000000049BCA8 "B"
 *   insn=0x000000000049BCA8 string=0x000000000049BCAC "@ #"
 *   insn=0x000000000049BCAC string=0x000000000049BCB0 "\n"
 *   insn=0x000000000049BCB4 string=0x000000000049BCB8 "M"
 *   insn=0x000000000049BCB8 string=0x000000000049BCC0 "\n"
 *   insn=0x000000000049BCC4 string=0x000000000049BCC8 "b"
 *   insn=0x000000000049BCCC string=0x000000000049BCD0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIScrollView::ScrollRectToVisible(__int64 result, float *a2, char a3)
{
  float v3; // s0
  float v4; // s1
  float v5; // s4
  float v6; // s5
  float *v7; // x10
  float v8; // s16
  float *v9; // x11
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float v13; // s4
  float v14; // s2
  float v15; // s3
  float v16; // s5
  float v17; // s2

  v3 = *(float *)(result + 132);
  v4 = *(float *)(result + 136);
  v5 = *a2;
  v6 = a2[1];
  if ( *(_BYTE *)(result + 260) )
    v7 = (float *)(result + 264);
  else
    v7 = (float *)(result + 256);
  v8 = v4 - v6;
  if ( *(_BYTE *)(result + 304) )
    v9 = (float *)(result + 308);
  else
    v9 = (float *)(result + 300);
  v10 = (float)(v4 + *(float *)(result + 144)) - (float)(v6 + a2[3]);
  v11 = v3 + *(float *)(result + 140);
  v12 = v3 - v5;
  v13 = v11 - (float)(v5 + a2[2]);
  if ( v8 <= *v9 )
    v14 = *v9;
  else
    v14 = v8;
  v15 = *v7;
  v16 = *(float *)(result + 264);
  *(_BYTE *)(result + 252) = 0;
  if ( v12 <= v15 )
    v12 = v15;
  if ( v13 < v12 )
    v12 = v13;
  *(_DWORD *)(result + 268) = 0;
  *(_BYTE *)(result + 296) = 0;
  *(_DWORD *)(result + 312) = 0;
  if ( fabsf(v12 - v16) > 0.01 )
    *(_DWORD *)(result + 292) = 0;
  if ( v10 >= v14 )
    v10 = v14;
  v17 = fabsf(v10 - *(float *)(result + 308));
  *(_BYTE *)(result + 260) = 1;
  *(float *)(result + 264) = v12;
  if ( v17 > 0.01 )
    *(_DWORD *)(result + 336) = 0;
  *(_BYTE *)(result + 304) = 1;
  *(float *)(result + 308) = v10;
  if ( (a3 & 1) == 0 )
  {
    *(float *)(result + 256) = v12;
    *(float *)(result + 300) = v10;
  }
  return result;
}

