/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED3B8
 * Mangled: sub_4ED3B8
 * Demangled: sub_4ED3B8
 *
 * Callers: 2
 *   0x00000000004E880C  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *   0x00000000004E9AEC  sub_4E9AEC
 *
 * Callees: 2
 *   0x00000000004EE48C  sub_4EE48C
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 4
 *   insn=0x00000000004ED3CC string=0x00000000004ED3D0 ""
 *   insn=0x00000000004ED3E4 string=0x00000000004ED3E8 "c"
 *   insn=0x00000000004ED3F8 string=0x00000000004ED3FC "$"
 *   insn=0x00000000004ED3FC string=0x00000000004EE48C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED3B8(__int64 a1, int a2, __int64 a3)
{
  char v3; // w20
  __int64 v6; // x22

  v3 = a2;
  v6 = sub_4EED74(a1, 0, 0, 16 * a2 + 40);
  sub_4EE48C(a1, v6, 6);
  *(_QWORD *)(v6 + 24) = a3;
  *(_BYTE *)(v6 + 10) = 1;
  *(_BYTE *)(v6 + 11) = v3;
  return v6;
}

