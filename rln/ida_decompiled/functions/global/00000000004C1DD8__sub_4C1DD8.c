/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1DD8
 * Mangled: sub_4C1DD8
 * Demangled: sub_4C1DD8
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5030  lua_tonumber(lua_State *,int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002005F0  lua_yield(lua_State *,int)
 *   0x0000000000200BC0  Caver::ProgramTable::PointerForPointerKey(void *)
 *
 * Referenced strings: 6
 *   insn=0x00000000004C1DE8 string=0x00000000004C1DEC "U"
 *   insn=0x00000000004C1DF4 string=0x00000000004C1DF8 ")"
 *   insn=0x00000000004C1E0C string=0x00000000004C1E10 "l"
 *   insn=0x00000000004C1E24 string=0x00000000001F5030 "P'"
 *   insn=0x00000000004C1E4C string=0x00000000004C1E64 ""
 *   insn=0x00000000004C1E64 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4C1DD8(void *a1)
{
  __int64 v1; // x20
  double v2; // d0
  void *v4; // [xsp+8h] [xbp-38h] BYREF
  int v5; // [xsp+10h] [xbp-30h]
  __int64 v6; // [xsp+18h] [xbp-28h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a1;
  v5 = -10002;
  v1 = Caver::ProgramTable::PointerForPointerKey((Caver::ProgramTable *)&v4, a1);
  lua_tonumber();
  *(float *)&v2 = v2;
  *(_DWORD *)(v1 + 72) = 1;
  *(_DWORD *)(v1 + 76) = LODWORD(v2);
  return lua_yield();
}

