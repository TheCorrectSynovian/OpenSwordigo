/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB6DC
 * Mangled: sub_4EB6DC
 * Demangled: sub_4EB6DC
 *
 * Callers: 2
 *   0x00000000004E9D44  lua_error(lua_State *)
 *   0x00000000004EB320  sub_4EB320
 *
 * Callees: 3
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004EC63C  sub_4EC63C
 *
 * Referenced strings: 22
 *   insn=0x00000000004EB6E8 string=0x00000000004EB6EC "hZ@"
 *   insn=0x00000000004EB6EC string=0x00000000004EB6F0 "H"
 *   insn=0x00000000004EB6F0 string=0x00000000004EB6F4 "i"@"
 *   insn=0x00000000004EB6F4 string=0x00000000004EB6F8 "4"
 *   insn=0x00000000004EB704 string=0x00000000004EB714 "h\n@"
 *   insn=0x00000000004EB70C string=0x00000000004EB710 "A"
 *   insn=0x00000000004EB714 string=0x00000000004EB718 "\t"
 *   insn=0x00000000004EB718 string=0x00000000004EB71C "\n"
 *   insn=0x00000000004EB71C string=0x00000000004EB720 "\t"
 *   insn=0x00000000004EB720 string=0x00000000004EB724 "\n\t"
 *   insn=0x00000000004EB724 string=0x00000000004EB728 "h\n@"
 *   insn=0x00000000004EB72C string=0x00000000004EB730 "\t"
 *   insn=0x00000000004EB734 string=0x00000000004EB738 "\t"
 *   insn=0x00000000004EB738 string=0x00000000004EB73C "i"
 *   insn=0x00000000004EB73C string=0x00000000004EB740 "h\n@"
 *   insn=0x00000000004EB740 string=0x00000000004EB744 ")"
 *   insn=0x00000000004EB744 string=0x00000000004EB748 "?A"
 *   insn=0x00000000004EB74C string=0x00000000004EB760 "\tA"
 *   insn=0x00000000004EB758 string=0x00000000004EB75C "h\n@"
 *   insn=0x00000000004EB758 string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004EB76C string=0x00000000004EB770 "i\n"
 *   insn=0x00000000004EB784 string=0x00000000004EB788 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_4EB6DC(_QWORD *a1)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x8
  int v5; // w10
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = a1[22];
  if ( v2 )
  {
    v3 = a1[8] + v2;
    if ( *(_DWORD *)(v3 + 8) != 6 )
      sub_4EB814(a1, 5);
    v4 = a1[2];
    v5 = *(_DWORD *)(v4 - 8);
    *(_QWORD *)v4 = *(_QWORD *)(v4 - 16);
    *(_DWORD *)(v4 + 8) = v5;
    v6 = a1[2];
    *(_QWORD *)(v6 - 16) = *(_QWORD *)v3;
    *(_DWORD *)(v6 - 8) = *(_DWORD *)(v3 + 8);
    v7 = a1[2];
    if ( a1[7] - v7 <= 16 )
    {
      sub_4EBBB8(a1);
      v7 = a1[2];
    }
    a1[2] = v7 + 16;
    sub_4EC63C(a1, v7 - 16, 1);
  }
  sub_4EB814(a1, 2);
}

