/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021367C
 * Mangled: _ZN5Caver15FloatDataBuffer10AccumulateERKS0_fRKNS_14FloatDataTrackE
 * Demangled: Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float,Caver::FloatDataTrack const&)
 *
 * Callers: 1
 *   0x00000000001F9C50  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float,Caver::FloatDataTrack const&)
 *
 * Callees: 0
 *
 * Referenced strings: 41
 *   insn=0x000000000021367C string=0x0000000000213680 "L@"
 *   insn=0x0000000000213688 string=0x0000000000213718 ""
 *   insn=0x0000000000213690 string=0x0000000000213694 "\t"
 *   insn=0x0000000000213694 string=0x0000000000213698 "\n"
 *   insn=0x0000000000213698 string=0x000000000021369C "(\t"
 *   insn=0x000000000021369C string=0x00000000002136A0 ")\t\n"
 *   insn=0x00000000002136A0 string=0x00000000002136A4 ")1"
 *   insn=0x00000000002136AC string=0x00000000002136B0 "-"
 *   insn=0x00000000002136D0 string=0x00000000002136D4 "J"
 *   insn=0x00000000002136D4 string=0x00000000002136D8 "! "
 *   insn=0x00000000002136D8 string=0x00000000002136DC "A(!"
 *   insn=0x00000000002136E8 string=0x00000000002136EC "! "
 *   insn=0x00000000002136EC string=0x00000000002136F0 "a(!"
 *   insn=0x00000000002136F8 string=0x00000000002136FC ""
 *   insn=0x0000000000213700 string=0x0000000000213704 "! "
 *   insn=0x0000000000213704 string=0x0000000000213708 "A(!"
 *   insn=0x0000000000213710 string=0x0000000000213714 "4"
 *   insn=0x0000000000213718 string=0x000000000021371C "\t"
 *   insn=0x000000000021371C string=0x0000000000213720 "\n\t"
 *   insn=0x0000000000213720 string=0x0000000000213724 "\t\t\t"
 *   insn=0x0000000000213724 string=0x0000000000213728 ")A"
 *   insn=0x0000000000213728 string=0x000000000021372C "_"
 *   insn=0x0000000000213730 string=0x0000000000213734 "*"
 *   insn=0x0000000000213734 string=0x0000000000213738 "k"
 *   insn=0x000000000021373C string=0x0000000000213740 "N"
 *   insn=0x0000000000213740 string=0x0000000000213744 ""
 *   insn=0x0000000000213758 string=0x000000000021375C "F&"
 *   insn=0x000000000021375C string=0x0000000000213760 "&*&"
 *   insn=0x0000000000213760 string=0x0000000000213764 "g'"
 *   insn=0x0000000000213768 string=0x000000000021376C "'0"
 *   insn=0x000000000021377C string=0x0000000000213780 "B@!"
 *   insn=0x0000000000213780 string=0x0000000000213784 "c@!"
 *   insn=0x0000000000213784 string=0x0000000000213788 "!@!"
 *   insn=0x0000000000213790 string=0x0000000000213794 "Eik"
 *   insn=0x00000000002137A4 string=0x00000000002137A8 "k"
 *   insn=0x00000000002137AC string=0x00000000002137B0 "B($"
 *   insn=0x00000000002137B8 string=0x00000000002137BC "B "
 *   insn=0x00000000002137BC string=0x00000000002137C0 "b(""
 *   insn=0x00000000002137D0 string=0x00000000002137D4 "B "
 *   insn=0x00000000002137D4 string=0x00000000002137D8 "!(""
 *   insn=0x00000000002137DC string=0x00000000002137E0 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall Caver::FloatDataBuffer::Accumulate(unsigned int *result, __int64 a2, _DWORD *a3, float a4)
{
  __int64 v4; // x11
  __int64 v5; // x12
  __int64 v6; // x9
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x10
  __int64 v10; // x13
  __int64 v11; // x11
  __int64 v12; // x12
  float *v13; // x13
  float *v14; // x14
  float v15; // s1
  float v16; // s2
  float v17; // s3
  float v18; // s2
  __int64 v19; // x8
  unsigned __int64 v20; // x9
  __int64 v21; // x10
  __int64 v22; // x11
  __int64 v23; // x12
  float *v24; // x14
  float *v25; // x13
  float v26; // s2
  float v27; // s4
  float v28; // s5
  float v29; // s1
  float v30; // s3

  v4 = (unsigned int)a3[1];
  v5 = (unsigned int)a3[2];
  if ( *a3 == 4 )
  {
    v19 = *((_QWORD *)result + 1);
    v20 = v19 + 4LL * *result - 16;
    if ( v19 + 4 * v4 <= v20 )
    {
      v21 = *(_QWORD *)(a2 + 8);
      v22 = 4 * v4;
      v23 = 4 * v5;
      do
      {
        v24 = (float *)(v21 + v22);
        v25 = (float *)(v19 + v22);
        v27 = *(float *)(v19 + v22);
        v26 = *(float *)(v19 + v22 + 4);
        v28 = *(float *)(v21 + v22);
        v30 = *(float *)(v19 + v22 + 8);
        v29 = *(float *)(v19 + v22 + 12);
        if ( (float)((float)((float)((float)(v27 * v28) + (float)(v26 * *(float *)(v21 + v22 + 4)))
                           + (float)(v30 * *(float *)(v21 + v22 + 8)))
                   + (float)(v29 * *(float *)(v21 + v22 + 12))) < 0.0 )
        {
          v27 = -v27;
          v26 = -v26;
          v30 = -v30;
          v29 = -v29;
          *v25 = v27;
          v25[1] = v26;
          v25[2] = v30;
          v25[3] = v29;
          v28 = *(float *)(v21 + v22);
        }
        *v25 = v27 + (float)(v28 * a4);
        v22 += v23;
        v25[1] = v26 + (float)(v24[1] * a4);
        v25[2] = v30 + (float)(v24[2] * a4);
        v25[3] = v29 + (float)(v24[3] * a4);
      }
      while ( v19 + v22 <= v20 );
    }
  }
  else if ( *a3 == 2 )
  {
    v6 = *((_QWORD *)result + 1);
    v7 = v6 + 4 * v4;
    v8 = v6 + 4LL * *result - 12;
    if ( v7 <= v8 )
    {
      v9 = 0;
      v10 = *(_QWORD *)(a2 + 8) + 4 * v4;
      v11 = 4 * v5;
      v12 = v10 + 8;
      do
      {
        v13 = (float *)(v12 + v9);
        v14 = (float *)(v7 + v9);
        v15 = *(float *)(v12 + v9 - 8);
        v16 = *(float *)(v7 + v9);
        v17 = *(float *)(v7 + v9 + 4);
        v9 += v11;
        *v14 = v16 + (float)(v15 * a4);
        v18 = v14[2];
        v14[1] = v17 + (float)(*(v13 - 1) * a4);
        v14[2] = v18 + (float)(*v13 * a4);
      }
      while ( v7 + v9 <= v8 );
    }
  }
  return result;
}

