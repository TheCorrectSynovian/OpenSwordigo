/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000512C04
 * Mangled: sub_512C04
 * Demangled: sub_512C04
 *
 * Callers: 1
 *   0x0000000000506484  sub_506484
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6550  .fwrite
 *
 * Referenced strings: 68
 *   insn=0x0000000000512C20 string=0x0000000000512C24 "Y"
 *   insn=0x0000000000512C24 string=0x0000000000512C28 "("
 *   insn=0x0000000000512C6C string=0x0000000000512C70 "8"
 *   insn=0x0000000000512C70 string=0x00000000001F6550 "0'"
 *   insn=0x0000000000512C88 string=0x0000000000512C8C "1"
 *   insn=0x0000000000512C9C string=0x0000000000513378 "("
 *   insn=0x0000000000512CA4 string=0x0000000000512CA8 "e"
 *   insn=0x0000000000512CC0 string=0x0000000000512CC4 "#"
 *   insn=0x0000000000512CEC string=0x0000000000512CF0 "A4"
 *   insn=0x0000000000512D0C string=0x0000000000512D10 "\t}S\n}"
 *   insn=0x0000000000512D10 string=0x0000000000512D14 "\n}"
 *   insn=0x0000000000512D14 string=0x0000000000512D18 "}"
 *   insn=0x0000000000512D28 string=0x0000000000512D2C "\t"
 *   insn=0x0000000000512D34 string=0x0000000000512D38 "e"
 *   insn=0x0000000000512D88 string=0x0000000000512D8C "(e"
 *   insn=0x0000000000512DD0 string=0x0000000000512DD4 "!-"
 *   insn=0x0000000000512DF0 string=0x0000000000512DF4 "\t}S\n}"
 *   insn=0x0000000000512DF4 string=0x0000000000512DF8 "\n}"
 *   insn=0x0000000000512DF8 string=0x0000000000512DFC "}"
 *   insn=0x0000000000512E18 string=0x0000000000512E1C "(e"
 *   insn=0x0000000000512E68 string=0x0000000000512E6C "a("
 *   insn=0x0000000000512E6C string=0x0000000000512E70 "He"
 *   insn=0x0000000000512ED8 string=0x0000000000512EDC "\t}S\n}"
 *   insn=0x0000000000512EDC string=0x0000000000512EE0 "\n}"
 *   insn=0x0000000000512EE0 string=0x0000000000512EE4 "}"
 *   insn=0x0000000000512F00 string=0x0000000000512F04 "He"
 *   insn=0x0000000000512F48 string=0x0000000000512F4C "a!"
 *   insn=0x0000000000512F50 string=0x0000000000512F54 "!!"
 *   insn=0x0000000000512F68 string=0x0000000000512F6C ")!"
 *   insn=0x0000000000512F70 string=0x0000000000512F74 "?"
 *   insn=0x0000000000512F74 string=0x0000000000512F78 "@"
 *   insn=0x0000000000512F78 string=0x0000000000513140 "\n"
 *   insn=0x0000000000512F84 string=0x0000000000512F88 "ie"
 *   insn=0x0000000000512F90 string=0x0000000000512F94 "}"
 *   insn=0x0000000000512FA8 string=0x0000000000512FAC "i"
 *   insn=0x0000000000512FDC string=0x0000000000512FE0 "\"
 *   insn=0x0000000000512FEC string=0x0000000000512FF0 "A"
 *   insn=0x0000000000512FF8 string=0x0000000000512FFC "V"
 *   insn=0x0000000000512FFC string=0x00000000005132C4 "he"
 *   insn=0x0000000000513018 string=0x000000000051301C "\t}S\n}"
 *   insn=0x000000000051301C string=0x0000000000513020 "\n}"
 *   insn=0x0000000000513020 string=0x0000000000513024 "}"
 *   insn=0x0000000000513034 string=0x0000000000513038 "F"
 *   insn=0x0000000000513058 string=0x000000000051305C "he"
 *   insn=0x0000000000513074 string=0x0000000000513078 "6"
 *   insn=0x0000000000513090 string=0x0000000000513094 "/"
 *   insn=0x00000000005130A8 string=0x00000000005130AC "a"
 *   insn=0x00000000005130E4 string=0x00000000005130E8 "he"
 *   insn=0x000000000051312C string=0x0000000000513130 "A"
 *   insn=0x0000000000513134 string=0x0000000000513138 " "
 *   insn=0x0000000000513140 string=0x0000000000513144 "?"
 *   insn=0x000000000051314C string=0x0000000000513150 "(!"
 *   insn=0x0000000000513150 string=0x0000000000513154 "\t"
 *   insn=0x0000000000513168 string=0x000000000051316C "ie"
 *   insn=0x00000000005131C8 string=0x00000000005131CC "a"
 *   insn=0x00000000005131D0 string=0x00000000005131D4 "!"
 *   insn=0x00000000005131D4 string=0x00000000005131D8 "v"
 *   insn=0x00000000005131F4 string=0x00000000005131F8 "3"
 *   insn=0x0000000000513204 string=0x0000000000513208 "ie"
 *   insn=0x0000000000513210 string=0x0000000000513214 "}"
 *   insn=0x000000000051326C string=0x0000000000513270 "A"
 *   insn=0x0000000000513278 string=0x000000000051327C "V"
 *   insn=0x0000000000513298 string=0x000000000051329C "}S"
 *   insn=0x00000000005132B8 string=0x00000000005132BC "a"
 *   insn=0x0000000000513308 string=0x000000000051330C "a"
 *   insn=0x000000000051335C string=0x0000000000513360 "|"
 *   insn=0x0000000000513380 string=0x0000000000513384 "!"
 *   insn=0x00000000005133A8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_512C04(FILE *s, unsigned int a2, int *a3, int a4, char a5)
{
  char v5; // w20
  unsigned int v9; // w26
  unsigned int v10; // w27
  unsigned int v11; // w28
  size_t v13; // x24
  size_t v14; // x8
  __int64 result; // x0
  size_t v16; // x24
  size_t v17; // x8
  int v18; // w8
  size_t v19; // x24
  size_t v20; // x8
  size_t v21; // x24
  size_t v22; // x8
  int v23; // w8
  size_t v24; // x24
  size_t v25; // x8
  size_t v26; // x24
  size_t v27; // x8
  int v28; // w8
  size_t v29; // x24
  size_t v30; // x8
  int v31; // w8
  int *v32; // x23
  unsigned int v33; // w22
  size_t v34; // x21
  size_t v35; // x8
  __int64 v36; // x21
  int v37; // t1
  __int64 v38; // x22
  size_t v39; // x21
  size_t v40; // x8
  size_t v41; // x21
  size_t v42; // x8
  const void *v43; // x23
  unsigned int v44; // w22
  size_t v45; // x21
  size_t v46; // x8
  __int16 *v47; // x23
  unsigned int v48; // w22
  size_t v49; // x21
  size_t v50; // x8
  __int64 v51; // x21
  __int16 v52; // t1
  size_t v53; // x21
  size_t v54; // x8
  bool v55; // w20
  int ptr; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v57; // [xsp+8h] [xbp-58h]

  v5 = a2;
  v9 = a2 >> 8;
  v10 = HIWORD(a2);
  v11 = HIBYTE(a2);
  v57 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ptr = a2;
  v13 = fwrite(&ptr, 4u, 1u, s);
  ptr = 0;
  v14 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v13 != 1 )
    return result;
  if ( v14 != 1 )
    return result;
  ptr = 9000;
  v16 = fwrite(&ptr, 4u, 1u, s);
  ptr = 4;
  v17 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v16 != 1 || v17 != 1 )
    return result;
  v18 = *a3;
  LOBYTE(ptr) = *a3;
  BYTE1(ptr) = BYTE1(v18);
  BYTE2(ptr) = BYTE2(v18);
  HIBYTE(ptr) = HIBYTE(v18);
  if ( fwrite(&ptr, 4u, 1u, s) != 1 )
    return 0;
  ptr = -2147474648;
  v19 = fwrite(&ptr, 4u, 1u, s);
  ptr = 0;
  v20 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v19 != 1 )
    return result;
  if ( v20 != 1 )
    return result;
  ptr = 9001;
  v21 = fwrite(&ptr, 4u, 1u, s);
  ptr = 4;
  v22 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v21 != 1 || v22 != 1 )
    return result;
  v23 = a3[1];
  ptr = v23;
  if ( fwrite(&ptr, 4u, 1u, s) != 1 )
    return 0;
  ptr = -2147474647;
  v24 = fwrite(&ptr, 4u, 1u, s);
  ptr = 0;
  v25 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v24 != 1 )
    return result;
  if ( v25 != 1 )
    return result;
  ptr = 9002;
  v26 = fwrite(&ptr, 4u, 1u, s);
  ptr = 4;
  v27 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v26 != 1 || v27 != 1 )
    return result;
  v28 = a3[2];
  ptr = v28;
  if ( fwrite(&ptr, 4u, 1u, s) != 1 )
    return 0;
  ptr = -2147474646;
  v29 = fwrite(&ptr, 4u, 1u, s);
  ptr = 0;
  v30 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v29 != 1 || v30 != 1 )
    return result;
  if ( (a5 & 1) == 0 )
  {
    v38 = *((_QWORD *)a3 + 2);
    ptr = 9003;
    v39 = fwrite(&ptr, 4u, 1u, s);
    ptr = 4;
    v40 = fwrite(&ptr, 4u, 1u, s);
    result = 0;
    if ( v39 != 1 || v40 != 1 )
      return result;
    LOWORD(ptr) = v38;
    BYTE2(ptr) = BYTE2(v38);
    HIBYTE(ptr) = BYTE3(v38);
    if ( fwrite(&ptr, 4u, 1u, s) == 1 )
    {
      ptr = -2147474645;
      v41 = fwrite(&ptr, 4u, 1u, s);
      ptr = 0;
      v42 = fwrite(&ptr, 4u, 1u, s);
      result = 0;
      if ( v41 == 1 && v42 == 1 )
        goto LABEL_52;
      return result;
    }
    return 0;
  }
  v31 = *a3;
  if ( (unsigned int)*a3 > 0xE )
    goto LABEL_52;
  if ( ((1 << v31) & 0x3F6) != 0 )
  {
    v32 = (int *)*((_QWORD *)a3 + 2);
    if ( v32 )
    {
      v33 = ((unsigned int)a3[2] >> 2) * a4;
      ptr = 9003;
      v34 = fwrite(&ptr, 4u, 1u, s);
      LOWORD(ptr) = 4 * v33;
      BYTE2(ptr) = v33 >> 14;
      HIBYTE(ptr) = v33 >> 22;
      v35 = fwrite(&ptr, 4u, 1u, s);
      result = 0;
      if ( v34 != 1 || v35 != 1 )
        return result;
      if ( v33 )
      {
        v36 = v33;
        LOBYTE(v33) = 1;
        do
        {
          v37 = *v32++;
          ptr = v37;
          --v36;
          v33 = (unsigned __int8)v33 & (fwrite(&ptr, 4u, 1u, s) == 1);
        }
        while ( v36 );
        if ( !v33 )
          return 0;
      }
      goto LABEL_50;
    }
LABEL_52:
    LOBYTE(ptr) = v5;
    BYTE1(ptr) = v9;
    BYTE2(ptr) = v10;
    HIBYTE(ptr) = v11 | 0x80;
    v55 = fwrite(&ptr, 4u, 1u, s) == 1;
    ptr = 0;
    return v55 & (unsigned __int8)(fwrite(&ptr, 4u, 1u, s) == 1);
  }
  if ( ((1 << v31) & 0x1808) != 0 )
  {
    v47 = (__int16 *)*((_QWORD *)a3 + 2);
    if ( v47 )
    {
      v48 = ((unsigned int)a3[2] >> 1) * a4;
      ptr = 9003;
      v49 = fwrite(&ptr, 4u, 1u, s);
      LOWORD(ptr) = 2 * v48;
      BYTE2(ptr) = v48 >> 15;
      HIBYTE(ptr) = v48 >> 23;
      v50 = fwrite(&ptr, 4u, 1u, s);
      result = 0;
      if ( v49 != 1 || v50 != 1 )
        return result;
      if ( v48 )
      {
        v51 = v48;
        LOBYTE(v48) = 1;
        do
        {
          v52 = *v47++;
          LOWORD(ptr) = v52;
          --v51;
          v48 = (unsigned __int8)v48 & (fwrite(&ptr, 2u, 1u, s) == 1);
        }
        while ( v51 );
        if ( !v48 )
          return 0;
      }
      goto LABEL_50;
    }
    goto LABEL_52;
  }
  if ( ((1 << v31) & 0x6400) == 0 )
    goto LABEL_52;
  v43 = (const void *)*((_QWORD *)a3 + 2);
  if ( !v43 )
    goto LABEL_52;
  v44 = a3[2] * a4;
  ptr = 9003;
  v45 = fwrite(&ptr, 4u, 1u, s);
  ptr = v44;
  v46 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v45 != 1 || v46 != 1 )
    return result;
  if ( v44 && fwrite(v43, v44, 1u, s) != 1 )
    return 0;
LABEL_50:
  ptr = -2147474645;
  v53 = fwrite(&ptr, 4u, 1u, s);
  ptr = 0;
  v54 = fwrite(&ptr, 4u, 1u, s);
  result = 0;
  if ( v53 == 1 && v54 == 1 )
    goto LABEL_52;
  return result;
}

