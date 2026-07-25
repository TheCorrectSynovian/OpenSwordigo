/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005002D4
 * Mangled: sub_5002D4
 * Demangled: sub_5002D4
 *
 * Callers: 1
 *   0x00000000004F14B4  sub_4F14B4
 *
 * Callees: 1
 *   0x00000000005001E8  sub_5001E8
 *
 * Referenced strings: 17
 *   insn=0x00000000005002E0 string=0x00000000005002E4 "i \tS"
 *   insn=0x00000000005002F0 string=0x00000000005002F4 "_"
 *   insn=0x00000000005002F8 string=0x00000000005002FC "H"
 *   insn=0x00000000005002FC string=0x0000000000500300 "j="
 *   insn=0x0000000000500300 string=0x0000000000500304 "}*"
 *   insn=0x0000000000500308 string=0x000000000050030C "\n"
 *   insn=0x000000000050030C string=0x0000000000500310 ""
 *   insn=0x0000000000500310 string=0x0000000000500314 "K"
 *   insn=0x0000000000500314 string=0x0000000000500318 ")"
 *   insn=0x0000000000500318 string=0x000000000050031C ""
 *   insn=0x0000000000500324 string=0x0000000000500328 "!"
 *   insn=0x000000000050032C string=0x0000000000500330 "h"
 *   insn=0x000000000050032C string=0x0000000000500340 "h"
 *   insn=0x0000000000500330 string=0x0000000000500334 "!8"
 *   insn=0x0000000000500338 string=0x000000000050033C ""
 *   insn=0x000000000050034C string=0x0000000000500350 "h"
 *   insn=0x0000000000500364 string=0x0000000000500368 "h>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5002D4(__int64 a1, int a2, int a3, int a4)
{
  int v4; // w9
  __int64 v6; // x19
  int v7; // w21
  int v8; // w1
  __int64 v9; // x8
  int v10; // w1
  __int64 result; // x0

  v4 = a4 << 23;
  if ( a4 == -1 )
    v4 = 0;
  v6 = a1;
  v7 = (a3 - 1) / 50 + 1;
  v8 = v4 | (a2 << 6) | 0x22;
  if ( a3 <= 25550 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = v8 | (v7 << 14);
  }
  else
  {
    sub_5001E8(a1, v8, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
    v9 = *(_QWORD *)(v6 + 24);
    a1 = v6;
    v10 = v7;
  }
  result = sub_5001E8(a1, v10, *(_DWORD *)(v9 + 8));
  *(_DWORD *)(v6 + 60) = a2 + 1;
  return result;
}

