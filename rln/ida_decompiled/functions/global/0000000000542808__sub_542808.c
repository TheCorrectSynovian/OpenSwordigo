/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542808
 * Mangled: sub_542808
 * Demangled: sub_542808
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005423A0  sub_5423A0
 *   0x000000000054241C  sub_54241C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x0000000000542838 string=0x000000000054283C "`"
 *   insn=0x0000000000542848 string=0x000000000054284C "`"
 *   insn=0x0000000000542854 string=0x0000000000542858 "c"
 *   insn=0x0000000000542858 string=0x000000000054285C "c0@"
 *   insn=0x000000000054285C string=0x0000000000542860 "`"
 *   insn=0x0000000000542868 string=0x000000000054286C "`"
 *   insn=0x0000000000542870 string=0x0000000000542874 "a"
 *   insn=0x0000000000542878 string=0x000000000054287C "! @"
 *   insn=0x000000000054287C string=0x0000000000542880 "!"
 *   insn=0x0000000000542880 string=0x0000000000542884 "O{"
 *   insn=0x0000000000542898 string=0x000000000054289C "`"
 *   insn=0x000000000054289C string=0x00000000005428A0 "H"
 *   insn=0x00000000005428A0 string=0x00000000001F85C0 "0'"
 *   insn=0x00000000005428B4 string=0x00000000005428B8 "!"
 *   insn=0x00000000005428B8 string=0x00000000005428BC " "
 *   insn=0x00000000005428DC string=0x00000000005428E0 " "
 *   insn=0x00000000005428E4 string=0x00000000005428E8 "!"
 *   insn=0x00000000005428EC string=0x00000000005428F0 "! @"
 *   insn=0x00000000005428F0 string=0x00000000005428F4 "!"
 *   insn=0x00000000005428F4 string=0x00000000005428F8 "2{"
 *   insn=0x0000000000542910 string=0x0000000000542914 "a"
 *   insn=0x0000000000542914 string=0x0000000000542918 "2"
 *   insn=0x0000000000542914 string=0x0000000000542940 "("
 *   insn=0x0000000000542918 string=0x000000000054291C "`"
 *   insn=0x0000000000542918 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000542920 string=0x0000000000542924 "s"
 *   insn=0x0000000000542924 string=0x0000000000542928 "`"@"
 *   insn=0x0000000000542928 string=0x000000000054292C "a"
 *   insn=0x0000000000542930 string=0x0000000000542934 "`""
 *   insn=0x0000000000542938 string=0x000000000054298C "y"
 *   insn=0x0000000000542940 string=0x0000000000542944 "`"
 *   insn=0x0000000000542948 string=0x000000000054294C "`"
 *   insn=0x0000000000542954 string=0x0000000000542958 "!"
 *   insn=0x0000000000542960 string=0x0000000000542964 ""
 *   insn=0x0000000000542960 string=0x0000000000542998 "v"
 *   insn=0x0000000000542964 string=0x00000000001FD590 "0'"
 *   insn=0x000000000054296C string=0x0000000000542970 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_542808(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  char *v7; // x20
  __int64 v8; // x0
  _BYTE v10[8]; // [xsp+40h] [xbp+40h] BYREF
  _QWORD *v11; // [xsp+48h] [xbp+48h]

  sub_5423A0((__int64)v10, a1);
  if ( v10[0] )
  {
    v6 = *(__int64 *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 232);
    if ( a3 != (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, a2, a3) )
      sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
  }
  v7 = (char *)v11 + *(_QWORD *)(*v11 - 24LL);
  if ( (*((_DWORD *)v7 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v8 = *((_QWORD *)v7 + 29);
  if ( !v8 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) != -1 )
    return a1;
  sub_5215C0((__int64)v11 + *(_QWORD *)(*v11 - 24LL), *(_DWORD *)((char *)v11 + *(_QWORD *)(*v11 - 24LL) + 32) | 1);
  return a1;
}

