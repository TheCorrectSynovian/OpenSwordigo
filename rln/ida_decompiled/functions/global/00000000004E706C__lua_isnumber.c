/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E706C
 * Mangled: _Z12lua_isnumberP9lua_Statei
 * Demangled: lua_isnumber(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FAE70  lua_isnumber(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004F5EF0  sub_4F5EF0
 *
 * Referenced strings: 46
 *   insn=0x00000000004E7078 string=0x00000000004E707C "S"
 *   insn=0x00000000004E707C string=0x00000000004E7080 "h"
 *   insn=0x00000000004E7080 string=0x00000000004E7084 "?"
 *   insn=0x00000000004E7088 string=0x00000000004E708C "+"
 *   insn=0x00000000004E708C string=0x00000000004E7090 "\t A"
 *   insn=0x00000000004E7094 string=0x00000000004E709C ""
 *   insn=0x00000000004E709C string=0x00000000004E70A0 "A"
 *   insn=0x00000000004E70A4 string=0x00000000004E70A8 "1"
 *   insn=0x00000000004E70AC string=0x00000000004E70C4 "\t\t@"
 *   insn=0x00000000004E70B0 string=0x00000000004E70B4 "?"
 *   insn=0x00000000004E70B8 string=0x00000000004E70BC "@"
 *   insn=0x00000000004E70B8 string=0x00000000004E710C "("
 *   insn=0x00000000004E70BC string=0x00000000004E70C0 ""
 *   insn=0x00000000004E70C4 string=0x00000000004E70C8 "?"
 *   insn=0x00000000004E70C8 string=0x00000000004E70CC "a"
 *   insn=0x00000000004E70D4 string=0x00000000004E70EC "h"
 *   insn=0x00000000004E70F4 string=0x00000000004E70F8 "!"
 *   insn=0x00000000004E70F8 string=0x00000000004E719C "M<"
 *   insn=0x00000000004E710C string=0x00000000004E7110 "?"
 *   insn=0x00000000004E7110 string=0x00000000004E7114 "@"
 *   insn=0x00000000004E7114 string=0x00000000004E7118 ""
 *   insn=0x00000000004E7114 string=0x00000000004E713C ""
 *   insn=0x00000000004E7118 string=0x00000000004E711C "?"
 *   insn=0x00000000004E711C string=0x00000000004E7120 " "
 *   insn=0x00000000004E7120 string=0x00000000004E7144 ""
 *   insn=0x00000000004E7124 string=0x00000000004E7128 "?"
 *   insn=0x00000000004E712C string=0x00000000004E7130 ""
 *   insn=0x00000000004E712C string=0x00000000004E7168 ""
 *   insn=0x00000000004E7130 string=0x00000000004E7134 ""
 *   insn=0x00000000004E7148 string=0x00000000004E714C ""
 *   insn=0x00000000004E714C string=0x00000000004E7150 ""
 *   insn=0x00000000004E7150 string=0x00000000004E7154 "\t@"
 *   insn=0x00000000004E7154 string=0x00000000004E7158 " "
 *   insn=0x00000000004E7158 string=0x00000000004E715C "\n"
 *   insn=0x00000000004E715C string=0x00000000004E7160 "\tD"
 *   insn=0x00000000004E7168 string=0x00000000004E716C ")"
 *   insn=0x00000000004E716C string=0x00000000004E7170 ")"
 *   insn=0x00000000004E7174 string=0x00000000004E7178 ""
 *   insn=0x00000000004E7178 string=0x00000000004E717C "k!/"
 *   insn=0x00000000004E717C string=0x00000000004E7180 ""
 *   insn=0x00000000004E7180 string=0x00000000004E7184 "\n-@9"
 *   insn=0x00000000004E7184 string=0x00000000004E7188 ""
 *   insn=0x00000000004E7188 string=0x00000000004E718C "a"
 *   insn=0x00000000004E718C string=0x00000000004E7190 "?"
 *   insn=0x00000000004E7190 string=0x00000000004E7194 "h"
 *   insn=0x00000000004E719C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall lua_isnumber(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  _BYTE v8[16]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v9; // [xsp+18h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v2 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v4 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v2 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v4;
          break;
        case -10000:
          v2 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v5 = -10002LL - a2;
          v6 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v7 = *(unsigned __int8 *)(v6 + 11);
          v2 = (__int64 *)(v6 + 16 * v5 + 24);
          if ( (int)v5 > v7 )
            v2 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 16) )
      v2 = &qword_599BC8;
  }
  return *((_DWORD *)v2 + 2) == 3 || sub_4F5EF0(v2, v8) != 0;
}

