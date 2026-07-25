/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051B3D8
 * Mangled: _Z24PVRTMatrixLinearEqSolveFPfPS_i
 * Demangled: PVRTMatrixLinearEqSolveF(float *,float **,int)
 *
 * Callers: 2
 *   0x00000000001FAE30  PVRTMatrixLinearEqSolveF(float *,float **,int)
 *   0x000000000051B3D8  PVRTMatrixLinearEqSolveF(float *,float **,int)
 *
 * Callees: 0
 *
 * Referenced strings: 54
 *   insn=0x000000000051B410 string=0x000000000051B414 "`"
 *   insn=0x000000000051B414 string=0x000000000051B418 "s"
 *   insn=0x000000000051B424 string=0x000000000051B428 "+!"
 *   insn=0x000000000051B428 string=0x000000000051B42C "iyj"
 *   insn=0x000000000051B42C string=0x000000000051B430 " yh"
 *   insn=0x000000000051B430 string=0x000000000051B434 "  "
 *   insn=0x000000000051B438 string=0x000000000051B43C "J"
 *   insn=0x000000000051B438 string=0x000000000051B44C ""
 *   insn=0x000000000051B440 string=0x000000000051B444 "A"
 *   insn=0x000000000051B444 string=0x000000000051B448 "Q"
 *   insn=0x000000000051B44C string=0x000000000051B450 "\n"
 *   insn=0x000000000051B45C string=0x000000000051B460 "_!"
 *   insn=0x000000000051B464 string=0x000000000051B468 "M"
 *   insn=0x000000000051B468 string=0x000000000051B46C "."
 *   insn=0x000000000051B470 string=0x000000000051B474 """
 *   insn=0x000000000051B474 string=0x000000000051B5F8 "Mq}"
 *   insn=0x000000000051B478 string=0x000000000051B47C "?"
 *   insn=0x000000000051B48C string=0x000000000051B490 ")"
 *   insn=0x000000000051B490 string=0x000000000051B494 "J"
 *   insn=0x000000000051B494 string=0x000000000051B498 "-"
 *   insn=0x000000000051B49C string=0x000000000051B4A0 "J"
 *   insn=0x000000000051B4A4 string=0x000000000051B4A8 ".E"
 *   insn=0x000000000051B4A8 string=0x000000000051B4AC "a"
 *   insn=0x000000000051B4C4 string=0x000000000051B4C8 "MI4"
 *   insn=0x000000000051B4C8 string=0x000000000051B4CC "NA"
 *   insn=0x000000000051B4CC string=0x000000000051B4D0 ""
 *   insn=0x000000000051B4E4 string=0x000000000051B4E8 "B"
 *   insn=0x000000000051B4EC string=0x000000000051B4F0 "R"
 *   insn=0x000000000051B4F0 string=0x000000000051B4F4 "1""
 *   insn=0x000000000051B4F4 string=0x000000000051B4F8 """
 *   insn=0x000000000051B4F8 string=0x000000000051B4FC "#"
 *   insn=0x000000000051B518 string=0x000000000051B51C " "
 *   insn=0x000000000051B51C string=0x000000000051B520 ""
 *   insn=0x000000000051B51C string=0x000000000051B580 ")"
 *   insn=0x000000000051B520 string=0x000000000051B554 "2"
 *   insn=0x000000000051B524 string=0x000000000051B528 "Aih"
 *   insn=0x000000000051B544 string=0x000000000051B548 "_"
 *   insn=0x000000000051B548 string=0x000000000051B54C "b"
 *   insn=0x000000000051B554 string=0x000000000051B558 "P"
 *   insn=0x000000000051B568 string=0x000000000051B56C "1"
 *   insn=0x000000000051B570 string=0x000000000051B574 "A8!"
 *   insn=0x000000000051B578 string=0x000000000051B57C "A"
 *   insn=0x000000000051B580 string=0x000000000051B584 "?"
 *   insn=0x000000000051B5AC string=0x000000000051B5B0 "K"
 *   insn=0x000000000051B5B0 string=0x000000000051B5B4 "\t"
 *   insn=0x000000000051B5BC string=0x000000000051B5C0 "!E@"
 *   insn=0x000000000051B5C0 string=0x000000000051B5C4 "bE@"
 *   insn=0x000000000051B5C4 string=0x000000000051B5C8 "J"
 *   insn=0x000000000051B5C8 string=0x000000000051B5CC "!""
 *   insn=0x000000000051B5D0 string=0x000000000051B5D4 "a"
 *   insn=0x000000000051B5DC string=0x000000000051B5E0 "`z6"
 *   insn=0x000000000051B5FC string=0x000000000051B600 "/A"
 *   insn=0x000000000051B620 string=0x000000000051B624 "!"
 *   insn=0x000000000051B628 string=0x000000000051B62C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixLinearEqSolveF(float *a1, float **a2, int a3, long double a4)
{
  __int64 v7; // x23
  float result; // s0
  __int64 v9; // x10
  float *v10; // x9
  __int64 v11; // x11
  float *v12; // x12
  __int64 v13; // x10
  __int64 v14; // x13
  float *v15; // x12
  float *v16; // x9
  __int64 v17; // x10
  int v18; // w14
  float *v19; // x10
  __int64 i; // x9
  float32x4_t v21; // q1
  float32x4_t *v22; // x16
  __int64 v23; // x17
  float32x4_t *v24; // x18
  float32x4_t v25; // q2
  float32x4_t v26; // q3
  float32x4_t v27; // q3
  __int64 v28; // x17
  float *v29; // x15
  float *v30; // x16
  float *v31; // x15
  __int64 v32; // x17
  float v33; // t1
  __int64 v34; // x22
  float *v35; // x8
  float v36; // s0
  float *v37; // x9
  __int64 v38; // x10
  float *v39; // x11
  float v40; // t1
  float v41; // s1
  float v42; // t1
  long double *v43; // x14
  long double *v44; // x15
  __int64 v45; // x16
  long double v46; // q3
  long double v47; // q2

  v7 = (unsigned int)a3;
  if ( !a3 )
    goto LABEL_29;
  if ( a3 == 1 )
  {
    result = **a2 / (*a2)[1];
    *a1 = result;
    return result;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = (&a2[a3 - 1])[v9];
    if ( v10[a3] != 0.0 )
      break;
    if ( !(a3 + (_DWORD)--v9) )
      goto LABEL_29;
  }
  v11 = a3 - 1LL;
  if ( (_DWORD)v9 && (a3 & 0x80000000) == 0 )
  {
    v12 = a2[v11];
    v13 = (unsigned int)(a3 + 1);
    if ( (unsigned int)v13 < 8 || v12 < &v10[v13] && v10 < &v12[v13] )
    {
      v14 = 0;
LABEL_14:
      v15 = &v12[v14];
      v16 = &v10[v14];
      v17 = v13 - v14;
      do
      {
        v18 = *(_DWORD *)v15;
        --v17;
        *v15++ = *v16;
        *(_DWORD *)v16++ = v18;
      }
      while ( v17 );
      goto LABEL_16;
    }
    v14 = (unsigned int)v13 & 0xFFFFFFF8;
    v43 = (long double *)(v12 + 4);
    v44 = (long double *)(v10 + 4);
    v45 = v14;
    do
    {
      a4 = *(v43 - 1);
      v46 = *v43;
      v47 = *v44;
      v45 -= 8;
      *(v43 - 1) = *(v44 - 1);
      *v43 = v47;
      *(v44 - 1) = a4;
      *v44 = v46;
      v43 += 2;
      v44 += 2;
    }
    while ( v45 );
    if ( v14 != v13 )
      goto LABEL_14;
  }
LABEL_16:
  if ( a3 >= 2 )
  {
    v19 = a2[(int)v11];
    for ( i = 0; i != (unsigned int)v11; ++i )
    {
      v29 = a2[i];
      *(float *)&a4 = v29[a3] / v19[a3];
      if ( (unsigned int)a3 >= 8 && (v29 >= &v19[a3] || v19 >= &v29[a3]) )
      {
        v21 = vdupq_lane_s32(*(int32x2_t *)&a4, 0);
        v22 = (float32x4_t *)(v29 + 4);
        v23 = a3 & 0xFFFFFFF8;
        v24 = (float32x4_t *)(v19 + 4);
        do
        {
          v25 = v24[-1];
          v26 = *v24;
          v24 += 2;
          v23 -= 8;
          v27 = vsubq_f32(*v22, vmulq_f32(v21, v26));
          v22[-1] = vsubq_f32(v22[-1], vmulq_f32(v21, v25));
          *v22 = v27;
          v22 += 2;
        }
        while ( v23 );
        v28 = a3 & 0xFFFFFFF8;
        if ( v28 == a3 )
          continue;
      }
      else
      {
        v28 = 0;
      }
      v30 = &v19[v28];
      v31 = &v29[v28];
      v32 = (unsigned int)a3 - v28;
      do
      {
        v33 = *v30++;
        --v32;
        *v31 = *v31 - (float)(*(float *)&a4 * v33);
        ++v31;
      }
      while ( v32 );
    }
  }
LABEL_29:
  v34 = a3 - 1LL;
  PVRTMatrixLinearEqSolveF(a1, a2, a3 - 1);
  v35 = a2[v34];
  v36 = *v35;
  if ( a3 >= 2 )
  {
    v37 = v35 + 1;
    v38 = v7 - 1;
    v39 = a1;
    do
    {
      v40 = *v37++;
      v41 = v40;
      v42 = *v39++;
      --v38;
      v36 = v36 - (float)(v41 * v42);
    }
    while ( v38 );
  }
  result = v36 / v35[a3];
  a1[v34] = result;
  return result;
}

