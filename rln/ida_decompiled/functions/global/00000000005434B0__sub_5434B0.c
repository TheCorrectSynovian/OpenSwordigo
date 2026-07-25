/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005434B0
 * Mangled: sub_5434B0
 * Demangled: sub_5434B0
 *
 * Callers: 3
 *   0x00000000005436C4  sub_5436C4
 *   0x00000000005436C8  sub_5436C8
 *   0x00000000005436D0  sub_5436D0
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
 * Referenced strings: 39
 *   insn=0x00000000005434F0 string=0x00000000005434F4 "u~@"
 *   insn=0x00000000005434F4 string=0x00000000005434F8 "5\t"
 *   insn=0x00000000005434F8 string=0x00000000005434FC "vv@"
 *   insn=0x00000000005434F8 string=0x000000000054361C "+"
 *   insn=0x00000000005434FC string=0x0000000000543500 "`"
 *   insn=0x0000000000543508 string=0x000000000054350C "@"
 *   insn=0x000000000054350C string=0x0000000000543510 "d"
 *   insn=0x000000000054350C string=0x00000000005435B4 "`z@"
 *   insn=0x000000000054351C string=0x0000000000543520 """
 *   insn=0x0000000000543530 string=0x0000000000543534 "!"
 *   insn=0x0000000000543548 string=0x000000000054354C "! @"
 *   insn=0x000000000054354C string=0x0000000000543550 "!"
 *   insn=0x0000000000543550 string=0x0000000000543554 "x"
 *   insn=0x0000000000543558 string=0x000000000054355C "`"
 *   insn=0x0000000000543560 string=0x0000000000543564 "s"
 *   insn=0x0000000000543564 string=0x0000000000543568 "`"
 *   insn=0x0000000000543568 string=0x000000000054356C "`"
 *   insn=0x0000000000543570 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000543578 string=0x000000000054357C "`v@"
 *   insn=0x0000000000543584 string=0x0000000000543588 "!"
 *   insn=0x0000000000543588 string=0x000000000054358C " "
 *   insn=0x0000000000543590 string=0x0000000000543594 "`"
 *   insn=0x00000000005435C0 string=0x00000000005435C4 "B(@"
 *   insn=0x00000000005435C4 string=0x00000000005435C8 "@"
 *   insn=0x00000000005435CC string=0x00000000005435D0 "`"
 *   insn=0x00000000005435D0 string=0x00000000005435D4 " "
 *   insn=0x00000000005435D4 string=0x00000000005435D8 "`"
 *   insn=0x00000000005435E0 string=0x00000000005435E4 " "
 *   insn=0x00000000005435E8 string=0x00000000005435EC "!"
 *   insn=0x00000000005435F0 string=0x00000000005435F4 "! @"
 *   insn=0x00000000005435F4 string=0x00000000005435F8 "!"
 *   insn=0x0000000000543628 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000543648 string=0x000000000054364C "I"
 *   insn=0x0000000000543648 string=0x000000000054367C "="
 *   insn=0x0000000000543658 string=0x000000000054365C "p"
 *   insn=0x000000000054366C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000543694 string=0x0000000000543698 "!"
 *   insn=0x000000000054369C string=0x00000000005436A0 "b"
 *   insn=0x00000000005436A0 string=0x00000000005436AC "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5434B0(__int64 *a1, __int64 a2)
{
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v5 + 32LL))(
      v5,
      v6,
      v6 == 0,
      v4,
      v7,
      a2);
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

