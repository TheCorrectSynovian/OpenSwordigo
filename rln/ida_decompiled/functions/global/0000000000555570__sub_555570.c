/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000555570
 * Mangled: sub_555570
 * Demangled: sub_555570
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000054F6AC  sub_54F6AC
 *   0x00000000005513A0  sub_5513A0
 *   0x0000000000554F18  sub_554F18
 *
 * Referenced strings: 63
 *   insn=0x00000000005555B4 string=0x00000000005555B8 "z"
 *   insn=0x00000000005555C0 string=0x00000000005555C4 ":"
 *   insn=0x00000000005555C4 string=0x00000000005555C8 "g\n@"
 *   insn=0x00000000005555F0 string=0x00000000005555F4 "i\n@"
 *   insn=0x0000000000555600 string=0x0000000000555604 ")"
 *   insn=0x0000000000555610 string=0x0000000000555614 "h\n@"
 *   insn=0x0000000000555614 string=0x0000000000555618 ""
 *   insn=0x000000000055561C string=0x0000000000555620 "h\n@"
 *   insn=0x0000000000555620 string=0x0000000000555624 ""
 *   insn=0x0000000000555628 string=0x000000000055562C "h\n@"
 *   insn=0x000000000055562C string=0x0000000000555630 ""
 *   insn=0x0000000000555634 string=0x0000000000555638 "h\n@"
 *   insn=0x0000000000555638 string=0x000000000055563C ""
 *   insn=0x0000000000555640 string=0x0000000000555644 "h\n@"
 *   insn=0x0000000000555644 string=0x0000000000555648 ""
 *   insn=0x000000000055564C string=0x0000000000555650 "h\n@"
 *   insn=0x0000000000555650 string=0x0000000000555654 ""
 *   insn=0x0000000000555658 string=0x000000000055565C "h\n@"
 *   insn=0x000000000055565C string=0x0000000000555660 ""
 *   insn=0x0000000000555664 string=0x0000000000555668 "h\n@"
 *   insn=0x0000000000555668 string=0x000000000055566C ""
 *   insn=0x0000000000555670 string=0x0000000000555674 "h\n@"
 *   insn=0x0000000000555674 string=0x0000000000555678 "e@"
 *   insn=0x000000000055567C string=0x0000000000555680 "h\n@"
 *   insn=0x0000000000555680 string=0x0000000000555684 "i@"
 *   insn=0x0000000000555688 string=0x000000000055568C "h\n@"
 *   insn=0x000000000055568C string=0x0000000000555690 "m@"
 *   insn=0x0000000000555694 string=0x0000000000555698 "h\n@"
 *   insn=0x0000000000555698 string=0x000000000055569C "q@"
 *   insn=0x00000000005556A0 string=0x00000000005556A4 "h\n@"
 *   insn=0x00000000005556A4 string=0x00000000005556A8 "u@"
 *   insn=0x00000000005556AC string=0x00000000005556B0 "h\n@"
 *   insn=0x00000000005556B0 string=0x00000000005556B4 "y@"
 *   insn=0x00000000005556B8 string=0x00000000005556BC "h\n@"
 *   insn=0x00000000005556BC string=0x00000000005556C0 "}@"
 *   insn=0x00000000005556C4 string=0x00000000005556C8 "h\n@"
 *   insn=0x00000000005556C8 string=0x00000000005556CC ""
 *   insn=0x00000000005556D0 string=0x00000000005556D4 "h\n@"
 *   insn=0x00000000005556D4 string=0x00000000005556D8 ""
 *   insn=0x00000000005556DC string=0x00000000005556E0 "h\n@"
 *   insn=0x00000000005556E0 string=0x00000000005556E4 ""
 *   insn=0x00000000005556E8 string=0x00000000005556EC "h\n@"
 *   insn=0x00000000005556EC string=0x00000000005556F0 ""
 *   insn=0x00000000005556F8 string=0x00000000005556FC "h\n@"
 *   insn=0x00000000005556FC string=0x0000000000555700 ""
 *   insn=0x0000000000555714 string=0x0000000000555718 "U|@"
 *   insn=0x000000000055572C string=0x0000000000555730 "b"
 *   insn=0x0000000000555730 string=0x000000000055579C "B"
 *   insn=0x0000000000555734 string=0x0000000000555738 """
 *   insn=0x000000000055573C string=0x0000000000555740 "?"
 *   insn=0x0000000000555768 string=0x00000000005557B8 "@"
 *   insn=0x000000000055579C string=0x00000000005557A0 "B"
 *   insn=0x00000000005557A0 string=0x00000000005557A4 "B"
 *   insn=0x00000000005557AC string=0x00000000005557B0 "8"
 *   insn=0x00000000005557BC string=0x00000000005557C0 "@"
 *   insn=0x00000000005557D0 string=0x00000000005557D4 "B"
 *   insn=0x00000000005557E4 string=0x00000000005557E8 "?"
 *   insn=0x00000000005557EC string=0x00000000005557F0 " "
 *   insn=0x0000000000555800 string=0x0000000000555804 "v"
 *   insn=0x000000000055580C string=0x0000000000555810 "!$@"
 *   insn=0x0000000000555810 string=0x0000000000555814 " "
 *   insn=0x0000000000555820 string=0x0000000000555824 "!$@"
 *   insn=0x0000000000555824 string=0x0000000000555828 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_555570(
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
  _QWORD v32[24]; // [xsp+A0h] [xbp+90h] BYREF

  v8 = a6 + 208;
  v16 = sub_5513A0(a6 + 208);
  sub_54F6AC(v8);
  v17 = (_QWORD *)v16[2];
  v32[2] = v17[39];
  v18 = v16[2];
  v32[1] = v17[38];
  v19 = v17[37];
  v32[3] = *(_QWORD *)(v18 + 320);
  v32[0] = v19;
  v32[4] = *(_QWORD *)(v16[2] + 328LL);
  v32[5] = *(_QWORD *)(v16[2] + 336LL);
  v32[6] = *(_QWORD *)(v16[2] + 344LL);
  v32[7] = *(_QWORD *)(v16[2] + 352LL);
  v32[8] = *(_QWORD *)(v16[2] + 360LL);
  v32[9] = *(_QWORD *)(v16[2] + 368LL);
  v32[10] = *(_QWORD *)(v16[2] + 376LL);
  v32[11] = *(_QWORD *)(v16[2] + 384LL);
  v32[12] = *(_QWORD *)(v16[2] + 200LL);
  v32[13] = *(_QWORD *)(v16[2] + 208LL);
  v32[14] = *(_QWORD *)(v16[2] + 216LL);
  v32[15] = *(_QWORD *)(v16[2] + 224LL);
  v32[16] = *(_QWORD *)(v16[2] + 232LL);
  v32[17] = *(_QWORD *)(v16[2] + 240LL);
  v32[18] = *(_QWORD *)(v16[2] + 248LL);
  v32[19] = *(_QWORD *)(v16[2] + 256LL);
  v32[20] = *(_QWORD *)(v16[2] + 264LL);
  v32[21] = *(_QWORD *)(v16[2] + 272LL);
  v32[22] = *(_QWORD *)(v16[2] + 280LL);
  v31 = 0;
  v32[23] = *(_QWORD *)(v16[2] + 288LL);
  v20 = sub_554F18(a1, a2, a3, a4, a5, &v30, (__int64)v32, 0xCu, a6, &v31);
  v22 = v20;
  if ( v31 )
  {
    *a7 |= 4u;
    if ( !v20 )
      goto LABEL_9;
  }
  else
  {
    *(_DWORD *)(a8 + 16) = v30;
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

