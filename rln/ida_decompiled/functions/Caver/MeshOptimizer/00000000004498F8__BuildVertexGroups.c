/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004498F8
 * Mangled: _ZN5Caver13MeshOptimizer17BuildVertexGroupsEv
 * Demangled: Caver::MeshOptimizer::BuildVertexGroups(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 136
 *   insn=0x000000000044992C string=0x0000000000449930 "hP"
 *   insn=0x0000000000449930 string=0x0000000000449934 "hJ"
 *   insn=0x0000000000449934 string=0x0000000000449938 "\n"
 *   insn=0x000000000044993C string=0x0000000000449940 "H\n"
 *   insn=0x0000000000449940 string=0x0000000000449944 "b"
 *   insn=0x0000000000449944 string=0x0000000000449948 "dF@"
 *   insn=0x000000000044994C string=0x0000000000449950 "h"
 *   insn=0x0000000000449950 string=0x0000000000449954 "B"
 *   insn=0x0000000000449954 string=0x0000000000449958 "c"
 *   insn=0x0000000000449960 string=0x0000000000449964 "Hh!"
 *   insn=0x0000000000449964 string=0x0000000000449968 "bh!"
 *   insn=0x000000000044996C string=0x0000000000449970 "h"
 *   insn=0x0000000000449974 string=0x0000000000449978 "`V"
 *   insn=0x0000000000449984 string=0x0000000000583734 "o"
 *   insn=0x000000000044998C string=0x0000000000449990 "h"
 *   insn=0x0000000000449990 string=0x0000000000449994 ""
 *   insn=0x0000000000449998 string=0x000000000044999C ""
 *   insn=0x000000000044999C string=0x00000000004499B8 "v"
 *   insn=0x00000000004499A4 string=0x00000000004499A8 "`"I-"
 *   insn=0x00000000004499AC string=0x00000000004499B0 "aV@"
 *   insn=0x00000000004499B8 string=0x00000000004499BC "m:F-k:@"
 *   insn=0x00000000004499BC string=0x00000000004499C0 "k:@"
 *   insn=0x00000000004499C8 string=0x00000000004499CC "\t=@-"
 *   insn=0x00000000004499D0 string=0x00000000004499D4 "!9 "
 *   insn=0x00000000004499D4 string=0x00000000004499D8 "!8-"
 *   insn=0x00000000004499D8 string=0x00000000004499DC "!"
 *   insn=0x00000000004499DC string=0x00000000004499E0 "<"
 *   insn=0x00000000004499E4 string=0x00000000004499E8 "!8-"
 *   insn=0x00000000004499E8 string=0x00000000004499EC "!"
 *   insn=0x00000000004499EC string=0x00000000004499F0 "("
 *   insn=0x0000000000449A00 string=0x0000000000449A04 " 9-"
 *   insn=0x0000000000449A10 string=0x0000000000449A14 "!"
 *   insn=0x0000000000449A20 string=0x0000000000449A24 ""
 *   insn=0x0000000000449A28 string=0x0000000000449A2C "}+"
 *   insn=0x0000000000449A2C string=0x0000000000449A30 "+"
 *   insn=0x0000000000449A34 string=0x0000000000449A38 ")"
 *   insn=0x0000000000449A38 string=0x0000000000449A3C "k"
 *   insn=0x0000000000449A3C string=0x0000000000449A40 "B"
 *   insn=0x0000000000449A40 string=0x0000000000449A44 ")}"
 *   insn=0x0000000000449A44 string=0x0000000000449A48 ""
 *   insn=0x0000000000449A4C string=0x0000000000449A50 ","
 *   insn=0x0000000000449A50 string=0x0000000000449A54 "J"
 *   insn=0x0000000000449A54 string=0x0000000000449A58 "1"
 *   insn=0x0000000000449A58 string=0x0000000000449A5C "("
 *   insn=0x0000000000449A5C string=0x0000000000449A60 "?"
 *   insn=0x0000000000449A60 string=0x0000000000449A64 ",#"
 *   insn=0x0000000000449A64 string=0x0000000000449A68 ")1"
 *   insn=0x0000000000449A68 string=0x0000000000449A6C "h6@"
 *   insn=0x0000000000449A6C string=0x0000000000449A70 "J}"
 *   insn=0x0000000000449A70 string=0x0000000000449A74 ")"
 *   insn=0x0000000000449A74 string=0x0000000000449A78 "K"
 *   insn=0x0000000000449A78 string=0x0000000000449A7C "_"
 *   insn=0x0000000000449A7C string=0x0000000000449A80 "J1"
 *   insn=0x0000000000449A80 string=0x0000000000449A84 "4"
 *   insn=0x0000000000449A9C string=0x0000000000449AA0 "H"
 *   insn=0x0000000000449AA0 string=0x0000000000449AA4 ""
 *   insn=0x0000000000449AA4 string=0x0000000000449AA8 "("
 *   insn=0x0000000000449AB8 string=0x0000000000449ABC "!8."
 *   insn=0x0000000000449ABC string=0x0000000000449AC0 "B8+"
 *   insn=0x0000000000449AC0 string=0x0000000000449AC4 "!"
 *   insn=0x0000000000449AC4 string=0x0000000000449AC8 "B"
 *   insn=0x0000000000449AC8 string=0x0000000000449ACC "*"
 *   insn=0x0000000000449AD0 string=0x0000000000449AD4 "H"
 *   insn=0x0000000000449AD8 string=0x0000000000449ADC "!8."
 *   insn=0x0000000000449ADC string=0x0000000000449AE0 "B8+"
 *   insn=0x0000000000449AE0 string=0x0000000000449AE4 "!"
 *   insn=0x0000000000449AE4 string=0x0000000000449AE8 "B"
 *   insn=0x0000000000449AE8 string=0x0000000000449AEC "+"
 *   insn=0x0000000000449AEC string=0x0000000000449AF0 "T"
 *   insn=0x0000000000449AF0 string=0x0000000000449AF4 "\n "
 *   insn=0x0000000000449AF8 string=0x0000000000449AFC "f"
 *   insn=0x0000000000449AFC string=0x0000000000449C94 "_"
 *   insn=0x0000000000449B08 string=0x0000000000449B0C "\t"
 *   insn=0x0000000000449B10 string=0x0000000000449B14 "1"
 *   insn=0x0000000000449B20 string=0x0000000000449B24 "T"
 *   insn=0x0000000000449B28 string=0x0000000000449B30 "H"
 *   insn=0x0000000000449B30 string=0x0000000000449B34 "\t"
 *   insn=0x0000000000449B38 string=0x0000000000449B3C "1"
 *   insn=0x0000000000449B40 string=0x0000000000449B44 "x6@"
 *   insn=0x0000000000449B48 string=0x0000000000449B4C ""
 *   insn=0x0000000000449B50 string=0x0000000000449B54 "("
 *   insn=0x0000000000449B5C string=0x0000000000449B60 "\t"
 *   insn=0x0000000000449B64 string=0x0000000000449B68 "1"
 *   insn=0x0000000000449B68 string=0x0000000000449B6C "X"
 *   insn=0x0000000000449B78 string=0x0000000000449B7C "("
 *   insn=0x0000000000449B7C string=0x0000000000449B80 "\t"
 *   insn=0x0000000000449B80 string=0x0000000000449B84 "?"
 *   insn=0x0000000000449B88 string=0x0000000000449B8C "\n"
 *   insn=0x0000000000449B88 string=0x0000000000449B9C "\n@"
 *   insn=0x0000000000449B90 string=0x0000000000449B94 "j"
 *   insn=0x0000000000449B94 string=0x0000000000449B98 ""
 *   insn=0x0000000000449B9C string=0x0000000000449BA0 "I"
 *   insn=0x0000000000449BA0 string=0x0000000000449BC8 "\t"
 *   insn=0x0000000000449BBC string=0x0000000000449BC0 "!"
 *   insn=0x0000000000449BC0 string=0x0000000000449BC4 "("
 *   insn=0x0000000000449BC0 string=0x0000000000449C24 "$"
 *   insn=0x0000000000449BC8 string=0x0000000000449BCC "*"
 *   insn=0x0000000000449BCC string=0x0000000000449BD0 "K"
 *   insn=0x0000000000449BCC string=0x0000000000449BF0 "i"
 *   insn=0x0000000000449BD0 string=0x0000000000449BD4 "La"
 *   insn=0x0000000000449BD4 string=0x0000000000449BD8 "MA"
 *   insn=0x0000000000449BE4 string=0x0000000000449BE8 "j"
 *   insn=0x0000000000449BE8 string=0x0000000000449BEC "*"
 *   insn=0x0000000000449BF0 string=0x0000000000449BF4 "*"
 *   insn=0x0000000000449BF4 string=0x0000000000449BF8 "+a"
 *   insn=0x0000000000449BF8 string=0x0000000000449BFC ",A"
 *   insn=0x0000000000449BFC string=0x0000000000449C00 "_"
 *   insn=0x0000000000449C04 string=0x0000000000449C08 "9"
 *   insn=0x0000000000449C08 string=0x0000000000449C0C "I"
 *   insn=0x0000000000449C0C string=0x0000000000449C10 ")"
 *   insn=0x0000000000449C1C string=0x0000000000449C20 " "
 *   insn=0x0000000000449C28 string=0x0000000000449C2C "\tY"
 *   insn=0x0000000000449C2C string=0x0000000000449C30 " "
 *   insn=0x0000000000449C30 string=0x0000000000449C34 ""\t@"
 *   insn=0x0000000000449C38 string=0x0000000000449C3C "!8/"
 *   insn=0x0000000000449C3C string=0x0000000000449C40 "B8,"
 *   insn=0x0000000000449C44 string=0x0000000000449C48 "!!"
 *   insn=0x0000000000449C4C string=0x0000000000449C50 "A""
 *   insn=0x0000000000449C68 string=0x0000000000449C6C "I"
 *   insn=0x0000000000449C78 string=0x0000000000449C7C "i"
 *   insn=0x0000000000449C7C string=0x0000000000449B28 "("
 *   insn=0x0000000000449C80 string=0x0000000000449C84 "Z"
 *   insn=0x0000000000449C84 string=0x0000000000449C88 "_"
 *   insn=0x0000000000449C88 string=0x0000000000449C8C "I"
 *   insn=0x0000000000449C94 string=0x0000000000449C98 "I"
 *   insn=0x0000000000449CA4 string=0x0000000000449CA8 "i"
 *   insn=0x0000000000449CA8 string=0x0000000000449CAC "U"
 *   insn=0x0000000000449CB0 string=0x0000000000449CB4 "("
 *   insn=0x0000000000449CE4 string=0x0000000000449CE8 ">"
 *   insn=0x0000000000449CE8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000449D04 string=0x0000000000449D08 "\t"
 *   insn=0x0000000000449D0C string=0x0000000000449D10 "hB@"
 *   insn=0x0000000000449D10 string=0x0000000000449D14 "i"
 *   insn=0x0000000000449D14 string=0x0000000000449D18 ""
 *   insn=0x0000000000449D18 string=0x0000000000449D1C "hB"
 *   insn=0x0000000000449D28 string=0x00000000004499A0 "aR@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshOptimizer::BuildVertexGroups(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  float v3; // s8
  float v4; // s2
  float v5; // s0
  float v6; // s0
  __int64 v7; // x23
  __int64 v8; // x22
  float v9; // s13
  float v10; // s14
  float v11; // s11
  float *v12; // x8
  float v13; // s9
  float v14; // s15
  float v15; // s12
  unsigned int v16; // w28
  unsigned int v17; // w8
  unsigned int v18; // w9
  char v19; // w11
  unsigned int v20; // w10
  __int64 v21; // x8
  unsigned int v22; // w10
  char v23; // w9
  unsigned __int8 v24; // w20
  __int64 v25; // x21
  __int64 *v26; // x8
  unsigned int v27; // w10
  unsigned int v28; // w11
  unsigned int v29; // w20
  float v30; // s10
  char v31; // w8
  unsigned int v32; // w26
  char v33; // w8
  __int64 v34; // x24
  unsigned int v35; // w21
  char v36; // w8
  __int64 v37; // x25
  unsigned __int8 v38; // w8
  unsigned int v39; // w9
  __int64 v40; // x10
  __int64 v41; // x9
  unsigned int v42; // w11
  bool v43; // cf
  __int64 *v44; // x11
  unsigned int v45; // w10
  bool v46; // cc
  __int64 *v47; // x10
  __int64 v48; // x8
  float *v49; // x9
  int v50; // w9
  _BOOL4 v51; // w22
  __int64 v52; // x0
  char v53; // [xsp+4h] [xbp-BCh]
  unsigned int v54; // [xsp+8h] [xbp-B8h]
  unsigned int v55; // [xsp+Ch] [xbp-B4h]
  char v56; // [xsp+10h] [xbp-B0h]
  int v57; // [xsp+14h] [xbp-ACh]
  unsigned int v58; // [xsp+18h] [xbp-A8h]
  float v59; // [xsp+1Ch] [xbp-A4h]
  float v60; // [xsp+20h] [xbp-A0h]
  unsigned int v61; // [xsp+24h] [xbp-9Ch]
  __int64 v62; // [xsp+28h] [xbp-98h]

  v1 = this;
  *(_DWORD *)(this + 72) = 981668463;
  v2 = *(_DWORD *)(this + 16);
  v3 = fmaxf(*(float *)(this + 60) / 10000.0, 0.003);
  v4 = fmaxf(*(float *)(this + 64) / 10000.0, 0.003);
  v5 = fmaxf(*(float *)(this + 68) / 10000.0, 0.003);
  *(float *)(this + 76) = v3;
  *(float *)(this + 80) = v4;
  v59 = v5;
  v60 = v4;
  *(float *)(this + 84) = v5;
  if ( v2 >= 1 )
  {
    v57 = v2;
    v6 = 0.001;
    v7 = 0;
    v62 = this + 96;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v1 + 24);
      v9 = *(float *)(v1 + 48);
      v10 = *(float *)(v1 + 52);
      v11 = *(float *)(v1 + 56);
      v12 = (float *)(v8 + 40 * v7);
      v13 = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = vcvtms_u32_f32((float)((float)(*v12 - v6) - v9) / v3);
      v58 = vcvtms_u32_f32((float)((float)(v6 + *v12) - v9) / v3);
      if ( v16 <= v58 )
      {
        v27 = vcvtms_u32_f32((float)((float)(v14 - v6) - v10) / v60);
        v28 = vcvtms_u32_f32((float)((float)(v6 + v14) - v10) / v60);
        v29 = vcvtms_u32_f32((float)((float)(v6 + v15) - v11) / v59);
        v30 = v6 * v6;
        v61 = vcvtms_u32_f32((float)((float)(v15 - v6) - v11) / v59);
        do
        {
          if ( v27 <= v28 )
          {
            v31 = -33 * v16;
            if ( 1500450271 * v16 >= 0xFFFFFFFB )
              v31 = -33 * v16 + 5;
            v32 = v27;
            v53 = v31;
            v54 = v28;
            v55 = v27;
            do
            {
              if ( v61 <= v29 )
              {
                v33 = 105 * v32;
                if ( 795028841 * v32 >= 0xFFFFFFFB )
                  v33 = 105 * v32 + 5;
                v34 = *(_QWORD *)(v1 + 104);
                v35 = v61;
                v56 = v33 + v53;
                do
                {
                  v36 = -31 * v35;
                  if ( -1323752223 * v35 >= 0xFFFFFFFB )
                    v36 = -31 * v35 + 5;
                  if ( v34 )
                  {
                    v37 = v62;
                    this = v34;
                    v38 = v56 + v36;
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v39 = *(unsigned __int8 *)(this + 32);
                        if ( v39 >= v38 )
                          break;
                        this = *(_QWORD *)(this + 24);
                        if ( !this )
                          goto LABEL_55;
                      }
                      v40 = *(_QWORD *)(this + 16);
                      if ( v39 <= v38 )
                        break;
                      v37 = this;
                      this = *(_QWORD *)(this + 16);
                      if ( !v40 )
                        goto LABEL_55;
                    }
                    v41 = *(_QWORD *)(this + 24);
                    if ( v40 )
                    {
                      do
                      {
                        v42 = *(unsigned __int8 *)(v40 + 32);
                        v43 = v42 >= v38;
                        if ( v42 >= v38 )
                          v44 = (__int64 *)(v40 + 16);
                        else
                          v44 = (__int64 *)(v40 + 24);
                        if ( v43 )
                          this = v40;
                        v40 = *v44;
                      }
                      while ( *v44 );
                    }
                    if ( v41 )
                    {
                      do
                      {
                        v45 = *(unsigned __int8 *)(v41 + 32);
                        v46 = v45 > v38;
                        if ( v45 <= v38 )
                          v47 = (__int64 *)(v41 + 24);
                        else
                          v47 = (__int64 *)(v41 + 16);
                        if ( v46 )
                          v37 = v41;
                        v41 = *v47;
                      }
                      while ( *v47 );
                    }
                    while ( this != v37 )
                    {
                      v48 = *(int *)(this + 36);
                      v49 = (float *)(v8 + 40 * v48);
                      if ( (float)((float)((float)((float)(*v49 - v13) * (float)(*v49 - v13))
                                         + (float)((float)(v49[1] - v14) * (float)(v49[1] - v14)))
                                 + (float)((float)(v49[2] - v15) * (float)(v49[2] - v15))) < v30 )
                      {
                        *(_DWORD *)(v8 + 40 * v7 + 12) = v48;
                        v50 = v57;
                        goto LABEL_68;
                      }
                      this = sub_54C640(this);
                    }
                  }
LABEL_55:
                  ++v35;
                }
                while ( v35 <= v29 );
              }
              v28 = v54;
              v27 = v55;
              ++v32;
            }
            while ( v32 <= v54 );
          }
          ++v16;
        }
        while ( v16 <= v58 );
      }
      *(_DWORD *)(v8 + 40 * v7 + 12) = v7;
      v17 = 1500450271 * vcvtms_u32_f32((float)(v13 - v9) / v3);
      v18 = 795028841 * vcvtms_u32_f32((float)(v14 - v10) / v60);
      v19 = v17 + 5;
      v20 = vcvtms_u32_f32((float)(v15 - v11) / v59);
      if ( v17 < 0xFFFFFFFB )
        v19 = v17;
      if ( v18 >= 0xFFFFFFFB )
        LOBYTE(v18) = v18 + 5;
      v21 = *(_QWORD *)(v1 + 104);
      v22 = -1323752223 * v20;
      v23 = v18 + v19;
      if ( v22 >= 0xFFFFFFFB )
        LOBYTE(v22) = v22 + 5;
      v24 = v23 + v22;
      if ( v21 )
      {
        do
        {
          v25 = v21;
          if ( *(unsigned __int8 *)(v21 + 32) <= (unsigned int)v24 )
            v26 = (__int64 *)(v21 + 24);
          else
            v26 = (__int64 *)(v21 + 16);
          v21 = *v26;
        }
        while ( v21 );
      }
      else
      {
        v25 = v62;
      }
      v51 = v62 == v25 || *(unsigned __int8 *)(v25 + 32) > (unsigned int)v24;
      v52 = operator new(0x28u);
      *(_QWORD *)(v52 + 32) = v24 | ((unsigned __int64)(unsigned int)v7 << 32);
      this = sub_54C8A0(v51, v52, v25, v62);
      v50 = *(_DWORD *)(v1 + 16);
      ++*(_QWORD *)(v1 + 128);
LABEL_68:
      if ( ++v7 >= v50 )
        break;
      v57 = v50;
      v6 = *(float *)(v1 + 72);
      v3 = *(float *)(v1 + 76);
      v60 = *(float *)(v1 + 80);
      v59 = *(float *)(v1 + 84);
    }
  }
  return this;
}

