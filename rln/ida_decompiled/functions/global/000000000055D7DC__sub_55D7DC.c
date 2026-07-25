/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055D7DC
 * Mangled: sub_55D7DC
 * Demangled: sub_55D7DC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051F654  sub_51F654
 *   0x000000000051F904  sub_51F904
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 13
 *   insn=0x000000000055D804 string=0x000000000055D808 "@"
 *   insn=0x000000000055D808 string=0x000000000055D80C "`f@"
 *   insn=0x000000000055D80C string=0x000000000055D810 "a"
 *   insn=0x000000000055D810 string=0x000000000055D814 "t\n@"
 *   insn=0x000000000055D814 string=0x000000000055D818 "4"
 *   insn=0x000000000055D818 string=0x000000000055D81C "`"
 *   insn=0x000000000055D820 string=0x000000000055D824 "!"
 *   insn=0x000000000055D824 string=0x000000000055D828 " "
 *   insn=0x000000000055D830 string=0x000000000055D834 "4"
 *   insn=0x000000000055D838 string=0x000000000055D83C "af@"
 *   insn=0x000000000055D840 string=0x000000000055D844 "!"
 *   insn=0x000000000055D844 string=0x000000000055D848 "! @"
 *   insn=0x000000000055D848 string=0x000000000055D84C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55D7DC(__int64 a1)
{
  FILE **v1; // x21
  __int64 v3; // x0
  __int64 v4; // x20
  __off_t v5; // x21

  if ( (*(_DWORD *)(a1 + 120) & 8) == 0 )
    return -1;
  v1 = (FILE **)(a1 + 104);
  if ( !sub_51F654((_QWORD *)(a1 + 104)) )
    return -1;
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  if ( !v3 )
    sub_5652C8(0);
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3) & 0x80000000) == 0 )
  {
    v5 = sub_51F904(v1);
    v4 += v5 / (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 64LL))(*(_QWORD *)(a1 + 200));
  }
  return v4;
}

