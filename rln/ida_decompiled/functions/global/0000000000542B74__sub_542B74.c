/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542B74
 * Mangled: sub_542B74
 * Demangled: sub_542B74
 *
 * Callers: 5
 *   0x000000000053E27C  sub_53E27C
 *   0x0000000000542F94  sub_542F94
 *   0x0000000000542FB8  sub_542FB8
 *   0x0000000000543010  sub_543010
 *   0x000000000054307C  sub_54307C
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005423A0  sub_5423A0
 *   0x000000000054241C  sub_54241C
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 102
 *   insn=0x0000000000542BAC string=0x0000000000542BB0 " "
 *   insn=0x0000000000542BB0 string=0x0000000000542BB4 "`"
 *   insn=0x0000000000542BB8 string=0x0000000000542BBC "t"
 *   insn=0x0000000000542BC0 string=0x0000000000542BC4 "?"
 *   insn=0x0000000000542BC4 string=0x0000000000542BC8 "m"
 *   insn=0x0000000000542BD4 string=0x0000000000542BD8 "@"
 *   insn=0x0000000000542BE4 string=0x0000000000542BE8 "  @"
 *   insn=0x0000000000542BEC string=0x0000000000542BF0 "?"
 *   insn=0x0000000000542BEC string=0x0000000000542CE4 "#t@"
 *   insn=0x0000000000542C04 string=0x0000000000542C08 "`"
 *   insn=0x0000000000542C08 string=0x0000000000542C0C "m"
 *   insn=0x0000000000542C0C string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000542C20 string=0x0000000000542C24 "!"
 *   insn=0x0000000000542C24 string=0x0000000000542C28 " "
 *   insn=0x0000000000542C2C string=0x0000000000542C30 " "
 *   insn=0x0000000000542C54 string=0x0000000000542C58 " "
 *   insn=0x0000000000542C5C string=0x0000000000542C60 "!"
 *   insn=0x0000000000542C64 string=0x0000000000542C68 "! @"
 *   insn=0x0000000000542C68 string=0x0000000000542C6C "!"
 *   insn=0x0000000000542C6C string=0x0000000000542C70 "Tz"
 *   insn=0x0000000000542CA0 string=0x0000000000542CA4 "c"
 *   insn=0x0000000000542CA4 string=0x0000000000542CA8 "c0@"
 *   insn=0x0000000000542CA8 string=0x0000000000542CAC "`"
 *   insn=0x0000000000542CB0 string=0x0000000000542CB4 "`"
 *   insn=0x0000000000542CB8 string=0x0000000000542CBC "a"
 *   insn=0x0000000000542CC4 string=0x0000000000542CC8 "! @"
 *   insn=0x0000000000542CC8 string=0x0000000000542CCC "!"
 *   insn=0x0000000000542CCC string=0x0000000000542CD0 "<z"
 *   insn=0x0000000000542CD0 string=0x0000000000542CD4 "`"
 *   insn=0x0000000000542CD8 string=0x0000000000542CDC "a"
 *   insn=0x0000000000542CF0 string=0x0000000000542CF4 "c"
 *   insn=0x0000000000542CF4 string=0x0000000000542CF8 "c0@"
 *   insn=0x0000000000542CF8 string=0x0000000000542CFC "`"
 *   insn=0x0000000000542D04 string=0x0000000000542D08 "`"
 *   insn=0x0000000000542D0C string=0x0000000000542D10 "a"
 *   insn=0x0000000000542D14 string=0x0000000000542D18 "! @"
 *   insn=0x0000000000542D18 string=0x0000000000542D1C "!"
 *   insn=0x0000000000542D1C string=0x0000000000542D20 "(z"
 *   insn=0x0000000000542D24 string=0x0000000000542D28 "`"
 *   insn=0x0000000000542D2C string=0x0000000000542D30 "t"
 *   insn=0x0000000000542D40 string=0x0000000000542D44 "5"
 *   insn=0x0000000000542D44 string=0x0000000000542D48 "@"
 *   insn=0x0000000000542D64 string=0x0000000000542D68 "A"
 *   insn=0x0000000000542D6C string=0x0000000000542D70 "`"
 *   insn=0x0000000000542D80 string=0x0000000000542D84 "t"
 *   insn=0x0000000000542D88 string=0x0000000000542D8C "A"
 *   insn=0x0000000000542D8C string=0x0000000000542D90 "@"
 *   insn=0x0000000000542D90 string=0x0000000000542D94 "?"
 *   insn=0x0000000000542D94 string=0x0000000000542D98 "C"
 *   insn=0x0000000000542D98 string=0x0000000000542D9C "C"
 *   insn=0x0000000000542D98 string=0x0000000000542D60 "6D"
 *   insn=0x0000000000542DA4 string=0x0000000000542DA8 "b4@"
 *   insn=0x0000000000542DA8 string=0x0000000000542DAC "@"
 *   insn=0x0000000000542DB4 string=0x0000000000542DB8 "6"
 *   insn=0x0000000000542DD8 string=0x0000000000542DDC "_"
 *   insn=0x0000000000542DDC string=0x0000000000542DE0 "`"
 *   insn=0x0000000000542DF0 string=0x0000000000542DF4 "t"
 *   insn=0x0000000000542E00 string=0x0000000000542E04 "?"
 *   insn=0x0000000000542E04 string=0x0000000000542E08 "C"
 *   insn=0x0000000000542E08 string=0x0000000000542DD0 "7D"
 *   insn=0x0000000000542E10 string=0x0000000000542E14 "B4@"
 *   insn=0x0000000000542E14 string=0x0000000000542E18 "@"
 *   insn=0x0000000000542E24 string=0x0000000000542E28 "a"
 *   insn=0x0000000000542E2C string=0x0000000000542E30 "! @"
 *   insn=0x0000000000542E30 string=0x0000000000542E34 "!"
 *   insn=0x0000000000542E38 string=0x0000000000542E3C "`"
 *   insn=0x0000000000542E40 string=0x0000000000542E44 "a"
 *   insn=0x0000000000542E44 string=0x0000000000542E48 "h"
 *   insn=0x0000000000542E4C string=0x0000000000542E50 "a"
 *   insn=0x0000000000542E54 string=0x0000000000542E58 "! @"
 *   insn=0x0000000000542E58 string=0x0000000000542E5C "!"
 *   insn=0x0000000000542E68 string=0x0000000000542E6C "a"
 *   insn=0x0000000000542E6C string=0x0000000000542E70 "^"
 *   insn=0x0000000000542E74 string=0x0000000000542E78 " "
 *   insn=0x0000000000542E80 string=0x0000000000542E84 "B(@"
 *   insn=0x0000000000542E84 string=0x0000000000542E88 "@"
 *   insn=0x0000000000542E88 string=0x0000000000542E8C "a"
 *   insn=0x0000000000542E8C string=0x0000000000542E90 """
 *   insn=0x0000000000542E9C string=0x0000000000542EA0 "4"
 *   insn=0x0000000000542EA0 string=0x0000000000542EA4 "t"
 *   insn=0x0000000000542EB0 string=0x0000000000542EB4 "`"
 *   insn=0x0000000000542EBC string=0x0000000000542EC0 "B(@"
 *   insn=0x0000000000542EC0 string=0x0000000000542EC4 "@"
 *   insn=0x0000000000542EC4 string=0x0000000000542EC8 "a"
 *   insn=0x0000000000542EC8 string=0x0000000000542ECC """
 *   insn=0x0000000000542ED8 string=0x0000000000542EDC "4"
 *   insn=0x0000000000542EDC string=0x0000000000542EE0 "t"
 *   insn=0x0000000000542EF4 string=0x0000000000542EF8 "`"
 *   insn=0x0000000000542EF4 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000542EFC string=0x0000000000542F00 "s"
 *   insn=0x0000000000542F00 string=0x0000000000542F04 "`"@"
 *   insn=0x0000000000542F04 string=0x0000000000542F08 "a"
 *   insn=0x0000000000542F0C string=0x0000000000542F10 "`""
 *   insn=0x0000000000542F14 string=0x0000000000542F44 ""
 *   insn=0x0000000000542F28 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000542F34 string=0x0000000000542F38 "9"
 *   insn=0x0000000000542F3C string=0x0000000000542F40 "a"
 *   insn=0x0000000000542F48 string=0x0000000000542F4C "`"
 *   insn=0x0000000000542F50 string=0x0000000000542F54 "`"
 *   insn=0x0000000000542F5C string=0x0000000000542F60 "!"
 *   insn=0x0000000000542F64 string=0x0000000000542F68 "b"
 *   insn=0x0000000000542F6C string=0x0000000000542F70 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_542B74(__int64 *a1, __int64 a2, __int64 a3)
{
  char *v6; // x20
  __int64 v7; // x25
  char *v8; // x1
  _BOOL4 v9; // w26
  char *v10; // x20
  __int64 v11; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  char *v15; // x20
  __int64 v16; // x21
  unsigned int v17; // w22
  unsigned int v18; // w0
  bool v19; // zf
  _QWORD *v20; // x2
  unsigned int *v21; // x1
  __int64 v22; // x22
  unsigned int v23; // w23
  unsigned int v24; // w2
  __int64 v25; // x0
  _QWORD *v26; // x0
  unsigned int *v27; // x1
  __int64 v28; // x0
  unsigned int v29; // w0
  __int64 v30; // x1
  __int64 v31; // x0
  unsigned int v32; // w0
  __int64 v33; // x1
  _BYTE v34[8]; // [xsp+70h] [xbp+70h] BYREF
  _QWORD *v35; // [xsp+78h] [xbp+78h]

  sub_5423A0((__int64)v34, a1);
  if ( v34[0] )
  {
    v6 = (char *)a1 + *(_QWORD *)(*a1 - 24);
    v7 = *((_QWORD *)v6 + 2);
    if ( v7 <= a3 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v6 + 29) + 96LL))(
              *((_QWORD *)v6 + 29),
              a2,
              a3);
      v8 = (char *)a1 + *(_QWORD *)(*a1 - 24);
      if ( a3 == v13 )
      {
LABEL_5:
        *((_QWORD *)v8 + 2) = 0;
        goto LABEL_6;
      }
      sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *((_DWORD *)v8 + 8) | 1);
    }
    else
    {
      v8 = (char *)a1 + *(_QWORD *)(*a1 - 24);
      v9 = (*((_DWORD *)v6 + 6) & 0xB0) == 32;
      if ( (*((_DWORD *)v6 + 6) & 0xB0) != 0x20 )
      {
        v22 = v7 - a3;
        if ( v6[228] )
        {
          v23 = *((_DWORD *)v6 + 56);
        }
        else
        {
          v28 = *((_QWORD *)v6 + 30);
          if ( !v28 )
            sub_5652C8(0);
          v29 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 80LL))(v28, 32);
          v30 = *a1;
          *((_DWORD *)v6 + 56) = v29;
          v23 = v29;
          v6[228] = 1;
          v6 = (char *)a1 + *(_QWORD *)(v30 - 24);
          v8 = v6;
        }
        if ( v22 > 0 )
        {
          while ( 1 )
          {
            v26 = (_QWORD *)*((_QWORD *)v6 + 29);
            v27 = (unsigned int *)v26[5];
            if ( (unsigned __int64)v27 < v26[6] )
            {
              *v27 = v23;
              v24 = v23;
              v26[5] = v27 + 1;
            }
            else
            {
              v24 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v26 + 104LL))(v26, v23);
            }
            v25 = *a1;
            if ( v24 == -1 )
            {
              sub_5215C0((__int64)a1 + *(_QWORD *)(v25 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(v25 - 24) + 32) | 1);
              v8 = (char *)a1 + *(_QWORD *)(*a1 - 24);
              goto LABEL_4;
            }
            if ( !--v22 )
              break;
            v6 = (char *)a1 + *(_QWORD *)(v25 - 24);
          }
          v8 = (char *)a1 + *(_QWORD *)(v25 - 24);
        }
      }
LABEL_4:
      if ( *((_DWORD *)v8 + 8) )
        goto LABEL_5;
      if ( a3 != (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v8 + 29) + 96LL))(
                   *((_QWORD *)v8 + 29),
                   a2,
                   a3) )
        sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
      if ( v9 )
      {
        v15 = (char *)a1 + *(_QWORD *)(*a1 - 24);
        v8 = v15;
        if ( *((_DWORD *)v15 + 8) )
          goto LABEL_5;
        v16 = v7 - a3;
        if ( v15[228] )
        {
          v17 = *((_DWORD *)v15 + 56);
          v8 = (char *)a1 + *(_QWORD *)(*a1 - 24);
        }
        else
        {
          v31 = *((_QWORD *)v15 + 30);
          if ( !v31 )
            sub_5652C8(0);
          v32 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 80LL))(v31, 32);
          v33 = *a1;
          *((_DWORD *)v15 + 56) = v32;
          v17 = v32;
          v15[228] = 1;
          v15 = (char *)a1 + *(_QWORD *)(v33 - 24);
          v8 = v15;
        }
        if ( v16 <= 0 )
          goto LABEL_5;
        while ( 1 )
        {
          v20 = (_QWORD *)*((_QWORD *)v15 + 29);
          v21 = (unsigned int *)v20[5];
          if ( (unsigned __int64)v21 < v20[6] )
          {
            *v21 = v17;
            v18 = v17;
            v20[5] = v21 + 1;
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v20 + 104LL))(*((_QWORD *)v15 + 29), v17);
          }
          v19 = v18 == -1;
          v14 = *a1;
          if ( v19 )
            break;
          if ( !--v16 )
            goto LABEL_15;
          v15 = (char *)a1 + *(_QWORD *)(v14 - 24);
        }
        sub_5215C0((__int64)a1 + *(_QWORD *)(v14 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(v14 - 24) + 32) | 1);
      }
    }
    v14 = *a1;
LABEL_15:
    v8 = (char *)a1 + *(_QWORD *)(v14 - 24);
    goto LABEL_5;
  }
LABEL_6:
  v10 = (char *)v35 + *(_QWORD *)(*v35 - 24LL);
  if ( (*((_DWORD *)v10 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v11 = *((_QWORD *)v10 + 29);
  if ( !v11 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11) != -1 )
    return a1;
  sub_5215C0((__int64)v35 + *(_QWORD *)(*v35 - 24LL), *(_DWORD *)((char *)v35 + *(_QWORD *)(*v35 - 24LL) + 32) | 1);
  return a1;
}

