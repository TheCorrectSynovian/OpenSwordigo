/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FCA10
 * Mangled: sub_4FCA10
 * Demangled: sub_4FCA10
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F5B60  luaL_buffinit(lua_State *,luaL_Buffer *)
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F97C0  .toupper
 *   0x00000000001FF030  luaL_pushresult(luaL_Buffer *)
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *
 * Referenced strings: 12
 *   insn=0x00000000004FCA24 string=0x00000000004FCA28 "U"
 *   insn=0x00000000004FCA3C string=0x00000000004FCA40 " "
 *   insn=0x00000000004FCA40 string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FCA50 string=0x00000000004FCA54 "C"
 *   insn=0x00000000004FCA54 string=0x00000000001F5B60 "P'"
 *   insn=0x00000000004FCA58 string=0x00000000004FCA5C "H"
 *   insn=0x00000000004FCA70 string=0x00000000004FCA80 "`jt8O"
 *   insn=0x00000000004FCA80 string=0x00000000004FCA84 "O"
 *   insn=0x00000000004FCA84 string=0x00000000001F97C0 "0'"
 *   insn=0x00000000004FCA9C string=0x00000000004FCAA0 "C"
 *   insn=0x00000000004FCAA4 string=0x00000000004FCAA8 "b\t"
 *   insn=0x00000000004FCAD8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FCA10()
{
  __int64 v0; // x19
  unsigned __int64 i; // x20
  __int64 *v2; // x23
  unsigned __int64 v4; // [xsp+8h] [xbp-458h]
  __int64 *v5; // [xsp+10h] [xbp-450h]
  __int64 v6; // [xsp+428h] [xbp-38h] BYREF

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v0 = luaL_checklstring();
  luaL_buffinit();
  if ( v4 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v2 = v5;
      if ( v5 >= &v6 )
      {
        luaL_prepbuffer();
        v2 = v5;
      }
      v5 = (__int64 *)((char *)v2 + 1);
      *(_BYTE *)v2 = toupper(*(unsigned __int8 *)(v0 + i));
    }
  }
  luaL_pushresult();
  return 1;
}

