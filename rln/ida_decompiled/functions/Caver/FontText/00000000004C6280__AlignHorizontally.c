/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C6280
 * Mangled: _ZN5Caver8FontText17AlignHorizontallyENS_16GUITextAlignmentE
 * Demangled: Caver::FontText::AlignHorizontally(Caver::GUITextAlignment)
 *
 * Callers: 1
 *   0x00000000001F9EB0  Caver::FontText::AlignHorizontally(Caver::GUITextAlignment)
 *
 * Callees: 3
 *   0x00000000001F5BC0  Caver::FontText::TranslateLine(int,Caver::Vector2 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Referenced strings: 48
 *   insn=0x00000000004C629C string=0x00000000004C62A0 "V"
 *   insn=0x00000000004C62B0 string=0x00000000004C62B4 "h>@"
 *   insn=0x00000000004C62B8 string=0x00000000004C62BC "k"
 *   insn=0x00000000004C62D0 string=0x00000000004C62D4 ""
 *   insn=0x00000000004C62D8 string=0x00000000004C62DC "hf@"
 *   insn=0x00000000004C62DC string=0x00000000004C62E0 ""
 *   insn=0x00000000004C62E4 string=0x00000000004C62E8 "HM@"
 *   insn=0x00000000004C62F0 string=0x00000000004C62F4 "i"
 *   insn=0x00000000004C62F4 string=0x00000000004C62F8 "hZ@"
 *   insn=0x00000000004C62FC string=0x00000000004C6300 ")!"
 *   insn=0x00000000004C6300 string=0x00000000004C6304 " A"
 *   insn=0x00000000004C6308 string=0x00000000004C630C "L"
 *   insn=0x00000000004C630C string=0x00000000004C6310 "i"
 *   insn=0x00000000004C6318 string=0x00000000004C631C "-}@"
 *   insn=0x00000000004C6334 string=0x00000000004C6338 "("
 *   insn=0x00000000004C6360 string=0x00000000004C6364 "i"
 *   insn=0x00000000004C6364 string=0x00000000004C6368 "L"
 *   insn=0x00000000004C636C string=0x00000000004C6370 "K"
 *   insn=0x00000000004C6374 string=0x00000000004C6378 "M"
 *   insn=0x00000000004C6378 string=0x00000000004C637C "h!7"
 *   insn=0x00000000004C637C string=0x00000000004C6380 "j}@"
 *   insn=0x00000000004C6380 string=0x00000000004C6384 ")}@"
 *   insn=0x00000000004C6388 string=0x00000000004C638C "("
 *   insn=0x00000000004C6390 string=0x00000000004C6394 "("
 *   insn=0x00000000004C6394 string=0x00000000004C6398 "#"
 *   insn=0x00000000004C63A0 string=0x00000000004C63A4 "J"
 *   insn=0x00000000004C63A4 string=0x00000000004C63A8 "_"
 *   insn=0x00000000004C63A8 string=0x00000000004C63AC "!"
 *   insn=0x00000000004C63BC string=0x00000000001F6E00 "0'"
 *   insn=0x00000000004C63C8 string=0x00000000004C63FC "aJ@"
 *   insn=0x00000000004C63D0 string=0x00000000004C63E4 "aB@"
 *   insn=0x00000000004C63D4 string=0x00000000004C63D8 "4"
 *   insn=0x00000000004C63D8 string=0x00000000004C63DC "aB@"
 *   insn=0x00000000004C63D8 string=0x00000000004C641C " 8 "
 *   insn=0x00000000004C63E4 string=0x00000000004C63E8 "bJ@"
 *   insn=0x00000000004C63EC string=0x00000000004C63F0 "!(""
 *   insn=0x00000000004C63F0 string=0x00000000004C63F4 "!8#"
 *   insn=0x00000000004C63F4 string=0x00000000004C63F8 "\t"
 *   insn=0x00000000004C63FC string=0x00000000004C6400 "bB@"
 *   insn=0x00000000004C6404 string=0x00000000004C6408 "!("
 *   insn=0x00000000004C6408 string=0x00000000004C640C "A(!"
 *   insn=0x00000000004C640C string=0x00000000004C6410 "b("
 *   insn=0x00000000004C6410 string=0x00000000004C6414 "!8""
 *   insn=0x00000000004C6414 string=0x00000000004C6418 "!@&"
 *   insn=0x00000000004C6434 string=0x00000000004C6438 "h>"
 *   insn=0x00000000004C6434 string=0x00000000001F5BC0 "P'"
 *   insn=0x00000000004C6450 string=0x00000000004C6454 "!"
 *   insn=0x00000000004C6478 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FontText::AlignHorizontally(__int64 this, int a2)
{
  __int64 v2; // x19
  __int64 v4; // x21
  int *v5; // x11
  int *v6; // x10
  __int64 v7; // x8
  int v8; // w12
  int v9; // w9
  __int64 v10; // x13
  _OWORD *v11; // x15
  unsigned int v12; // w16
  int v13; // w11
  __int64 v14; // x10
  const Caver::Rectangle *v15; // x1
  unsigned int v16; // w8
  float v17; // s1
  float v18[2]; // [xsp+8h] [xbp-68h] BYREF
  float v19[6]; // [xsp+10h] [xbp-60h] BYREF
  __int64 v20; // [xsp+28h] [xbp-48h]

  v2 = this;
  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(int *)(this + 60) >= 2 )
  {
    v4 = 0;
    do
    {
      *(_OWORD *)v19 = 0u;
      v5 = (int *)(*(_QWORD *)(v2 + 200) + 8 * v4);
      v6 = v5 + 1;
      if ( v5[1] >= 1 )
      {
        v7 = *(_QWORD *)(v2 + 176);
        *(_OWORD *)v19 = *(_OWORD *)(v7 + 36LL * *v5 + 4);
        v8 = *v6;
        v9 = *v5;
        if ( *v6 >= 1 )
        {
          v10 = v9;
          v11 = (_OWORD *)(v7 + 36LL * v9 + 4);
          while ( 1 )
          {
            v12 = *((unsigned __int8 *)v11 - 4);
            if ( v12 > 0x20 || ((1LL << v12) & 0x100000600LL) == 0 )
              break;
            ++v10;
            v11 = (_OWORD *)((char *)v11 + 36);
            if ( v10 >= v8 + v9 )
              goto LABEL_11;
          }
          *(_OWORD *)v19 = *v11;
          v9 = *v5;
          v8 = *v6;
        }
LABEL_11:
        v13 = v8 + v9 - 1;
        if ( v13 > v9 )
        {
          v14 = v13;
          v15 = (const Caver::Rectangle *)(v7 + 36LL * v13 + 4);
          while ( 1 )
          {
            v16 = *((unsigned __int8 *)v15 - 4);
            if ( v16 > 0x20 || ((1LL << v16) & 0x100000600LL) == 0 )
              break;
            --v14;
            v15 = (const Caver::Rectangle *)((char *)v15 - 36);
            if ( v14 <= v9 )
              goto LABEL_18;
          }
          Caver::Rectangle::ExpandToincludeRectangle((Caver::Rectangle *)v19, v15);
        }
      }
LABEL_18:
      if ( a2 == 4 )
      {
        v17 = roundf((float)(*(float *)(v2 + 64) + (float)(*(float *)(v2 + 72) * 0.5)) - (float)(v19[2] * 0.5));
      }
      else if ( a2 == 1 )
      {
        v17 = (float)(*(float *)(v2 + 64) + *(float *)(v2 + 72)) - v19[2];
      }
      else
      {
        v17 = v19[0];
        if ( !a2 )
          v17 = *(float *)(v2 + 64);
      }
      v18[0] = v17 - v19[0];
      v18[1] = 0.0;
      this = Caver::FontText::TranslateLine((Caver::FontText *)v2, v4++, (const Caver::Vector2 *)v18);
    }
    while ( v4 < *(int *)(v2 + 60) );
  }
  return this;
}

