/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571FA0
 * Mangled: sub_571FA0
 * Demangled: sub_571FA0
 *
 * Callers: 6
 *   0x00000000005728F4  sub_5728F4
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576A34  sub_576A34
 *   0x0000000000576FE0  sub_576FE0
 *   0x00000000005776A4  sub_5776A4
 *   0x000000000057F3DC  sub_57F3DC
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000571FA8 string=0x0000000000571FAC "j"
 *   insn=0x0000000000571FAC string=0x0000000000571FB0 "d|@"
 *   insn=0x0000000000571FB8 string=0x0000000000571FBC "c"
 *   insn=0x0000000000571FCC string=0x0000000000571FD0 "?"
 *   insn=0x0000000000571FE8 string=0x0000000000571FEC "a"
 *   insn=0x0000000000571FEC string=0x0000000000571FF0 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_571FA0(__int64 a1, __int64 a2, int a3)
{
  int v3; // w3
  __int64 v4; // x5
  __int64 v5; // x4
  __int64 v6; // x3
  __int64 result; // x0

  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 >= *(_DWORD *)(a1 + 44) )
    return 0;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 24LL * v3;
  *(_DWORD *)(a1 + 40) = v3 + 1;
  v6 = v4 + v5;
  if ( v4 + v5 == 0 || a2 == 0 || !a3 )
    return 0;
  *(_DWORD *)(v4 + v5) = 0;
  result = v4 + v5;
  *(_QWORD *)(v6 + 8) = a2;
  *(_DWORD *)(v6 + 16) = a3;
  return result;
}

