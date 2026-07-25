/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056F934
 * Mangled: sub_56F934
 * Demangled: sub_56F934
 *
 * Callers: 2
 *   0x0000000000528E58  sub_528E58
 *   0x000000000056F6C8  sub_56F6C8
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000525FE4  sub_525FE4
 *   0x0000000000526D40  sub_526D40
 *   0x000000000056FBA4  std::bad_alloc::what(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x000000000056F934 string=0x000000000056F938 "?"
 *   insn=0x000000000056F960 string=0x000000000056F964 """
 *   insn=0x000000000056F96C string=0x000000000056F970 "M"
 *   insn=0x000000000056F988 string=0x000000000056F98C "`\n@"
 *   insn=0x000000000056F98C string=0x000000000056F990 "a"
 *   insn=0x000000000056F998 string=0x000000000056FB38 "a"
 *   insn=0x000000000056F9B4 string=0x000000000056F9B8 "_"
 *   insn=0x000000000056F9C0 string=0x000000000056F9C4 "d"
 *   insn=0x000000000056F9C0 string=0x000000000056FA70 "v"
 *   insn=0x000000000056F9C8 string=0x000000000056F9CC "c\n@"
 *   insn=0x000000000056F9D4 string=0x000000000056F9D8 "?"
 *   insn=0x000000000056F9D8 string=0x000000000056F9DC "!"
 *   insn=0x000000000056F9DC string=0x000000000056F9E0 "?"
 *   insn=0x000000000056F9E4 string=0x000000000056F9E8 "`"
 *   insn=0x000000000056F9E4 string=0x000000000056FAB8 "B"
 *   insn=0x000000000056F9E8 string=0x000000000056F9EC "`\n"
 *   insn=0x000000000056F9EC string=0x000000000056F9F0 "B"
 *   insn=0x000000000056F9FC string=0x000000000056FA00 "`xa"
 *   insn=0x000000000056F9FC string=0x000000000056FAF4 "a"
 *   insn=0x000000000056FA08 string=0x000000000056FA0C "_"
 *   insn=0x000000000056FA24 string=0x000000000056FA28 "6"
 *   insn=0x000000000056FA30 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000056FA44 string=0x000000000056FA48 "!"
 *   insn=0x000000000056FA54 string=0x00000000001FD590 "0'"
 *   insn=0x000000000056FA90 string=0x000000000056FA94 "! @"
 *   insn=0x000000000056FA94 string=0x000000000056FA98 "!"
 *   insn=0x000000000056FAC0 string=0x000000000056FAC4 "\t"
 *   insn=0x000000000056FAC4 string=0x000000000056FAC8 "`D@"
 *   insn=0x000000000056FAC4 string=0x000000000056FB24 "a"
 *   insn=0x000000000056FAC8 string=0x000000000056FACC "c\n"
 *   insn=0x000000000056FAD4 string=0x000000000056FAD8 "`\n@"
 *   insn=0x000000000056FAD8 string=0x000000000056FADC "a"
 *   insn=0x000000000056FAF8 string=0x000000000056FAFC "!$@"
 *   insn=0x000000000056FAFC string=0x000000000056FB00 " "
 *   insn=0x000000000056FB28 string=0x000000000056FB2C "!(@"
 *   insn=0x000000000056FB2C string=0x000000000056FB30 " "
 *   insn=0x000000000056FB3C string=0x000000000056FB40 "!$@"
 *   insn=0x000000000056FB40 string=0x000000000056FB44 " "
 *   insn=0x000000000056FB84 string=0x000000000056FB88 "OG"
 *   insn=0x000000000056FB94 string=0x000000000056FB98 "~6"
 *   insn=0x000000000056FB9C string=0x000000000056FBA0 "IG"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56F934(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x19
  _DWORD *v5; // x0
  int v6; // w0
  signed __int64 v7; // x2
  int v8; // w22
  _BOOL4 v9; // w3
  unsigned __int64 v10; // x4
  __int64 v11; // x1
  int *v12; // x3
  int *v13; // x0
  int *v15; // x0
  char v16; // [xsp+58h] [xbp+58h] BYREF

  if ( a2 == 1 )
    return sub_526D40(a1);
  *(_QWORD *)(a1 + 8) = 0;
  sub_525FE4(&v16, (int **)a1, 1u);
  if ( a2 <= 0 || !v16 )
    return a1;
  v4 = *(_QWORD **)(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL) + 232);
  v5 = (_DWORD *)v4[2];
  v6 = (unsigned __int64)v5 >= v4[3]
     ? (*(__int64 (__fastcall **)(_QWORD))(*v4 + 72LL))(*(_QWORD *)(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL) + 232))
     : *v5;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
LABEL_7:
  while ( 1 )
  {
    v9 = v6 != -1;
    if ( v7 < a2 )
      break;
LABEL_14:
    if ( !v9 || a2 != 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_18;
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
    v7 = 0x8000000000000000LL;
    v8 = 1;
  }
  while ( v9 )
  {
    v10 = v4[3];
    v11 = a2 - v7;
    v12 = (int *)v4[2];
    if ( a2 - v7 > (__int64)(v10 - (_QWORD)v12) >> 2 )
      v11 = (__int64)(v10 - (_QWORD)v12) >> 2;
    if ( v11 <= 1 )
    {
      *(_QWORD *)(a1 + 8) = v7 + 1;
      if ( v10 <= (unsigned __int64)v12 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 80LL))(v4);
      }
      else
      {
        v6 = *v12;
        v4[2] = v12 + 1;
      }
      if ( v6 != -1 )
      {
        v15 = (int *)v4[2];
        if ( (unsigned __int64)v15 < v4[3] )
        {
          v6 = *v15;
          v7 = *(_QWORD *)(a1 + 8);
          goto LABEL_7;
        }
LABEL_27:
        v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 72LL))(v4);
      }
      v7 = *(_QWORD *)(a1 + 8);
      goto LABEL_7;
    }
    v13 = &v12[v11];
    v4[2] = v13;
    v7 += v11;
    *(_QWORD *)(a1 + 8) = v7;
    if ( v10 <= (unsigned __int64)v13 )
      goto LABEL_27;
    v6 = v12[v11];
    v9 = v6 != -1;
    if ( v7 >= a2 )
      goto LABEL_14;
  }
LABEL_18:
  if ( v8 )
    *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
  if ( v6 != -1 )
    return a1;
  sub_5215C0(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL), *(_DWORD *)(a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL) + 32) | 2);
  return a1;
}

