/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542648
 * Mangled: sub_542648
 * Demangled: sub_542648
 *
 * Callers: 2
 *   0x00000000005429B8  sub_5429B8
 *   0x0000000000542A08  sub_542A08
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
 * Referenced strings: 35
 *   insn=0x0000000000542668 string=0x000000000054266C "M"
 *   insn=0x0000000000542674 string=0x0000000000542678 "`"
 *   insn=0x000000000054267C string=0x0000000000542680 "`"
 *   insn=0x000000000054268C string=0x0000000000542690 "?"
 *   insn=0x0000000000542694 string=0x0000000000542698 "4D"
 *   insn=0x00000000005426A0 string=0x00000000005426A4 "`"
 *   insn=0x00000000005426A4 string=0x0000000000542730 "`"
 *   insn=0x00000000005426B8 string=0x00000000005426BC "`"
 *   insn=0x00000000005426C0 string=0x00000000001F85C0 "0'"
 *   insn=0x00000000005426D4 string=0x00000000005426D8 "!"
 *   insn=0x00000000005426D8 string=0x00000000005426DC " "
 *   insn=0x00000000005426FC string=0x0000000000542700 " "
 *   insn=0x0000000000542704 string=0x0000000000542708 "!"
 *   insn=0x000000000054270C string=0x0000000000542710 "! @"
 *   insn=0x0000000000542710 string=0x0000000000542714 "!"
 *   insn=0x0000000000542734 string=0x0000000000542738 "a"
 *   insn=0x000000000054273C string=0x0000000000542740 "! @"
 *   insn=0x0000000000542740 string=0x0000000000542744 "!"
 *   insn=0x0000000000542754 string=0x0000000000542758 "B4@"
 *   insn=0x0000000000542758 string=0x000000000054275C "@"
 *   insn=0x0000000000542770 string=0x0000000000542774 "`"
 *   insn=0x0000000000542770 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000542778 string=0x000000000054277C "s"
 *   insn=0x000000000054277C string=0x0000000000542780 "`"@"
 *   insn=0x0000000000542780 string=0x0000000000542784 "a"
 *   insn=0x0000000000542788 string=0x000000000054278C "`""
 *   insn=0x00000000005427A4 string=0x00000000005427A8 "G"
 *   insn=0x00000000005427AC string=0x00000000005427B0 "x"
 *   insn=0x00000000005427B0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005427C4 string=0x00000000005427C8 "`"
 *   insn=0x00000000005427CC string=0x00000000005427D0 "`"
 *   insn=0x00000000005427D8 string=0x00000000005427DC "!"
 *   insn=0x00000000005427E0 string=0x00000000005427E4 "b"
 *   insn=0x00000000005427E4 string=0x00000000005427E8 "j"
 *   insn=0x00000000005427F4 string=0x00000000005427F8 "f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_542648(__int64 *a1, unsigned int a2)
{
  _QWORD *v4; // x0
  unsigned int *v5; // x1
  char *v6; // x20
  __int64 v7; // x0
  _BYTE v9[8]; // [xsp+40h] [xbp+40h] BYREF
  _QWORD *v10; // [xsp+48h] [xbp+48h]

  sub_5423A0((__int64)v9, a1);
  if ( v9[0] )
  {
    v4 = *(_QWORD **)((char *)a1 + *(_QWORD *)(*a1 - 24) + 232);
    v5 = (unsigned int *)v4[5];
    if ( (unsigned __int64)v5 >= v4[6] )
    {
      a2 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v4 + 104LL))(v4, a2);
    }
    else
    {
      *v5 = a2;
      v4[5] = v5 + 1;
    }
    if ( a2 == -1 )
      sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
  }
  v6 = (char *)v10 + *(_QWORD *)(*v10 - 24LL);
  if ( (*((_DWORD *)v6 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v7 = *((_QWORD *)v6 + 29);
  if ( !v7 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) != -1 )
    return a1;
  sub_5215C0((__int64)v10 + *(_QWORD *)(*v10 - 24LL), *(_DWORD *)((char *)v10 + *(_QWORD *)(*v10 - 24LL) + 32) | 1);
  return a1;
}

