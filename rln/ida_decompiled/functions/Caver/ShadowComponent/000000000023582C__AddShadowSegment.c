/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023582C
 * Mangled: _ZN5Caver15ShadowComponent16AddShadowSegmentERKNS_7Vector2ES3_ffPNS_10FastVectorINS_12ShadowVertexEEE
 * Demangled: Caver::ShadowComponent::AddShadowSegment(Caver::Vector2 const&,Caver::Vector2 const&,float,float,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callers: 1
 *   0x00000000001F3AE0  Caver::ShadowComponent::AddShadowSegment(Caver::Vector2 const&,Caver::Vector2 const&,float,float,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callees: 1
 *   0x00000000001FF3F0  Caver::FastVector<Caver::ShadowVertex>::Resize(int)
 *
 * Referenced strings: 74
 *   insn=0x0000000000235850 string=0x0000000000235854 "#@-D4@-"
 *   insn=0x0000000000235854 string=0x0000000000235858 "D4@-"
 *   insn=0x000000000023585C string=0x0000000000235860 "."
 *   insn=0x0000000000235864 string=0x0000000000235868 "j"@)"
 *   insn=0x0000000000235870 string=0x0000000000235874 "c8 "
 *   insn=0x0000000000235878 string=0x000000000023587C "c,"
 *   insn=0x0000000000235880 string=0x0000000000235884 "##"
 *   insn=0x000000000023588C string=0x0000000000235890 ") "
 *   insn=0x0000000000235890 string=0x0000000000235894 "_"
 *   insn=0x0000000000235894 string=0x0000000000235898 "h(,"
 *   insn=0x0000000000235898 string=0x000000000023589C "J(/"
 *   insn=0x000000000023589C string=0x00000000002358A0 ""
 *   insn=0x00000000002358A0 string=0x00000000002358A4 "y"
 *   insn=0x00000000002358A0 string=0x00000000002358C0 "i"
 *   insn=0x00000000002358A8 string=0x00000000002358AC "I"
 *   insn=0x00000000002358B8 string=0x00000000002358BC "j"@)i"
 *   insn=0x00000000002358C8 string=0x00000000002358CC "K"
 *   insn=0x00000000002358CC string=0x00000000002358D0 ",),"
 *   insn=0x00000000002358D8 string=0x00000000002358DC "J%4"
 *   insn=0x00000000002358DC string=0x00000000002358E0 "I"
 *   insn=0x00000000002358E0 string=0x00000000002358E4 "@%"
 *   insn=0x00000000002358E4 string=0x00000000002358E8 "N!"
 *   insn=0x00000000002358E8 string=0x00000000002358EC "_"
 *   insn=0x00000000002358EC string=0x00000000002358F0 "k"
 *   insn=0x00000000002358F0 string=0x00000000002358F4 "+"
 *   insn=0x00000000002358F4 string=0x00000000002358F8 "y"
 *   insn=0x00000000002358FC string=0x0000000000235900 "I"
 *   insn=0x000000000023590C string=0x0000000000235910 "i"
 *   insn=0x0000000000235910 string=0x0000000000235914 "k"@)"
 *   insn=0x0000000000235918 string=0x000000000023591C "j"
 *   insn=0x000000000023591C string=0x0000000000235920 "l%4"
 *   insn=0x0000000000235920 string=0x0000000000235924 "_"
 *   insn=0x0000000000235930 string=0x0000000000235934 "j"
 *   insn=0x0000000000235934 string=0x0000000000235938 "+"
 *   insn=0x0000000000235938 string=0x000000000023593C "y"
 *   insn=0x0000000000235940 string=0x0000000000235944 "I"
 *   insn=0x0000000000235950 string=0x0000000000235954 "i"
 *   insn=0x0000000000235954 string=0x0000000000235958 "j"@)"
 *   insn=0x0000000000235960 string=0x0000000000235964 "K"
 *   insn=0x0000000000235968 string=0x000000000023596C "J%5"
 *   insn=0x0000000000235970 string=0x0000000000235974 "@%"
 *   insn=0x0000000000235974 string=0x0000000000235978 "O!"
 *   insn=0x0000000000235978 string=0x000000000023597C "T"
 *   insn=0x000000000023597C string=0x0000000000235980 "k"
 *   insn=0x0000000000235980 string=0x0000000000235984 "+"
 *   insn=0x0000000000235984 string=0x0000000000235988 "y"
 *   insn=0x0000000000235984 string=0x00000000002359A8 "j"
 *   insn=0x000000000023598C string=0x0000000000235990 "I"
 *   insn=0x000000000023599C string=0x00000000002359A0 "i"
 *   insn=0x00000000002359A0 string=0x00000000002359A4 "k"@)j"
 *   insn=0x00000000002359A8 string=0x00000000002359AC "l%5"
 *   insn=0x00000000002359AC string=0x00000000002359B0 "_"
 *   insn=0x00000000002359BC string=0x00000000002359C0 "j"
 *   insn=0x00000000002359C0 string=0x00000000002359C4 "+"
 *   insn=0x00000000002359C4 string=0x00000000002359C8 "y"
 *   insn=0x00000000002359CC string=0x00000000002359D0 "I"
 *   insn=0x00000000002359DC string=0x00000000002359E0 "i"
 *   insn=0x00000000002359E0 string=0x00000000002359E4 "j"@)"
 *   insn=0x00000000002359EC string=0x00000000002359F0 "K"
 *   insn=0x00000000002359F4 string=0x00000000002359F8 "J%4"
 *   insn=0x00000000002359FC string=0x0000000000235A00 "@%"
 *   insn=0x0000000000235A00 string=0x0000000000235A04 "O!"
 *   insn=0x0000000000235A04 string=0x0000000000235A08 "L"
 *   insn=0x0000000000235A08 string=0x0000000000235A0C "k"
 *   insn=0x0000000000235A0C string=0x0000000000235A10 "K"
 *   insn=0x0000000000235A10 string=0x0000000000235A14 "y"
 *   insn=0x0000000000235A10 string=0x0000000000235A38 "h%4"
 *   insn=0x0000000000235A18 string=0x0000000000235A1C "I"
 *   insn=0x0000000000235A24 string=0x0000000000235A28 "r&"
 *   insn=0x0000000000235A28 string=0x0000000000235A2C "k"
 *   insn=0x0000000000235A2C string=0x0000000000235A30 "i"
 *   insn=0x0000000000235A38 string=0x0000000000235A3C "i"
 *   insn=0x0000000000235A3C string=0x0000000000235A40 "5"
 *   insn=0x0000000000235A48 string=0x0000000000235A4C "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowComponent::AddShadowSegment(
        __int64 result,
        float *a2,
        float *a3,
        int *a4,
        float a5,
        float a6)
{
  float v6; // s0
  float v7; // s13
  float v10; // s1
  int v11; // w8
  int v12; // w10
  float v13; // s11
  float v14; // s9
  float v15; // s8
  float v16; // s10
  __int64 v17; // x9
  int v18; // w11
  float v19; // s12
  float v20; // s13
  __int64 v21; // x10
  int v22; // w10
  __int64 v23; // x12
  int v24; // w11
  __int64 v25; // x10
  int v26; // w10
  __int64 v27; // x12
  int v28; // w11
  __int64 v29; // x10
  __int64 v30; // x8
  float v32; // [xsp+4Ch] [xbp-14h]

  v6 = *(float *)(result + 192);
  v7 = a3[1];
  v10 = *(float *)(result + 204);
  v12 = *a4;
  v11 = a4[1];
  v32 = *a2;
  v13 = *a3;
  v14 = v10 * (float)((float)(*a3 - v6) * 0.5);
  v15 = (float)(v10 * (float)((float)(*a2 - v6) * 0.5)) + 0.5;
  v16 = a2[1] + 1.0;
  if ( *a4 >= v11 )
  {
    result = Caver::FastVector<Caver::ShadowVertex>::Resize();
    v12 = *a4;
    v11 = a4[1];
  }
  v17 = *((_QWORD *)a4 + 1);
  v18 = v12 + 1;
  v19 = v14 + 0.5;
  v20 = v7 + 1.0;
  v21 = v17 + 24LL * v12;
  *(float *)v21 = v32;
  *(float *)(v21 + 4) = v16;
  *(float *)(v21 + 8) = a6;
  *(float *)(v21 + 12) = v15;
  *(_DWORD *)(v21 + 16) = 0;
  *a4 = v18;
  if ( v18 >= v11 )
  {
    result = Caver::FastVector<Caver::ShadowVertex>::Resize();
    v17 = *((_QWORD *)a4 + 1);
    v18 = *a4;
    v11 = a4[1];
  }
  v22 = v18 + 1;
  v23 = v17 + 24LL * v18;
  *(float *)v23 = v13;
  *(float *)(v23 + 4) = v20;
  *(float *)(v23 + 8) = a6;
  *(float *)(v23 + 12) = v19;
  *(_DWORD *)(v23 + 16) = 0;
  *a4 = v18 + 1;
  if ( v18 + 1 >= v11 )
  {
    result = Caver::FastVector<Caver::ShadowVertex>::Resize();
    v17 = *((_QWORD *)a4 + 1);
    v22 = *a4;
    v11 = a4[1];
  }
  v24 = v22 + 1;
  v25 = v17 + 24LL * v22;
  *(float *)v25 = v32;
  *(float *)(v25 + 4) = v16;
  *(float *)(v25 + 8) = a5;
  *(float *)(v25 + 12) = v15;
  *(_DWORD *)(v25 + 16) = 1065353216;
  *a4 = v24;
  if ( v24 >= v11 )
  {
    result = Caver::FastVector<Caver::ShadowVertex>::Resize();
    v17 = *((_QWORD *)a4 + 1);
    v24 = *a4;
    v11 = a4[1];
  }
  v26 = v24 + 1;
  v27 = v17 + 24LL * v24;
  *(float *)v27 = v13;
  *(float *)(v27 + 4) = v20;
  *(float *)(v27 + 8) = a5;
  *(float *)(v27 + 12) = v19;
  *(_DWORD *)(v27 + 16) = 1065353216;
  *a4 = v24 + 1;
  if ( v24 + 1 >= v11 )
  {
    result = Caver::FastVector<Caver::ShadowVertex>::Resize();
    v17 = *((_QWORD *)a4 + 1);
    v26 = *a4;
    v11 = a4[1];
  }
  v28 = v26 + 1;
  v29 = v17 + 24LL * v26;
  *(float *)v29 = v32;
  *(float *)(v29 + 4) = v16;
  *(float *)(v29 + 8) = a5;
  *(float *)(v29 + 12) = v15;
  *(_DWORD *)(v29 + 16) = 1065353216;
  *a4 = v28;
  if ( v28 >= v11 )
  {
    result = Caver::FastVector<Caver::ShadowVertex>::Resize();
    v28 = *a4;
    v17 = *((_QWORD *)a4 + 1);
  }
  v30 = v17 + 24LL * v28;
  *(float *)v30 = v13;
  *(float *)(v30 + 4) = v20;
  *(float *)(v30 + 8) = a6;
  *(float *)(v30 + 12) = v19;
  *(_DWORD *)(v30 + 16) = 0;
  *a4 = v28 + 1;
  return result;
}

