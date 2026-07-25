/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056F6C8
 * Mangled: sub_56F6C8
 * Demangled: sub_56F6C8
 *
 * Callers: 1
 *   0x0000000000528E58  sub_528E58
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005230E4  sub_5230E4
 *   0x0000000000523F08  sub_523F08
 *   0x000000000056F934  sub_56F934
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000056F6C8 string=0x000000000056F6CC "?"
 *   insn=0x000000000056F6E4 string=0x000000000056F6E8 " "
 *   insn=0x000000000056F6F4 string=0x000000000056F6F8 """
 *   insn=0x000000000056F6F8 string=0x000000000056F6FC "z"
 *   insn=0x000000000056F700 string=0x000000000056F704 "-"
 *   insn=0x000000000056F750 string=0x000000000056F754 "a"
 *   insn=0x000000000056F754 string=0x000000000056F800 "v"
 *   insn=0x000000000056F758 string=0x000000000056F75C "a"
 *   insn=0x000000000056F760 string=0x000000000056F764 "d"
 *   insn=0x000000000056F764 string=0x000000000056F768 "?"
 *   insn=0x000000000056F768 string=0x000000000056F76C "!"
 *   insn=0x000000000056F76C string=0x000000000056F770 "?"
 *   insn=0x000000000056F774 string=0x000000000056F848 "B"
 *   insn=0x000000000056F77C string=0x000000000056F780 "B"
 *   insn=0x000000000056F788 string=0x000000000056F78C "I"
 *   insn=0x000000000056F7B4 string=0x000000000056F7B8 "6"
 *   insn=0x000000000056F7C0 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000056F7D4 string=0x000000000056F7D8 "!"
 *   insn=0x000000000056F7E0 string=0x000000000056F7E4 "k7"
 *   insn=0x000000000056F7E4 string=0x00000000001FD590 "0'"
 *   insn=0x000000000056F820 string=0x000000000056F824 "! @"
 *   insn=0x000000000056F824 string=0x000000000056F828 "!"
 *   insn=0x000000000056F878 string=0x000000000056F87C "!$@"
 *   insn=0x000000000056F87C string=0x000000000056F880 " "
 *   insn=0x000000000056F8A8 string=0x000000000056F8AC "!(@"
 *   insn=0x000000000056F8AC string=0x000000000056F8B0 " "
 *   insn=0x000000000056F8B4 string=0x000000000056F8B8 "`"
 *   insn=0x000000000056F8CC string=0x000000000056F8D0 "!$@"
 *   insn=0x000000000056F8D0 string=0x000000000056F8D4 " "
 *   insn=0x000000000056F8E0 string=0x000000000056F8E4 "?"
 *   insn=0x000000000056F90C string=0x000000000056F910 " 7"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_56F6C8(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // x20
  unsigned __int8 *v5; // x0
  int v6; // w0
  signed __int64 v7; // x2
  int v8; // w22
  _BOOL4 v9; // w1
  unsigned __int64 v10; // x3
  __int64 v11; // x1
  unsigned __int64 v12; // x0
  unsigned __int8 *v14; // x0
  char v15; // [xsp+58h] [xbp+58h] BYREF

  if ( a2 != 1 )
  {
    a1[1] = 0;
    sub_5230E4(&v15, a1, 1u);
    if ( a2 <= 0 || !v15 )
      return a1;
    v4 = *(_QWORD **)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 232);
    v5 = (unsigned __int8 *)v4[2];
    if ( (unsigned __int64)v5 >= v4[3] )
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*v4 + 72LL))(*(_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 232));
    else
      v6 = *v5;
    v7 = a1[1];
    v8 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v9 = v6 != -1;
          if ( a2 > v7 )
            break;
LABEL_14:
          if ( !v9 || a2 != 0x7FFFFFFFFFFFFFFFLL )
          {
LABEL_18:
            if ( v8 )
              a1[1] = 0x7FFFFFFFFFFFFFFFLL;
            if ( v6 == -1 )
            {
              sub_520C14(
                (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
                *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 2);
              return a1;
            }
            return a1;
          }
          a1[1] = 0x8000000000000000LL;
          v7 = 0x8000000000000000LL;
          v8 = 1;
        }
        while ( 1 )
        {
          if ( !v9 )
            goto LABEL_18;
          v10 = v4[3];
          v11 = a2 - v7;
          v12 = v4[2];
          if ( a2 - v7 > (__int64)(v10 - v12) )
            v11 = v10 - v12;
          if ( v11 <= 1 )
            break;
          v4[2] = v12 + v11;
          v7 += v11;
          a1[1] = v7;
          if ( v10 <= v12 + v11 )
            goto LABEL_26;
          v6 = *(unsigned __int8 *)(v12 + v11);
          v9 = v6 != -1;
          if ( a2 <= v7 )
            goto LABEL_14;
        }
        a1[1] = v7 + 1;
        if ( v10 <= v12 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 80LL))(v4);
          if ( v6 == -1 )
            goto LABEL_27;
          v14 = (unsigned __int8 *)v4[2];
          v10 = v4[3];
        }
        else
        {
          v14 = (unsigned __int8 *)(v12 + 1);
          v4[2] = v14;
        }
        if ( v10 > (unsigned __int64)v14 )
        {
          v6 = *v14;
          v7 = a1[1];
          continue;
        }
        break;
      }
LABEL_26:
      v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 72LL))(v4);
LABEL_27:
      v7 = a1[1];
      continue;
    }
  }
  return sub_523F08(a1);
}

