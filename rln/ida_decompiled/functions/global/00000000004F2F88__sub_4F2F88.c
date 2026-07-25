/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F2F88
 * Mangled: sub_4F2F88
 * Demangled: sub_4F2F88
 *
 * Callers: 1
 *   0x00000000004E689C  lua_newthread(lua_State *)
 *
 * Callees: 2
 *   0x00000000004EE48C  sub_4EE48C
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 18
 *   insn=0x00000000004F2FA4 string=0x00000000004F2FA8 "s"
 *   insn=0x00000000004F2FBC string=0x00000000004F2FC0 "3"
 *   insn=0x00000000004F2FC0 string=0x00000000004F2FC4 "h"
 *   insn=0x00000000004F2FC0 string=0x00000000004EE48C ""
 *   insn=0x00000000004F3008 string=0x00000000004F300C "Z"
 *   insn=0x00000000004F300C string=0x00000000004F3010 "`"
 *   insn=0x00000000004F302C string=0x00000000004F3030 "Q"
 *   insn=0x00000000004F3038 string=0x00000000004F303C "\t"
 *   insn=0x00000000004F3040 string=0x00000000004F3044 "@"
 *   insn=0x00000000004F3048 string=0x00000000004F304C "\t@"
 *   insn=0x00000000004F304C string=0x00000000004F3050 "@"
 *   insn=0x00000000004F3058 string=0x00000000004F305C "H"
 *   insn=0x00000000004F3060 string=0x00000000004F3064 "I\t"
 *   insn=0x00000000004F3064 string=0x00000000004F3068 "h>@"
 *   insn=0x00000000004F3070 string=0x00000000004F3074 "h"
 *   insn=0x00000000004F3078 string=0x00000000004F307C "h"
 *   insn=0x00000000004F3080 string=0x00000000004F3084 "hj@"
 *   insn=0x00000000004F3088 string=0x00000000004F308C "i:@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F2F88(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 v4; // x0
  __int64 v5; // x0
  _QWORD *v6; // x10
  __int64 result; // x0
  int v8; // w8
  __int64 v9; // x9

  v2 = sub_4EED74(a1, 0, 0, 184);
  sub_4EE48C(a1, v2, 8);
  v3 = *(_QWORD *)(a1 + 32);
  *(_WORD *)(v2 + 100) = 256;
  *(_QWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 168) = 0;
  *(_QWORD *)(v2 + 176) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_BYTE *)(v2 + 10) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 32) = v3;
  *(_QWORD *)(v2 + 92) = 0;
  v4 = sub_4EED74(a1, 0, 0, 320);
  *(_QWORD *)(v2 + 40) = v4;
  *(_QWORD *)(v2 + 72) = v4 + 280;
  *(_QWORD *)(v2 + 80) = v4;
  *(_DWORD *)(v2 + 92) = 8;
  v5 = sub_4EED74(a1, 0, 0, 720);
  v6 = *(_QWORD **)(v2 + 40);
  *(_DWORD *)(v2 + 88) = 45;
  *(_QWORD *)(v2 + 56) = v5 + 624;
  *(_QWORD *)(v2 + 64) = v5;
  v6[1] = v5;
  *(_QWORD *)(v2 + 16) = v5 + 16;
  *(_DWORD *)(v5 + 8) = 0;
  *v6 = v5 + 16;
  *(_QWORD *)(v2 + 24) = v5 + 16;
  v6[2] = v5 + 336;
  result = v2;
  *(_QWORD *)(v2 + 120) = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(v2 + 128) = *(_DWORD *)(a1 + 128);
  *(_BYTE *)(v2 + 100) = *(_BYTE *)(a1 + 100);
  v8 = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(v2 + 104) = v8;
  v9 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(v2 + 108) = v8;
  *(_QWORD *)(v2 + 112) = v9;
  return result;
}

