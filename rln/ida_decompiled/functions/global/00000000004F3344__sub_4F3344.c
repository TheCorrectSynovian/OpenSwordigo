/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3344
 * Mangled: sub_4F3344
 * Demangled: sub_4F3344
 *
 * Callers: 2
 *   0x00000000004F3118  lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *   0x00000000004F33F0  lua_close(lua_State *)
 *
 * Callees: 3
 *   0x00000000004ED5F4  sub_4ED5F4
 *   0x00000000004EDA98  sub_4EDA98
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 14
 *   insn=0x00000000004F3350 string=0x00000000004F3354 "a"@"
 *   insn=0x00000000004F3354 string=0x00000000004F3358 "t"
 *   insn=0x00000000004F3364 string=0x00000000004F3368 "h"
 *   insn=0x00000000004F3370 string=0x00000000004F3374 "\t"
 *   insn=0x00000000004F3378 string=0x00000000004F337C """
 *   insn=0x00000000004F337C string=0x00000000004F3380 "}"
 *   insn=0x00000000004F3390 string=0x00000000004F3394 "x"
 *   insn=0x00000000004F339C string=0x00000000004F33A0 "h^"
 *   insn=0x00000000004F33A0 string=0x00000000004F33A4 "a*@"
 *   insn=0x00000000004F33AC string=0x00000000004F33B0 "\t"
 *   insn=0x00000000004F33B4 string=0x00000000004F33B8 "o"
 *   insn=0x00000000004F33B8 string=0x00000000004F33BC "hZ"
 *   insn=0x00000000004F33BC string=0x00000000004F33C0 "a"@"
 *   insn=0x00000000004F33CC string=0x00000000004F33D0 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3344(__int64 a1)
{
  __int64 v2; // x20

  v2 = *(_QWORD *)(a1 + 32);
  sub_4ED5F4(a1, *(_QWORD *)(a1 + 64));
  sub_4EDA98(a1);
  sub_4EED74(a1, **(_QWORD **)(a1 + 32), 8LL * *(int *)(*(_QWORD *)(a1 + 32) + 12LL), 0);
  *(_QWORD *)(v2 + 88) = sub_4EED74(a1, *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104), 0);
  *(_QWORD *)(v2 + 104) = 0;
  sub_4EED74(a1, *(_QWORD *)(a1 + 80), 40LL * *(int *)(a1 + 92), 0);
  sub_4EED74(a1, *(_QWORD *)(a1 + 64), 16LL * *(int *)(a1 + 88), 0);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v2 + 16))(*(_QWORD *)(v2 + 24), a1, 616, 0);
}

