/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000517E18
 * Mangled: _Z30PVRTVertexGenerateTangentSpacePiPPcPtiPKcii13EPVRTDataTypeiS5_iS5_iS5_iS5_if
 * Demangled: PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F3540  PVRTMatrixVec3NormalizeF(PVRTVECTOR3f &,PVRTVECTOR3f const&)
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6770  .calloc
 *   0x00000000001F7A80  PVRTVertexTangentBitangent(PVRTVECTOR3f *,PVRTVECTOR3f *,PVRTVECTOR3f const*,float const*,float const*,float const*,float const*,float const*,float const*)
 *   0x00000000001F89E0  .free
 *   0x00000000001F9340  PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *   0x00000000001FEAA0  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *   0x00000000001FEF90  PVRTMatrixVec3DotProductF(PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *   0x00000000002008E0  .realloc
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 141
 *   insn=0x0000000000517E40 string=0x0000000000517E44 "H"
 *   insn=0x0000000000517E48 string=0x0000000000517E4C ""
 *   insn=0x0000000000517E54 string=0x0000000000517E58 "\t"
 *   insn=0x0000000000517E5C string=0x0000000000517E60 "(}"
 *   insn=0x0000000000517E6C string=0x0000000000517E70 ""
 *   insn=0x0000000000517E84 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000517E9C string=0x0000000000517EA0 "h"
 *   insn=0x0000000000517EBC string=0x0000000000517EC0 ",z"
 *   insn=0x0000000000517EC0 string=0x00000000001F6770 "0'"
 *   insn=0x0000000000517ECC string=0x0000000000517ED0 "(z"
 *   insn=0x0000000000517ED8 string=0x0000000000517EDC "v;"
 *   insn=0x0000000000517EDC string=0x0000000000517EE0 "W;"
 *   insn=0x0000000000517EF8 string=0x0000000000517EFC ""
 *   insn=0x0000000000517F04 string=0x0000000000517F08 "j~@"
 *   insn=0x0000000000517F28 string=0x0000000000517F2C "K"
 *   insn=0x0000000000517F38 string=0x0000000000517F3C ")}@"
 *   insn=0x0000000000517F3C string=0x0000000000517F40 "J}@"
 *   insn=0x0000000000517F40 string=0x0000000000517F44 "}@"
 *   insn=0x0000000000517F4C string=0x0000000000517F50 "z"
 *   insn=0x0000000000517F50 string=0x0000000000517F54 "t"
 *   insn=0x0000000000517F58 string=0x0000000000517F5C "_"
 *   insn=0x0000000000517F5C string=0x0000000000517F60 "@7"
 *   insn=0x0000000000517F60 string=0x0000000000517F64 "v"
 *   insn=0x0000000000517F64 string=0x0000000000517F68 "_"
 *   insn=0x0000000000517F74 string=0x0000000000517F78 "J_"
 *   insn=0x0000000000517F78 string=0x0000000000517F7C "H"
 *   insn=0x0000000000517F98 string=0x0000000000517F9C "("
 *   insn=0x0000000000517FB8 string=0x0000000000517FBC "S_"
 *   insn=0x0000000000517FBC string=0x0000000000517FC0 "a"
 *   insn=0x0000000000517FE0 string=0x00000000001F9340 "0'"
 *   insn=0x0000000000518024 string=0x0000000000518028 "a"
 *   insn=0x0000000000518064 string=0x0000000000518068 "a"
 *   insn=0x00000000005180A4 string=0x00000000005180A8 "h"
 *   insn=0x00000000005180AC string=0x00000000005180B0 "S_"
 *   insn=0x00000000005180B8 string=0x00000000005180BC "M"
 *   insn=0x00000000005180E0 string=0x00000000005180E4 "g~"
 *   insn=0x00000000005180E4 string=0x00000000001F7A80 "0'"
 *   insn=0x00000000005180F8 string=0x00000000005180FC "H"
 *   insn=0x0000000000518108 string=0x000000000051810C "U"
 *   insn=0x0000000000518120 string=0x0000000000518124 "W~"
 *   insn=0x0000000000518148 string=0x000000000051814C "Q"
 *   insn=0x0000000000518160 string=0x0000000000518164 "G~"
 *   insn=0x0000000000518178 string=0x000000000051817C "h\n"
 *   insn=0x0000000000518180 string=0x0000000000518184 "H"
 *   insn=0x0000000000518190 string=0x0000000000518194 "("
 *   insn=0x0000000000518194 string=0x0000000000518198 "k"
 *   insn=0x00000000005181A8 string=0x00000000005181AC ""
 *   insn=0x00000000005181B0 string=0x00000000005181B4 "H"
 *   insn=0x00000000005181B4 string=0x00000000005181B8 ""
 *   insn=0x00000000005181B8 string=0x00000000005181BC "H"
 *   insn=0x00000000005181BC string=0x00000000005181C0 "("
 *   insn=0x00000000005181C8 string=0x00000000005181CC ""
 *   insn=0x00000000005181CC string=0x00000000005181D0 "H"
 *   insn=0x00000000005181EC string=0x00000000005181F0 "+ "
 *   insn=0x0000000000518210 string=0x0000000000518214 "K}@"
 *   insn=0x0000000000518214 string=0x0000000000518218 "}@"
 *   insn=0x000000000051821C string=0x0000000000518220 ")}@"
 *   insn=0x0000000000518220 string=0x0000000000518224 ""
 *   insn=0x000000000051822C string=0x0000000000518230 "H}@"
 *   insn=0x0000000000518244 string=0x0000000000518248 ""
 *   insn=0x0000000000518268 string=0x000000000051826C ""
 *   insn=0x0000000000518278 string=0x000000000051827C "(#"
 *   insn=0x0000000000518298 string=0x000000000051829C "h"
 *   insn=0x00000000005182B4 string=0x00000000005182B8 "6"
 *   insn=0x00000000005182BC string=0x00000000005182C0 "d"
 *   insn=0x00000000005182C0 string=0x00000000005182EC "h"
 *   insn=0x00000000005182C8 string=0x00000000005182CC "1"
 *   insn=0x00000000005182D4 string=0x00000000005182D8 "h"
 *   insn=0x00000000005182D8 string=0x00000000005182DC "Z"
 *   insn=0x00000000005182E0 string=0x00000000005182E4 "_"
 *   insn=0x00000000005182E4 string=0x00000000005182E8 "K"
 *   insn=0x00000000005182F0 string=0x00000000005182F4 "_"
 *   insn=0x0000000000518300 string=0x0000000000518304 "_"
 *   insn=0x0000000000518310 string=0x0000000000518314 "{"
 *   insn=0x0000000000518324 string=0x0000000000518328 "!"
 *   insn=0x0000000000518334 string=0x0000000000518338 " "
 *   insn=0x000000000051834C string=0x0000000000518350 "-."
 *   insn=0x0000000000518350 string=0x0000000000518354 "\t"
 *   insn=0x0000000000518354 string=0x0000000000518358 "\nA"
 *   insn=0x0000000000518358 string=0x000000000051835C "h"
 *   insn=0x000000000051835C string=0x0000000000518360 "\t@"
 *   insn=0x0000000000518360 string=0x0000000000518364 "\n"
 *   insn=0x000000000051836C string=0x0000000000518370 "-"
 *   insn=0x0000000000518370 string=0x0000000000518374 "\t"
 *   insn=0x0000000000518374 string=0x0000000000518378 ""
 *   insn=0x000000000051837C string=0x0000000000518380 "\n"
 *   insn=0x0000000000518384 string=0x0000000000518388 "i"
 *   insn=0x0000000000518388 string=0x000000000051838C ""
 *   insn=0x0000000000518390 string=0x0000000000518394 "i\t\t"
 *   insn=0x0000000000518394 string=0x0000000000518398 "("
 *   insn=0x0000000000518398 string=0x000000000051839C "h"
 *   insn=0x000000000051839C string=0x00000000005183A0 ""
 *   insn=0x00000000005183A0 string=0x00000000005183A4 "h"
 *   insn=0x00000000005183BC string=0x00000000005183C0 ")#"
 *   insn=0x00000000005183C0 string=0x00000000005183C4 "*@"
 *   insn=0x00000000005183CC string=0x00000000005183D0 "\t"
 *   insn=0x00000000005183D0 string=0x00000000005183D4 ",A@"
 *   insn=0x00000000005183D4 string=0x00000000005183D8 "j"
 *   insn=0x00000000005183D8 string=0x00000000005183DC "*"
 *   insn=0x00000000005183DC string=0x00000000005183E0 ""
 *   insn=0x00000000005183E0 string=0x00000000005183E4 "J"
 *   insn=0x00000000005183E4 string=0x00000000005183E8 ")"
 *   insn=0x00000000005183E8 string=0x00000000005183EC "lA"
 *   insn=0x00000000005183EC string=0x00000000005183F0 "l"
 *   insn=0x00000000005183F8 string=0x00000000005183FC "h"
 *   insn=0x0000000000518404 string=0x0000000000518408 "i"
 *   insn=0x0000000000518408 string=0x000000000051840C "h"
 *   insn=0x0000000000518410 string=0x0000000000518414 "9"
 *   insn=0x0000000000518414 string=0x0000000000518418 ""
 *   insn=0x0000000000518418 string=0x000000000051841C "?"
 *   insn=0x000000000051841C string=0x0000000000518420 "K"
 *   insn=0x0000000000518444 string=0x0000000000518448 "h"
 *   insn=0x0000000000518454 string=0x0000000000518458 "K"
 *   insn=0x000000000051847C string=0x0000000000518480 ""
 *   insn=0x000000000051848C string=0x0000000000518490 "ozlx"
 *   insn=0x00000000005184A0 string=0x00000000005184A4 "a"
 *   insn=0x00000000005184A4 string=0x00000000005184B0 "m"
 *   insn=0x00000000005184A8 string=0x00000000005184AC ""
 *   insn=0x00000000005184B8 string=0x00000000005184BC "a"
 *   insn=0x00000000005184C0 string=0x00000000005184C4 ""
 *   insn=0x00000000005184C8 string=0x00000000005184CC "m"
 *   insn=0x00000000005184D8 string=0x00000000005184EC ")"
 *   insn=0x00000000005184FC string=0x0000000000518500 "k1"
 *   insn=0x0000000000518500 string=0x0000000000518504 "?"
 *   insn=0x0000000000518504 string=0x0000000000518508 "J"
 *   insn=0x0000000000518528 string=0x00000000001F3540 "P'"
 *   insn=0x0000000000518540 string=0x0000000000518544 "\n"
 *   insn=0x0000000000518568 string=0x000000000051856C "}"
 *   insn=0x0000000000518580 string=0x0000000000518584 "(!"
 *   insn=0x000000000051858C string=0x0000000000518590 "D"
 *   insn=0x00000000005185A4 string=0x00000000005185A8 "(!"
 *   insn=0x00000000005185B4 string=0x00000000005185B8 ":"
 *   insn=0x00000000005185CC string=0x00000000005185D0 ""
 *   insn=0x00000000005185D0 string=0x00000000005185D4 "{"
 *   insn=0x00000000005185D8 string=0x00000000005185DC "K"
 *   insn=0x00000000005185EC string=0x00000000005185F0 "k"
 *   insn=0x00000000005185F4 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000051860C string=0x0000000000518610 ")}@"
 *   insn=0x000000000051862C string=0x0000000000518630 "L"
 *   insn=0x0000000000518648 string=0x000000000051864C ""
 *   insn=0x0000000000518688 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTVertexGenerateTangentSpace(
        int *a1,
        void **a2,
        unsigned __int16 *a3,
        int a4,
        __int64 a5,
        int a6,
        float a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18)
{
  void *v23; // x0
  _WORD *v24; // x22
  char *v25; // x23
  __int64 result; // x0
  unsigned __int16 *v27; // x11
  __int64 v28; // x28
  __int64 v29; // x26
  __int64 v30; // x20
  __int64 v31; // x22
  char *v32; // x28
  char *v33; // x27
  int *v34; // x22
  char *v35; // x0
  __int64 v36; // x21
  _DWORD *v37; // x13
  __int64 v38; // x25
  __int64 v39; // x15
  char *v40; // x27
  __int64 v41; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  __int64 v44; // x24
  __int64 v45; // x21
  int *v46; // x19
  int v47; // w8
  __int64 v48; // x26
  char *v49; // x20
  float v50; // s0
  float v51; // s0
  __int64 v52; // x10
  char *v53; // x11
  char *v54; // x8
  __int64 v55; // x10
  char *v56; // x8
  _DWORD *v57; // x8
  _DWORD *v58; // x9
  char *v59; // x11
  __int64 v60; // x12
  __int64 v61; // x10
  __int64 v62; // x20
  __int64 v63; // x23
  __int64 v64; // x25
  const void *v65; // x24
  __int64 v66; // x27
  __int64 v67; // x8
  __int64 v68; // x9
  float32x2_t v69; // d1
  float v70; // s0
  __int64 v71; // x10
  __int64 v72; // x11
  float v73; // s2
  float32x2_t v74; // d3
  float32x2_t v75; // d5
  int v76; // w12
  float v77; // s4
  float32x2_t v78; // d7
  float v79; // s6
  int v80; // w13
  __int64 v81; // x8
  __int64 v82; // [xsp+28h] [xbp-1A8h]
  int v83; // [xsp+30h] [xbp-1A0h]
  _WORD *v84; // [xsp+38h] [xbp-198h]
  void **v86; // [xsp+88h] [xbp-148h]
  int v87; // [xsp+94h] [xbp-13Ch]
  char *v88; // [xsp+98h] [xbp-138h]
  unsigned __int16 *v89; // [xsp+A0h] [xbp-130h]
  char *v90; // [xsp+A8h] [xbp-128h]
  __int64 v91; // [xsp+A8h] [xbp-128h]
  _DWORD *v92; // [xsp+B0h] [xbp-120h]
  unsigned __int16 *v93; // [xsp+B8h] [xbp-118h]
  int *v94; // [xsp+B8h] [xbp-118h]
  __int64 v96; // [xsp+C8h] [xbp-108h]
  __int64 v97; // [xsp+C8h] [xbp-108h]
  char *p; // [xsp+D0h] [xbp-100h]

  _ReadStatusReg(TPIDR_EL0);
  *a1 = 0;
  v87 = 3 * a4;
  v23 = malloc(3 * a4 * a6);
  v86 = a2;
  *a2 = v23;
  if ( !v23 )
    return 1;
  v89 = a3;
  v83 = a6;
  v24 = malloc(6LL * a18);
  v82 = a4;
  v25 = (char *)calloc(a4, 0x384u);
  p = (char *)calloc(0x20u, 0x384u);
  result = 1;
  if ( v24 && v25 && p )
  {
    v84 = v24;
    v92 = v25;
    if ( a18 < 1 )
    {
LABEL_14:
      v34 = a1;
      v35 = p;
      if ( a4 < 1 )
        goto LABEL_52;
      v36 = 0;
LABEL_16:
      v94 = (int *)&v25[900 * v36];
      if ( *v94 < 1 )
        goto LABEL_51;
      v37 = v92;
      v38 = 0;
      v39 = 0;
      v91 = v36;
LABEL_18:
      if ( (int)v39 < 1 )
      {
        if ( !(_DWORD)v39 )
          goto LABEL_34;
        goto LABEL_35;
      }
      v40 = p + 388;
      v41 = (__int64)&v37[225 * v36 + 3 * v38];
      v42 = 0;
      v43 = v41 + 4;
      v44 = v41 + 388;
      v45 = (int)v39;
      v97 = v39;
      while ( 1 )
      {
        v46 = (int *)&v35[900 * v42];
        v47 = *v46;
        if ( *v46 < 1 )
        {
          if ( !v47 )
            goto LABEL_32;
        }
        else
        {
          v48 = 0;
          v49 = v40;
          do
          {
            PVRTMatrixVec3DotProductF();
            if ( v50 < a7 )
              break;
            PVRTMatrixVec3DotProductF();
            if ( v51 < a7 )
              break;
            ++v48;
            v49 += 12;
          }
          while ( v48 < *v46 );
          v47 = *v46;
          v35 = p;
          if ( (_DWORD)v48 == *v46 )
          {
LABEL_32:
            v52 = *(_QWORD *)v43;
            v53 = &v35[900 * v42];
            v54 = &v53[12 * v47];
            *((_DWORD *)v54 + 3) = *(_DWORD *)(v43 + 8);
            *(_QWORD *)(v54 + 4) = v52;
            v55 = *(_QWORD *)v44;
            v36 = v91;
            v37 = v92;
            v56 = &v53[12 * *v46];
            *((_DWORD *)v56 + 99) = *(_DWORD *)(v44 + 8);
            *(_QWORD *)(v56 + 388) = v55;
            *(_DWORD *)&v53[4 * (*v46)++ + 772] = v92[225 * v91 + 193 + v38];
            a3 = v89;
LABEL_33:
            v39 = v97;
            if ( (_DWORD)v42 == (_DWORD)v97 )
            {
LABEL_34:
              v57 = &v37[225 * v36];
              v58 = &v57[3 * v38];
              v59 = &v35[900 * (int)v39];
              v60 = *(_QWORD *)(v58 + 1);
              *((_DWORD *)v59 + 3) = v58[3];
              LODWORD(v57) = v57[v38 + 193];
              v61 = *(_QWORD *)(v58 + 97);
              LODWORD(v58) = v58[99];
              *(_QWORD *)(v59 + 4) = v60;
              *(_QWORD *)(v59 + 388) = v61;
              *((_DWORD *)v59 + 193) = (_DWORD)v57;
              v39 = (unsigned int)(v39 + 1);
              *((_DWORD *)v59 + 99) = (_DWORD)v58;
              *(_DWORD *)v59 = 1;
            }
LABEL_35:
            v34 = a1;
            if ( ++v38 >= *v94 )
            {
              if ( (int)v39 >= 1 )
              {
                v62 = 0;
                v63 = 0;
                v64 = (int)v39;
                v65 = (const void *)(a5 + v36 * v83);
                v66 = 772;
                while ( 1 )
                {
                  v67 = *(int *)&v35[900 * v63];
                  if ( (int)v67 >= 1 )
                    break;
LABEL_48:
                  PVRTMatrixVec3NormalizeF();
                  PVRTMatrixVec3NormalizeF();
                  v81 = *a1;
                  if ( (int)v81 >= v87 )
                    return 1;
                  if ( (int)v81 >= 0x10000 )
                    return 2;
                  memcpy((char *)*v86 + v81 * v83, v65, v83);
                  PVRTVertexWrite();
                  v36 = v91;
                  PVRTVertexWrite();
                  v35 = p;
                  ++v63;
                  v62 += 900;
                  v66 += 900;
                  ++*a1;
                  if ( v63 >= v64 )
                    goto LABEL_51;
                }
                v68 = 0;
                v69.n64_u64[0] = 0;
                v70 = 0.0;
                v71 = v66;
                v72 = v62;
                v73 = 0.0;
                v74.n64_u64[0] = 0;
                while ( 2 )
                {
                  v75.n64_u64[0] = *(unsigned __int64 *)&v35[v72 + 4];
                  v76 = 3 * *(_DWORD *)&v35[v71];
                  v77 = *(float *)&v35[v72 + 12];
                  v78.n64_u64[0] = *(unsigned __int64 *)&v35[v72 + 388];
                  v79 = *(float *)&v35[v72 + 396];
                  if ( v36 == a3[3 * *(int *)&v35[v71]] )
                  {
                    v80 = 0;
                    goto LABEL_46;
                  }
                  if ( v36 == a3[v76 + 1] )
                  {
                    v80 = 1;
                    goto LABEL_46;
                  }
                  if ( v36 == a3[v76 + 2] )
                  {
                    v80 = 2;
LABEL_46:
                    v84[v80 + v76] = *a1;
                  }
                  ++v68;
                  v69.n64_u64[0] = vadd_f32(v75, v69).n64_u64[0];
                  v73 = v77 + v73;
                  v74.n64_u64[0] = vadd_f32(v78, v74).n64_u64[0];
                  v70 = v79 + v70;
                  v72 += 12;
                  v71 += 4;
                  if ( v68 >= v67 )
                    goto LABEL_48;
                  continue;
                }
              }
LABEL_51:
              v25 = (char *)v92;
              if ( ++v36 >= v82 )
              {
LABEL_52:
                free(v35);
                free(v25);
                *v86 = realloc(*v86, *v34 * (__int64)v83);
                memcpy(a3, v84, 6LL * a18);
                free(v84);
                return 0;
              }
              goto LABEL_16;
            }
            goto LABEL_18;
          }
        }
        ++v42;
        v40 += 900;
        if ( v42 >= v45 )
        {
          a3 = v89;
          v36 = v91;
          v37 = v92;
          goto LABEL_33;
        }
      }
    }
    v27 = a3 + 2;
    v28 = 0;
    while ( 1 )
    {
      v29 = *(v27 - 2);
      v30 = *v27;
      result = 1;
      if ( (_DWORD)v29 == (_DWORD)v30 )
        break;
      v31 = *(v27 - 1);
      if ( (_DWORD)v29 == (_DWORD)v31 || (_DWORD)v31 == (_DWORD)v30 )
        break;
      if ( *(int *)&v25[900 * *(v27 - 2)] > 31 || *(int *)&v25[900 * *(v27 - 1)] > 31 || *(int *)&v25[900 * *v27] > 31 )
        return 1;
      v96 = v28;
      v93 = v27;
      v90 = &v25[900 * *v27];
      v32 = &v25[900 * *(v27 - 2)];
      v88 = &v25[900 * *(v27 - 1)];
      PVRTVertexRead();
      PVRTVertexRead();
      PVRTVertexRead();
      PVRTVertexRead();
      PVRTVertexRead();
      PVRTVertexRead();
      PVRTVertexRead();
      PVRTVertexRead();
      v25 = (char *)v92;
      PVRTVertexRead();
      v33 = v32;
      PVRTVertexTangentBitangent();
      PVRTVertexTangentBitangent();
      PVRTVertexTangentBitangent();
      v92[225 * v29 + 193 + *(int *)v32] = v96;
      v92[225 * v31 + 193 + *(int *)v88] = v96;
      v27 = v93 + 3;
      v92[225 * v30 + 193 + *(int *)v90] = v96;
      v28 = v96 + 1;
      ++*(_DWORD *)v33;
      ++*(_DWORD *)v88;
      ++*(_DWORD *)v90;
      if ( v96 + 1 >= a18 )
        goto LABEL_14;
    }
  }
  return result;
}

