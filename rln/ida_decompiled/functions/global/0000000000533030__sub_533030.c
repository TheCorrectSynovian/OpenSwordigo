/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000533030
 * Mangled: sub_533030
 * Demangled: sub_533030
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000052D354  sub_52D354
 *   0x000000000052EE14  sub_52EE14
 *   0x0000000000532C04  sub_532C04
 *
 * Referenced strings: 47
 *   insn=0x0000000000533074 string=0x0000000000533078 "g"
 *   insn=0x0000000000533084 string=0x0000000000533088 "g\n@"
 *   insn=0x00000000005330B0 string=0x00000000005330B4 "i\n@"
 *   insn=0x00000000005330C0 string=0x00000000005330C4 ")U@"
 *   insn=0x00000000005330D0 string=0x00000000005330D4 "h\n@"
 *   insn=0x00000000005330D4 string=0x00000000005330D8 "Y@"
 *   insn=0x00000000005330DC string=0x00000000005330E0 "h\n@"
 *   insn=0x00000000005330E0 string=0x00000000005330E4 "]@"
 *   insn=0x00000000005330E8 string=0x00000000005330EC "h\n@"
 *   insn=0x00000000005330EC string=0x00000000005330F0 "a@"
 *   insn=0x00000000005330F4 string=0x00000000005330F8 "h\n@"
 *   insn=0x00000000005330F8 string=0x00000000005330FC "-@"
 *   insn=0x0000000000533100 string=0x0000000000533104 "h\n@"
 *   insn=0x0000000000533104 string=0x0000000000533108 "1@"
 *   insn=0x000000000053310C string=0x0000000000533110 "h\n@"
 *   insn=0x0000000000533110 string=0x0000000000533114 "5@"
 *   insn=0x0000000000533118 string=0x000000000053311C "h\n@"
 *   insn=0x000000000053311C string=0x0000000000533120 "9@"
 *   insn=0x0000000000533124 string=0x0000000000533128 "h\n@"
 *   insn=0x0000000000533128 string=0x000000000053312C "=@"
 *   insn=0x0000000000533134 string=0x0000000000533138 "h\n@"
 *   insn=0x0000000000533138 string=0x000000000053313C "A@"
 *   insn=0x0000000000533140 string=0x0000000000533144 "h\n@"
 *   insn=0x0000000000533144 string=0x0000000000533148 "E@"
 *   insn=0x000000000053315C string=0x0000000000533160 "T|@"
 *   insn=0x0000000000533174 string=0x0000000000533178 """
 *   insn=0x0000000000533178 string=0x00000000005331DC "B"
 *   insn=0x000000000053317C string=0x0000000000533180 """
 *   insn=0x0000000000533180 string=0x0000000000533184 "@"
 *   insn=0x0000000000533184 string=0x0000000000533188 "?"
 *   insn=0x000000000053319C string=0x00000000005331A0 "@"
 *   insn=0x00000000005331A8 string=0x00000000005331F8 "@"
 *   insn=0x00000000005331AC string=0x00000000005331B0 "t~@"
 *   insn=0x00000000005331DC string=0x00000000005331E0 "B"
 *   insn=0x00000000005331E0 string=0x00000000005331E4 "B"
 *   insn=0x00000000005331EC string=0x00000000005331F0 "7"
 *   insn=0x00000000005331F0 string=0x00000000005331F4 "5"
 *   insn=0x00000000005331FC string=0x0000000000533200 "@"
 *   insn=0x000000000053320C string=0x0000000000533210 "?"
 *   insn=0x0000000000533210 string=0x0000000000533214 """
 *   insn=0x0000000000533224 string=0x0000000000533228 "?"
 *   insn=0x000000000053322C string=0x0000000000533230 "3"
 *   insn=0x000000000053323C string=0x0000000000533240 "!$@"
 *   insn=0x0000000000533240 string=0x0000000000533244 " "
 *   insn=0x0000000000533248 string=0x000000000053324C " "
 *   insn=0x000000000053325C string=0x0000000000533260 "!$@"
 *   insn=0x0000000000533260 string=0x0000000000533264 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_533030(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v8; // x23
  _QWORD *v16; // x19
  _QWORD *v17; // x7
  __int64 v18; // x9
  __int64 v19; // x10
  _QWORD *v20; // x0
  int v21; // w1
  _QWORD *v22; // x22
  int v23; // w23
  int v24; // w0
  int v27; // [xsp+98h] [xbp+88h] BYREF
  int v28; // [xsp+9Ch] [xbp+8Ch] BYREF
  _QWORD v29[14]; // [xsp+A0h] [xbp+90h] BYREF

  v8 = a6 + 208;
  v16 = sub_52EE14(a6 + 208);
  sub_52D354(v8);
  v17 = (_QWORD *)v16[2];
  v29[2] = v17[20];
  v18 = v16[2];
  v29[1] = v17[19];
  v19 = v17[18];
  v29[3] = *(_QWORD *)(v18 + 168);
  v29[0] = v19;
  v29[4] = *(_QWORD *)(v16[2] + 176LL);
  v29[5] = *(_QWORD *)(v16[2] + 184LL);
  v29[6] = *(_QWORD *)(v16[2] + 192LL);
  v29[7] = *(_QWORD *)(v16[2] + 88LL);
  v29[8] = *(_QWORD *)(v16[2] + 96LL);
  v29[9] = *(_QWORD *)(v16[2] + 104LL);
  v29[10] = *(_QWORD *)(v16[2] + 112LL);
  v29[11] = *(_QWORD *)(v16[2] + 120LL);
  v28 = 0;
  v29[12] = *(_QWORD *)(v16[2] + 128LL);
  v29[13] = *(_QWORD *)(v16[2] + 136LL);
  v20 = sub_532C04(a1, a2, a3, a4, a5, &v27, (__int64)v29, 7u, a6, &v28);
  v22 = v20;
  if ( v28 )
    *a7 |= 4u;
  else
    *(_DWORD *)(a8 + 24) = v27;
  if ( !v20 || v21 == -1 && v20[2] >= v20[3] && (*(unsigned int (__fastcall **)(_QWORD *))(*v20 + 72LL))(v20) == -1 )
  {
    v22 = 0;
    v23 = 1;
    if ( !a4 )
    {
LABEL_11:
      *a7 |= 2u;
      return v22;
    }
  }
  else
  {
    v23 = 0;
    if ( !a4 )
      return v22;
  }
  v24 = 0;
  if ( (_DWORD)a5 == -1 )
    v24 = a4[2] >= a4[3] && (*(__int64 (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4) == -1;
  if ( v23 == v24 )
    goto LABEL_11;
  return v22;
}

