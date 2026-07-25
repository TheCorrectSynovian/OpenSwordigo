/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005436D8
 * Mangled: sub_5436D8
 * Demangled: sub_5436D8
 *
 * Callers: 1
 *   0x00000000005438EC  sub_5438EC
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
 * Referenced strings: 41
 *   insn=0x00000000005436EC string=0x00000000005436F0 "8"
 *   insn=0x0000000000543700 string=0x0000000000543704 "'"
 *   insn=0x0000000000543718 string=0x000000000054371C "u~@"
 *   insn=0x000000000054371C string=0x0000000000543720 "5\t"
 *   insn=0x0000000000543720 string=0x0000000000543724 "vv@"
 *   insn=0x0000000000543724 string=0x0000000000543728 "`"
 *   insn=0x0000000000543730 string=0x0000000000543734 "@"
 *   insn=0x0000000000543734 string=0x0000000000543738 "d"
 *   insn=0x0000000000543734 string=0x00000000005437DC "`z@"
 *   insn=0x0000000000543744 string=0x0000000000543748 """
 *   insn=0x0000000000543758 string=0x000000000054375C "!"
 *   insn=0x0000000000543770 string=0x0000000000543774 "! @"
 *   insn=0x0000000000543774 string=0x0000000000543778 "!"
 *   insn=0x0000000000543780 string=0x0000000000543784 "`"
 *   insn=0x0000000000543788 string=0x000000000054378C "s"
 *   insn=0x000000000054378C string=0x0000000000543790 "`"
 *   insn=0x0000000000543790 string=0x0000000000543794 "`"
 *   insn=0x0000000000543798 string=0x00000000001F85C0 "0'"
 *   insn=0x00000000005437A0 string=0x00000000005437A4 "`v@"
 *   insn=0x00000000005437AC string=0x00000000005437B0 "!"
 *   insn=0x00000000005437B0 string=0x00000000005437B4 " "
 *   insn=0x00000000005437B8 string=0x00000000005437BC "`"
 *   insn=0x00000000005437E8 string=0x00000000005437EC "B(@"
 *   insn=0x00000000005437EC string=0x00000000005437F0 "@"
 *   insn=0x00000000005437F4 string=0x00000000005437F8 "`"
 *   insn=0x00000000005437F8 string=0x00000000005437FC " "
 *   insn=0x00000000005437FC string=0x0000000000543800 "`"
 *   insn=0x0000000000543808 string=0x000000000054380C " "
 *   insn=0x0000000000543810 string=0x0000000000543814 "!"
 *   insn=0x0000000000543818 string=0x000000000054381C "! @"
 *   insn=0x000000000054381C string=0x0000000000543820 "!"
 *   insn=0x0000000000543820 string=0x0000000000543824 "gw"
 *   insn=0x000000000054384C string=0x0000000000543850 "d"
 *   insn=0x000000000054384C string=0x00000000005438A8 "N"
 *   insn=0x0000000000543850 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000543890 string=0x0000000000543894 "?"
 *   insn=0x0000000000543894 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005438BC string=0x00000000005438C0 "!"
 *   insn=0x00000000005438C4 string=0x00000000005438C8 "b"
 *   insn=0x00000000005438C8 string=0x00000000005438CC "1"
 *   insn=0x00000000005438D8 string=0x00000000005438DC "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5436D8(__int64 *a1, unsigned __int8 a2)
{
  unsigned int v3; // w24
  char *v4; // x19
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x4
  char v8; // w1
  char *v9; // x19
  __int64 v10; // x0
  __int64 v12; // x0
  unsigned int v13; // w0
  char v14[8]; // [xsp+60h] [xbp+60h] BYREF
  _QWORD *v15; // [xsp+68h] [xbp+68h]

  v3 = a2;
  sub_5423A0((__int64)v14, a1);
  if ( v14[0] )
  {
    v4 = (char *)a1 + *(_QWORD *)(*a1 - 24);
    v5 = *((_QWORD *)v4 + 31);
    if ( !v5 )
      sub_5652C8(*a1);
    v6 = *((_QWORD *)v4 + 29);
    if ( v4[228] )
    {
      v7 = *((unsigned int *)v4 + 56);
    }
    else
    {
      v12 = *((_QWORD *)v4 + 30);
      if ( !v12 )
        sub_5652C8(0);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 80LL))(v12, 32);
      v7 = v13;
      *((_DWORD *)v4 + 56) = v13;
      v4[228] = 1;
    }
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, _QWORD))(*(_QWORD *)v5 + 16LL))(
      v5,
      v6,
      v6 == 0,
      v4,
      v7,
      v3);
    if ( v8 )
      sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
  }
  v9 = (char *)v15 + *(_QWORD *)(*v15 - 24LL);
  if ( (*((_DWORD *)v9 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v10 = *((_QWORD *)v9 + 29);
  if ( !v10 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10) != -1 )
    return a1;
  sub_5215C0((__int64)v15 + *(_QWORD *)(*v15 - 24LL), *(_DWORD *)((char *)v15 + *(_QWORD *)(*v15 - 24LL) + 32) | 1);
  return a1;
}

