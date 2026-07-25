/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D9B4
 * Mangled: __gxx_personality_v0
 * Demangled: __gxx_personality_v0
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F3FF0  std::unexpected(void)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FE620  .abort
 *   0x0000000000203770  std::terminate(void)
 *   0x000000000051D59C  sub_51D59C
 *   0x000000000051D5DC  sub_51D5DC
 *   0x000000000051D6EC  sub_51D6EC
 *   0x000000000051D768  sub_51D768
 *   0x000000000051D874  sub_51D874
 *   0x000000000056FCFC  sub_56FCFC
 *   0x0000000000580074  sub_580074
 *   0x00000000005800D4  sub_5800D4
 *   0x00000000005800E8  sub_5800E8
 *   0x00000000005800F0  sub_5800F0
 *
 * Referenced strings: 83
 *   insn=0x000000000051D9B8 string=0x000000000051D9BC "`"
 *   insn=0x000000000051DA08 string=0x000000000051DA18 "@"
 *   insn=0x000000000051DA20 string=0x000000000051DA24 "?"
 *   insn=0x000000000051DA2C string=0x000000000051DA30 "\t"
 *   insn=0x000000000051DA30 string=0x000000000051DA34 "`"
 *   insn=0x000000000051DA34 string=0x000000000051DA38 "z"
 *   insn=0x000000000051DA3C string=0x000000000051DA40 "s"
 *   insn=0x000000000051DA44 string=0x000000000051DA54 "6"
 *   insn=0x000000000051DA54 string=0x000000000051DAB8 "3"
 *   insn=0x000000000051DA58 string=0x000000000051DEEC "AX"
 *   insn=0x000000000051DA68 string=0x000000000051DA6C "b~@"
 *   insn=0x000000000051DA70 string=0x000000000051DA74 "!"
 *   insn=0x000000000051DAC4 string=0x000000000051DAC8 "("
 *   insn=0x000000000051DAF8 string=0x000000000051DAFC " "
 *   insn=0x000000000051DB2C string=0x000000000051DB30 "i"
 *   insn=0x000000000051DB38 string=0x000000000051DB3C "?"
 *   insn=0x000000000051DB44 string=0x000000000051DB48 "_"
 *   insn=0x000000000051DB5C string=0x000000000051DB60 "|"
 *   insn=0x000000000051DB84 string=0x000000000051DB88 "|"
 *   insn=0x000000000051DBAC string=0x000000000051DBB0 "|"
 *   insn=0x000000000051DBE0 string=0x000000000051DBE4 "C"
 *   insn=0x000000000051DBE4 string=0x000000000051DBE8 "`"
 *   insn=0x000000000051DBEC string=0x000000000051DBF0 "!"
 *   insn=0x000000000051DBF4 string=0x000000000051DBF8 "c"
 *   insn=0x000000000051DBF8 string=0x000000000051DBFC "`"
 *   insn=0x000000000051DC00 string=0x000000000051DC04 " "
 *   insn=0x000000000051DC04 string=0x000000000051DC08 "_"
 *   insn=0x000000000051DC08 string=0x000000000051DC0C "b"
 *   insn=0x000000000051DC10 string=0x000000000051DC14 " "
 *   insn=0x000000000051DC20 string=0x000000000051DC24 "6"
 *   insn=0x000000000051DC50 string=0x000000000051DC54 "f"
 *   insn=0x000000000051DC5C string=0x000000000051DC60 "_"
 *   insn=0x000000000051DC60 string=0x000000000051DC64 "#"
 *   insn=0x000000000051DC64 string=0x000000000051DC68 "`"
 *   insn=0x000000000051DC68 string=0x000000000051DC6C "_"
 *   insn=0x000000000051DC78 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000051DC8C string=0x000000000051DC90 "z"
 *   insn=0x000000000051DC98 string=0x000000000051DC9C "z"
 *   insn=0x000000000051DC98 string=0x000000000051DCB0 "`"
 *   insn=0x000000000051DC9C string=0x000000000051DCA8 "@"
 *   insn=0x000000000051DCA0 string=0x000000000051DCA4 "R"
 *   insn=0x000000000051DCB0 string=0x000000000051DCB4 "z"
 *   insn=0x000000000051DCC0 string=0x000000000051DCC4 " "
 *   insn=0x000000000051DCCC string=0x000000000051DCD0 "6"
 *   insn=0x000000000051DCD0 string=0x000000000051DCD4 ";"
 *   insn=0x000000000051DCD0 string=0x000000000051DE94 " "
 *   insn=0x000000000051DCD4 string=0x000000000051DED8 " "
 *   insn=0x000000000051DCD8 string=0x000000000051DCDC " "
 *   insn=0x000000000051DCE0 string=0x000000000051DCE4 "`"
 *   insn=0x000000000051DCFC string=0x000000000059CA8C "("
 *   insn=0x000000000051DD10 string=0x000000000051DD14 """
 *   insn=0x000000000051DD2C string=0x000000000051DD30 ","
 *   insn=0x000000000051DD2C string=0x000000000051DDA8 " "
 *   insn=0x000000000051DD30 string=0x000000000051DDB4 "`"
 *   insn=0x000000000051DD48 string=0x000000000051DD4C " "
 *   insn=0x000000000051DD64 string=0x000000000051DD68 "!"
 *   insn=0x000000000051DD68 string=0x000000000051DD6C "#"
 *   insn=0x000000000051DD6C string=0x000000000051DD70 "`"
 *   insn=0x000000000051DD74 string=0x000000000051DD78 "B"
 *   insn=0x000000000051DD7C string=0x000000000051DD80 "c"
 *   insn=0x000000000051DD88 string=0x000000000051DD8C " "
 *   insn=0x000000000051DD98 string=0x000000000051DD9C " "
 *   insn=0x000000000051DDC0 string=0x000000000051DDC4 "?"
 *   insn=0x000000000051DDC4 string=0x000000000051DDC8 "I"
 *   insn=0x000000000051DDD0 string=0x000000000051DDD4 "AHa8b"
 *   insn=0x000000000051DDD4 string=0x000000000051DDD8 "b"
 *   insn=0x000000000051DDD8 string=0x000000000051DDDC "A"
 *   insn=0x000000000051DDDC string=0x000000000051DDE0 " "
 *   insn=0x000000000051DDE4 string=0x000000000051DDE8 "d"
 *   insn=0x000000000051DDEC string=0x000000000051DDF0 "a\n@"
 *   insn=0x000000000051DE04 string=0x000000000051DE08 "@"
 *   insn=0x000000000051DE1C string=0x000000000051DE20 """
 *   insn=0x000000000051DE20 string=0x000000000051DE24 "B@"
 *   insn=0x000000000051DE24 string=0x000000000051DE28 "@"
 *   insn=0x000000000051DE34 string=0x000000000051DE44 "$"
 *   insn=0x000000000051DE50 string=0x000000000051DE54 "#"
 *   insn=0x000000000051DE60 string=0x000000000051DE64 "`"
 *   insn=0x000000000051DE70 string=0x000000000051DE74 "`"
 *   insn=0x000000000051DE74 string=0x000000000051DE78 "k"
 *   insn=0x000000000051DEB0 string=0x000000000051DEB4 "p"
 *   insn=0x000000000051DECC string=0x000000000051DED0 "@"
 *   insn=0x000000000051DED0 string=0x000000000051DED4 "T"
 *   insn=0x000000000051DEEC string=0x00000000001F3FF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall _gxx_personality_v0(int a1, int a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  bool v5; // zf
  __int64 result; // x0
  char v7; // w22
  unsigned int v10; // w27
  char *v11; // x26
  int v12; // w19
  __int64 v13; // x0
  char *v14; // x2
  unsigned __int64 v15; // x26
  char v16; // w28
  char *v17; // x0
  char *v18; // x0
  char v19; // w28
  char *v20; // x0
  char *v21; // x0
  char v22; // w28
  char *v23; // x0
  __int64 v24; // x4
  int v25; // w1
  char v26; // t1
  unsigned __int64 v27; // x0
  int v28; // w0
  char *v29; // x28
  __int64 v30; // x4
  int v31; // w2
  char *v32; // x1
  char v33; // t1
  unsigned __int64 v34; // x0
  int v35; // w0
  unsigned __int64 v36; // x2
  unsigned __int64 v37; // [xsp+68h] [xbp+68h]
  int v38; // [xsp+7Ch] [xbp+7Ch]
  __int64 **v39; // [xsp+80h] [xbp+80h]
  unsigned __int64 *v40; // [xsp+88h] [xbp+88h]
  unsigned __int8 *v41; // [xsp+90h] [xbp+90h]
  char *v42; // [xsp+98h] [xbp+98h]
  char *v43; // [xsp+98h] [xbp+98h]
  char *v44; // [xsp+98h] [xbp+98h]
  char *v45; // [xsp+98h] [xbp+98h]
  char *v46; // [xsp+98h] [xbp+98h]
  int v47; // [xsp+A4h] [xbp+A4h] BYREF
  __int64 v48; // [xsp+A8h] [xbp+A8h] BYREF
  unsigned __int64 v49; // [xsp+B0h] [xbp+B0h] BYREF
  unsigned __int64 *v50; // [xsp+B8h] [xbp+B8h] BYREF
  _QWORD v51[2]; // [xsp+C0h] [xbp+C0h] BYREF
  char *v52; // [xsp+D0h] [xbp+D0h]
  __int64 v53; // [xsp+D8h] [xbp+D8h]
  unsigned __int64 v54; // [xsp+E0h] [xbp+E0h]
  unsigned __int8 v55; // [xsp+E8h] [xbp+E8h]
  unsigned __int8 v56; // [xsp+E9h] [xbp+E9h]

  v5 = a1 == 1;
  result = 3;
  v47 = 0;
  v7 = a2;
  if ( !v5 )
    return result;
  v10 = (unsigned __int64)(a3 - 0x474E5543432B2B00LL) > 1;
  if ( (a2 == 6) > v10 )
  {
    v11 = (char *)*(a4 - 2);
    v41 = (unsigned __int8 *)*(a4 - 3);
    v12 = *((_DWORD *)a4 - 9);
    if ( !v11 )
    {
      if ( (a2 & 8) != 0 )
        std::terminate();
LABEL_6:
      sub_56FCFC(a4);
    }
    if ( (a2 & 8) != 0 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v41 = (unsigned __int8 *)sub_5800F0(a5);
  if ( !v41 )
    return 8;
  v42 = sub_51D768(a5, v41, (__int64)v51);
  v52 = (char *)sub_51D6EC(v55, a5);
  v13 = sub_5800D4(a5, &v47);
  v14 = v42;
  v15 = v13 - (v47 == 0);
  if ( (unsigned __int64)v42 >= v54 )
  {
LABEL_20:
    v11 = 0;
    v28 = 1;
LABEL_21:
    v40 = 0;
    v12 = 0;
    v29 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v16 = v56;
    v43 = v14;
    v17 = (char *)sub_51D6EC(v56, 0);
    v18 = sub_51D5DC(v16, v17, v43, (unsigned __int64 *)&v48);
    v19 = v56;
    v44 = v18;
    v20 = (char *)sub_51D6EC(v56, 0);
    v21 = sub_51D5DC(v19, v20, v44, &v49);
    v22 = v56;
    v45 = v21;
    v23 = (char *)sub_51D6EC(v56, 0);
    v14 = sub_51D5DC(v22, v23, v45, (unsigned __int64 *)&v50);
    v24 = 0;
    v25 = 0;
    do
    {
      v26 = *v14++;
      v27 = (unsigned __int64)(v26 & 0x7F) << v25;
      v25 += 7;
      v24 |= v27;
    }
    while ( v26 < 0 );
    if ( v15 < v48 + v51[0] )
      goto LABEL_20;
    if ( v15 < v48 + v51[0] + v49 )
      break;
    if ( (unsigned __int64)v14 >= v54 )
      goto LABEL_20;
  }
  if ( !v50 )
    return 8;
  v11 = (char *)v50 + v51[1];
  if ( !v24 )
  {
    if ( !v11 )
      return 8;
    goto LABEL_36;
  }
  if ( !v11 )
    return 8;
  v29 = (char *)(v54 + v24 - 1);
  if ( !v29 )
  {
LABEL_36:
    v28 = 2;
    goto LABEL_21;
  }
  if ( (v7 & 8) != 0 )
  {
    v40 = 0;
    v39 = &`typeinfo for'__cxxabiv1::__forced_unwind;
  }
  else if ( v10 )
  {
    v40 = 0;
    v39 = &`typeinfo for'__cxxabiv1::__foreign_exception;
  }
  else
  {
    v40 = a4 + 4;
    if ( (*a4 & 1) != 0 )
      v40 = (unsigned __int64 *)*(a4 - 10);
    v39 = (__int64 **)*(v40 - 14);
  }
  v38 = 0;
  while ( 1 )
  {
    v46 = sub_51D59C(v29, &v48);
    sub_51D59C(v46, &v49);
    if ( !v48 )
    {
      v38 = 1;
      goto LABEL_52;
    }
    if ( v48 <= 0 )
    {
      if ( ((v39 != 0) & (unsigned __int8)((v7 & 8) == 0)) > v10 )
      {
        v35 = (unsigned __int8)sub_51D874((__int64)v51, (__int64 *)v39, v40, v48) ^ 1;
      }
      else
      {
        v30 = 0;
        v31 = 0;
        v32 = (char *)(v53 + ~v48);
        do
        {
          v33 = *v32++;
          v34 = (unsigned __int64)(v33 & 0x7F) << v31;
          v31 += 7;
          v30 |= v34;
        }
        while ( v33 < 0 );
        v35 = v30 == 0;
      }
      if ( v35 )
        goto LABEL_66;
      goto LABEL_52;
    }
    if ( v55 == 255 )
    {
      v36 = 0;
    }
    else
    {
      switch ( v55 & 7 )
      {
        case 0:
        case 4:
          v36 = -8 * v48;
          break;
        case 2:
          v36 = -2 * v48;
          break;
        case 3:
          v36 = -4 * v48;
          break;
        default:
          abort();
          return result;
      }
    }
    sub_51D5DC(v55, v52, (char *)(v53 + v36), (unsigned __int64 *)&v50);
    if ( !v50 )
      goto LABEL_66;
    if ( v39 )
    {
      v37 = (unsigned __int64)v50;
      v50 = v40;
      if ( ((unsigned __int8 (__fastcall *)(__int64 **))(*v39)[2])(v39) )
        v50 = (unsigned __int64 *)*v50;
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64 **, unsigned __int64 **, __int64))(*(_QWORD *)v37 + 32LL))(
             v37,
             v39,
             &v50,
             1) )
      {
        break;
      }
    }
LABEL_52:
    if ( !v49 )
    {
      if ( v38 )
      {
        v12 = 0;
        v28 = 2;
        goto LABEL_22;
      }
      return 8;
    }
    v29 = &v46[v49];
  }
  v40 = v50;
LABEL_66:
  v12 = v48;
  v28 = 3;
LABEL_22:
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 8) != 0 || v10 )
    {
      if ( v28 == 1 )
        std::terminate();
LABEL_8:
      if ( v12 < 0 )
        std::unexpected();
LABEL_9:
      sub_580074(a5, 0, a4);
      sub_580074(a5, 1, v12);
      sub_5800E8(a5, v11);
      return 7;
    }
    if ( v28 == 1 )
      goto LABEL_6;
LABEL_13:
    if ( v12 < 0 )
    {
      sub_51D768(a5, v41, (__int64)v51);
      v52 = (char *)sub_51D6EC(v55, a5);
      *(a4 - 2) = sub_51D6EC(v55, a5);
    }
    goto LABEL_9;
  }
  if ( v28 == 2 )
    return 8;
  result = 6;
  if ( !v10 )
  {
    *(a4 - 3) = v41;
    *((_DWORD *)a4 - 9) = v12;
    *(a4 - 4) = v29;
    *(a4 - 1) = v40;
    *(a4 - 2) = v11;
  }
  return result;
}

