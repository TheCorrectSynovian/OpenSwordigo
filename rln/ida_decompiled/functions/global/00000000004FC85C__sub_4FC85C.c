/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FC85C
 * Mangled: sub_4FC85C
 * Demangled: sub_4FC85C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5B60  luaL_buffinit(lua_State *,luaL_Buffer *)
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FF030  luaL_pushresult(luaL_Buffer *)
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *
 * Referenced strings: 14
 *   insn=0x00000000004FC870 string=0x00000000004FC874 "U"
 *   insn=0x00000000004FC88C string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FC8A0 string=0x00000000001F5B60 "P'"
 *   insn=0x00000000004FC8A4 string=0x00000000004FC8A8 "("
 *   insn=0x00000000004FC8AC string=0x00000000004FC8B0 "\t"
 *   insn=0x00000000004FC8B8 string=0x00000000004FC8BC "?"
 *   insn=0x00000000004FC8C0 string=0x00000000004FC8D0 "hjh8*"
 *   insn=0x00000000004FC8C4 string=0x00000000004FC8C8 "R"
 *   insn=0x00000000004FC8D0 string=0x00000000004FC8D4 "*"
 *   insn=0x00000000004FC8D8 string=0x00000000004FC8DC "("
 *   insn=0x00000000004FC8E0 string=0x00000000004FC8E4 "("
 *   insn=0x00000000004FC8E8 string=0x00000000004FC8EC "i"
 *   insn=0x00000000004FC904 string=0x00000000004FC924 "k"
 *   insn=0x00000000004FC924 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FC85C()
{
  __int64 v0; // x19
  __int64 v1; // x9
  __int64 v2; // x8
  __int64 *v3; // x9
  __int64 v4; // x9
  __int64 v6; // [xsp+8h] [xbp-458h]
  __int64 v7; // [xsp+8h] [xbp-458h]
  __int64 *v8; // [xsp+10h] [xbp-450h]
  __int64 v9; // [xsp+428h] [xbp-38h] BYREF

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v0 = luaL_checklstring();
  luaL_buffinit();
  v1 = v6;
  v2 = v6 - 1;
  v7 = v6 - 1;
  if ( v1 )
  {
    do
    {
      v3 = v8;
      if ( v8 >= &v9 )
      {
        luaL_prepbuffer();
        v2 = v7;
        v3 = v8;
      }
      v8 = (__int64 *)((char *)v3 + 1);
      *(_BYTE *)v3 = *(_BYTE *)(v0 + v2);
      v4 = v7;
      v2 = --v7;
    }
    while ( v4 );
  }
  luaL_pushresult();
  return 1;
}

