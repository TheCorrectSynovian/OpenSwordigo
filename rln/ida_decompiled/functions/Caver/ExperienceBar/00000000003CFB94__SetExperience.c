/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CFB94
 * Mangled: _ZN5Caver13ExperienceBar13SetExperienceEiiii
 * Demangled: Caver::ExperienceBar::SetExperience(int,int,int,int)
 *
 * Callers: 1
 *   0x00000000002020B0  Caver::ExperienceBar::SetExperience(int,int,int,int)
 *
 * Callees: 2
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FDE30  Caver::ExperienceBar::UpdateText(void)
 *
 * Referenced strings: 104
 *   insn=0x00000000003CFBA0 string=0x00000000003CFBA4 "h"
 *   insn=0x00000000003CFBAC string=0x00000000003CFBB0 "h"A"
 *   insn=0x00000000003CFBAC string=0x00000000003CFC28 "hz@"
 *   insn=0x00000000003CFBB8 string=0x00000000003CFBBC "h"
 *   insn=0x00000000003CFBC0 string=0x00000000003CFBC4 "!"
 *   insn=0x00000000003CFBC4 string=0x00000000003CFBC8 "h"
 *   insn=0x00000000003CFBC8 string=0x00000000003CFBCC "I"
 *   insn=0x00000000003CFBCC string=0x00000000003CFBD0 "i&"
 *   insn=0x00000000003CFBD0 string=0x00000000003CFBD4 "H"
 *   insn=0x00000000003CFBD4 string=0x00000000003CFBD8 "h"
 *   insn=0x00000000003CFBD4 string=0x00000000003CFDBC "hz@"
 *   insn=0x00000000003CFBD8 string=0x00000000003CFBDC ""
 *   insn=0x00000000003CFBDC string=0x00000000003CFBE0 "hz@"
 *   insn=0x00000000003CFBE0 string=0x00000000003CFBE4 "b"
 *   insn=0x00000000003CFBE4 string=0x00000000003CFBE8 "B"
 *   insn=0x00000000003CFBEC string=0x00000000003CFBF0 "\t"
 *   insn=0x00000000003CFBF4 string=0x00000000003CFBF8 "I"
 *   insn=0x00000000003CFBF8 string=0x00000000003CFBFC "B@&"
 *   insn=0x00000000003CFBF8 string=0x00000000003CFC00 "  ""
 *   insn=0x00000000003CFC00 string=0x00000000003CFC04 "!L""
 *   insn=0x00000000003CFC0C string=0x00000000003CFC10 " L "
 *   insn=0x00000000003CFC1C string=0x00000000003CFC20 "\t"
 *   insn=0x00000000003CFC20 string=0x00000000003CFC24 "v"
 *   insn=0x00000000003CFC28 string=0x00000000003CFC2C "a"
 *   insn=0x00000000003CFC2C string=0x00000000003CFC30 "c"
 *   insn=0x00000000003CFC30 string=0x00000000003CFC34 "d""
 *   insn=0x00000000003CFC38 string=0x00000000003CFC3C "`"
 *   insn=0x00000000003CFC40 string=0x00000000003CFC44 "   "
 *   insn=0x00000000003CFC48 string=0x00000000003CFC4C "\t"
 *   insn=0x00000000003CFC54 string=0x00000000003CFC58 "I"
 *   insn=0x00000000003CFC58 string=0x00000000003CFC60 "  ""
 *   insn=0x00000000003CFC60 string=0x00000000003CFC64 "!L""
 *   insn=0x00000000003CFC64 string=0x00000000003CFC68 "   "
 *   insn=0x00000000003CFC68 string=0x00000000003CFC6C "!"
 *   insn=0x00000000003CFC70 string=0x00000000003CFC74 "#"
 *   insn=0x00000000003CFC80 string=0x00000000003CFC84 "\t"
 *   insn=0x00000000003CFC84 string=0x00000000003CFC88 "`  "
 *   insn=0x00000000003CFC8C string=0x00000000003CFC90 "\n"
 *   insn=0x00000000003CFC8C string=0x00000000003CFCA8 "\n"
 *   insn=0x00000000003CFC90 string=0x00000000003CFC94 "\t"
 *   insn=0x00000000003CFC9C string=0x00000000003CFCA0 "`  "
 *   insn=0x00000000003CFCA0 string=0x00000000003CFCA4 "e"
 *   insn=0x00000000003CFCAC string=0x00000000003CFCB0 "\t"
 *   insn=0x00000000003CFCB0 string=0x00000000003CFCB4 "J"
 *   insn=0x00000000003CFCB4 string=0x00000000003CFCB8 "!@&"
 *   insn=0x00000000003CFCB4 string=0x00000000003CFCBC "@ !"
 *   insn=0x00000000003CFCBC string=0x00000000003CFCC0 "AL!"
 *   insn=0x00000000003CFCC0 string=0x00000000003CFCC4 "   "
 *   insn=0x00000000003CFCC4 string=0x00000000003CFCC8 "#"
 *   insn=0x00000000003CFCC8 string=0x00000000003CFCCC "\n"
 *   insn=0x00000000003CFCD0 string=0x00000000003CFCD4 "a"
 *   insn=0x00000000003CFCE0 string=0x00000000003CFCE4 ""
 *   insn=0x00000000003CFCEC string=0x00000000003CFCF0 "  ""
 *   insn=0x00000000003CFCF0 string=0x00000000003CFCF4 "K"
 *   insn=0x00000000003CFCF4 string=0x00000000003CFCF8 """
 *   insn=0x00000000003CFCFC string=0x00000000003CFD00 "\t"
 *   insn=0x00000000003CFCFC string=0x00000000003CFD38 "` ""
 *   insn=0x00000000003CFD00 string=0x00000000003CFD04 "A"
 *   insn=0x00000000003CFD04 string=0x00000000003CFD08 "I"
 *   insn=0x00000000003CFD08 string=0x00000000003CFD0C "A@&"
 *   insn=0x00000000003CFD08 string=0x00000000003CFD10 "  ""
 *   insn=0x00000000003CFD10 string=0x00000000003CFD14 "A"
 *   insn=0x00000000003CFD14 string=0x00000000003CFD18 "   "
 *   insn=0x00000000003CFD18 string=0x00000000003CFD1C "!"
 *   insn=0x00000000003CFD20 string=0x00000000003CFD24 "#"
 *   insn=0x00000000003CFD30 string=0x00000000003CFD34 "\t"
 *   insn=0x00000000003CFD3C string=0x00000000003CFD40 "\t"
 *   insn=0x00000000003CFD3C string=0x00000000003CFD78 "\t"
 *   insn=0x00000000003CFD40 string=0x00000000003CFD44 "I"
 *   insn=0x00000000003CFD44 string=0x00000000003CFD48 "!@&"
 *   insn=0x00000000003CFD44 string=0x00000000003CFD4C "  ""
 *   insn=0x00000000003CFD4C string=0x00000000003CFD50 "A"
 *   insn=0x00000000003CFD50 string=0x00000000003CFD54 "   "
 *   insn=0x00000000003CFD54 string=0x00000000003CFD58 ""
 *   insn=0x00000000003CFD5C string=0x00000000003CFD60 "!"
 *   insn=0x00000000003CFD6C string=0x00000000003CFD70 "\n"
 *   insn=0x00000000003CFD78 string=0x00000000003CFD7C ""
 *   insn=0x00000000003CFD84 string=0x00000000003CFD88 "j"
 *   insn=0x00000000003CFD88 string=0x00000000003CFD8C "I"
 *   insn=0x00000000003CFD8C string=0x00000000003CFD94 "  ""
 *   insn=0x00000000003CFD94 string=0x00000000003CFD98 "A"
 *   insn=0x00000000003CFD98 string=0x00000000003CFD9C "   "
 *   insn=0x00000000003CFD9C string=0x00000000003CFDA0 " "
 *   insn=0x00000000003CFDAC string=0x00000000003CFDB0 "\n"
 *   insn=0x00000000003CFDB0 string=0x00000000003CFDB4 "h"
 *   insn=0x00000000003CFDB4 string=0x00000000003CFDB8 ""
 *   insn=0x00000000003CFDBC string=0x00000000003CFDC0 "b"
 *   insn=0x00000000003CFDC4 string=0x00000000003CFDC8 "@"
 *   insn=0x00000000003CFDC4 string=0x0000000000584430 "333?"
 *   insn=0x00000000003CFDD4 string=0x00000000003CFDD8 "#1D"
 *   insn=0x00000000003CFDD8 string=0x00000000003CFDDC "   "
 *   insn=0x00000000003CFDE0 string=0x00000000003CFDE4 " L "
 *   insn=0x00000000003CFDE8 string=0x00000000003CFDEC "A"
 *   insn=0x00000000003CFE00 string=0x00000000003CFE04 "h"
 *   insn=0x00000000003CFE00 string=0x00000000001FDE30 "0'"
 *   insn=0x00000000003CFE04 string=0x00000000003CFE08 ""
 *   insn=0x00000000003CFE08 string=0x00000000003CFE0C "t"
 *   insn=0x00000000003CFE10 string=0x00000000003CFE14 "`"
 *   insn=0x00000000003CFE14 string=0x00000000003CFE18 "4"
 *   insn=0x00000000003CFE1C string=0x00000000003CFE20 ""
 *   insn=0x00000000003CFE30 string=0x00000000003CFE34 "\t@"
 *   insn=0x00000000003CFE3C string=0x00000000003CFE40 ""
 *   insn=0x00000000003CFE50 string=0x00000000003CFE54 "@"
 *   insn=0x00000000003CFE60 string=0x00000000001FA5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ExperienceBar::SetExperience(Caver::ExperienceBar *this, int a2, int a3, int a4, int a5)
{
  int v6; // w8
  __int64 v7; // x8
  float v8; // s2
  float v9; // s0
  float v10; // s1
  __int64 v11; // x8
  float v12; // s1
  float v13; // s0
  float v14; // s2
  float v15; // s3
  _BYTE *v16; // x10
  float *v17; // x9
  float v18; // s2
  int v19; // w9
  _BYTE *v20; // x11
  float v21; // s1
  float *v22; // x8
  float v23; // s0
  float v24; // s2
  __int64 result; // x0
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8

  if ( *((_DWORD *)this + 69) == a2 && *((_DWORD *)this + 72) == a5 && *((_DWORD *)this + 71) == a4 )
  {
    v6 = *((_DWORD *)this + 70);
    *((_DWORD *)this + 73) = a3 - v6;
    if ( (v6 & 0x80000000) == 0 )
      goto LABEL_55;
    goto LABEL_5;
  }
  v11 = *((_QWORD *)this + 30);
  *((_DWORD *)this + 69) = a2;
  *((_DWORD *)this + 71) = a4;
  *((_DWORD *)this + 72) = a5;
  v12 = *(float *)(v11 + 292);
  v13 = (float)a4;
  *(float *)(v11 + 308) = (float)a4;
  if ( v12 >= (float)a4 )
  {
    v15 = *(float *)(v11 + 296);
    if ( v15 >= v13 )
    {
LABEL_21:
      v16 = (_BYTE *)(v11 + 352);
      v17 = (float *)(v11 + 312);
      goto LABEL_31;
    }
  }
  else
  {
    v12 = *(float *)(v11 + 312);
    v14 = (float)a4;
    if ( *(_BYTE *)(v11 + 364) )
      v14 = roundf(v13);
    if ( v12 >= v14 )
      v12 = v14;
    if ( v12 <= v13 )
      v12 = (float)a4;
    v15 = v12;
    *(_DWORD *)(v11 + 300) = 0;
    *(float *)(v11 + 292) = v12;
    *(float *)(v11 + 296) = v12;
    *(_BYTE *)(v11 + 352) = 1;
    if ( v12 >= v13 )
      goto LABEL_21;
  }
  v17 = (float *)(v11 + 312);
  if ( *(_BYTE *)(v11 + 364) )
    v12 = roundf(v12);
  if ( *(float *)(v11 + 312) < v12 )
    v12 = *(float *)(v11 + 312);
  if ( v12 <= v13 )
    v15 = (float)a4;
  else
    v15 = v12;
  v16 = (_BYTE *)(v11 + 352);
  v12 = v15;
  *(_DWORD *)(v11 + 300) = 0;
  *(float *)(v11 + 292) = v15;
  *(float *)(v11 + 296) = v15;
  *(_BYTE *)(v11 + 352) = 1;
LABEL_31:
  v18 = (float)a5;
  *v16 = 1;
  *v17 = (float)a5;
  if ( v12 > (float)a5 )
  {
    v12 = (float)a5;
    if ( *(_BYTE *)(v11 + 364) )
      v12 = roundf(v18);
    if ( v12 > v18 )
      v12 = (float)a5;
    if ( v12 <= v13 )
      v12 = (float)a4;
    v15 = v12;
    *(_DWORD *)(v11 + 300) = 0;
    *(float *)(v11 + 292) = v12;
    *(float *)(v11 + 296) = v12;
    *(_BYTE *)(v11 + 352) = 1;
  }
  if ( v15 <= v18 )
  {
    v19 = *(unsigned __int8 *)(v11 + 364);
    v20 = (_BYTE *)(v11 + 352);
  }
  else
  {
    v19 = *(unsigned __int8 *)(v11 + 364);
    if ( *(_BYTE *)(v11 + 364) )
      v12 = roundf(v12);
    if ( v12 > v18 )
      v12 = (float)a5;
    v20 = (_BYTE *)(v11 + 352);
    if ( v12 <= v13 )
      v12 = (float)a4;
    *(_DWORD *)(v11 + 300) = 0;
    *(float *)(v11 + 292) = v12;
    *(float *)(v11 + 296) = v12;
    *(_BYTE *)(v11 + 352) = 1;
  }
  v21 = (float)a4;
  *v20 = 1;
  if ( v19 )
    v21 = roundf(v13);
  if ( v21 > v18 )
    v21 = (float)a5;
  if ( v21 > v13 )
    v13 = v21;
  *(_DWORD *)(v11 + 300) = 0;
  *(float *)(v11 + 292) = v13;
  *(float *)(v11 + 296) = v13;
  *(_BYTE *)(v11 + 352) = 1;
  if ( (*((_DWORD *)this + 70) & 0x80000000) == 0 )
    goto LABEL_55;
LABEL_5:
  if ( *((_BYTE *)this + 1017) )
  {
    v7 = *((_QWORD *)this + 30);
    *((_DWORD *)this + 70) = a3;
    v8 = (float)a3;
    v9 = *(float *)(v7 + 308);
    v10 = *(float *)(v7 + 312);
    if ( *(_BYTE *)(v7 + 364) )
      v8 = roundf(v8);
    if ( v10 >= v8 )
      v10 = v8;
    if ( v9 < v10 )
      v9 = v10;
    *(_DWORD *)(v7 + 300) = 0;
    *(float *)(v7 + 292) = v9;
    *(float *)(v7 + 296) = v9;
    *(_BYTE *)(v7 + 352) = 1;
    goto LABEL_60;
  }
LABEL_55:
  v22 = (float *)*((_QWORD *)this + 30);
  *((_DWORD *)this + 70) = a3;
  v23 = (float)a3;
  v24 = (float)a3 - v22[74];
  if ( v22[78] < (float)a3 )
    v23 = v22[78];
  if ( v22[77] >= v23 )
    v23 = v22[77];
  v22[73] = v23;
  v22[75] = v24 / 0.7;
LABEL_60:
  result = Caver::ExperienceBar::UpdateText(this);
  if ( *((_BYTE *)this + 1016) )
  {
    v26 = (_QWORD *)*((_QWORD *)this + 129);
    *((_OWORD *)this + 64) = 0u;
    if ( v26 )
    {
      v27 = v26[1] - 1LL;
      v26[1] = v27;
      if ( !v27 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
        v28 = v26[2] - 1LL;
        v26[2] = v28;
        if ( !v28 )
          (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
      }
    }
    result = Caver::GUIView::RemoveAllAnimations(this);
    *((_BYTE *)this + 228) = 0;
  }
  return result;
}

