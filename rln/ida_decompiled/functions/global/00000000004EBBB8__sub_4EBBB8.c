/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EBBB8
 * Mangled: sub_4EBBB8
 * Demangled: sub_4EBBB8
 *
 * Callers: 12
 *   0x00000000004E6764  lua_checkstack(lua_State *,int)
 *   0x00000000004EA630  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *   0x00000000004EB6DC  sub_4EB6DC
 *   0x00000000004EEFD8  sub_4EEFD8
 *   0x00000000004EF720  sub_4EF720
 *   0x00000000004F5064  sub_4F5064
 *   0x00000000004F6020  sub_4F6020
 *   0x00000000004F61E8  sub_4F61E8
 *   0x00000000004F63FC  sub_4F63FC
 *   0x00000000004F6604  sub_4F6604
 *   0x00000000004F67EC  sub_4F67EC
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 1
 *   0x00000000004EBA24  sub_4EBA24
 *
 * Referenced strings: 1
 *   insn=0x00000000004EBBBC string=0x00000000004EBBC0 "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EBBB8(__int64 a1, int a2)
{
  int v2; // w8
  int v3; // w1

  v2 = *(_DWORD *)(a1 + 88);
  if ( v2 >= a2 )
    v3 = 2 * v2;
  else
    v3 = v2 + a2;
  return sub_4EBA24(a1, v3);
}

