/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2044
 * Mangled: _ZN5Caver12ProgramTable23SetPointerForPointerKeyEPvS1_
 * Demangled: Caver::ProgramTable::SetPointerForPointerKey(void *,void *)
 *
 * Callers: 1
 *   0x00000000002038F0  Caver::ProgramTable::SetPointerForPointerKey(void *,void *)
 *
 * Callees: 2
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramTable::SetPointerForPointerKey(Caver::ProgramTable *this, void *a2, void *a3)
{
  lua_pushlightuserdata();
  lua_pushlightuserdata();
  return lua_settable();
}

