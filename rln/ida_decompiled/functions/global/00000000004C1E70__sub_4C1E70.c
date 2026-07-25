/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1E70
 * Mangled: sub_4C1E70
 * Demangled: sub_4C1E70
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x0000000000200BC0  Caver::ProgramTable::PointerForPointerKey(void *)
 *
 * Referenced strings: 10
 *   insn=0x00000000004C1E7C string=0x00000000004C1E80 "T"
 *   insn=0x00000000004C1E88 string=0x00000000004C1E8C "*"
 *   insn=0x00000000004C1EA0 string=0x00000000004C1EA4 "G"
 *   insn=0x00000000004C1EA8 string=0x00000000004C1EAC "`"
 *   insn=0x00000000004C1EB4 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004C1EBC string=0x00000000004C1EC0 "`"
 *   insn=0x00000000004C1EC4 string=0x00000000004C1EC8 "R"
 *   insn=0x00000000004C1EC8 string=0x00000000001F4010 "P'"
 *   insn=0x00000000004C1ED4 string=0x00000000004C1EDC "hJ"
 *   insn=0x00000000004C1F04 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4C1E70(void *a1)
{
  __int64 v1; // x19
  bool v2; // w8
  void *v4; // [xsp+8h] [xbp-28h] BYREF
  int v5; // [xsp+10h] [xbp-20h]
  __int64 v6; // [xsp+18h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a1;
  v5 = -10002;
  v1 = Caver::ProgramTable::PointerForPointerKey((Caver::ProgramTable *)&v4, a1);
  v2 = (unsigned int)lua_type() == 1 && (unsigned int)lua_toboolean() != 0;
  *(_BYTE *)(v1 + 82) = v2;
  return 0;
}

