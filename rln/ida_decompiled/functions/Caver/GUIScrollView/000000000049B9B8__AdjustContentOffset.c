/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B9B8
 * Mangled: _ZN5Caver13GUIScrollView19AdjustContentOffsetEv
 * Demangled: Caver::GUIScrollView::AdjustContentOffset(void)
 *
 * Callers: 1
 *   0x00000000001FFB40  Caver::GUIScrollView::AdjustContentOffset(void)
 *
 * Callees: 0
 *
 * Referenced strings: 59
 *   insn=0x000000000049B9C4 string=0x000000000049BA40 ""
 *   insn=0x000000000049B9D0 string=0x000000000049B9D4 "!(#"
 *   insn=0x000000000049B9D8 string=0x000000000049B9DC "!8 "
 *   insn=0x000000000049B9DC string=0x000000000049B9E0 "@ !"
 *   insn=0x000000000049B9E0 string=0x000000000049B9E4 "`8$"
 *   insn=0x000000000049B9E8 string=0x000000000049BA18 "@  "
 *   insn=0x000000000049B9EC string=0x000000000049B9F0 "H"
 *   insn=0x000000000049B9F0 string=0x0000000000583944 "\n"
 *   insn=0x000000000049B9F4 string=0x000000000049B9F8 "#8#"
 *   insn=0x000000000049B9F8 string=0x000000000049B9FC "c"
 *   insn=0x000000000049B9FC string=0x000000000049BA00 "` $"
 *   insn=0x000000000049BA00 string=0x000000000049BA04 "M"
 *   insn=0x000000000049BA0C string=0x000000000049BA10 ""
 *   insn=0x000000000049BA18 string=0x000000000049BA1C "-"
 *   insn=0x000000000049BA20 string=0x000000000049BA24 "H"
 *   insn=0x000000000049BA2C string=0x000000000049BA30 "!"
 *   insn=0x000000000049BA30 string=0x000000000049BA34 "  ""
 *   insn=0x000000000049BA50 string=0x000000000049BA54 "!#"
 *   insn=0x000000000049BA5C string=0x000000000049BA60 "H"
 *   insn=0x000000000049BA60 string=0x000000000049BA64 "!(""
 *   insn=0x000000000049BA68 string=0x000000000049BA6C " 8 "
 *   insn=0x000000000049BA78 string=0x000000000049BA7C "\n"
 *   insn=0x000000000049BA7C string=0x000000000049BAA4 "B"
 *   insn=0x000000000049BA80 string=0x000000000049BA84 "!(""
 *   insn=0x000000000049BA88 string=0x000000000049BA8C "H"
 *   insn=0x000000000049BA90 string=0x000000000049BA94 " 8 "
 *   insn=0x000000000049BAA4 string=0x000000000049BAA8 "@ !"
 *   insn=0x000000000049BAA8 string=0x000000000049BAAC "M"
 *   insn=0x000000000049BAB4 string=0x000000000049BAB8 ""
 *   insn=0x000000000049BACC string=0x000000000049BB00 ""
 *   insn=0x000000000049BAD8 string=0x000000000049BADC "!(#"
 *   insn=0x000000000049BAE0 string=0x000000000049BAE4 "!8 "
 *   insn=0x000000000049BAE4 string=0x000000000049BAE8 "@ !"
 *   insn=0x000000000049BAE8 string=0x000000000049BAEC "`8$"
 *   insn=0x000000000049BAF0 string=0x000000000049BAF4 "@  "
 *   insn=0x000000000049BAF4 string=0x000000000049BAF8 "L"
 *   insn=0x000000000049BAF8 string=0x000000000049BB80 "H"
 *   insn=0x000000000049BB04 string=0x000000000049BB08 "H"
 *   insn=0x000000000049BB14 string=0x000000000049BB18 "!#"
 *   insn=0x000000000049BB1C string=0x000000000049BB20 "H"
 *   insn=0x000000000049BB20 string=0x000000000049BB24 "!(""
 *   insn=0x000000000049BB28 string=0x000000000049BB2C " 8 "
 *   insn=0x000000000049BB38 string=0x000000000049BB3C "B"
 *   insn=0x000000000049BB3C string=0x000000000049BB40 "@ !"
 *   insn=0x000000000049BB4C string=0x000000000049BB50 "H"
 *   insn=0x000000000049BB54 string=0x000000000049BB58 "#8#"
 *   insn=0x000000000049BB58 string=0x000000000049BB5C "c"
 *   insn=0x000000000049BB5C string=0x000000000049BB60 "` $"
 *   insn=0x000000000049BB60 string=0x000000000049BB64 "M"
 *   insn=0x000000000049BB6C string=0x000000000049BB70 ""
 *   insn=0x000000000049BB74 string=0x000000000049BB78 "@  "
 *   insn=0x000000000049BB78 string=0x000000000049BB7C ""
 *   insn=0x000000000049BB88 string=0x000000000049BB8C ""
 *   insn=0x000000000049BB90 string=0x000000000049BB94 "H"
 *   insn=0x000000000049BB98 string=0x000000000049BB9C "@8 "
 *   insn=0x000000000049BBA8 string=0x000000000049BBAC "!"
 *   insn=0x000000000049BBAC string=0x000000000049BBB0 "  ""
 *   insn=0x000000000049BBB0 string=0x000000000049BBB4 "M"
 *   insn=0x000000000049BBBC string=0x000000000049BBC0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIScrollView::AdjustContentOffset(__int64 this)
{
  float v1; // s0
  float v2; // s1
  float v3; // s3
  float v4; // s4
  float v5; // s2
  float v6; // s1
  float v7; // s0
  float v8; // s2
  float v9; // s0
  float v10; // s1
  float v11; // s3
  float v12; // s4
  float v13; // s2
  float v14; // s1
  float v15; // s0
  float v16; // s2
  float v17; // s1

  v1 = *(float *)(this + 248);
  v2 = *(float *)(this + 144);
  if ( v1 <= v2 )
  {
    v8 = *(float *)(this + 136);
    if ( *(_BYTE *)(this + 353) )
      v7 = roundf((float)((float)(v2 * 0.5) + v8) - (float)((float)(v1 * 0.5) + *(float *)(this + 240)));
    else
      v7 = roundf((float)(v2 + v8) - (float)(v1 + *(float *)(this + 240)));
    if ( fabsf(v7 - *(float *)(this + 308)) <= 0.01 )
      goto LABEL_14;
LABEL_13:
    *(_DWORD *)(this + 336) = 0;
LABEL_14:
    *(_BYTE *)(this + 304) = 1;
    *(float *)(this + 308) = v7;
    goto LABEL_15;
  }
  v3 = *(float *)(this + 136);
  v4 = *(float *)(this + 240);
  v5 = *(float *)(this + 300);
  v6 = (float)(v2 + v3) - (float)(v1 + v4);
  v7 = v3 - v4;
  if ( v5 < v6 )
  {
    if ( fabsf(v6 - *(float *)(this + 308)) > 0.01 )
      *(_DWORD *)(this + 336) = 0;
    *(_BYTE *)(this + 304) = 1;
    *(float *)(this + 308) = v6;
  }
  if ( v5 > v7 )
  {
    if ( fabsf(v7 - *(float *)(this + 308)) <= 0.01 )
      goto LABEL_14;
    goto LABEL_13;
  }
LABEL_15:
  v9 = *(float *)(this + 244);
  v10 = *(float *)(this + 140);
  if ( v9 <= v10 )
  {
    v16 = *(float *)(this + 132);
    if ( *(_BYTE *)(this + 353) )
    {
      v15 = roundf((float)((float)(v10 * 0.5) + v16) - (float)((float)(v9 * 0.5) + *(float *)(this + 236)));
      if ( fabsf(v15 - *(float *)(this + 264)) <= 0.01 )
        goto LABEL_29;
      goto LABEL_28;
    }
    v17 = *(float *)(this + 264);
    v15 = roundf(v16 - *(float *)(this + 236));
LABEL_27:
    if ( fabsf(v15 - v17) <= 0.01 )
    {
LABEL_29:
      *(_BYTE *)(this + 260) = 1;
      *(float *)(this + 264) = v15;
      return this;
    }
LABEL_28:
    *(_DWORD *)(this + 292) = 0;
    goto LABEL_29;
  }
  v11 = *(float *)(this + 132);
  v12 = *(float *)(this + 236);
  v13 = *(float *)(this + 256);
  v14 = (float)(v10 + v11) - (float)(v9 + v12);
  v15 = v11 - v12;
  if ( v13 >= v14 )
  {
    if ( v13 <= v15 )
      return this;
    goto LABEL_25;
  }
  if ( fabsf(v14 - *(float *)(this + 264)) > 0.01 )
    *(_DWORD *)(this + 292) = 0;
  *(_BYTE *)(this + 260) = 1;
  *(float *)(this + 264) = v14;
  if ( v13 > v15 )
  {
LABEL_25:
    v17 = *(float *)(this + 264);
    goto LABEL_27;
  }
  return this;
}

