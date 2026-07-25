/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000516E34
 * Mangled: _Z14PVRTVertexReadP12PVRTVECTOR4fPKv13EPVRTDataTypei
 * Demangled: PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *
 * Callers: 1
 *   0x00000000001F9340  PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *
 * Callees: 0
 *
 * Referenced strings: 191
 *   insn=0x0000000000516E38 string=0x0000000000516E3C "H"
 *   insn=0x0000000000516E48 string=0x0000000000516E4C ")"
 *   insn=0x0000000000516E4C string=0x0000000000516E54 "(y"
 *   insn=0x0000000000516E54 string=0x0000000000516E58 ""
 *   insn=0x0000000000516E5C string=0x0000000000516E60 "("
 *   insn=0x0000000000516E5C string=0x0000000000516F14 "("
 *   insn=0x0000000000516E5C string=0x0000000000516F74 "("
 *   insn=0x0000000000516E5C string=0x0000000000516FA4 "("
 *   insn=0x0000000000516E60 string=0x0000000000516E64 ")"
 *   insn=0x0000000000516E64 string=0x0000000000516E68 "*"
 *   insn=0x0000000000516E68 string=0x0000000000516E6C " "
 *   insn=0x0000000000516E6C string=0x0000000000516E70 "A}I"
 *   insn=0x0000000000516E74 string=0x0000000000516E78 "\t"
 *   insn=0x0000000000516E78 string=0x0000000000516E7C "}"
 *   insn=0x0000000000516E7C string=0x0000000000516E80 "-"
 *   insn=0x0000000000516E94 string=0x0000000000516E98 "\t"
 *   insn=0x0000000000516E98 string=0x0000000000516E9C "*"
 *   insn=0x0000000000516E9C string=0x0000000000516EA0 "_"
 *   insn=0x0000000000516EA0 string=0x0000000000516EA4 "\t""
 *   insn=0x0000000000516EA4 string=0x0000000000516EA8 "\t"
 *   insn=0x0000000000516EA4 string=0x00000000005172E4 "\tq}"
 *   insn=0x0000000000516EA8 string=0x0000000000516EAC "?"
 *   insn=0x0000000000516EB4 string=0x0000000000516EB8 "+"
 *   insn=0x0000000000516EB8 string=0x0000000000516EBC "*"
 *   insn=0x0000000000516EBC string=0x0000000000516EC0 ""
 *   insn=0x0000000000516EC0 string=0x0000000000516EC4 ""
 *   insn=0x0000000000516EC4 string=0x0000000000516EC8 "IE@"
 *   insn=0x0000000000516EC8 string=0x0000000000516ECC ""
 *   insn=0x0000000000516ECC string=0x0000000000516ED0 "iE"
 *   insn=0x0000000000516EDC string=0x0000000000516EE0 " "
 *   insn=0x0000000000516EEC string=0x00000000005170BC "\tq}"
 *   insn=0x0000000000516EF4 string=0x00000000005170F4 "+"
 *   insn=0x0000000000516EF8 string=0x0000000000516EFC "+"
 *   insn=0x0000000000516F08 string=0x000000000051711C "\tq}"
 *   insn=0x0000000000516F10 string=0x000000000051715C "*"
 *   insn=0x0000000000516F14 string=0x0000000000516F18 ")"
 *   insn=0x0000000000516F18 string=0x0000000000516F1C "*"
 *   insn=0x0000000000516F1C string=0x0000000000516F20 " "
 *   insn=0x0000000000516F20 string=0x0000000000516F24 "A}I"
 *   insn=0x0000000000516F28 string=0x0000000000516F2C "\t=S"
 *   insn=0x0000000000516F2C string=0x0000000000516F30 ""
 *   insn=0x0000000000516F34 string=0x0000000000516F38 "#"
 *   insn=0x0000000000516F38 string=0x0000000000516F3C "@D"
 *   insn=0x0000000000516F40 string=0x0000000000516F44 "c!"
 *   insn=0x0000000000516F44 string=0x0000000000516F48 "A!"
 *   insn=0x0000000000516F48 string=0x0000000000516F4C """
 *   insn=0x0000000000516F4C string=0x0000000000516F50 "("
 *   insn=0x0000000000516F74 string=0x0000000000516F78 "\t"
 *   insn=0x0000000000516F78 string=0x0000000000516F7C "\n=S]"
 *   insn=0x0000000000516F7C string=0x0000000000516F80 "]"
 *   insn=0x0000000000516F80 string=0x0000000000516F84 "}"
 *   insn=0x0000000000516F84 string=0x0000000000516F88 " "
 *   insn=0x0000000000516F88 string=0x0000000000516F8C "A"
 *   insn=0x0000000000516F8C string=0x0000000000516F90 "b"
 *   insn=0x0000000000516FA4 string=0x0000000000516FA8 ")"
 *   insn=0x0000000000516FA8 string=0x0000000000516FAC " "
 *   insn=0x0000000000516FAC string=0x0000000000516FB0 ")"
 *   insn=0x0000000000516FB0 string=0x0000000000516FB4 "!yI"
 *   insn=0x0000000000516FB0 string=0x000000000059B978 " @"
 *   insn=0x0000000000516FB8 string=0x0000000000516FBC "\t"
 *   insn=0x0000000000516FBC string=0x0000000000516FC0 "u"
 *   insn=0x0000000000516FC0 string=0x0000000000516FC4 "@D"
 *   insn=0x0000000000516FC4 string=0x0000000000516FC8 "\t`"
 *   insn=0x0000000000516FD0 string=0x0000000000516FD4 "A!"
 *   insn=0x0000000000516FD4 string=0x0000000000516FD8 """
 *   insn=0x0000000000516FF0 string=0x0000000000516FF4 "k"
 *   insn=0x0000000000516FFC string=0x0000000000517000 """
 *   insn=0x0000000000517000 string=0x0000000000517204 "\tq}"
 *   insn=0x0000000000517008 string=0x000000000051724C "*"
 *   insn=0x0000000000517014 string=0x0000000000517018 ")"
 *   insn=0x0000000000517018 string=0x000000000051701C ""
 *   insn=0x000000000051701C string=0x0000000000517020 " "
 *   insn=0x0000000000517030 string=0x0000000000517034 "k"
 *   insn=0x0000000000517040 string=0x0000000000517280 "\tq}"
 *   insn=0x0000000000517048 string=0x00000000005172C0 "*"
 *   insn=0x0000000000517058 string=0x000000000051705C ""\t"
 *   insn=0x0000000000517060 string=0x0000000000517064 "\"
 *   insn=0x0000000000517064 string=0x00000000005171D4 "*"
 *   insn=0x0000000000517070 string=0x0000000000517074 ")"
 *   insn=0x0000000000517074 string=0x0000000000517078 ""
 *   insn=0x0000000000517078 string=0x000000000051707C " "
 *   insn=0x0000000000517090 string=0x0000000000517094 "("
 *   insn=0x000000000051709C string=0x00000000005170A0 ")"
 *   insn=0x00000000005170A0 string=0x00000000005170A4 ""
 *   insn=0x00000000005170A4 string=0x00000000005170A8 "!"
 *   insn=0x00000000005170A8 string=0x00000000005170AC "!"
 *   insn=0x00000000005170B0 string=0x00000000005170B4 "a"
 *   insn=0x00000000005170BC string=0x00000000005170C0 "*@"
 *   insn=0x00000000005170C0 string=0x00000000005170C4 "@"
 *   insn=0x00000000005170C8 string=0x00000000005170CC "@"
 *   insn=0x00000000005170CC string=0x00000000005170D0 "J"
 *   insn=0x00000000005170D8 string=0x00000000005170DC "!"
 *   insn=0x00000000005170DC string=0x00000000005170E0 "`"
 *   insn=0x00000000005170E0 string=0x00000000005170E4 "k"
 *   insn=0x00000000005170E4 string=0x00000000005170E8 "!"
 *   insn=0x00000000005170E8 string=0x00000000005170EC "?"
 *   insn=0x00000000005170F4 string=0x00000000005170F8 "*"
 *   insn=0x00000000005170F8 string=0x00000000005170FC ""
 *   insn=0x00000000005170FC string=0x0000000000517100 ""
 *   insn=0x0000000000517100 string=0x0000000000517104 "@E@"
 *   insn=0x0000000000517104 string=0x0000000000517108 ""
 *   insn=0x000000000051710C string=0x0000000000517110 "`E"
 *   insn=0x0000000000517114 string=0x0000000000517118 "r"
 *   insn=0x000000000051711C string=0x0000000000517120 "* "
 *   insn=0x0000000000517120 string=0x0000000000517124 "@"
 *   insn=0x0000000000517128 string=0x000000000051712C "@"
 *   insn=0x000000000051712C string=0x0000000000517130 "JA"
 *   insn=0x0000000000517138 string=0x000000000051713C "!"
 *   insn=0x0000000000517140 string=0x0000000000517144 "!"
 *   insn=0x0000000000517144 string=0x0000000000517148 "`"
 *   insn=0x0000000000517148 string=0x000000000051714C "k"
 *   insn=0x0000000000517150 string=0x0000000000517154 "?"
 *   insn=0x0000000000517154 string=0x0000000000517158 "@"
 *   insn=0x000000000051715C string=0x0000000000517160 "\t"
 *   insn=0x0000000000517160 string=0x0000000000517164 ""
 *   insn=0x0000000000517164 string=0x0000000000517168 "I%@x"
 *   insn=0x0000000000517168 string=0x000000000051716C ""
 *   insn=0x000000000051716C string=0x0000000000517170 " "
 *   insn=0x0000000000517170 string=0x0000000000517174 "`E"
 *   insn=0x0000000000517178 string=0x000000000051717C "Y"
 *   insn=0x0000000000517180 string=0x0000000000517184 "\tq}"
 *   insn=0x0000000000517188 string=0x000000000051718C "* "
 *   insn=0x000000000051718C string=0x0000000000517190 "@"
 *   insn=0x0000000000517198 string=0x000000000051719C "A"
 *   insn=0x000000000051719C string=0x00000000005171A0 "JA"
 *   insn=0x00000000005171A4 string=0x00000000005171A8 "!"
 *   insn=0x00000000005171A8 string=0x00000000005171AC "B"
 *   insn=0x00000000005171AC string=0x00000000005171B0 "!"
 *   insn=0x00000000005171B0 string=0x00000000005171B4 "B"
 *   insn=0x00000000005171B4 string=0x00000000005171B8 "!"
 *   insn=0x00000000005171B8 string=0x00000000005171BC "B"
 *   insn=0x00000000005171BC string=0x00000000005171C0 "a"
 *   insn=0x00000000005171C0 string=0x00000000005171C4 "k"
 *   insn=0x00000000005171C8 string=0x00000000005171CC "?"
 *   insn=0x00000000005171D4 string=0x00000000005171D8 "@"
 *   insn=0x00000000005171D8 string=0x00000000005171DC "*"
 *   insn=0x00000000005171DC string=0x00000000005171E0 "\t"
 *   insn=0x00000000005171E0 string=0x00000000005171E4 ""
 *   insn=0x00000000005171E4 string=0x00000000005171E8 "I%"
 *   insn=0x00000000005171E8 string=0x00000000005171EC ""
 *   insn=0x00000000005171EC string=0x00000000005171F0 "!"
 *   insn=0x00000000005171F0 string=0x00000000005171F4 "!"
 *   insn=0x00000000005171F4 string=0x00000000005171F8 "aE"
 *   insn=0x00000000005171F8 string=0x00000000005171FC "a"
 *   insn=0x00000000005171FC string=0x0000000000517200 "8"
 *   insn=0x0000000000517208 string=0x000000000051720C "*@"
 *   insn=0x000000000051720C string=0x0000000000517210 "@"
 *   insn=0x0000000000517218 string=0x000000000051721C "A"
 *   insn=0x000000000051721C string=0x0000000000517220 "J"
 *   insn=0x0000000000517224 string=0x0000000000517228 "!"
 *   insn=0x0000000000517228 string=0x000000000051722C "B"
 *   insn=0x000000000051722C string=0x0000000000517230 "!"
 *   insn=0x0000000000517230 string=0x0000000000517234 "B"
 *   insn=0x0000000000517234 string=0x0000000000517238 "a"
 *   insn=0x0000000000517238 string=0x000000000051723C "k"
 *   insn=0x0000000000517240 string=0x0000000000517244 "?"
 *   insn=0x000000000051724C string=0x0000000000517250 "@"
 *   insn=0x0000000000517250 string=0x0000000000517254 "+"
 *   insn=0x0000000000517254 string=0x0000000000517258 "*"
 *   insn=0x0000000000517258 string=0x000000000051725C ""
 *   insn=0x000000000051725C string=0x0000000000517260 ""
 *   insn=0x0000000000517260 string=0x0000000000517264 "AE@"
 *   insn=0x0000000000517264 string=0x0000000000517268 ""
 *   insn=0x0000000000517268 string=0x000000000051726C "!"
 *   insn=0x000000000051726C string=0x0000000000517270 "! "
 *   insn=0x0000000000517270 string=0x0000000000517274 "aE"
 *   insn=0x0000000000517274 string=0x0000000000517278 "a"
 *   insn=0x0000000000517280 string=0x0000000000517284 "* "
 *   insn=0x0000000000517284 string=0x0000000000517288 "@"
 *   insn=0x000000000051728C string=0x0000000000517290 "@"
 *   insn=0x0000000000517290 string=0x0000000000517294 "JA"
 *   insn=0x000000000051729C string=0x00000000005172A0 "!"
 *   insn=0x00000000005172A4 string=0x00000000005172A8 "!"
 *   insn=0x00000000005172A8 string=0x00000000005172AC "`"
 *   insn=0x00000000005172AC string=0x00000000005172B0 "k"
 *   insn=0x00000000005172B4 string=0x00000000005172B8 "?"
 *   insn=0x00000000005172B8 string=0x00000000005172BC " "
 *   insn=0x00000000005172C0 string=0x00000000005172C4 "\t"
 *   insn=0x00000000005172C4 string=0x00000000005172C8 ""
 *   insn=0x00000000005172C8 string=0x00000000005172CC "I%"
 *   insn=0x00000000005172CC string=0x00000000005172D0 ""
 *   insn=0x00000000005172D0 string=0x00000000005172D4 " "
 *   insn=0x00000000005172D4 string=0x00000000005172D8 "`E"
 *   insn=0x00000000005172E4 string=0x00000000005172E8 "*@"
 *   insn=0x00000000005172E8 string=0x00000000005172EC "@"
 *   insn=0x00000000005172F0 string=0x00000000005172F4 "@"
 *   insn=0x00000000005172F4 string=0x00000000005172F8 "J"
 *   insn=0x00000000005172FC string=0x0000000000517300 "`"
 *   insn=0x0000000000517300 string=0x0000000000517304 "k"
 *   insn=0x0000000000517304 string=0x0000000000517308 "a"
 *   insn=0x0000000000517308 string=0x000000000051730C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t __fastcall PVRTVertexRead(unsigned __int64 a1, unsigned int *a2, int a3, int a4)
{
  float32x4_t result; // q0
  int32x2_t v5; // d0
  uint32x2_t v6; // d2
  unsigned int v7; // w9
  unsigned int v8; // w8
  __int64 v9; // x9
  unsigned int *v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x8
  int v13; // t1
  __int64 v14; // x9
  __int64 v15; // x9
  float v16; // s1
  float v17; // s2
  float v18; // s3
  float v19; // s1
  __int64 v20; // x9
  __int64 v21; // x8
  unsigned int v22; // t1
  __int64 v23; // x9
  __int64 v24; // x9
  __int64 v25; // x8
  int v26; // t1
  __int64 v27; // x8
  int v28; // t1
  int32x4_t *v29; // x10
  float32x4_t *v30; // x11
  __int64 v31; // x12
  int32x4_t v32; // q0
  int32x4_t v33; // q1
  int *v34; // x10
  float *v35; // x11
  __int64 v36; // x8
  int v37; // t1
  unsigned __int64 *v38; // x10
  float32x4_t *v39; // x11
  __int64 v40; // x12
  uint16x4_t v41; // d0
  uint16x4_t v42; // d1
  unsigned __int16 *v43; // x10
  float *v44; // x11
  __int64 v45; // x8
  unsigned int v46; // t1
  unsigned __int64 *v47; // x10
  float32x4_t *v48; // x11
  __int64 v49; // x12
  int16x4_t v50; // d1
  int16x4_t v51; // d2
  __int16 *v52; // x10
  float *v53; // x11
  __int64 v54; // x8
  int v55; // t1
  int32x4_t *v56; // x10
  float32x4_t *v57; // x11
  __int64 v58; // x12
  int32x4_t v59; // q1
  int32x4_t v60; // q2
  int *v61; // x10
  float *v62; // x11
  __int64 v63; // x8
  int v64; // t1
  unsigned __int64 *v65; // x10
  float32x4_t *v66; // x11
  __int64 v67; // x12
  int16x4_t v68; // d0
  int16x4_t v69; // d1
  __int16 *v70; // x10
  float *v71; // x11
  __int64 v72; // x8
  int v73; // t1
  float32x4_t *v74; // x10
  float32x4_t *v75; // x11
  __int64 v76; // x12
  float32x4_t v77; // q1

  result = (float32x4_t)xmmword_583800;
  *(_OWORD *)a1 = xmmword_583800;
  switch ( a3 )
  {
    case 1:
      if ( a4 < 1 )
        return result;
      if ( (unsigned int)a4 < 8 || (unsigned __int64)&a2[a4] > a1 && a1 + 4LL * (unsigned int)a4 > (unsigned __int64)a2 )
      {
        v9 = 0;
LABEL_8:
        v10 = &a2[v9];
        v11 = (_DWORD *)(a1 + 4 * v9);
        v12 = (unsigned int)a4 - v9;
        do
        {
          v13 = *v10++;
          --v12;
          *v11++ = v13;
        }
        while ( v12 );
        return result;
      }
      v9 = a4 & 0xFFFFFFF8;
      v74 = (float32x4_t *)(a2 + 4);
      v75 = (float32x4_t *)(a1 + 16);
      v76 = v9;
      do
      {
        result = v74[-1];
        v77 = *v74;
        v74 += 2;
        v76 -= 8;
        v75[-1] = result;
        *v75 = v77;
        v75 += 2;
      }
      while ( v76 );
      if ( v9 != a4 )
        goto LABEL_8;
      return result;
    case 2:
      if ( a4 < 1 )
        return result;
      if ( (unsigned int)a4 < 8 )
      {
        v14 = 0;
LABEL_45:
        v34 = (int *)&a2[v14];
        v35 = (float *)(a1 + 4 * v14);
        v36 = (unsigned int)a4 - v14;
        do
        {
          v37 = *v34++;
          --v36;
          result.n128_f32[0] = (float)v37;
          *v35++ = (float)v37;
        }
        while ( v36 );
        return result;
      }
      v14 = a4 & 0xFFFFFFF8;
      v29 = (int32x4_t *)(a2 + 4);
      v30 = (float32x4_t *)(a1 + 16);
      v31 = v14;
      do
      {
        v32 = v29[-1];
        v33 = *v29;
        v29 += 2;
        v31 -= 8;
        result = vcvtq_f32_s32(v32);
        v30[-1] = result;
        *v30 = vcvtq_f32_s32(v33);
        v30 += 2;
      }
      while ( v31 );
      if ( v14 != a4 )
        goto LABEL_45;
      return result;
    case 3:
      if ( a4 < 1 )
        return result;
      if ( (unsigned int)a4 < 8 )
      {
        v15 = 0;
LABEL_51:
        v43 = (unsigned __int16 *)a2 + v15;
        v44 = (float *)(a1 + 4 * v15);
        v45 = (unsigned int)a4 - v15;
        do
        {
          v46 = *v43++;
          --v45;
          result.n128_f32[0] = (float)v46;
          *v44++ = (float)v46;
        }
        while ( v45 );
        return result;
      }
      v15 = a4 & 0xFFFFFFF8;
      v38 = (unsigned __int64 *)(a2 + 2);
      v39 = (float32x4_t *)(a1 + 16);
      v40 = v15;
      do
      {
        v41.n64_u64[0] = *(v38 - 1);
        v42.n64_u64[0] = *v38;
        v38 += 2;
        v40 -= 8;
        result = vcvtq_f32_u32(vmovl_u16(v41));
        v39[-1] = result;
        *v39 = vcvtq_f32_u32(vmovl_u16(v42));
        v39 += 2;
      }
      while ( v40 );
      if ( v15 != a4 )
        goto LABEL_51;
      return result;
    case 4:
      v5.n64_u64[0] = 0x1000000018LL;
      v6.n64_u64[0] = vdup_n_s32(*a2).n64_u64[0];
      v7 = (unsigned __int8)BYTE1(*a2);
      v8 = (unsigned __int8)*a2;
      goto LABEL_18;
    case 5:
    case 6:
      v5.n64_u64[0] = 0x800000010LL;
      v6.n64_u64[0] = vdup_n_s32(*a2).n64_u64[0];
      v7 = (unsigned __int8)*a2;
      v8 = HIBYTE(*a2);
LABEL_18:
      result.n128_u64[0] = vmul_f32(
                             vcvt_f32_u32(vand_s8(vshl_u32(v6, vneg_s32(v5)), (int8x8_t)0xFF000000FFLL)),
                             vdup_n_s32(0x3B808081u)).n64_u64[0];
      *(_QWORD *)a1 = result.n128_u64[0];
      *(float *)(a1 + 8) = (float)v7 * 0.0039216;
      *(float *)(a1 + 12) = (float)v8 * 0.0039216;
      return result;
    case 7:
      result.n128_f32[0] = (float)(unsigned __int8)*a2;
      v16 = (float)(unsigned __int8)BYTE1(*a2);
      v17 = (float)(unsigned __int8)BYTE2(*a2);
      v18 = (float)HIBYTE(*a2);
      *(float *)a1 = result.n128_f32[0];
      *(float *)(a1 + 4) = v16;
      *(float *)(a1 + 8) = v17;
      *(float *)(a1 + 12) = v18;
      return result;
    case 8:
      v19 = (float)((int)(4 * *a2) >> 22) * 0.0019569;
      result.n128_u64[0] = vmul_f32(
                             vcvt_f32_s32(vshr_n_s32(vshl_u32(vdup_n_s32(*a2), (uint32x2_t)0xC00000016LL), 0x16u)),
                             vdup_n_s32(0x3B004020u)).n64_u64[0];
      *(_QWORD *)a1 = result.n128_u64[0];
      *(float *)(a1 + 8) = v19;
      return result;
    case 9:
      if ( a4 < 1 )
        return result;
      if ( (unsigned int)a4 < 8 )
      {
        v20 = 0;
LABEL_63:
        result.n128_u32[0] = 931135488;
        v61 = (int *)&a2[v20];
        v62 = (float *)(a1 + 4 * v20);
        v63 = (unsigned int)a4 - v20;
        do
        {
          v64 = *v61++;
          --v63;
          *v62++ = (float)v64 * 0.000015259;
        }
        while ( v63 );
        return result;
      }
      v20 = a4 & 0xFFFFFFF8;
      v56 = (int32x4_t *)(a2 + 4);
      v57 = (float32x4_t *)(a1 + 16);
      result = vdupq_n_s32(0x37800000u);
      v58 = v20;
      do
      {
        v59 = v56[-1];
        v60 = *v56;
        v56 += 2;
        v58 -= 8;
        v57[-1] = vmulq_f32(vcvtq_f32_s32(v59), result);
        *v57 = vmulq_f32(vcvtq_f32_s32(v60), result);
        v57 += 2;
      }
      while ( v58 );
      if ( v20 != a4 )
        goto LABEL_63;
      return result;
    case 10:
      if ( a4 >= 1 )
      {
        v21 = (unsigned int)a4;
        do
        {
          v22 = *(unsigned __int8 *)a2;
          a2 = (unsigned int *)((char *)a2 + 1);
          --v21;
          result.n128_f32[0] = (float)v22;
          *(float *)a1 = (float)v22;
          a1 += 4LL;
        }
        while ( v21 );
      }
      return result;
    case 11:
      if ( a4 < 1 )
        return result;
      if ( (unsigned int)a4 < 8 )
      {
        v23 = 0;
LABEL_69:
        v70 = (__int16 *)a2 + v23;
        v71 = (float *)(a1 + 4 * v23);
        v72 = (unsigned int)a4 - v23;
        do
        {
          v73 = *v70++;
          --v72;
          result.n128_f32[0] = (float)v73;
          *v71++ = (float)v73;
        }
        while ( v72 );
        return result;
      }
      v23 = a4 & 0xFFFFFFF8;
      v65 = (unsigned __int64 *)(a2 + 2);
      v66 = (float32x4_t *)(a1 + 16);
      v67 = v23;
      do
      {
        v68.n64_u64[0] = *(v65 - 1);
        v69.n64_u64[0] = *v65;
        v65 += 2;
        v67 -= 8;
        result = vcvtq_f32_s32(vmovl_s16(v68));
        v66[-1] = result;
        *v66 = vcvtq_f32_s32(vmovl_s16(v69));
        v66 += 2;
      }
      while ( v67 );
      if ( v23 != a4 )
        goto LABEL_69;
      return result;
    case 12:
      if ( a4 < 1 )
        return result;
      if ( (unsigned int)a4 < 8 )
      {
        v24 = 0;
LABEL_57:
        result.n128_u32[0] = 1191181824;
        v52 = (__int16 *)a2 + v24;
        v53 = (float *)(a1 + 4 * v24);
        v54 = (unsigned int)a4 - v24;
        do
        {
          v55 = *v52++;
          --v54;
          *v53++ = (float)v55 / 32767.0;
        }
        while ( v54 );
        return result;
      }
      v24 = a4 & 0xFFFFFFF8;
      v47 = (unsigned __int64 *)(a2 + 2);
      v48 = (float32x4_t *)(a1 + 16);
      result = vdupq_n_s32(0x46FFFE00u);
      v49 = v24;
      do
      {
        v50.n64_u64[0] = *(v47 - 1);
        v51.n64_u64[0] = *v47;
        v47 += 2;
        v49 -= 8;
        v48[-1] = vdivq_f32(vcvtq_f32_s32(vmovl_s16(v50)), result);
        *v48 = vdivq_f32(vcvtq_f32_s32(vmovl_s16(v51)), result);
        v48 += 2;
      }
      while ( v49 );
      if ( v24 != a4 )
        goto LABEL_57;
      return result;
    case 13:
      if ( a4 >= 1 )
      {
        v25 = (unsigned int)a4;
        do
        {
          v26 = *(char *)a2;
          a2 = (unsigned int *)((char *)a2 + 1);
          --v25;
          result.n128_f32[0] = (float)v26;
          *(float *)a1 = (float)v26;
          a1 += 4LL;
        }
        while ( v25 );
      }
      return result;
    case 14:
      if ( a4 >= 1 )
      {
        result.n128_u32[0] = 1123942400;
        v27 = (unsigned int)a4;
        do
        {
          v28 = *(char *)a2;
          a2 = (unsigned int *)((char *)a2 + 1);
          --v27;
          *(float *)a1 = (float)v28 / 127.0;
          a1 += 4LL;
        }
        while ( v27 );
      }
      return result;
    default:
      return result;
  }
}

