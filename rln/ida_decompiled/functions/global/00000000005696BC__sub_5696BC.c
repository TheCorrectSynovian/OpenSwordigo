/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005696BC
 * Mangled: sub_5696BC
 * Demangled: sub_5696BC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x00000000005696C8 string=0x00000000005696CC "%`"
 *   insn=0x00000000005696CC string=0x00000000005696D0 "$"
 *   insn=0x00000000005696E0 string=0x00000000005696E4 "@"
 *   insn=0x00000000005696F8 string=0x00000000005696FC "o"
 *   insn=0x00000000005696FC string=0x0000000000569700 "a"
 *   insn=0x0000000000569704 string=0x0000000000569708 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5696BC(__int64 *a1)
{
  __int64 v1; // x1
  int v2; // w4

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 - 8);
  if ( (v2 & 0x80000000) == 0 && (__int64 *)(*a1 - 24) != &qword_6FD2E0 )
  {
    if ( v2 )
    {
      sub_568CB8(a1, 0, 0, 0);
      v1 = *a1;
    }
    *(_DWORD *)(v1 - 8) = -1;
  }
  return v1;
}

