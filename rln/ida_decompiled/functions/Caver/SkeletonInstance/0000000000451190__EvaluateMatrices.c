/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000451190
 * Mangled: _ZN5Caver16SkeletonInstance16EvaluateMatricesEv
 * Demangled: Caver::SkeletonInstance::EvaluateMatrices(void)
 *
 * Callers: 1
 *   0x00000000001FBB70  Caver::SkeletonInstance::EvaluateMatrices(void)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9ED0  Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200640  Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *
 * Referenced strings: 98
 *   insn=0x00000000004511AC string=0x00000000004511B0 "H"
 *   insn=0x00000000004511B4 string=0x00000000004511B8 ""
 *   insn=0x00000000004511BC string=0x00000000004511C0 ""
 *   insn=0x00000000004511C4 string=0x00000000004511C8 "\t"
 *   insn=0x00000000004511C8 string=0x00000000004511CC "?"
 *   insn=0x00000000004511CC string=0x00000000004511D0 "K"
 *   insn=0x00000000004511D4 string=0x00000000004511D8 ""
 *   insn=0x00000000004511DC string=0x00000000004511E0 "H"
 *   insn=0x00000000004511E0 string=0x00000000004511E4 "4\t@"
 *   insn=0x0000000000451208 string=0x000000000045120C "("
 *   insn=0x000000000045120C string=0x0000000000451210 "X"
 *   insn=0x000000000045121C string=0x0000000000451220 "q"
 *   insn=0x0000000000451224 string=0x0000000000451228 "L"
 *   insn=0x0000000000451230 string=0x0000000000451234 "k!"
 *   insn=0x0000000000451234 string=0x0000000000451238 "J"
 *   insn=0x0000000000451240 string=0x0000000000451244 "!"
 *   insn=0x0000000000451248 string=0x000000000045124C "!"
 *   insn=0x000000000045124C string=0x0000000000451250 "="
 *   insn=0x0000000000451264 string=0x0000000000451268 ""
 *   insn=0x0000000000451268 string=0x000000000045126C "\nq"
 *   insn=0x0000000000451270 string=0x0000000000451274 "q"
 *   insn=0x0000000000451274 string=0x0000000000451278 "_"
 *   insn=0x0000000000451278 string=0x000000000045127C ""
 *   insn=0x0000000000451280 string=0x0000000000451284 "J"
 *   insn=0x0000000000451288 string=0x000000000045128C "q"
 *   insn=0x0000000000451290 string=0x0000000000451294 "k"
 *   insn=0x000000000045129C string=0x00000000004512A0 ""
 *   insn=0x00000000004512A0 string=0x00000000004512A4 "J"
 *   insn=0x00000000004512A4 string=0x00000000004512A8 "k"
 *   insn=0x00000000004512A8 string=0x00000000004512AC ""
 *   insn=0x00000000004512AC string=0x00000000004512B0 "J"
 *   insn=0x00000000004512B0 string=0x00000000004512B4 "k"
 *   insn=0x00000000004512B4 string=0x00000000004512B8 ""
 *   insn=0x00000000004512B8 string=0x00000000004512BC "Jq"
 *   insn=0x00000000004512BC string=0x00000000004512C0 "iq"
 *   insn=0x00000000004512C0 string=0x00000000004512C4 "q"
 *   insn=0x00000000004512C4 string=0x00000000004512C8 "Y"
 *   insn=0x00000000004512C8 string=0x00000000004512CC ")"
 *   insn=0x00000000004512D8 string=0x00000000004512DC "6"
 *   insn=0x00000000004512E4 string=0x00000000001F9ED0 "0'"
 *   insn=0x00000000004512F4 string=0x00000000004512F8 "("
 *   insn=0x0000000000451300 string=0x0000000000451304 "J"
 *   insn=0x0000000000451304 string=0x0000000000451308 "h"
 *   insn=0x0000000000451308 string=0x000000000045130C ")q"
 *   insn=0x0000000000451314 string=0x0000000000451318 "?"
 *   insn=0x0000000000451318 string=0x000000000045131C "B"
 *   insn=0x000000000045131C string=0x0000000000451320 "("
 *   insn=0x0000000000451330 string=0x0000000000451334 "\nG@"
 *   insn=0x0000000000451334 string=0x0000000000451338 "\nE"
 *   insn=0x0000000000451358 string=0x000000000045135C "h"
 *   insn=0x0000000000451370 string=0x0000000000451374 ")\t@"
 *   insn=0x0000000000451378 string=0x000000000045137C "%"
 *   insn=0x00000000004513A4 string=0x00000000004513A8 ""
 *   insn=0x00000000004513A8 string=0x00000000004513AC ")"
 *   insn=0x00000000004513AC string=0x00000000004513B0 "H"
 *   insn=0x00000000004513BC string=0x00000000004513C0 "_"
 *   insn=0x00000000004513C0 string=0x00000000004513C4 "b"
 *   insn=0x00000000004513C4 string=0x00000000004513D0 "\t"
 *   insn=0x00000000004513C8 string=0x00000000004513CC "I"
 *   insn=0x00000000004513D0 string=0x00000000004513D4 "("
 *   insn=0x00000000004513D4 string=0x00000000004513D8 "V"
 *   insn=0x00000000004513E0 string=0x00000000004513E4 "q"
 *   insn=0x00000000004513E8 string=0x00000000004513EC "L"
 *   insn=0x00000000004513F4 string=0x00000000004513F8 "k!"
 *   insn=0x00000000004513F8 string=0x00000000004513FC "J"
 *   insn=0x0000000000451404 string=0x0000000000451408 "!"
 *   insn=0x0000000000451418 string=0x000000000045141C "\nE"
 *   insn=0x000000000045142C string=0x000000000045148C "a3"
 *   insn=0x0000000000451440 string=0x0000000000451444 "\t"
 *   insn=0x000000000045144C string=0x0000000000451450 "q"
 *   insn=0x0000000000451458 string=0x000000000045145C "`"
 *   insn=0x000000000045145C string=0x0000000000451460 "J"
 *   insn=0x0000000000451460 string=0x0000000000451464 "`"
 *   insn=0x0000000000451478 string=0x000000000045147C "\nE"
 *   insn=0x0000000000451494 string=0x0000000000451498 "~"
 *   insn=0x00000000004514A0 string=0x00000000004514A4 "b"
 *   insn=0x00000000004514B8 string=0x00000000004514BC "J"
 *   insn=0x00000000004514C4 string=0x00000000004514C8 "k"
 *   insn=0x00000000004514CC string=0x00000000004514D0 "_"
 *   insn=0x00000000004514D0 string=0x00000000004514D4 "B"
 *   insn=0x00000000004514D4 string=0x00000000004514D8 "I"
 *   insn=0x00000000004514DC string=0x00000000004514E0 "("
 *   insn=0x00000000004514E0 string=0x00000000004514E4 "S"
 *   insn=0x00000000004514EC string=0x00000000004514F0 "q"
 *   insn=0x00000000004514F4 string=0x00000000004514F8 "L"
 *   insn=0x0000000000451500 string=0x0000000000451504 "k!"
 *   insn=0x0000000000451504 string=0x0000000000451508 "J"
 *   insn=0x0000000000451510 string=0x0000000000451514 "!"
 *   insn=0x0000000000451520 string=0x0000000000451524 "jF@"
 *   insn=0x0000000000451524 string=0x0000000000451528 "\nE"
 *   insn=0x000000000045153C string=0x0000000000451540 "{C"
 *   insn=0x0000000000451540 string=0x0000000000451544 ""
 *   insn=0x0000000000451548 string=0x000000000045154C ""
 *   insn=0x0000000000451550 string=0x0000000000451554 ""
 *   insn=0x0000000000451558 string=0x000000000045155C ""
 *   insn=0x0000000000451564 string=0x0000000000451568 "!"
 *   insn=0x0000000000451568 string=0x000000000045158C "Q"
 *   insn=0x000000000045158C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::SkeletonInstance::EvaluateMatrices(_QWORD *this, const Caver::Quaternion *a2)
{
  __int64 v2; // x27
  __int64 v3; // x20
  __int64 v4; // x23
  _OWORD *v5; // x22
  __int64 v6; // x27
  __int64 v7; // x8
  __int64 *v8; // x24
  __int64 v9; // x10
  _DWORD *v10; // x8
  __int64 v11; // x11
  __int128 v12; // q0
  __int128 v13; // q1
  __int64 v14; // x12
  __int64 v15; // x8
  __int64 v16; // x27
  __int64 v17; // x10
  unsigned __int64 v18; // x12
  unsigned __int64 v19; // x11
  unsigned __int64 v20; // x13
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x25
  unsigned __int64 v23; // x28
  unsigned __int64 v24; // x22
  int *v25; // x21
  int v26; // t1
  unsigned __int64 v27; // x24
  __int64 v28; // x8
  __int64 *v29; // x22
  const float *v30; // x0
  _DWORD *v31; // x8
  unsigned __int64 v32; // x21
  __int64 v33; // x8
  __int64 v34; // x10
  __int64 v35; // x11
  __int128 v36; // q0
  __int128 v37; // q1
  __int64 v38; // x12
  int v39; // t1
  _OWORD *v40; // x22
  _DWORD *v41; // x8
  __int64 v42; // x8
  __int64 v43; // x10
  _OWORD *v44; // x11
  int v45; // t1
  __int64 *v46; // x19
  _DWORD *v47; // x8
  __int64 v48; // x8
  __int64 v49; // x10
  __int64 v50; // x11
  __int128 v51; // q0
  __int128 v52; // q1
  __int64 v53; // x12
  int v54; // t1
  __int64 v55; // [xsp+10h] [xbp-F0h]
  __int64 v56; // [xsp+18h] [xbp-E8h]
  __int64 v57; // [xsp+20h] [xbp-E0h]
  unsigned __int64 v58; // [xsp+28h] [xbp-D8h]
  unsigned __int64 v59; // [xsp+38h] [xbp-C8h]
  unsigned __int64 v60; // [xsp+40h] [xbp-C0h]
  _QWORD *v61; // [xsp+48h] [xbp-B8h]
  _OWORD *v62; // [xsp+50h] [xbp-B0h]
  __int64 v63; // [xsp+58h] [xbp-A8h]
  unsigned __int64 v64; // [xsp+60h] [xbp-A0h]
  __int64 v65[9]; // [xsp+68h] [xbp-98h] BYREF

  v65[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v61 = this;
  if ( *(int *)*this >= 1 )
  {
    v2 = *(_QWORD *)(*this + 8LL);
    v3 = this[2];
    v4 = 0;
    v5 = (_OWORD *)(v3 + 92);
    v55 = v3;
    v56 = ~v3;
    do
    {
      v62 = v5;
      v63 = v2;
      v15 = v55 + 220 * v4;
      v16 = v15 + 32;
      v17 = v15 + 92;
      v18 = v15 + 96;
      v19 = v15 + 156;
      v20 = v15 + 160;
      v57 = v15 + 96;
      v58 = v15 + 92;
      if ( v15 + 92 <= (unsigned __int64)(v15 + 32) )
        v17 = v15 + 32;
      v21 = v15 + 220;
      v59 = v20;
      v60 = v19;
      if ( v19 <= v18 )
        v19 = v18;
      if ( v21 <= v20 )
        v21 = v20;
      v22 = (unsigned __int64)(v17 - 220 * v4 + v56 - 28) >> 2;
      v23 = (v21 - 220 * v4 + v56 - 156) >> 2;
      v8 = v65;
      v24 = v22 + 1;
      v64 = (v19 - 220 * v4 + v56 - 92) >> 2;
      Caver::Matrix4::FromRotationQuaternion(v65, (Caver::Matrix4 *)(v3 + 12), a2);
      v25 = (int *)(v3 + 28);
      if ( v22 + 1 >= 8
        && (v55 + 220 * v4 + 28 >= (unsigned __int64)v65 + 4 * v22 + 4 || (unsigned __int64)v65 >= v16 + 4 * v22) )
      {
        v6 = v63;
        v7 = 4 * (v24 & 0x7FFFFFFFFFFFFFF8LL);
        v8 = (__int64 *)((char *)v65 + v7);
        v9 = 0;
        v10 = (_DWORD *)(v3 + v7 + 28);
        v11 = v24 & 0x7FFFFFFFFFFFFFF8LL;
        do
        {
          v12 = *(_OWORD *)&v65[v9];
          v13 = *(_OWORD *)&v65[v9 + 2];
          v14 = v3 + v9 * 8;
          v11 -= 8;
          v9 += 4;
          *(_OWORD *)(v14 + 28) = v12;
          *(_OWORD *)(v14 + 44) = v13;
        }
        while ( v11 );
        if ( v24 == (v24 & 0x7FFFFFFFFFFFFFF8LL) )
          goto LABEL_18;
      }
      else
      {
        v6 = v63;
        v10 = (_DWORD *)(v3 + 28);
      }
      do
      {
        v26 = *(_DWORD *)v8;
        v8 = (__int64 *)((char *)v8 + 4);
        *v10++ = v26;
      }
      while ( (unsigned __int64)v10 < v3 + 92 );
LABEL_18:
      v27 = v64 + 1;
      Caver::Matrix4::PreTranslate((Caver::Matrix4 *)(v3 + 28), (const Caver::Vector3 *)v3);
      v28 = *(int *)(v6 + 8);
      if ( (v28 & 0x80000000) != 0 )
      {
        v40 = v62;
        v30 = (const float *)(v3 + 92);
        v41 = (_DWORD *)(v3 + 92);
        if ( v27 < 4 )
          goto LABEL_43;
        v42 = v3 + 4 * (v27 & 0x7FFFFFFFFFFFFFFCLL);
        v25 = (int *)(v42 + 28);
        v41 = (_DWORD *)(v42 + 92);
        v43 = v27 & 0x7FFFFFFFFFFFFFFCLL;
        v44 = v62;
        do
        {
          v43 -= 4;
          *v44 = *(v44 - 4);
          ++v44;
        }
        while ( v43 );
        if ( v27 != (v27 & 0x7FFFFFFFFFFFFFFCLL) )
        {
LABEL_43:
          do
          {
            v45 = *v25++;
            *v41++ = v45;
          }
          while ( (unsigned __int64)v41 < v3 + 156 );
        }
        v32 = v23 + 1;
      }
      else
      {
        v29 = v65;
        C_Matrix4Mul((const float *)(v61[2] + 220 * v28 + 92), (const float *)(v3 + 28), (float *)v65);
        v30 = (const float *)(v3 + 92);
        v31 = (_DWORD *)(v3 + 92);
        v32 = v23 + 1;
        if ( v27 < 8 )
          goto LABEL_44;
        if ( v58 < (unsigned __int64)v65 + 4 * v64 + 4 )
        {
          v31 = (_DWORD *)(v3 + 92);
          if ( (unsigned __int64)v65 < v57 + 4 * v64 )
            goto LABEL_44;
        }
        v33 = 4 * (v27 & 0x7FFFFFFFFFFFFFF8LL);
        v29 = (__int64 *)((char *)v65 + v33);
        v34 = 0;
        v31 = (_DWORD *)(v3 + v33 + 92);
        v35 = v27 & 0x7FFFFFFFFFFFFFF8LL;
        do
        {
          v36 = *(_OWORD *)&v65[v34];
          v37 = *(_OWORD *)&v65[v34 + 2];
          v38 = v3 + v34 * 8;
          v35 -= 8;
          v34 += 4;
          *(_OWORD *)(v38 + 92) = v36;
          *(_OWORD *)(v38 + 108) = v37;
        }
        while ( v35 );
        if ( v27 != (v27 & 0x7FFFFFFFFFFFFFF8LL) )
        {
LABEL_44:
          do
          {
            v39 = *(_DWORD *)v29;
            v29 = (__int64 *)((char *)v29 + 4);
            *v31++ = v39;
          }
          while ( (unsigned __int64)v31 < v3 + 156 );
        }
        v40 = v62;
      }
      v46 = v65;
      this = (_QWORD *)C_Matrix4Mul(v30, (const float *)(v6 + 76), (float *)v65);
      v47 = (_DWORD *)(v3 + 156);
      if ( v32 < 8 || v60 < (unsigned __int64)v65 + 4 * v23 + 4 && (unsigned __int64)v65 < v59 + 4 * v23 )
        goto LABEL_45;
      v48 = 4 * (v32 & 0x7FFFFFFFFFFFFFF8LL);
      v46 = (__int64 *)((char *)v65 + v48);
      v49 = 0;
      v47 = (_DWORD *)(v3 + v48 + 156);
      v50 = v32 & 0x7FFFFFFFFFFFFFF8LL;
      do
      {
        v51 = *(_OWORD *)&v65[v49];
        v52 = *(_OWORD *)&v65[v49 + 2];
        v53 = v3 + v49 * 8;
        v50 -= 8;
        v49 += 4;
        *(_OWORD *)(v53 + 156) = v51;
        *(_OWORD *)(v53 + 172) = v52;
      }
      while ( v50 );
      if ( v32 != (v32 & 0x7FFFFFFFFFFFFFF8LL) )
      {
LABEL_45:
        do
        {
          v54 = *(_DWORD *)v46;
          v46 = (__int64 *)((char *)v46 + 4);
          *v47++ = v54;
        }
        while ( (unsigned __int64)v47 < v3 + 220 );
      }
      ++v4;
      v3 += 220;
      v2 = v6 + 144;
      v5 = (_OWORD *)((char *)v40 + 220);
    }
    while ( (int)v4 < *(_DWORD *)*v61 );
  }
  return this;
}

