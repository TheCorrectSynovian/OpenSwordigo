/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003970BC
 * Mangled: _ZN5Caver14OnlineMenuView14LayoutSubviewsEv
 * Demangled: Caver::OnlineMenuView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 73
 *   insn=0x00000000003970E0 string=0x00000000003970E4 "U"
 *   insn=0x00000000003970F4 string=0x00000000003970F8 "v^O"
 *   insn=0x00000000003970F4 string=0x00000000001F94B0 "0'"
 *   insn=0x00000000003970F8 string=0x00000000003970FC "`"
 *   insn=0x00000000003970FC string=0x0000000000397100 "a"
 *   insn=0x0000000000397108 string=0x000000000039710C "(!"
 *   insn=0x000000000039710C string=0x0000000000397110 ""
 *   insn=0x0000000000397118 string=0x000000000039711C "t"
 *   insn=0x0000000000397118 string=0x00000000001F5CB0 "P'"
 *   insn=0x000000000039712C string=0x0000000000397130 "`9 "
 *   insn=0x0000000000397134 string=0x0000000000397138 "X!"
 *   insn=0x0000000000397138 string=0x000000000039713C "H"
 *   insn=0x0000000000397144 string=0x0000000000397148 "\t@"
 *   insn=0x000000000039714C string=0x0000000000397150 "i"
 *   insn=0x0000000000397150 string=0x0000000000397154 ""
 *   insn=0x0000000000397154 string=0x0000000000397158 ""
 *   insn=0x000000000039715C string=0x0000000000397160 "h"
 *   insn=0x000000000039716C string=0x0000000000397170 ""
 *   insn=0x0000000000397170 string=0x0000000000397174 "l) "
 *   insn=0x0000000000397188 string=0x000000000039718C "l) "
 *   insn=0x0000000000397194 string=0x0000000000397198 "8"
 *   insn=0x00000000003971A4 string=0x00000000003971A8 "l) "
 *   insn=0x00000000003971B0 string=0x00000000003971B4 "@"
 *   insn=0x00000000003971B0 string=0x00000000003971D0 ""
 *   insn=0x00000000003971BC string=0x00000000003971C0 ""
 *   insn=0x00000000003971C0 string=0x00000000003971C4 ""
 *   insn=0x00000000003971F0 string=0x00000000003971F4 "t"
 *   insn=0x00000000003971F0 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003971F8 string=0x00000000003971FC "h"
 *   insn=0x00000000003971FC string=0x0000000000397248 "h"
 *   insn=0x0000000000397204 string=0x0000000000397208 "\t@"
 *   insn=0x0000000000397210 string=0x0000000000397214 ""
 *   insn=0x0000000000397210 string=0x0000000000397264 "i"
 *   insn=0x0000000000397214 string=0x0000000000397218 ""
 *   insn=0x000000000039721C string=0x0000000000397220 "h"
 *   insn=0x0000000000397220 string=0x0000000000397224 "i"
 *   insn=0x0000000000397224 string=0x0000000000397228 " !C"
 *   insn=0x000000000039722C string=0x0000000000397230 ""
 *   insn=0x0000000000397230 string=0x0000000000397234 " ( "
 *   insn=0x0000000000397234 string=0x0000000000397238 "l) "
 *   insn=0x0000000000397250 string=0x0000000000397254 "l) "
 *   insn=0x000000000039725C string=0x0000000000397260 "8"
 *   insn=0x0000000000397264 string=0x0000000000397268 " !C"
 *   insn=0x000000000039726C string=0x0000000000397270 " ( "
 *   insn=0x0000000000397270 string=0x0000000000397274 "l) "
 *   insn=0x000000000039727C string=0x0000000000397280 "@"
 *   insn=0x000000000039727C string=0x000000000039729C ""
 *   insn=0x0000000000397288 string=0x000000000039728C ""
 *   insn=0x000000000039728C string=0x0000000000397290 ""
 *   insn=0x00000000003972BC string=0x00000000003972C0 "h&O"
 *   insn=0x00000000003972C0 string=0x00000000003972C4 "?"
 *   insn=0x00000000003972CC string=0x00000000003972D0 ")"
 *   insn=0x00000000003972D0 string=0x00000000003972D4 " "
 *   insn=0x00000000003972D4 string=0x00000000003972D8 ")"
 *   insn=0x00000000003972D8 string=0x00000000003972DC "!"
 *   insn=0x00000000003972E4 string=0x00000000003972E8 "D\t#"
 *   insn=0x00000000003972EC string=0x00000000003972F0 "!""
 *   insn=0x00000000003972F0 string=0x00000000003972F4 "$)$"
 *   insn=0x0000000000397318 string=0x000000000039731C "i)+"
 *   insn=0x000000000039731C string=0x0000000000397320 "@&"
 *   insn=0x0000000000397320 string=0x0000000000397324 "\n"
 *   insn=0x0000000000397328 string=0x000000000039732C "`"
 *   insn=0x000000000039732C string=0x0000000000397330 "a"
 *   insn=0x0000000000397340 string=0x0000000000397344 "k9""
 *   insn=0x0000000000397364 string=0x0000000000397368 ""
 *   insn=0x000000000039736C string=0x0000000000397370 "(-@"
 *   insn=0x0000000000397370 string=0x0000000000397374 "k)*"
 *   insn=0x000000000039737C string=0x0000000000397380 "h&O"
 *   insn=0x0000000000397380 string=0x0000000000397384 "9"
 *   insn=0x0000000000397388 string=0x000000000039738C ")"
 *   insn=0x000000000039738C string=0x0000000000397390 "?"
 *   insn=0x00000000003973A0 string=0x00000000003973A4 "a"
 *   insn=0x00000000003973D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineMenuView::LayoutSubviews(Caver::OnlineMenuView *this)
{
  __int64 v2; // x22
  __int64 v3; // x23
  float v4; // s9
  float v5; // s10
  float v6; // s11
  float v7; // s8
  _QWORD *v8; // x20
  float **v9; // x8
  float v10; // s11
  float *v11; // x0
  float v12; // w24
  float v13; // s12
  float v14; // w24
  float *v15; // x0
  __int64 v16; // x8
  _QWORD *v17; // x20
  float **v18; // x8
  float *v19; // x0
  float v20; // w24
  float v21; // s12
  float v22; // w24
  float *v23; // x0
  __int64 v24; // x8
  __int64 result; // x0
  __int64 v26; // x8
  float v27; // s0
  __int64 v28; // x24
  unsigned __int64 v29; // x25
  float v30; // s8
  float v31; // s9
  float v32; // s11
  float *v33; // x20
  float v34; // s2
  float v35; // s3
  float v36; // s11
  int v37; // w8
  __int64 v38; // x9
  float v39; // [xsp+8h] [xbp-88h]
  float v40; // [xsp+10h] [xbp-80h]
  __int64 v41; // [xsp+18h] [xbp-78h] BYREF
  float v42; // [xsp+20h] [xbp-70h]
  float v43; // [xsp+24h] [xbp-6Ch]
  __int64 v44; // [xsp+28h] [xbp-68h]

  v44 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews(this);
  v2 = *((_QWORD *)this + 30);
  v3 = *((_QWORD *)this + 31);
  v4 = *((float *)this + 34);
  v5 = *((float *)this + 36);
  v6 = *((float *)this + 33) + *((float *)this + 35);
  v7 = *(float *)(*(_QWORD *)v2 + 128LL);
  Caver::GUIView::safeBounds(this);
  v8 = (_QWORD *)*((_QWORD *)this + 33);
  v9 = (float **)v8[37];
  v10 = fminf(v6 - (float)(v39 + v40), 16.0);
  if ( !v9 )
  {
    v14 = 0.0;
    v13 = v10 + 30.0;
    goto LABEL_13;
  }
  v11 = *v9;
  if ( *v9 )
  {
    v12 = v11[21];
    if ( !*((_DWORD *)v11 + 2) )
    {
      (*(void (__fastcall **)(float *))(*(_QWORD *)v11 + 8LL))(v11);
      v9 = *(float ***)(*((_QWORD *)this + 33) + 296LL);
      v13 = v10 + (float)(v12 + 30.0);
      if ( !v9 )
      {
        v14 = 0.0;
        goto LABEL_13;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v12 = 0.0;
  }
  v13 = v10 + (float)(v12 + 30.0);
LABEL_9:
  v15 = *v9;
  if ( *v9 )
  {
    v14 = v15[22];
    if ( !*((_DWORD *)v15 + 2) )
      (*(void (__fastcall **)(float *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  else
  {
    v14 = 0.0;
  }
LABEL_13:
  v16 = *(_QWORD *)((char *)v8 + 116);
  v42 = v13;
  v41 = v16;
  v43 = v14;
  Caver::GUIView::SetFrame((Caver::GUIView *)v8, (const Caver::Rectangle *)&v41);
  v17 = (_QWORD *)*((_QWORD *)this + 35);
  v18 = (float **)v17[37];
  if ( !v18 )
  {
    v22 = 0.0;
    v21 = v10 + 40.0;
    goto LABEL_25;
  }
  v19 = *v18;
  if ( *v18 )
  {
    v20 = v19[21];
    if ( !*((_DWORD *)v19 + 2) )
    {
      (*(void (__fastcall **)(float *))(*(_QWORD *)v19 + 8LL))(v19);
      v18 = *(float ***)(*((_QWORD *)this + 35) + 296LL);
      v21 = v10 + (float)(v20 + 40.0);
      if ( !v18 )
      {
        v22 = 0.0;
        goto LABEL_25;
      }
      goto LABEL_21;
    }
  }
  else
  {
    v20 = 0.0;
  }
  v21 = v10 + (float)(v20 + 40.0);
LABEL_21:
  v23 = *v18;
  if ( *v18 )
  {
    v22 = v23[22];
    if ( !*((_DWORD *)v23 + 2) )
      (*(void (__fastcall **)(float *))(*(_QWORD *)v23 + 8LL))(v23);
  }
  else
  {
    v22 = 0.0;
  }
LABEL_25:
  v24 = *(_QWORD *)((char *)v17 + 116);
  v42 = v21;
  v41 = v24;
  v43 = v22;
  result = Caver::GUIView::SetFrame((Caver::GUIView *)v17, (const Caver::Rectangle *)&v41);
  v26 = *((_QWORD *)this + 30);
  if ( *((_QWORD *)this + 31) != v26 )
  {
    v27 = (float)((float)((float)(v7 * (float)(unsigned __int64)((v3 - v2) >> 4))
                        + (float)((float)(unsigned __int64)(((v3 - v2) >> 4) - 1) * 3.0))
                * 0.5)
        + (float)((float)(v4 + (float)(v5 * 0.5)) + -10.0);
    v28 = 0;
    v29 = 0;
    v30 = 28.0 - v10;
    v31 = v10 + v10;
    v32 = roundf(v27);
    do
    {
      v33 = *(float **)(v26 + v28);
      v35 = v33[31];
      v34 = v33[32];
      v36 = v32 - v34;
      *(float *)&v41 = (float)(*((float *)this + 33) + *((float *)this + 35)) - v35;
      *((float *)&v41 + 1) = v36;
      v42 = v35;
      v43 = v34;
      Caver::GUIView::SetFrame((Caver::GUIView *)v33, (const Caver::Rectangle *)&v41);
      v37 = *((_DWORD *)v33 + 103);
      v38 = *(_QWORD *)v33;
      v33[105] = v31;
      *((_DWORD *)v33 + 103) = v37 | 2;
      v32 = v36 + -3.0;
      result = (*(__int64 (__fastcall **)(float *))(v38 + 88))(v33);
      v33[108] = v30;
      v26 = *((_QWORD *)this + 30);
      ++v29;
      v28 += 16;
    }
    while ( v29 < (*((_QWORD *)this + 31) - v26) >> 4 );
  }
  return result;
}

