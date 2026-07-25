/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3230
 * Mangled: sub_4F3230
 * Demangled: sub_4F3230
 *
 * Callers: 1
 *   0x00000000004F3118  lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *
 * Callees: 6
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004F3464  sub_4F3464
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F3DB4  sub_4F3DB4
 *   0x00000000004F4E10  sub_4F4E10
 *   0x00000000005006C4  sub_5006C4
 *
 * Referenced strings: 26
 *   insn=0x00000000004F3240 string=0x00000000004F3244 "t"
 *   insn=0x00000000004F3254 string=0x00000000004F3258 "\t`"
 *   insn=0x00000000004F3258 string=0x00000000004F325C "`"
 *   insn=0x00000000004F3260 string=0x00000000004F3264 "i"
 *   insn=0x00000000004F3274 string=0x00000000004F3278 "h^"
 *   insn=0x00000000004F327C string=0x00000000004F3280 "j"
 *   insn=0x00000000004F3284 string=0x00000000004F3288 "\t"
 *   insn=0x00000000004F3288 string=0x00000000004F328C "@"
 *   insn=0x00000000004F3290 string=0x00000000004F3294 "i"
 *   insn=0x00000000004F3294 string=0x00000000004F3298 "hZ"
 *   insn=0x00000000004F3298 string=0x00000000004F329C "@"
 *   insn=0x00000000004F329C string=0x00000000004F32A0 "k\n"
 *   insn=0x00000000004F32B0 string=0x00000000004F32B4 "K"
 *   insn=0x00000000004F32B4 string=0x00000000004F32B8 "k"
 *   insn=0x00000000004F32B8 string=0x00000000004F32BC "L\t"
 *   insn=0x00000000004F32C0 string=0x00000000004F32C4 "u"
 *   insn=0x00000000004F32C4 string=0x00000000004F32C8 "`>"
 *   insn=0x00000000004F32D8 string=0x00000000004F32DC "v"
 *   insn=0x00000000004F32F0 string=0x00000000004F32F4 "\"
 *   insn=0x00000000004F3304 string=0x00000000004F3308 "!"
 *   insn=0x00000000004F3308 string=0x00000000004F3310 """
 *   insn=0x00000000004F3308 string=0x0000000000599A3C "not enough memory"
 *   insn=0x00000000004F3318 string=0x00000000004F331C "$@9"
 *   insn=0x00000000004F331C string=0x00000000004F3320 ""
 *   insn=0x00000000004F3320 string=0x00000000004F3324 "$"
 *   insn=0x00000000004F3328 string=0x00000000004F332C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3230(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 v4; // x0
  _QWORD *v5; // x10
  __int64 v6; // x0
  __int64 v7; // x21
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 32);
  v3 = sub_4EED74(a1, 0, 0, 320);
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 72) = v3 + 280;
  *(_QWORD *)(a1 + 80) = v3;
  *(_DWORD *)(a1 + 92) = 8;
  v4 = sub_4EED74(a1, 0, 0, 720);
  v5 = *(_QWORD **)(a1 + 40);
  *(_QWORD *)(a1 + 56) = v4 + 624;
  *(_QWORD *)(a1 + 64) = v4;
  *(_DWORD *)(a1 + 88) = 45;
  v5[1] = v4;
  *(_QWORD *)(a1 + 16) = v4 + 16;
  *(_DWORD *)(v4 + 8) = 0;
  *v5 = v4 + 16;
  *(_QWORD *)(a1 + 24) = v4 + 16;
  v5[2] = v4 + 336;
  v6 = sub_4F3DB4(a1, 0, 2);
  v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 120) = v6;
  *(_DWORD *)(a1 + 128) = 5;
  *(_QWORD *)(v7 + 160) = sub_4F3DB4(a1, 0, 2);
  *(_DWORD *)(v7 + 168) = 5;
  sub_4F3464(a1, 32);
  sub_4F4E10(a1);
  sub_5006C4(a1);
  result = sub_4F356C(a1, "not enough memory", 0x11u);
  *(_BYTE *)(result + 9) |= 0x20u;
  *(_QWORD *)(v2 + 112) = 4LL * *(_QWORD *)(v2 + 120);
  return result;
}

