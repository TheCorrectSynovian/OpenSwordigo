/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055D88C
 * Mangled: sub_55D88C
 * Demangled: sub_55D88C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F654  sub_51F654
 *   0x000000000051F904  sub_51F904
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 14
 *   insn=0x000000000055D89C string=0x000000000055D8A0 "!"
 *   insn=0x000000000055D8AC string=0x000000000055D8B0 "i"
 *   insn=0x000000000055D8B4 string=0x000000000055D8B8 "`"
 *   insn=0x000000000055D8C4 string=0x000000000055D8C8 "s"
 *   insn=0x000000000055D8C8 string=0x000000000055D8CC "s"
 *   insn=0x000000000055D8CC string=0x000000000055D8D0 "`"
 *   insn=0x000000000055D8D0 string=0x000000000055D93C "c"
 *   insn=0x000000000055D8D4 string=0x000000000055D8D8 "!"
 *   insn=0x000000000055D8D8 string=0x000000000055D8DC " "
 *   insn=0x000000000055D8E4 string=0x000000000055D8E8 ""
 *   insn=0x000000000055D8F4 string=0x000000000055D8F8 "!"
 *   insn=0x000000000055D8F8 string=0x000000000055D8FC "! @"
 *   insn=0x000000000055D8FC string=0x000000000055D900 " "
 *   insn=0x000000000055D908 string=0x000000000055D90C "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55D88C(__int64 a1)
{
  FILE **v1; // x21
  __int64 v3; // x0
  __int64 v4; // x19
  __off_t v5; // x21

  if ( (*(_DWORD *)(a1 + 120) & 8) == 0 )
    return -1;
  v1 = (FILE **)(a1 + 104);
  if ( !sub_51F654((_QWORD *)(a1 + 104)) )
    return -1;
  v3 = *(_QWORD *)(a1 + 200);
  v4 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 2;
  if ( !v3 )
    sub_5652C8(0);
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3) & 0x80000000) == 0 )
  {
    v5 = sub_51F904(v1);
    v4 += v5 / (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 64LL))(*(_QWORD *)(a1 + 200));
  }
  return v4;
}

