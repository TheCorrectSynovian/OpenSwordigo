/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6904
 * Mangled: _Z10lua_settopP9lua_Statei
 * Demangled: lua_settop(lua_State *,int)
 *
 * Callers: 1
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 24
 *   insn=0x00000000004E6904 string=0x00000000004E6908 "\t(A"
 *   insn=0x00000000004E6904 string=0x00000000004E69A0 "@"
 *   insn=0x00000000004E6908 string=0x00000000004E690C "H"
 *   insn=0x00000000004E690C string=0x00000000004E6910 "?"
 *   insn=0x00000000004E6914 string=0x00000000004E6918 "+|@"
 *   insn=0x00000000004E6914 string=0x00000000004E69AC ""
 *   insn=0x00000000004E6918 string=0x00000000004E691C ",A"
 *   insn=0x00000000004E6924 string=0x00000000004E6928 "J"
 *   insn=0x00000000004E6928 string=0x00000000004E692C ""
 *   insn=0x00000000004E692C string=0x00000000004E6930 "J"
 *   insn=0x00000000004E6930 string=0x00000000004E6934 "k"
 *   insn=0x00000000004E6934 string=0x00000000004E6938 "J"
 *   insn=0x00000000004E6938 string=0x00000000004E693C "k"
 *   insn=0x00000000004E693C string=0x00000000004E6940 "L"
 *   insn=0x00000000004E6944 string=0x00000000004E6948 "j"
 *   insn=0x00000000004E694C string=0x00000000004E6950 "c"
 *   insn=0x00000000004E6950 string=0x00000000004E697C "lA"
 *   insn=0x00000000004E6954 string=0x00000000004E6958 "+"
 *   insn=0x00000000004E6958 string=0x00000000004E695C ".a"
 *   insn=0x00000000004E6978 string=0x00000000004E6990 ")"
 *   insn=0x00000000004E6990 string=0x00000000004E6994 "\t"
 *   insn=0x00000000004E6994 string=0x00000000004E6998 ""
 *   insn=0x00000000004E69A0 string=0x00000000004E69A4 ""
 *   insn=0x00000000004E69A4 string=0x00000000004E69A8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_settop(__int64 result, int a2)
{
  unsigned __int64 v2; // x9
  __int64 v3; // x10
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x13
  __int64 v6; // x10
  unsigned __int64 v7; // x11
  unsigned __int64 v8; // x12
  __int64 v9; // x10
  unsigned __int64 v10; // x11
  _DWORD *v11; // x14
  __int64 v12; // x15
  bool v13; // cf

  if ( a2 < 0 )
  {
    v4 = *(_QWORD *)(result + 16) + 16LL * a2 + 16;
    goto LABEL_14;
  }
  v2 = *(_QWORD *)(result + 16);
  v3 = *(_QWORD *)(result + 24);
  v4 = v3 + 16LL * a2;
  if ( v2 >= v4 )
  {
LABEL_14:
    *(_QWORD *)(result + 16) = v4;
    return result;
  }
  v5 = ~v2;
  v6 = v3 + 16LL * a2;
  if ( v4 <= v2 + 16 )
    v7 = v2 + 16;
  else
    v7 = v4;
  v8 = ((v6 + v5) >> 4) + 1;
  v9 = ((v7 + v5) >> 4) + 1;
  v10 = *(_QWORD *)(result + 16);
  if ( v8 < 2 )
    goto LABEL_11;
  v10 = v2 + 16 * (v8 & 0x1FFFFFFFFFFFFFFELL);
  v11 = (_DWORD *)(v2 + 24);
  v12 = v8 & 0x1FFFFFFFFFFFFFFELL;
  do
  {
    *(v11 - 4) = 0;
    *v11 = 0;
    v11 += 8;
    v12 -= 2;
  }
  while ( v12 );
  if ( v8 != (v8 & 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_11:
    do
    {
      v13 = v10 + 16 >= v4;
      *(_DWORD *)(v10 + 8) = 0;
      v10 += 16LL;
    }
    while ( !v13 );
  }
  *(_QWORD *)(result + 16) = v2 + 16 * v9;
  *(_QWORD *)(result + 16) = v4;
  return result;
}

