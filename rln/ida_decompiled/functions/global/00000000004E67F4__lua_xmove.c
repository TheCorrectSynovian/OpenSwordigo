/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E67F4
 * Mangled: _Z9lua_xmoveP9lua_StateS0_i
 * Demangled: lua_xmove(lua_State *,lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FA330  lua_xmove(lua_State *,lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x00000000004E67F4 string=0x00000000004E67F8 " "
 *   insn=0x00000000004E67F8 string=0x00000000004E67FC "@"
 *   insn=0x00000000004E67FC string=0x00000000004E6800 "_"
 *   insn=0x00000000004E6800 string=0x00000000004E6804 "\t"
 *   insn=0x00000000004E6804 string=0x00000000004E6808 "\t"
 *   insn=0x00000000004E680C string=0x00000000004E6810 "+@"
 *   insn=0x00000000004E6814 string=0x00000000004E6818 "J"
 *   insn=0x00000000004E6818 string=0x00000000004E681C ""
 *   insn=0x00000000004E681C string=0x00000000004E6820 "lA"
 *   insn=0x00000000004E6820 string=0x00000000004E6824 ","
 *   insn=0x00000000004E6824 string=0x00000000004E6828 ")"
 *   insn=0x00000000004E6828 string=0x00000000004E682C "_"
 *   insn=0x00000000004E682C string=0x00000000004E6830 "i"
 *   insn=0x00000000004E6830 string=0x00000000004E6834 "\t@"
 *   insn=0x00000000004E6834 string=0x00000000004E6838 "h\t"
 *   insn=0x00000000004E6844 string=0x00000000004E6848 ")"
 *   insn=0x00000000004E6848 string=0x00000000004E684C "*@"
 *   insn=0x00000000004E684C string=0x00000000004E6850 "@"
 *   insn=0x00000000004E6850 string=0x00000000004E6854 ")"
 *   insn=0x00000000004E6854 string=0x00000000004E6858 "LA"
 *   insn=0x00000000004E6858 string=0x00000000004E685C "k"
 *   insn=0x00000000004E685C string=0x00000000004E6860 ","
 *   insn=0x00000000004E6860 string=0x00000000004E6864 "l\t@"
 *   insn=0x00000000004E6864 string=0x00000000004E6868 "A"
 *   insn=0x00000000004E6868 string=0x00000000004E686C "L"
 *   insn=0x00000000004E686C string=0x00000000004E6870 "k"
 *   insn=0x00000000004E6870 string=0x00000000004E6874 "K\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_xmove(__int64 result, __int64 a2, int a3)
{
  __int64 v3; // x8
  _QWORD *v4; // x9
  __int64 v5; // x11
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  __int64 v9; // x11

  if ( result != a2 )
  {
    v3 = *(_QWORD *)(result + 16);
    v4 = (_QWORD *)(v3 - 16LL * a3);
    *(_QWORD *)(result + 16) = v4;
    if ( a3 >= 1 )
    {
      v5 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v5 + 16;
      *(_QWORD *)v5 = *v4;
      *(_DWORD *)(v5 + 8) = *(_DWORD *)(v3 - 16LL * a3 + 8);
      if ( a3 != 1 )
      {
        v6 = 0;
        v7 = (unsigned int)a3 - 1LL;
        do
        {
          v8 = *(_QWORD *)(a2 + 16);
          --v7;
          v9 = *(_QWORD *)(result + 16) + v6;
          *(_QWORD *)(a2 + 16) = v8 + 16;
          v6 += 16;
          *(_QWORD *)v8 = *(_QWORD *)(v9 + 16);
          *(_DWORD *)(v8 + 8) = *(_DWORD *)(v9 + 24);
        }
        while ( v7 );
      }
    }
  }
  return result;
}

