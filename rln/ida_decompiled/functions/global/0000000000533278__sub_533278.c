/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000533278
 * Mangled: sub_533278
 * Demangled: sub_533278
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000052D354  sub_52D354
 *   0x000000000052EE14  sub_52EE14
 *   0x0000000000532C04  sub_532C04
 *
 * Referenced strings: 67
 *   insn=0x00000000005332C8 string=0x00000000005332CC """
 *   insn=0x00000000005332CC string=0x00000000005332D0 "g\n@"
 *   insn=0x00000000005332F8 string=0x00000000005332FC "i\n@"
 *   insn=0x0000000000533308 string=0x000000000053330C ")"
 *   insn=0x0000000000533318 string=0x000000000053331C "h\n@"
 *   insn=0x000000000053331C string=0x0000000000533320 ""
 *   insn=0x0000000000533324 string=0x0000000000533328 "h\n@"
 *   insn=0x0000000000533328 string=0x000000000053332C ""
 *   insn=0x0000000000533330 string=0x0000000000533334 "h\n@"
 *   insn=0x0000000000533334 string=0x0000000000533338 ""
 *   insn=0x000000000053333C string=0x0000000000533340 "h\n@"
 *   insn=0x0000000000533340 string=0x0000000000533344 ""
 *   insn=0x0000000000533348 string=0x000000000053334C "h\n@"
 *   insn=0x000000000053334C string=0x0000000000533350 ""
 *   insn=0x0000000000533354 string=0x0000000000533358 "h\n@"
 *   insn=0x0000000000533358 string=0x000000000053335C ""
 *   insn=0x0000000000533360 string=0x0000000000533364 "h\n@"
 *   insn=0x0000000000533364 string=0x0000000000533368 ""
 *   insn=0x000000000053336C string=0x0000000000533370 "h\n@"
 *   insn=0x0000000000533370 string=0x0000000000533374 ""
 *   insn=0x0000000000533378 string=0x000000000053337C "h\n@"
 *   insn=0x000000000053337C string=0x0000000000533380 "e@"
 *   insn=0x0000000000533384 string=0x0000000000533388 "h\n@"
 *   insn=0x0000000000533388 string=0x000000000053338C "i@"
 *   insn=0x0000000000533390 string=0x0000000000533394 "h\n@"
 *   insn=0x0000000000533394 string=0x0000000000533398 "m@"
 *   insn=0x000000000053339C string=0x00000000005333A0 "h\n@"
 *   insn=0x00000000005333A0 string=0x00000000005333A4 "q@"
 *   insn=0x00000000005333A8 string=0x00000000005333AC "h\n@"
 *   insn=0x00000000005333AC string=0x00000000005333B0 "u@"
 *   insn=0x00000000005333B4 string=0x00000000005333B8 "h\n@"
 *   insn=0x00000000005333B8 string=0x00000000005333BC "y@"
 *   insn=0x00000000005333C0 string=0x00000000005333C4 "h\n@"
 *   insn=0x00000000005333C4 string=0x00000000005333C8 "}@"
 *   insn=0x00000000005333CC string=0x00000000005333D0 "h\n@"
 *   insn=0x00000000005333D0 string=0x00000000005333D4 ""
 *   insn=0x00000000005333D8 string=0x00000000005333DC "h\n@"
 *   insn=0x00000000005333DC string=0x00000000005333E0 ""
 *   insn=0x00000000005333E4 string=0x00000000005333E8 "h\n@"
 *   insn=0x00000000005333E8 string=0x00000000005333EC ""
 *   insn=0x00000000005333F0 string=0x00000000005333F4 "h\n@"
 *   insn=0x00000000005333F4 string=0x00000000005333F8 ""
 *   insn=0x0000000000533400 string=0x0000000000533404 "h\n@"
 *   insn=0x0000000000533404 string=0x0000000000533408 ""
 *   insn=0x000000000053341C string=0x0000000000533420 "T|@"
 *   insn=0x0000000000533434 string=0x0000000000533438 """
 *   insn=0x0000000000533438 string=0x000000000053349C "B"
 *   insn=0x000000000053343C string=0x0000000000533440 """
 *   insn=0x0000000000533440 string=0x0000000000533444 "@"
 *   insn=0x0000000000533444 string=0x0000000000533448 "?"
 *   insn=0x000000000053345C string=0x0000000000533460 "@"
 *   insn=0x0000000000533468 string=0x00000000005334B8 "@"
 *   insn=0x000000000053346C string=0x0000000000533470 "t~@"
 *   insn=0x000000000053349C string=0x00000000005334A0 "B"
 *   insn=0x00000000005334A0 string=0x00000000005334A4 "B"
 *   insn=0x00000000005334AC string=0x00000000005334B0 "7"
 *   insn=0x00000000005334B0 string=0x00000000005334B4 "5"
 *   insn=0x00000000005334BC string=0x00000000005334C0 "@"
 *   insn=0x00000000005334CC string=0x00000000005334D0 "?"
 *   insn=0x00000000005334D0 string=0x00000000005334D4 """
 *   insn=0x00000000005334E4 string=0x00000000005334E8 "?"
 *   insn=0x00000000005334EC string=0x00000000005334F0 "3"
 *   insn=0x00000000005334FC string=0x0000000000533500 "!$@"
 *   insn=0x0000000000533500 string=0x0000000000533504 " "
 *   insn=0x0000000000533508 string=0x000000000053350C " "
 *   insn=0x000000000053351C string=0x0000000000533520 "!$@"
 *   insn=0x0000000000533520 string=0x0000000000533524 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_533278(
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
  _QWORD v29[24]; // [xsp+A0h] [xbp+90h] BYREF

  v8 = a6 + 208;
  v16 = sub_52EE14(a6 + 208);
  sub_52D354(v8);
  v17 = (_QWORD *)v16[2];
  v29[2] = v17[39];
  v18 = v16[2];
  v29[1] = v17[38];
  v19 = v17[37];
  v29[3] = *(_QWORD *)(v18 + 320);
  v29[0] = v19;
  v29[4] = *(_QWORD *)(v16[2] + 328LL);
  v29[5] = *(_QWORD *)(v16[2] + 336LL);
  v29[6] = *(_QWORD *)(v16[2] + 344LL);
  v29[7] = *(_QWORD *)(v16[2] + 352LL);
  v29[8] = *(_QWORD *)(v16[2] + 360LL);
  v29[9] = *(_QWORD *)(v16[2] + 368LL);
  v29[10] = *(_QWORD *)(v16[2] + 376LL);
  v29[11] = *(_QWORD *)(v16[2] + 384LL);
  v29[12] = *(_QWORD *)(v16[2] + 200LL);
  v29[13] = *(_QWORD *)(v16[2] + 208LL);
  v29[14] = *(_QWORD *)(v16[2] + 216LL);
  v29[15] = *(_QWORD *)(v16[2] + 224LL);
  v29[16] = *(_QWORD *)(v16[2] + 232LL);
  v29[17] = *(_QWORD *)(v16[2] + 240LL);
  v29[18] = *(_QWORD *)(v16[2] + 248LL);
  v29[19] = *(_QWORD *)(v16[2] + 256LL);
  v29[20] = *(_QWORD *)(v16[2] + 264LL);
  v29[21] = *(_QWORD *)(v16[2] + 272LL);
  v29[22] = *(_QWORD *)(v16[2] + 280LL);
  v28 = 0;
  v29[23] = *(_QWORD *)(v16[2] + 288LL);
  v20 = sub_532C04(a1, a2, a3, a4, a5, &v27, (__int64)v29, 0xCu, a6, &v28);
  v22 = v20;
  if ( v28 )
    *a7 |= 4u;
  else
    *(_DWORD *)(a8 + 16) = v27;
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

