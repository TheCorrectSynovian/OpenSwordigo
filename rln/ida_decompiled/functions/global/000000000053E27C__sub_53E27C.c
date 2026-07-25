/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E27C
 * Mangled: sub_53E27C
 * Demangled: sub_53E27C
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000525FE4  sub_525FE4
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000542B74  sub_542B74
 *   0x000000000054F6AC  sub_54F6AC
 *   0x000000000056C650  sub_56C650
 *   0x000000000056E774  sub_56E774
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 60
 *   insn=0x000000000053E2B0 string=0x000000000053E2B4 "L"
 *   insn=0x000000000053E2B4 string=0x000000000053E2B8 "`"
 *   insn=0x000000000053E2B8 string=0x000000000053E2BC "@"
 *   insn=0x000000000053E2BC string=0x000000000053E304 """
 *   insn=0x000000000053E2C4 string=0x000000000053E2C8 "B"
 *   insn=0x000000000053E2D0 string=0x000000000053E2D4 "B @"
 *   insn=0x000000000053E2D4 string=0x000000000053E2D8 "!"
 *   insn=0x000000000053E310 string=0x000000000053E314 "B"
 *   insn=0x000000000053E328 string=0x000000000053E32C """
 *   insn=0x000000000053E330 string=0x000000000053E334 "A@"
 *   insn=0x000000000053E334 string=0x000000000053E338 "B@"
 *   insn=0x000000000053E338 string=0x000000000053E33C "_"
 *   insn=0x000000000053E33C string=0x000000000053E340 "X"
 *   insn=0x000000000053E340 string=0x000000000053E344 "&"
 *   insn=0x000000000053E344 string=0x000000000053B7DC "!"
 *   insn=0x000000000053E354 string=0x000000000053E358 "\"
 *   insn=0x000000000053E370 string=0x000000000053E374 "?"
 *   insn=0x000000000053E374 string=0x000000000053E378 "b"
 *   insn=0x000000000053E378 string=0x000000000053E37C ";"
 *   insn=0x000000000053E38C string=0x000000000053E390 "C"
 *   insn=0x000000000053E39C string=0x000000000053E3A0 "c@"
 *   insn=0x000000000053E3A0 string=0x000000000053E3A4 "`"
 *   insn=0x000000000053E3A8 string=0x000000000053E3AC " "
 *   insn=0x000000000053E3C8 string=0x000000000053E3CC "@"
 *   insn=0x000000000053E3D4 string=0x000000000053E3D8 "U"
 *   insn=0x000000000053E414 string=0x000000000053E418 "a\n@"
 *   insn=0x000000000053E418 string=0x000000000053E41C "`"
 *   insn=0x000000000053E41C string=0x000000000053E420 "?"
 *   insn=0x000000000053E424 string=0x000000000053E428 " D@"
 *   insn=0x000000000053E424 string=0x000000000053E494 "a"
 *   insn=0x000000000053E428 string=0x000000000053E42C "a\n"
 *   insn=0x000000000053E430 string=0x000000000053E434 "`"
 *   insn=0x000000000053E434 string=0x000000000053E438 "`\n@"
 *   insn=0x000000000053E438 string=0x000000000053E43C "a"
 *   insn=0x000000000053E440 string=0x000000000053E444 """
 *   insn=0x000000000053E444 string=0x000000000053E448 ""
 *   insn=0x000000000053E444 string=0x000000000053E4A8 "a"
 *   insn=0x000000000053E458 string=0x000000000053E45C ""
 *   insn=0x000000000053E470 string=0x000000000053E474 "4"
 *   insn=0x000000000053E498 string=0x000000000053E49C "!(@"
 *   insn=0x000000000053E49C string=0x000000000053E4A0 " "
 *   insn=0x000000000053E4AC string=0x000000000053E4B0 "!$@"
 *   insn=0x000000000053E4B0 string=0x000000000053E4B4 " "
 *   insn=0x000000000053E4C8 string=0x000000000053E4CC "A"
 *   insn=0x000000000053E4D0 string=0x000000000053E4D4 "@"
 *   insn=0x000000000053E4DC string=0x000000000053E4E0 "z"
 *   insn=0x000000000053E4E4 string=0x000000000053E4E8 "!$@"
 *   insn=0x000000000053E4E8 string=0x000000000053E4EC " "
 *   insn=0x000000000053E510 string=0x000000000053E514 "?"
 *   insn=0x000000000053E514 string=0x000000000053E518 "A"
 *   insn=0x000000000053E518 string=0x000000000053E51C "1"
 *   insn=0x000000000053E518 string=0x000000000053E560 " "
 *   insn=0x000000000053E51C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000053E550 string=0x00000000001FD590 "0'"
 *   insn=0x000000000053E574 string=0x000000000053E578 "!"
 *   insn=0x000000000053E580 string=0x000000000053E598 "v"
 *   insn=0x000000000053E588 string=0x000000000053E58C "M"
 *   insn=0x000000000053E5A8 string=0x000000000053E5AC "!"
 *   insn=0x000000000053E5AC string=0x000000000053E5B0 """
 *   insn=0x000000000053E5B0 string=0x000000000053E5B4 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_53E27C(int **a1, _QWORD *a2)
{
  int *v4; // x2
  int v5; // w1
  __int64 v7; // x24
  char *v8; // x2
  unsigned int **v9; // x1
  __int64 v10; // x2
  __int64 v11; // x26
  _QWORD *v12; // x0
  unsigned int *v13; // x1
  unsigned int v14; // w27
  __int64 v15; // x21
  __int64 v16; // x20
  __int64 v17; // x1
  int *v18; // x0
  _QWORD *v19; // x19
  int *v20; // x1
  int v21; // w0
  unsigned int *v22; // x0
  _BYTE v23[8]; // [xsp+78h] [xbp+78h] BYREF
  unsigned int *v24[64]; // [xsp+80h] [xbp+80h] BYREF

  sub_525FE4(v23, a1, 0);
  if ( v23[0] )
  {
    sub_56C650(a2, 0, *(_QWORD *)(*a2 - 24LL), 0);
    v7 = 0xFFFFFFFFFFFFFFELL;
    v8 = (char *)a1 + *((_QWORD *)*a1 - 3);
    v9 = (unsigned int **)(v8 + 208);
    v10 = *((_QWORD *)v8 + 2);
    if ( v10 > 0 )
      v7 = v10;
    sub_53B7DC(v24, v9);
    v11 = sub_54F6AC(v24);
    sub_53C0C8(v24);
    v12 = *(int **)((char *)a1 + *((_QWORD *)*a1 - 3) + 232);
    v13 = (unsigned int *)v12[2];
    if ( (unsigned __int64)v13 >= v12[3] )
      v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 72LL))(v12);
    else
      v14 = *v13;
    if ( v14 == -1 )
    {
      v16 = 0;
      v15 = 0;
    }
    else
    {
      v15 = 0;
      v16 = 0;
      while ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 16LL))(v11, 8, v14) )
      {
        if ( v16 == 128 )
        {
          sub_56E774(a2, v24, 128);
          v16 = 1;
          v17 = 0;
        }
        else
        {
          v17 = v16++;
        }
        v18 = *a1;
        ++v15;
        *((_DWORD *)v24 + v17) = v14;
        v19 = *(int **)((char *)a1 + *((_QWORD *)v18 - 3) + 232);
        v20 = (int *)v19[2];
        if ( (unsigned __int64)v20 >= v19[3] )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 80LL))(v19);
        }
        else
        {
          v21 = *v20;
          v19[2] = v20 + 1;
        }
        if ( v21 == -1 )
        {
          v14 = -1;
          if ( v15 != v7 )
          {
LABEL_25:
            v14 = -1;
            break;
          }
LABEL_28:
          v15 = v7;
          break;
        }
        v22 = (unsigned int *)v19[2];
        if ( (unsigned __int64)v22 >= v19[3] )
          v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 72LL))(v19);
        else
          v14 = *v22;
        if ( v15 == v7 )
          goto LABEL_28;
        if ( v14 == -1 )
          goto LABEL_25;
      }
    }
    sub_56E774(a2, v24, v16);
    if ( v14 == -1 )
    {
      v4 = *a1;
      if ( v15 )
        v5 = 2;
      else
        v5 = 6;
      *(int **)((char *)a1 + *((_QWORD *)v4 - 3) + 16) = 0;
    }
    else
    {
      v4 = *a1;
      *(int **)((char *)a1 + *((_QWORD *)*a1 - 3) + 16) = 0;
      if ( v15 )
        return a1;
      v5 = 4;
    }
  }
  else
  {
    v4 = *a1;
    v5 = 4;
  }
  sub_5215C0((__int64)a1 + *((_QWORD *)v4 - 3), v5 | *(_DWORD *)((char *)a1 + *((_QWORD *)v4 - 3) + 32));
  return a1;
}

