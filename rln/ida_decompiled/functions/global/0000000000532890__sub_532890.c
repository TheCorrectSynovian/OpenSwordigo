/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000532890
 * Mangled: sub_532890
 * Demangled: sub_532890
 *
 * Callers: 1
 *   0x0000000000533538  sub_533538
 *
 * Callees: 4
 *   0x0000000000203230  .strlen
 *   0x000000000052B4A0  sub_52B4A0
 *   0x000000000052D354  sub_52D354
 *   0x0000000000532808  sub_532808
 *
 * Referenced strings: 69
 *   insn=0x00000000005328D8 string=0x00000000005328DC "!x"
 *   insn=0x00000000005328E0 string=0x00000000005328E4 "!"
 *   insn=0x00000000005328E8 string=0x00000000005328EC "_`!"
 *   insn=0x0000000000532914 string=0x0000000000532918 "?"
 *   insn=0x0000000000532928 string=0x000000000053292C "7"
 *   insn=0x0000000000532934 string=0x0000000000532938 "\t"
 *   insn=0x0000000000532938 string=0x000000000053295C "azt"
 *   insn=0x000000000053293C string=0x0000000000532940 "c@"
 *   insn=0x0000000000532940 string=0x0000000000532944 "`"
 *   insn=0x0000000000532944 string=0x0000000000532948 "?"
 *   insn=0x0000000000532948 string=0x000000000053294C " "
 *   insn=0x0000000000532954 string=0x0000000000532958 "`"
 *   insn=0x0000000000532958 string=0x0000000000532984 "_"
 *   insn=0x0000000000532960 string=0x0000000000532964 "!"
 *   insn=0x0000000000532964 string=0x0000000000532968 "?"
 *   insn=0x000000000053296C string=0x000000000053293C "c"
 *   insn=0x0000000000532978 string=0x000000000053297C "Z"
 *   insn=0x0000000000532990 string=0x0000000000532AA8 "_"
 *   insn=0x0000000000532994 string=0x0000000000532998 ";"
 *   insn=0x0000000000532998 string=0x000000000053299C "`"
 *   insn=0x000000000053299C string=0x00000000005329A0 "$B"
 *   insn=0x00000000005329A8 string=0x00000000005329AC "{"
 *   insn=0x00000000005329AC string=0x00000000005329B0 "`"
 *   insn=0x00000000005329B4 string=0x00000000005329B8 "?"
 *   insn=0x00000000005329B8 string=0x00000000005329BC "9"
 *   insn=0x00000000005329C0 string=0x00000000005329C4 "#"
 *   insn=0x00000000005329D4 string=0x00000000005329D8 "_"
 *   insn=0x00000000005329D8 string=0x00000000005329DC "b"
 *   insn=0x00000000005329DC string=0x00000000005329E0 "B"
 *   insn=0x0000000000532A18 string=0x0000000000532A1C "?"
 *   insn=0x0000000000532A20 string=0x0000000000532A24 ""
 *   insn=0x0000000000532A24 string=0x0000000000532A28 "\t"
 *   insn=0x0000000000532A2C string=0x0000000000532A30 "_"
 *   insn=0x0000000000532A34 string=0x0000000000532A38 "Z"
 *   insn=0x0000000000532A34 string=0x0000000000532A94 "{"
 *   insn=0x0000000000532A38 string=0x0000000000532A3C "_"
 *   insn=0x0000000000532A48 string=0x0000000000532AA0 "_"
 *   insn=0x0000000000532A4C string=0x0000000000532A50 "y"
 *   insn=0x0000000000532A54 string=0x0000000000532A58 "a"
 *   insn=0x0000000000532A58 string=0x0000000000532A5C ""ht8"
 *   insn=0x0000000000532A64 string=0x0000000000532A68 "?"
 *   insn=0x0000000000532A6C string=0x0000000000532A2C "!"
 *   insn=0x0000000000532A74 string=0x0000000000532A78 "?"
 *   insn=0x0000000000532A78 string=0x0000000000532A7C """
 *   insn=0x0000000000532A7C string=0x0000000000532A80 " "
 *   insn=0x0000000000532A88 string=0x0000000000532A8C "_"
 *   insn=0x0000000000532A8C string=0x0000000000532A90 "A"
 *   insn=0x0000000000532A94 string=0x0000000000532A98 "_"
 *   insn=0x0000000000532AA8 string=0x0000000000532AAC "!"
 *   insn=0x0000000000532AB0 string=0x0000000000532AB4 " "
 *   insn=0x0000000000532ABC string=0x0000000000532AC0 "?"
 *   insn=0x0000000000532AC4 string=0x0000000000532AC8 "!"
 *   insn=0x0000000000532AC4 string=0x0000000000532BFC ")"
 *   insn=0x0000000000532AE0 string=0x0000000000532AE4 "{"
 *   insn=0x0000000000532AF4 string=0x0000000000532AF8 ")"
 *   insn=0x0000000000532AFC string=0x0000000000532B00 "B"
 *   insn=0x0000000000532B08 string=0x0000000000532B0C "?"
 *   insn=0x0000000000532B20 string=0x0000000000532B24 "_"
 *   insn=0x0000000000532B28 string=0x0000000000532B2C "|kt86"
 *   insn=0x0000000000532B2C string=0x0000000000532B30 "6"
 *   insn=0x0000000000532B34 string=0x0000000000532B38 "@"
 *   insn=0x0000000000532B84 string=0x0000000000532B88 "!$@"
 *   insn=0x0000000000532B88 string=0x0000000000532B8C " "
 *   insn=0x0000000000532B94 string=0x0000000000532B98 "a"
 *   insn=0x0000000000532BA8 string=0x0000000000532BAC "B(@"
 *   insn=0x0000000000532BAC string=0x0000000000532BB0 "@"
 *   insn=0x0000000000532BCC string=0x0000000000532BD0 "#"
 *   insn=0x0000000000532BD0 string=0x0000000000532BD4 "?"
 *   insn=0x0000000000532BD8 string=0x0000000000532BF4 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_532890(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10)
{
  void *v12; // x27
  int v13; // w20
  int v14; // w25
  __int64 v15; // x20
  unsigned __int64 v16; // x26
  __int64 v17; // x20
  unsigned __int64 v18; // x27
  size_t v19; // x25
  int v20; // w0
  size_t v21; // x0
  unsigned __int64 v22; // x2
  int v23; // w27
  unsigned __int64 v24; // x27
  int v25; // w1
  int v26; // w2
  unsigned __int8 *v27; // x1
  int v28; // w0
  unsigned __int64 v29; // x1
  int v30; // w23
  size_t v31; // x20
  const char *v32; // x27
  size_t i; // x19
  int v34; // w28
  int v35; // w28
  __int64 v37; // x1
  unsigned __int64 v38; // x1
  __int64 v39; // [xsp+0h] [xbp+0h]
  _DWORD *v40; // [xsp+60h] [xbp+60h]
  __int64 v41; // [xsp+68h] [xbp+68h]
  _QWORD v42[2]; // [xsp+70h] [xbp+70h] BYREF
  _QWORD *v43; // [xsp+80h] [xbp+80h] BYREF
  __int64 v44; // [xsp+88h] [xbp+88h]

  v43 = a2;
  v44 = a3;
  v40 = a6;
  v42[0] = a4;
  v42[1] = a5;
  v12 = sub_52D354(a9 + 208);
  v13 = sub_532808((__int64)&v43);
  if ( (v13 == -1) == ((unsigned int)sub_532808((__int64)v42) == -1) )
    goto LABEL_40;
  v14 = (unsigned __int8)sub_532808((__int64)&v43);
  if ( !a8 )
    goto LABEL_40;
  v15 = 0;
  v16 = 0;
  do
  {
    while ( **(unsigned __int8 **)(a7 + 8 * v15) != v14
         && v14 != (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12) )
    {
      if ( ++v15 == a8 )
        goto LABEL_8;
    }
    *((_DWORD *)&v39 + v16++) = v15++;
  }
  while ( v15 != a8 );
LABEL_8:
  v17 = 0;
  if ( v16 > 1 )
  {
LABEL_9:
    v18 = 1;
    v19 = strlen(*(const char **)(a7 + 8LL * (int)v39));
    do
    {
      v20 = *((_DWORD *)&v39 + v18++);
      v21 = strlen(*(const char **)(a7 + 8LL * v20));
      if ( v19 > v21 )
        v19 = v21;
    }
    while ( v18 < v16 );
    if ( v43 )
    {
      v22 = v43[2];
      if ( v22 >= v43[3] )
        (*(void (__fastcall **)(_QWORD *))(*v43 + 80LL))(v43);
      else
        v43[2] = v22 + 1;
      LODWORD(v44) = -1;
    }
    if ( ++v17 >= v19 )
      goto LABEL_40;
    v23 = sub_532808((__int64)&v43);
    if ( (v23 == -1) == ((unsigned int)sub_532808((__int64)v42) == -1) )
      goto LABEL_40;
    v24 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = *(unsigned __int8 *)(*(_QWORD *)(a7 + 8LL * *((int *)&v39 + v24)) + v17);
        if ( v43 )
          break;
        v25 = 255;
LABEL_21:
        if ( v26 != v25 )
          goto LABEL_22;
LABEL_28:
        if ( v16 <= ++v24 )
        {
LABEL_29:
          if ( v16 <= 1 )
            goto LABEL_30;
          goto LABEL_9;
        }
      }
      if ( (_DWORD)v44 != -1 )
      {
        v25 = (unsigned __int8)v44;
        goto LABEL_21;
      }
      v27 = (unsigned __int8 *)v43[2];
      if ( (unsigned __int64)v27 < v43[3] )
      {
        v28 = *v27;
        goto LABEL_27;
      }
      v37 = *v43;
      v41 = *(unsigned __int8 *)(*(_QWORD *)(a7 + 8LL * *((int *)&v39 + v24)) + v17);
      v28 = (*(__int64 (__fastcall **)(_QWORD *))(v37 + 72))(v43);
      v26 = v41;
      if ( v28 == -1 )
      {
        v43 = 0;
        v25 = 255;
        goto LABEL_21;
      }
LABEL_27:
      LODWORD(v44) = v28;
      if ( v26 == (unsigned __int8)v28 )
        goto LABEL_28;
LABEL_22:
      --v16;
      *((_DWORD *)&v39 + v24) = *((_DWORD *)&v39 + v16);
      if ( v16 <= v24 )
        goto LABEL_29;
    }
  }
LABEL_30:
  if ( v16 != 1 )
    goto LABEL_40;
  if ( v43 )
  {
    v29 = v43[2];
    if ( v29 >= v43[3] )
      sub_52B4A0((__int64)v43);
    else
      v43[2] = v29 + 1;
    LODWORD(v44) = -1;
  }
  v30 = v39;
  v31 = v17 + 1;
  v32 = *(const char **)(a7 + 8LL * (int)v39);
  for ( i = strlen(v32); i > v31; ++v31 )
  {
    v34 = sub_532808((__int64)&v43);
    if ( (v34 == -1) == ((unsigned int)sub_532808((__int64)v42) == -1) )
      break;
    v35 = (unsigned __int8)v32[v31];
    if ( v35 != (unsigned __int8)sub_532808((__int64)&v43) )
      break;
    if ( v43 )
    {
      v38 = v43[2];
      if ( v38 >= v43[3] )
        sub_52B4A0((__int64)v43);
      else
        v43[2] = v38 + 1;
      LODWORD(v44) = -1;
    }
  }
  if ( v31 == i )
    *v40 = v30;
  else
LABEL_40:
    *a10 |= 4u;
  return v43;
}

