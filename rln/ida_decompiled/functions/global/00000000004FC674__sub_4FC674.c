/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FC674
 * Mangled: sub_4FC674
 * Demangled: sub_4FC674
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *
 * Referenced strings: 6
 *   insn=0x00000000004FC680 string=0x00000000004FC684 "T"
 *   insn=0x00000000004FC698 string=0x00000000004FC69C "\t"
 *   insn=0x00000000004FC69C string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FC6A4 string=0x00000000004FC6A8 "r"
 *   insn=0x00000000004FC6A8 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004FC6D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FC674()
{
  _ReadStatusReg(TPIDR_EL0);
  luaL_checklstring();
  lua_pushinteger();
  return 1;
}

