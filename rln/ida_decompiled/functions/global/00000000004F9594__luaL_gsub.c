/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9594
 * Mangled: _Z9luaL_gsubP9lua_StatePKcS2_S2_
 * Demangled: luaL_gsub(lua_State *,char const*,char const*,char const*)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC810  .strstr
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *   0x00000000002029F0  lua_concat(lua_State *,int)
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 22
 *   insn=0x00000000004F95B0 string=0x00000000004F95B4 "Z"
 *   insn=0x00000000004F95B4 string=0x00000000004F95B8 "H"
 *   insn=0x00000000004F95DC string=0x00000000004F95E0 "tc"
 *   insn=0x00000000004F95F8 string=0x00000000001FC810 "0'"
 *   insn=0x00000000004F9600 string=0x00000000004F9604 "{c"
 *   insn=0x00000000004F9604 string=0x00000000004F9608 "?"
 *   insn=0x00000000004F962C string=0x00000000004F9630 "\n"
 *   insn=0x00000000004F9638 string=0x00000000004F963C "\t"
 *   insn=0x00000000004F9650 string=0x00000000004F9688 "5"
 *   insn=0x00000000004F9674 string=0x00000000004F9678 "\n"
 *   insn=0x00000000004F967C string=0x00000000004F9680 "\t"
 *   insn=0x00000000004F9690 string=0x00000000004F9694 "_"
 *   insn=0x00000000004F9698 string=0x00000000004F969C "y"
 *   insn=0x00000000004F96D4 string=0x00000000004F96D8 "\n"
 *   insn=0x00000000004F96DC string=0x00000000004F96E0 "\t"
 *   insn=0x00000000004F96EC string=0x00000000004F96F0 " "
 *   insn=0x00000000004F96FC string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004F9730 string=0x00000000004F9734 ""
 *   insn=0x00000000004F9734 string=0x00000000004F9738 "H"
 *   insn=0x00000000004F9734 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004F9740 string=0x00000000004F9744 "!"
 *   insn=0x00000000004F9768 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_gsub(int a1, const char *a2, char *a3, const char *a4)
{
  size_t v7; // x24
  char *i; // x25
  signed __int64 v9; // x28
  __int64 *v10; // x8
  char v11; // t1
  size_t v12; // x21
  const char *v13; // x28
  __int64 *v14; // x8
  char v15; // t1
  size_t j; // x22
  __int64 *v17; // x8
  char v18; // t1
  __int64 *v20; // [xsp+10h] [xbp-470h]
  _BYTE v21[1024]; // [xsp+28h] [xbp-458h] BYREF
  __int64 v22; // [xsp+428h] [xbp-58h] BYREF

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = strlen(a3);
  v20 = (__int64 *)v21;
  for ( i = strstr(a2, a3); i; i = strstr(&i[v7], a3) )
  {
    if ( i != a2 )
    {
      v9 = a2 - i;
      do
      {
        v10 = v20;
        if ( v20 >= &v22 )
        {
          luaL_prepbuffer();
          v10 = v20;
        }
        v11 = *a2++;
        ++v9;
        v20 = (__int64 *)((char *)v10 + 1);
        *(_BYTE *)v10 = v11;
      }
      while ( v9 );
    }
    v12 = strlen(a4);
    if ( v12 )
    {
      v13 = a4;
      do
      {
        v14 = v20;
        --v12;
        if ( v20 >= &v22 )
        {
          luaL_prepbuffer();
          v14 = v20;
        }
        v15 = *v13++;
        v20 = (__int64 *)((char *)v14 + 1);
        *(_BYTE *)v14 = v15;
      }
      while ( v12 );
    }
    a2 = &i[v7];
  }
  for ( j = strlen(a2); j; *(_BYTE *)v17 = v18 )
  {
    v17 = v20;
    --j;
    if ( v20 >= &v22 )
    {
      luaL_prepbuffer();
      v17 = v20;
    }
    v18 = *a2++;
    v20 = (__int64 *)((char *)v17 + 1);
  }
  if ( v20 != (__int64 *)v21 )
    lua_pushlstring();
  lua_concat();
  return lua_tolstring();
}

