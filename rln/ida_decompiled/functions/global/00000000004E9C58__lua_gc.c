/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9C58
 * Mangled: _Z6lua_gcP9lua_Stateii
 * Demangled: lua_gc(lua_State *,int,int)
 *
 * Callers: 1
 *   0x00000000001FE3B0  lua_gc(lua_State *,int,int)
 *
 * Callees: 2
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004EE1F0  sub_4EE1F0
 *
 * Referenced strings: 16
 *   insn=0x00000000004E9C60 string=0x00000000004E9C64 "?"
 *   insn=0x00000000004E9C68 string=0x00000000004E9C6C "H"
 *   insn=0x00000000004E9C74 string=0x00000000004E9C78 ")q"
 *   insn=0x00000000004E9C78 string=0x00000000004E9C7C "(y"
 *   insn=0x00000000004E9C7C string=0x00000000004E9C80 "t"
 *   insn=0x00000000004E9C80 string=0x00000000004E9C84 ""
 *   insn=0x00000000004E9C94 string=0x00000000004E9C98 "("
 *   insn=0x00000000004E9CA4 string=0x00000000004E9CA8 "$"
 *   insn=0x00000000004E9CAC string=0x00000000004E9CB0 "P"
 *   insn=0x00000000004E9CB4 string=0x00000000004E9CB8 " "
 *   insn=0x00000000004E9CD4 string=0x00000000004E9CD8 "I|v"
 *   insn=0x00000000004E9CD8 string=0x00000000004E9CDC "\t"
 *   insn=0x00000000004E9CE0 string=0x00000000004E9CE4 "?"
 *   insn=0x00000000004E9CE8 string=0x00000000004E9CEC "i"
 *   insn=0x00000000004E9D10 string=0x00000000004E9D14 ")"
 *   insn=0x00000000004E9D14 string=0x00000000004E9D18 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_gc(__int64 a1, int a2, int a3)
{
  __int64 v4; // x20
  __int64 v5; // x8
  __int64 result; // x0
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  bool v9; // cf
  unsigned __int64 v10; // x9

  v4 = *(_QWORD *)(a1 + 32);
  switch ( a2 )
  {
    case 0:
      v5 = -3;
      goto LABEL_5;
    case 1:
      v5 = *(_QWORD *)(v4 + 120);
LABEL_5:
      result = 0;
      *(_QWORD *)(v4 + 112) = v5;
      return result;
    case 2:
      sub_4EE1F0(a1);
      return 0;
    case 3:
      return *(_QWORD *)(v4 + 120) >> 10;
    case 4:
      return *(_DWORD *)(v4 + 120) & 0x3FF;
    case 5:
      v7 = *(_QWORD *)(v4 + 120);
      v8 = (__int64)a3 << 10;
      v9 = v7 >= v8;
      v10 = v7 - v8;
      if ( !v9 )
        v10 = 0;
      *(_QWORD *)(v4 + 112) = v10;
      if ( v10 > v7 )
        return 0;
      break;
    case 6:
      result = *(unsigned int *)(v4 + 144);
      *(_DWORD *)(v4 + 144) = a3;
      return result;
    case 7:
      result = *(unsigned int *)(v4 + 148);
      *(_DWORD *)(v4 + 148) = a3;
      return result;
    default:
      return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    sub_4EDCB0(a1);
    if ( !*(_BYTE *)(v4 + 33) )
      break;
    result = 0;
    if ( *(_QWORD *)(v4 + 112) > *(_QWORD *)(v4 + 120) )
      return result;
  }
  return 1;
}

