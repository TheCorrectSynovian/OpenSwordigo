/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6764
 * Mangled: _Z14lua_checkstackP9lua_Statei
 * Demangled: lua_checkstack(lua_State *,int)
 *
 * Callers: 1
 *   0x0000000000202C30  lua_checkstack(lua_State *,int)
 *
 * Callees: 1
 *   0x00000000004EBBB8  sub_4EBBB8
 *
 * Referenced strings: 21
 *   insn=0x00000000004E676C string=0x00000000004E6770 ""
 *   insn=0x00000000004E6770 string=0x00000000004E6774 "?"
 *   insn=0x00000000004E677C string=0x00000000004E6780 "h&A"
 *   insn=0x00000000004E6780 string=0x00000000004E6784 "4|@"
 *   insn=0x00000000004E6784 string=0x00000000004E6788 "\n"
 *   insn=0x00000000004E6788 string=0x00000000004E678C "\t"
 *   insn=0x00000000004E6790 string=0x00000000004E6794 "?"
 *   insn=0x00000000004E6794 string=0x00000000004E6798 "m"
 *   insn=0x00000000004E6798 string=0x00000000004E67A4 "?"
 *   insn=0x00000000004E67A8 string=0x00000000004E67AC "i"
 *   insn=0x00000000004E67AC string=0x00000000004E67B0 "*l"
 *   insn=0x00000000004E67B0 string=0x00000000004E67B4 ")"
 *   insn=0x00000000004E67B4 string=0x00000000004E67B8 "?"
 *   insn=0x00000000004E67BC string=0x00000000004E67CC "i"
 *   insn=0x00000000004E67C4 string=0x00000000004E67C8 "h\n@"
 *   insn=0x00000000004E67C4 string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004E67CC string=0x00000000004E67D0 ""
 *   insn=0x00000000004E67D0 string=0x00000000004E67D4 "*\t@"
 *   insn=0x00000000004E67D4 string=0x00000000004E67D8 "_"
 *   insn=0x00000000004E67D8 string=0x00000000004E67DC "B"
 *   insn=0x00000000004E67DC string=0x00000000004E67E0 "(\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_checkstack(_QWORD *a1, int a2)
{
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v6; // x9
  unsigned __int64 v7; // x8

  if ( a2 > 8000 )
    return 0;
  v3 = a1[2];
  v4 = a2;
  if ( a2 + ((v3 - a1[3]) >> 4) > 8000 )
    return 0;
  if ( a2 >= 1 )
  {
    if ( a1[7] - v3 <= 16 * a2 )
    {
      sub_4EBBB8(a1);
      v3 = a1[2];
    }
    v6 = a1[5];
    v7 = v3 + 16 * v4;
    if ( *(_QWORD *)(v6 + 16) < v7 )
      *(_QWORD *)(v6 + 16) = v7;
  }
  return 1;
}

