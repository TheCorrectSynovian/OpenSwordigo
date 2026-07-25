/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053FCF8
 * Mangled: sub_53FCF8
 * Demangled: sub_53FCF8
 *
 * Callers: 12
 *   0x000000000053FD7C  sub_53FD7C
 *   0x000000000053FF24  sub_53FF24
 *   0x00000000005400E4  sub_5400E4
 *   0x0000000000540490  sub_540490
 *   0x0000000000540A88  sub_540A88
 *   0x0000000000540D40  sub_540D40
 *   0x0000000000540F84  sub_540F84
 *   0x00000000005411B8  sub_5411B8
 *   0x00000000005413EC  sub_5413EC
 *   0x0000000000541620  sub_541620
 *   0x0000000000541868  sub_541868
 *   0x0000000000541AB0  sub_541AB0
 *
 * Callees: 2
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x0000000000520C14  sub_520C14
 *
 * Referenced strings: 13
 *   insn=0x000000000053FD04 string=0x000000000053FD08 "a"
 *   insn=0x000000000053FD08 string=0x000000000053FD0C "!"
 *   insn=0x000000000053FD0C string=0x000000000053FD10 "s"
 *   insn=0x000000000053FD10 string=0x000000000053FD14 "a"
 *   insn=0x000000000053FD1C string=0x000000000053FD20 "("
 *   insn=0x000000000053FD20 string=0x00000000001F85C0 "0'"
 *   insn=0x000000000053FD28 string=0x000000000053FD2C "`v@"
 *   insn=0x000000000053FD34 string=0x000000000053FD38 "!"
 *   insn=0x000000000053FD38 string=0x000000000053FD3C " "
 *   insn=0x000000000053FD5C string=0x000000000053FD60 " "
 *   insn=0x000000000053FD64 string=0x000000000053FD68 "!"
 *   insn=0x000000000053FD6C string=0x000000000053FD70 "! @"
 *   insn=0x000000000053FD70 string=0x000000000053FD74 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53FCF8(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20

  v1 = *(_QWORD *)(result + 8) + *(_QWORD *)(**(_QWORD **)(result + 8) - 24LL);
  if ( (*(_DWORD *)(v1 + 24) & 0x2000) != 0 )
  {
    v2 = result;
    result = (unsigned __int8)std::uncaught_exception();
    if ( !(_BYTE)result )
    {
      result = *(_QWORD *)(v1 + 232);
      if ( result )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
        if ( (_DWORD)result == -1 )
          return sub_520C14(
                   *(_QWORD *)(v2 + 8) + *(_QWORD *)(**(_QWORD **)(v2 + 8) - 24LL),
                   *(_DWORD *)(*(_QWORD *)(v2 + 8) + *(_QWORD *)(**(_QWORD **)(v2 + 8) - 24LL) + 32LL) | 1u);
      }
    }
  }
  return result;
}

