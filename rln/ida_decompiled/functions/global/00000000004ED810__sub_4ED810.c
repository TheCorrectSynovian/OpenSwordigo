/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED810
 * Mangled: sub_4ED810
 * Demangled: sub_4ED810
 *
 * Callers: 3
 *   0x00000000004EA408  lua_getlocal(lua_State *,lua_Debug const*,int)
 *   0x00000000004EA514  lua_setlocal(lua_State *,lua_Debug const*,int)
 *   0x00000000004EB12C  sub_4EB12C
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000004ED814 string=0x00000000004ED818 ""
 *   insn=0x00000000004ED818 string=0x00000000004ED81C "\n"
 *   insn=0x00000000004ED820 string=0x00000000004ED824 "J1"
 *   insn=0x00000000004ED824 string=0x00000000004ED828 "K"
 *   insn=0x00000000004ED82C string=0x00000000004ED830 "L"
 *   insn=0x00000000004ED830 string=0x00000000004ED834 "K"
 *   insn=0x00000000004ED838 string=0x00000000004ED83C "m"
 *   insn=0x00000000004ED83C string=0x00000000004ED840 "!"
 *   insn=0x00000000004ED83C string=0x00000000004ED848 ")"
 *   insn=0x00000000004ED844 string=0x00000000004ED860 "HA_"
 *   insn=0x00000000004ED848 string=0x00000000004ED84C "?"
 *   insn=0x00000000004ED84C string=0x00000000004ED850 "JA"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED810(__int64 a1, int a2, int a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  _DWORD *i; // x10

  v3 = *(int *)(a1 + 92);
  if ( (int)v3 >= 1 )
  {
    v4 = 0;
    for ( i = (_DWORD *)(*(_QWORD *)(a1 + 48) + 12LL); *(i - 1) <= a3; i += 4 )
    {
      if ( *i > a3 && !--a2 )
        return *(_QWORD *)(i - 3) + 24LL;
      if ( ++v4 >= v3 )
        return 0;
    }
  }
  return 0;
}

