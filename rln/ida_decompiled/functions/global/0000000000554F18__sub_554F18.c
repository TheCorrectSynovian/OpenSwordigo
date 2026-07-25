/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000554F18
 * Mangled: sub_554F18
 * Demangled: sub_554F18
 *
 * Callers: 2
 *   0x0000000000555328  sub_555328
 *   0x0000000000555570  sub_555570
 *
 * Callees: 4
 *   0x0000000000202DD0  .wcslen
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054F6AC  sub_54F6AC
 *   0x0000000000554B08  sub_554B08
 *
 * Referenced strings: 78
 *   insn=0x0000000000554F60 string=0x0000000000554F64 "!x"
 *   insn=0x0000000000554F68 string=0x0000000000554F6C "!"
 *   insn=0x0000000000554F70 string=0x0000000000554F74 "_`!"
 *   insn=0x0000000000554F98 string=0x0000000000554F9C "?"
 *   insn=0x0000000000554FB8 string=0x0000000000554FBC ""
 *   insn=0x0000000000554FBC string=0x0000000000554FC0 "\t"
 *   insn=0x0000000000554FC0 string=0x0000000000554FE4 "A{s"
 *   insn=0x0000000000554FC4 string=0x0000000000554FC8 "B"
 *   insn=0x0000000000554FC8 string=0x0000000000554FCC "@"
 *   insn=0x0000000000554FD0 string=0x0000000000554FD4 "@"
 *   insn=0x0000000000554FD4 string=0x0000000000554FD8 "s"
 *   insn=0x0000000000554FE8 string=0x0000000000554FEC """
 *   insn=0x0000000000554FF4 string=0x0000000000554FF8 "a"
 *   insn=0x0000000000554FF8 string=0x0000000000554FC4 """
 *   insn=0x0000000000554FFC string=0x0000000000555000 "s"
 *   insn=0x0000000000555004 string=0x0000000000555008 "{"
 *   insn=0x0000000000555010 string=0x0000000000555014 ""
 *   insn=0x0000000000555018 string=0x000000000055501C " "
 *   insn=0x000000000055501C string=0x0000000000555040 "`"
 *   insn=0x0000000000555024 string=0x0000000000555028 "?"
 *   insn=0x000000000055502C string=0x0000000000555030 "!"
 *   insn=0x000000000055502C string=0x0000000000555320 "i"
 *   insn=0x0000000000555050 string=0x0000000000555054 "?` "
 *   insn=0x000000000055505C string=0x0000000000555060 "@"
 *   insn=0x0000000000555060 string=0x0000000000555064 "["
 *   insn=0x0000000000555068 string=0x000000000055506C "9"
 *   insn=0x000000000055506C string=0x0000000000555070 "?"
 *   insn=0x0000000000555070 string=0x0000000000555074 "A"
 *   insn=0x0000000000555074 string=0x0000000000555078 "9"
 *   insn=0x000000000055507C string=0x0000000000555080 ";"
 *   insn=0x0000000000555084 string=0x0000000000555088 " "
 *   insn=0x00000000005550A8 string=0x00000000005550AC "_"
 *   insn=0x00000000005550B0 string=0x00000000005550B4 "?"
 *   insn=0x00000000005550C8 string=0x00000000005550CC " \n"
 *   insn=0x00000000005550D4 string=0x00000000005550D8 ""
 *   insn=0x00000000005550E0 string=0x00000000005550E4 "!"
 *   insn=0x00000000005550E8 string=0x00000000005550EC "I"
 *   insn=0x00000000005550F0 string=0x00000000005550F4 "%"
 *   insn=0x00000000005550FC string=0x0000000000555100 "?"
 *   insn=0x0000000000555100 string=0x0000000000555104 "B"
 *   insn=0x0000000000555108 string=0x000000000055510C "Bh{"
 *   insn=0x000000000055510C string=0x0000000000555110 "_"
 *   insn=0x0000000000555114 string=0x0000000000555118 "s"
 *   insn=0x0000000000555114 string=0x0000000000555234 "!"
 *   insn=0x000000000055512C string=0x0000000000555130 ""
 *   insn=0x0000000000555140 string=0x0000000000555160 "9"
 *   insn=0x0000000000555148 string=0x000000000055514C "?"
 *   insn=0x0000000000555150 string=0x0000000000555154 "!"
 *   insn=0x0000000000555160 string=0x0000000000555164 "{"
 *   insn=0x0000000000555164 string=0x0000000000555168 " "
 *   insn=0x000000000055516C string=0x0000000000555170 " "
 *   insn=0x0000000000555174 string=0x0000000000555178 "<"
 *   insn=0x000000000055517C string=0x0000000000555180 "_"
 *   insn=0x000000000055518C string=0x0000000000555190 "?"
 *   insn=0x0000000000555190 string=0x0000000000555194 ""\n"
 *   insn=0x0000000000555194 string=0x0000000000555198 " "
 *   insn=0x00000000005551A8 string=0x00000000005551AC "?"
 *   insn=0x00000000005551AC string=0x00000000005551B0 "a"
 *   insn=0x00000000005551BC string=0x00000000005551C0 " "
 *   insn=0x0000000000555200 string=0x0000000000555204 ";"
 *   insn=0x0000000000555214 string=0x0000000000555218 "?"
 *   insn=0x000000000055521C string=0x0000000000555220 "&"
 *   insn=0x0000000000555248 string=0x000000000055524C "?"
 *   insn=0x0000000000555250 string=0x0000000000555254 "!"
 *   insn=0x0000000000555254 string=0x0000000000555258 "?"
 *   insn=0x000000000055527C string=0x0000000000555280 "!"
 *   insn=0x0000000000555290 string=0x0000000000555294 "!(@"
 *   insn=0x0000000000555294 string=0x0000000000555298 " "
 *   insn=0x00000000005552B4 string=0x00000000005552B8 "a"
 *   insn=0x00000000005552C4 string=0x00000000005552C8 "V"
 *   insn=0x00000000005552D8 string=0x00000000005552DC "!$@"
 *   insn=0x00000000005552DC string=0x00000000005552E0 " "
 *   insn=0x00000000005552E8 string=0x00000000005552EC "!$@"
 *   insn=0x00000000005552EC string=0x00000000005552F0 " "
 *   insn=0x00000000005552FC string=0x0000000000555300 "!$@"
 *   insn=0x0000000000555300 string=0x0000000000555304 " "
 *   insn=0x0000000000555314 string=0x0000000000555318 "a"
 *   insn=0x0000000000555320 string=0x0000000000555324 "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_554F18(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        _DWORD *a10)
{
  void *v12; // x25
  int v13; // w20
  __int64 v14; // x20
  int v15; // w28
  __int64 v16; // x19
  unsigned __int64 v17; // x27
  unsigned int v18; // w2
  unsigned __int64 v19; // x19
  unsigned __int64 v20; // x1
  __int64 v21; // x25
  __int64 *v22; // x20
  unsigned __int64 v23; // x25
  _QWORD *v24; // x0
  __int64 v25; // x27
  int v26; // w6
  _QWORD *v27; // x0
  int v28; // w28
  int v29; // w1
  unsigned __int64 v30; // x1
  __int64 v31; // x7
  __int64 v32; // x0
  unsigned __int64 v33; // x1
  int *v34; // x1
  int v35; // w0
  int *v37; // x1
  int *v38; // x1
  int v39; // w1
  int v40; // w2
  bool v41; // cc
  int v42; // w22
  __int64 v43; // [xsp+0h] [xbp+0h] BYREF
  _DWORD *v44; // [xsp+68h] [xbp+68h]
  _QWORD *v45; // [xsp+70h] [xbp+70h] BYREF
  __int64 v46; // [xsp+78h] [xbp+78h]
  _QWORD *v47; // [xsp+80h] [xbp+80h] BYREF
  __int64 v48; // [xsp+88h] [xbp+88h]

  v44 = a6;
  v47 = a2;
  v48 = a3;
  v45 = a4;
  v46 = a5;
  v12 = sub_54F6AC(a9 + 208);
  v13 = sub_554B08((__int64)&v47);
  if ( (v13 == -1) == ((unsigned int)sub_554B08((__int64)&v45) == -1) )
    goto LABEL_46;
  v14 = 2 * a8;
  v15 = sub_554B08((__int64)&v47);
  if ( !(2 * a8) )
    goto LABEL_46;
  v16 = 0;
  v17 = 0;
  do
  {
    while ( 1 )
    {
      v18 = **(_DWORD **)(a7 + 8 * v16);
      if ( v15 == v18 || v15 == (*(unsigned int (__fastcall **)(void *, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v18) )
        break;
      if ( ++v16 == v14 )
        goto LABEL_8;
    }
    *((_DWORD *)&v43 + v17++) = v16++;
  }
  while ( v16 != v14 );
LABEL_8:
  v19 = v17;
  if ( v17 )
  {
    if ( v47 )
    {
      v20 = v47[2];
      if ( v20 >= v47[3] )
        sub_54D8C4((__int64)v47);
      else
        v47[2] = v20 + 4;
      LODWORD(v48) = -1;
    }
    v21 = 0;
    v22 = &v43;
    do
    {
      *(&v43 + v21) = wcslen(*(const wchar_t **)(a7 + 8LL * *((int *)&v43 + v21)));
      ++v21;
    }
    while ( v21 != v17 );
    v23 = 1;
    v24 = v47;
    v25 = 4;
  }
  else
  {
LABEL_46:
    v23 = 0;
    v19 = 0;
    v22 = 0;
    v24 = v47;
    v25 = 0;
  }
  if ( !v24 )
    goto LABEL_36;
  while ( 2 )
  {
    v26 = v48;
    if ( (_DWORD)v48 == -1 )
    {
      v38 = (int *)v24[2];
      if ( (unsigned __int64)v38 >= v24[3] )
        v39 = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 72LL))(v24);
      else
        v39 = *v38;
      if ( v39 == -1 )
      {
        v47 = 0;
        break;
      }
      v27 = v45;
      v28 = 0;
      LODWORD(v48) = v39;
      if ( !v45 )
        goto LABEL_21;
      goto LABEL_19;
    }
    v27 = v45;
    v28 = 0;
    if ( v45 )
    {
LABEL_19:
      v29 = 0;
      if ( (_DWORD)v46 == -1 )
        goto LABEL_38;
LABEL_20:
      if ( v29 == v28 )
        goto LABEL_42;
      goto LABEL_21;
    }
LABEL_23:
    if ( !v19 )
      goto LABEL_44;
    v30 = 0;
    v31 = 0;
    do
    {
      while ( v23 >= v22[v30] )
      {
        ++v31;
        ++v30;
LABEL_26:
        if ( v19 <= v30 )
          goto LABEL_30;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a7 + 8LL * *((int *)&v43 + v30)) + v25) == v26 )
      {
        ++v30;
        goto LABEL_26;
      }
      v32 = v22[--v19];
      *((_DWORD *)&v43 + v30) = *((_DWORD *)&v43 + v19);
      v22[v30] = v32;
    }
    while ( v19 > v30 );
LABEL_30:
    if ( v19 == v31 )
      goto LABEL_42;
    v24 = v47;
    if ( v47 )
    {
      v33 = v47[2];
      if ( v33 >= v47[3] )
      {
        (*(void (**)(void))(*v47 + 80LL))();
        v24 = v47;
      }
      else
      {
        v47[2] = v33 + 4;
      }
      LODWORD(v48) = -1;
    }
    ++v23;
    v25 += 4;
    if ( v24 )
      continue;
    break;
  }
LABEL_36:
  v27 = v45;
  if ( !v45 )
    goto LABEL_42;
  v28 = 1;
  v29 = 0;
  if ( (_DWORD)v46 != -1 )
    goto LABEL_20;
LABEL_38:
  v34 = (int *)v27[2];
  if ( (unsigned __int64)v34 >= v27[3] )
    v35 = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 72LL))(v27);
  else
    v35 = *v34;
  if ( v35 == -1 )
  {
    v45 = 0;
    v29 = 1;
    goto LABEL_20;
  }
  LODWORD(v46) = v35;
  if ( v28 )
  {
LABEL_21:
    if ( v47 )
    {
      v26 = v48;
      if ( (_DWORD)v48 == -1 )
      {
        v37 = (int *)v47[2];
        if ( (unsigned __int64)v37 >= v47[3] )
          v26 = (*(__int64 (**)(void))(*v47 + 72LL))();
        else
          v26 = *v37;
        if ( v26 == -1 )
          v47 = 0;
        else
          LODWORD(v48) = v26;
      }
    }
    else
    {
      v26 = -1;
    }
    goto LABEL_23;
  }
LABEL_42:
  if ( v19 == 1 )
  {
    if ( *v22 == v23 )
      goto LABEL_64;
    goto LABEL_44;
  }
  if ( v19 != 2 || *v22 != v23 && v22[1] != v23 )
  {
LABEL_44:
    *a10 |= 4u;
    return v47;
  }
LABEL_64:
  v40 = v43;
  v41 = a8 > (int)v43;
  v42 = v43 - a8;
  if ( !v41 )
    v40 = v42;
  *v44 = v40;
  return v47;
}

