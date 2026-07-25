/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053FF24
 * Mangled: sub_53FF24
 * Demangled: sub_53FF24
 *
 * Callers: 2
 *   0x0000000000540294  sub_540294
 *   0x0000000000540310  sub_540310
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000520C14  sub_520C14
 *   0x000000000053FC7C  sub_53FC7C
 *   0x000000000053FCF8  sub_53FCF8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x000000000053FF38 string=0x000000000053FF3C "4"
 *   insn=0x000000000053FF44 string=0x000000000053FF48 "M"
 *   insn=0x000000000053FF50 string=0x000000000053FF54 "`"
 *   insn=0x000000000053FF58 string=0x000000000053FF5C "`"
 *   insn=0x000000000053FF68 string=0x000000000053FF6C "?"
 *   insn=0x000000000053FF70 string=0x000000000053FF74 "4"
 *   insn=0x000000000053FF78 string=0x000000000053FF7C "!"
 *   insn=0x000000000053FF94 string=0x000000000053FF98 "`"
 *   insn=0x000000000053FF9C string=0x00000000001F85C0 "0'"
 *   insn=0x000000000053FFB0 string=0x000000000053FFB4 "!"
 *   insn=0x000000000053FFB4 string=0x000000000053FFB8 " "
 *   insn=0x000000000053FFD8 string=0x000000000053FFDC " "
 *   insn=0x000000000053FFE0 string=0x000000000053FFE4 "!"
 *   insn=0x000000000053FFE8 string=0x000000000053FFEC "! @"
 *   insn=0x000000000053FFEC string=0x000000000053FFF0 "!"
 *   insn=0x000000000053FFF0 string=0x000000000053FFF4 ""
 *   insn=0x0000000000540010 string=0x0000000000540014 "B4@"
 *   insn=0x0000000000540014 string=0x0000000000540018 "@"
 *   insn=0x000000000054001C string=0x0000000000540020 "!"
 *   insn=0x0000000000540020 string=0x0000000000540024 "`"
 *   insn=0x0000000000540028 string=0x000000000054002C "a"
 *   insn=0x0000000000540030 string=0x0000000000540034 "! @"
 *   insn=0x0000000000540034 string=0x0000000000540038 "!"
 *   insn=0x0000000000540048 string=0x000000000054004C "e"
 *   insn=0x0000000000540048 string=0x00000000005400A0 "P"
 *   insn=0x000000000054004C string=0x0000000000540050 "`"
 *   insn=0x000000000054004C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000540054 string=0x0000000000540058 "s"
 *   insn=0x0000000000540058 string=0x000000000054005C "`"@"
 *   insn=0x000000000054005C string=0x0000000000540060 "a"
 *   insn=0x0000000000540064 string=0x0000000000540068 "`""
 *   insn=0x0000000000540088 string=0x000000000054008C "A"
 *   insn=0x000000000054008C string=0x00000000001FD590 "0'"
 *   insn=0x00000000005400A0 string=0x00000000005400A4 "`"
 *   insn=0x00000000005400A8 string=0x00000000005400AC "`"
 *   insn=0x00000000005400B4 string=0x00000000005400B8 "!"
 *   insn=0x00000000005400BC string=0x00000000005400C0 "b"
 *   insn=0x00000000005400C0 string=0x00000000005400C4 "3"
 *   insn=0x00000000005400D0 string=0x00000000005400D4 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53FF24(_QWORD *a1, unsigned __int8 a2)
{
  unsigned int v3; // w20
  _QWORD *v4; // x0
  _BYTE *v5; // x1
  char *v6; // x20
  __int64 v7; // x0
  _BYTE v9[8]; // [xsp+40h] [xbp+40h] BYREF
  _QWORD *v10; // [xsp+48h] [xbp+48h]

  v3 = a2;
  sub_53FC7C((__int64)v9, a1);
  if ( v9[0] )
  {
    v4 = *(_QWORD **)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 232);
    v5 = (_BYTE *)v4[5];
    if ( (unsigned __int64)v5 >= v4[6] )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*v4 + 104LL))(v4, v3) == -1 )
        sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 1);
    }
    else
    {
      *v5 = v3;
      ++v4[5];
    }
  }
  v6 = (char *)v10 + *(_QWORD *)(*v10 - 24LL);
  if ( (*((_DWORD *)v6 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v7 = *((_QWORD *)v6 + 29);
  if ( !v7 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) != -1 )
    return a1;
  sub_520C14((__int64)v10 + *(_QWORD *)(*v10 - 24LL), *(_DWORD *)((char *)v10 + *(_QWORD *)(*v10 - 24LL) + 32) | 1);
  return a1;
}

