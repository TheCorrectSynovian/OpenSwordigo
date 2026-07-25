/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005400E4
 * Mangled: sub_5400E4
 * Demangled: sub_5400E4
 *
 * Callers: 0
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
 * Referenced strings: 31
 *   insn=0x0000000000540114 string=0x0000000000540118 "`"
 *   insn=0x0000000000540124 string=0x0000000000540128 "`"
 *   insn=0x0000000000540130 string=0x0000000000540134 "c"
 *   insn=0x0000000000540134 string=0x0000000000540138 "c0@"
 *   insn=0x0000000000540138 string=0x000000000054013C "`"
 *   insn=0x0000000000540144 string=0x0000000000540148 "`"
 *   insn=0x000000000054014C string=0x0000000000540150 "a"
 *   insn=0x0000000000540154 string=0x0000000000540158 "! @"
 *   insn=0x0000000000540158 string=0x000000000054015C "!"
 *   insn=0x0000000000540174 string=0x0000000000540178 "`"
 *   insn=0x000000000054017C string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000540190 string=0x0000000000540194 "!"
 *   insn=0x0000000000540194 string=0x0000000000540198 " "
 *   insn=0x00000000005401B8 string=0x00000000005401BC " "
 *   insn=0x00000000005401C0 string=0x00000000005401C4 "!"
 *   insn=0x00000000005401C8 string=0x00000000005401CC "! @"
 *   insn=0x00000000005401CC string=0x00000000005401D0 "!"
 *   insn=0x00000000005401EC string=0x00000000005401F0 "a"
 *   insn=0x00000000005401F4 string=0x00000000005401F8 "`"
 *   insn=0x00000000005401F4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005401FC string=0x0000000000540200 "s"
 *   insn=0x0000000000540200 string=0x0000000000540204 "`"@"
 *   insn=0x0000000000540204 string=0x0000000000540208 "a"
 *   insn=0x000000000054020C string=0x0000000000540210 "`""
 *   insn=0x0000000000540214 string=0x0000000000540218 "V\n"
 *   insn=0x0000000000540214 string=0x0000000000540268 "B\n"
 *   insn=0x000000000054021C string=0x0000000000540220 "`"
 *   insn=0x0000000000540224 string=0x0000000000540228 "`"
 *   insn=0x0000000000540230 string=0x0000000000540234 "!"
 *   insn=0x000000000054023C string=0x0000000000540274 "?\n"
 *   insn=0x0000000000540240 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5400E4(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  char *v7; // x20
  __int64 v8; // x0
  _BYTE v10[8]; // [xsp+40h] [xbp+40h] BYREF
  _QWORD *v11; // [xsp+48h] [xbp+48h]

  sub_53FC7C((__int64)v10, a1);
  if ( v10[0] )
  {
    v6 = *(_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 232);
    if ( a3 != (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, a2, a3) )
      sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 1);
  }
  v7 = (char *)v11 + *(_QWORD *)(*v11 - 24LL);
  if ( (*((_DWORD *)v7 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v8 = *((_QWORD *)v7 + 29);
  if ( !v8 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) != -1 )
    return a1;
  sub_520C14((__int64)v11 + *(_QWORD *)(*v11 - 24LL), *(_DWORD *)((char *)v11 + *(_QWORD *)(*v11 - 24LL) + 32) | 1);
  return a1;
}

