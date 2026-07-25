/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000555328
 * Mangled: sub_555328
 * Demangled: sub_555328
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000054F6AC  sub_54F6AC
 *   0x00000000005513A0  sub_5513A0
 *   0x0000000000554F18  sub_554F18
 *
 * Referenced strings: 41
 *   insn=0x000000000055537C string=0x0000000000555380 "g\n@"
 *   insn=0x00000000005553A8 string=0x00000000005553AC "i\n@"
 *   insn=0x00000000005553B8 string=0x00000000005553BC ")U@"
 *   insn=0x00000000005553C8 string=0x00000000005553CC "h\n@"
 *   insn=0x00000000005553CC string=0x00000000005553D0 "Y@"
 *   insn=0x00000000005553D4 string=0x00000000005553D8 "h\n@"
 *   insn=0x00000000005553D8 string=0x00000000005553DC "]@"
 *   insn=0x00000000005553E0 string=0x00000000005553E4 "h\n@"
 *   insn=0x00000000005553E4 string=0x00000000005553E8 "a@"
 *   insn=0x00000000005553EC string=0x00000000005553F0 "h\n@"
 *   insn=0x00000000005553F0 string=0x00000000005553F4 "-@"
 *   insn=0x00000000005553F8 string=0x00000000005553FC "h\n@"
 *   insn=0x00000000005553FC string=0x0000000000555400 "1@"
 *   insn=0x0000000000555404 string=0x0000000000555408 "h\n@"
 *   insn=0x0000000000555408 string=0x000000000055540C "5@"
 *   insn=0x0000000000555410 string=0x0000000000555414 "h\n@"
 *   insn=0x0000000000555414 string=0x0000000000555418 "9@"
 *   insn=0x000000000055541C string=0x0000000000555420 "h\n@"
 *   insn=0x0000000000555420 string=0x0000000000555424 "=@"
 *   insn=0x000000000055542C string=0x0000000000555430 "h\n@"
 *   insn=0x0000000000555430 string=0x0000000000555434 "A@"
 *   insn=0x0000000000555438 string=0x000000000055543C "h\n@"
 *   insn=0x000000000055543C string=0x0000000000555440 "E@"
 *   insn=0x0000000000555454 string=0x0000000000555458 "U|@"
 *   insn=0x000000000055546C string=0x0000000000555470 "b"
 *   insn=0x0000000000555470 string=0x00000000005554DC "B"
 *   insn=0x0000000000555474 string=0x0000000000555478 """
 *   insn=0x000000000055547C string=0x0000000000555480 "?"
 *   insn=0x00000000005554A8 string=0x00000000005554F8 "@"
 *   insn=0x00000000005554DC string=0x00000000005554E0 "B"
 *   insn=0x00000000005554E0 string=0x00000000005554E4 "B"
 *   insn=0x00000000005554EC string=0x00000000005554F0 "8"
 *   insn=0x00000000005554FC string=0x0000000000555500 "@"
 *   insn=0x0000000000555510 string=0x0000000000555514 "B"
 *   insn=0x0000000000555524 string=0x0000000000555528 "?"
 *   insn=0x000000000055552C string=0x0000000000555530 " "
 *   insn=0x0000000000555540 string=0x0000000000555544 "v"
 *   insn=0x000000000055554C string=0x0000000000555550 "!$@"
 *   insn=0x0000000000555550 string=0x0000000000555554 " "
 *   insn=0x0000000000555560 string=0x0000000000555564 "!$@"
 *   insn=0x0000000000555564 string=0x0000000000555568 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_555328(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v8; // x24
  _QWORD *v16; // x19
  _QWORD *v17; // x7
  __int64 v18; // x9
  __int64 v19; // x10
  _QWORD *v20; // x0
  int v21; // w1
  _QWORD *v22; // x19
  int v23; // w24
  int v24; // w0
  int *v26; // x0
  int *v27; // x1
  int v28; // w0
  int v30; // [xsp+98h] [xbp+88h] BYREF
  int v31; // [xsp+9Ch] [xbp+8Ch] BYREF
  _QWORD v32[14]; // [xsp+A0h] [xbp+90h] BYREF

  v8 = a6 + 208;
  v16 = sub_5513A0(a6 + 208);
  sub_54F6AC(v8);
  v17 = (_QWORD *)v16[2];
  v32[2] = v17[20];
  v18 = v16[2];
  v32[1] = v17[19];
  v19 = v17[18];
  v32[3] = *(_QWORD *)(v18 + 168);
  v32[0] = v19;
  v32[4] = *(_QWORD *)(v16[2] + 176LL);
  v32[5] = *(_QWORD *)(v16[2] + 184LL);
  v32[6] = *(_QWORD *)(v16[2] + 192LL);
  v32[7] = *(_QWORD *)(v16[2] + 88LL);
  v32[8] = *(_QWORD *)(v16[2] + 96LL);
  v32[9] = *(_QWORD *)(v16[2] + 104LL);
  v32[10] = *(_QWORD *)(v16[2] + 112LL);
  v32[11] = *(_QWORD *)(v16[2] + 120LL);
  v31 = 0;
  v32[12] = *(_QWORD *)(v16[2] + 128LL);
  v32[13] = *(_QWORD *)(v16[2] + 136LL);
  v20 = sub_554F18(a1, a2, a3, a4, a5, &v30, (__int64)v32, 7u, a6, &v31);
  v22 = v20;
  if ( v31 )
  {
    *a7 |= 4u;
    if ( !v20 )
      goto LABEL_9;
  }
  else
  {
    *(_DWORD *)(a8 + 24) = v30;
    if ( !v20 )
      goto LABEL_9;
  }
  if ( v21 != -1 )
  {
    v23 = 0;
    if ( !a4 )
      return v22;
    goto LABEL_5;
  }
  v27 = (int *)v20[2];
  if ( (unsigned __int64)v27 >= v20[3] )
    v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 72LL))(v20);
  else
    v28 = *v27;
  if ( v28 != -1 )
  {
    v23 = 0;
    if ( !a4 )
      return v22;
    goto LABEL_5;
  }
LABEL_9:
  v22 = 0;
  v23 = 1;
  if ( !a4 )
  {
LABEL_10:
    *a7 |= 2u;
    return v22;
  }
LABEL_5:
  v24 = a5;
  if ( (_DWORD)a5 == -1 )
  {
    v26 = (int *)a4[2];
    if ( (unsigned __int64)v26 >= a4[3] )
      v24 = (*(__int64 (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4);
    else
      v24 = *v26;
  }
  if ( (v24 == -1) == v23 )
    goto LABEL_10;
  return v22;
}

