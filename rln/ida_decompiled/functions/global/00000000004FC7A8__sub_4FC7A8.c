/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FC7A8
 * Mangled: sub_4FC7A8
 * Demangled: sub_4FC7A8
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *   0x00000000001F5B60  luaL_buffinit(lua_State *,luaL_Buffer *)
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FF030  luaL_pushresult(luaL_Buffer *)
 *   0x0000000000203790  luaL_addlstring(luaL_Buffer *,char const*,ulong)
 *
 * Referenced strings: 8
 *   insn=0x00000000004FC7BC string=0x00000000004FC7C0 "V"
 *   insn=0x00000000004FC7D8 string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FC7E4 string=0x00000000004FC7E8 "2"
 *   insn=0x00000000004FC7E8 string=0x00000000001F54B0 "P'"
 *   insn=0x00000000004FC7F8 string=0x00000000001F5B60 "P'"
 *   insn=0x00000000004FC7FC string=0x00000000004FC800 "+"
 *   insn=0x00000000004FC81C string=0x00000000004FC820 "L"
 *   insn=0x00000000004FC858 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FC7A8()
{
  int v0; // w20
  int v1; // w20

  _ReadStatusReg(TPIDR_EL0);
  luaL_checklstring();
  v0 = luaL_checkinteger();
  luaL_buffinit();
  if ( v0 >= 1 )
  {
    v1 = v0 + 1;
    do
    {
      luaL_addlstring();
      --v1;
    }
    while ( v1 > 1 );
  }
  luaL_pushresult();
  return 1;
}

