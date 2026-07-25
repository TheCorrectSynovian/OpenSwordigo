/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054241C
 * Mangled: sub_54241C
 * Demangled: sub_54241C
 *
 * Callers: 12
 *   0x00000000005424A0  sub_5424A0
 *   0x0000000000542648  sub_542648
 *   0x0000000000542808  sub_542808
 *   0x0000000000542B74  sub_542B74
 *   0x000000000054307C  sub_54307C
 *   0x00000000005434B0  sub_5434B0
 *   0x00000000005436D8  sub_5436D8
 *   0x00000000005438F0  sub_5438F0
 *   0x0000000000543B08  sub_543B08
 *   0x0000000000543D20  sub_543D20
 *   0x0000000000543F40  sub_543F40
 *   0x0000000000544160  sub_544160
 *
 * Callees: 2
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000005215C0  sub_5215C0
 *
 * Referenced strings: 14
 *   insn=0x0000000000542428 string=0x000000000054242C "a"
 *   insn=0x000000000054242C string=0x0000000000542430 "!"
 *   insn=0x0000000000542430 string=0x0000000000542434 "s"
 *   insn=0x0000000000542434 string=0x0000000000542438 "a"
 *   insn=0x0000000000542440 string=0x0000000000542444 "_"
 *   insn=0x0000000000542444 string=0x00000000001F85C0 "0'"
 *   insn=0x000000000054244C string=0x0000000000542450 "`v@"
 *   insn=0x0000000000542458 string=0x000000000054245C "!"
 *   insn=0x000000000054245C string=0x0000000000542460 " "
 *   insn=0x0000000000542480 string=0x0000000000542484 " "
 *   insn=0x0000000000542488 string=0x000000000054248C "!"
 *   insn=0x0000000000542490 string=0x0000000000542494 "! @"
 *   insn=0x0000000000542494 string=0x0000000000542498 "!"
 *   insn=0x0000000000542498 string=0x000000000054249C "I|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54241C(__int64 result)
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
          return sub_5215C0(
                   *(_QWORD *)(v2 + 8) + *(_QWORD *)(**(_QWORD **)(v2 + 8) - 24LL),
                   *(_DWORD *)(*(_QWORD *)(v2 + 8) + *(_QWORD *)(**(_QWORD **)(v2 + 8) - 24LL) + 32LL) | 1u);
      }
    }
  }
  return result;
}

