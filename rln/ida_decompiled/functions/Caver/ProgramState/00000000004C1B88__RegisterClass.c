/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1B88
 * Mangled: _ZN5Caver12ProgramState13RegisterClassERKSsPKNS_11LibFunctionES5_
 * Demangled: Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *
 * Callers: 1
 *   0x00000000001FE800  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *   0x00000000001FF570  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000203440  luaL_newmetatable(lua_State *,char const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 66
 *   insn=0x00000000004C1B9C string=0x00000000004C1BA0 "W"
 *   insn=0x00000000004C1BB4 string=0x00000000004C1BB8 "`"
 *   insn=0x00000000004C1BC8 string=0x0000000000595F05 "__index"
 *   insn=0x00000000004C1BDC string=0x00000000004C1BE0 "`"
 *   insn=0x00000000004C1BE0 string=0x00000000004C1BE4 """
 *   insn=0x00000000004C1BE4 string=0x00000000004C1BE8 "r"
 *   insn=0x00000000004C1BE8 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C1BEC string=0x00000000004C1BF0 "8"
 *   insn=0x00000000004C1C00 string=0x00000000004C1C04 "`"
 *   insn=0x00000000004C1C00 string=0x00000000004C1C9C "\t"
 *   insn=0x00000000004C1C0C string=0x00000000004C1C10 "`"
 *   insn=0x00000000004C1C0C string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004C1C18 string=0x00000000004C1C1C "`"
 *   insn=0x00000000004C1C24 string=0x00000000004C1C28 "R"
 *   insn=0x00000000004C1C28 string=0x00000000004C1C2C "`"
 *   insn=0x00000000004C1C30 string=0x00000000004C1C34 "7"
 *   insn=0x00000000004C1C44 string=0x00000000004C1C48 "`"
 *   insn=0x00000000004C1C50 string=0x00000000004C1C54 "G"
 *   insn=0x00000000004C1C54 string=0x00000000004C1C58 "`"
 *   insn=0x00000000004C1C5C string=0x00000000004C1C60 ","
 *   insn=0x00000000004C1C70 string=0x00000000004C1CC0 "\t"
 *   insn=0x00000000004C1C7C string=0x00000000004C1C80 "!"
 *   insn=0x00000000004C1C80 string=0x00000000004C1D24 "k"
 *   insn=0x00000000004C1C9C string=0x00000000004C1CA0 ")=G"
 *   insn=0x00000000004C1CA0 string=0x00000000004C1CA4 "!"
 *   insn=0x00000000004C1CA8 string=0x00000000004C1CAC "\t"
 *   insn=0x00000000004C1CA8 string=0x00000000004C1CE4 "\t"
 *   insn=0x00000000004C1CAC string=0x00000000004C1CB0 "*"
 *   insn=0x00000000004C1CB0 string=0x00000000004C1CB4 "\n"
 *   insn=0x00000000004C1CB8 string=0x00000000004C1CBC ""
 *   insn=0x00000000004C1CBC string=0x00000000004C1CF0 "?"
 *   insn=0x00000000004C1CC0 string=0x00000000004C1CC4 ")=G"
 *   insn=0x00000000004C1CC4 string=0x00000000004C1CC8 "!"
 *   insn=0x00000000004C1CCC string=0x00000000004C1CD0 "\t"
 *   insn=0x00000000004C1CCC string=0x00000000004C1D04 "\t"
 *   insn=0x00000000004C1CD0 string=0x00000000004C1CD4 "*"
 *   insn=0x00000000004C1CD4 string=0x00000000004C1CD8 "\n"
 *   insn=0x00000000004C1CE0 string=0x00000000004C1D10 "?"
 *   insn=0x00000000004C1CE4 string=0x00000000004C1CE8 "*"
 *   insn=0x00000000004C1CE8 string=0x00000000004C1CEC "\n"
 *   insn=0x00000000004C1D04 string=0x00000000004C1D08 "*"
 *   insn=0x00000000004C1D08 string=0x00000000004C1D0C "\n"
 *   insn=0x00000000004C1D24 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C1D2C string=0x00000000004C1D30 "*"
 *   insn=0x00000000004C1D30 string=0x00000000004C1D34 "J"
 *   insn=0x00000000004C1D38 string=0x00000000004C1D3C "(a"
 *   insn=0x00000000004C1D44 string=0x00000000004C1D48 "\n"
 *   insn=0x00000000004C1D48 string=0x00000000004C1D4C "J=G"
 *   insn=0x00000000004C1D4C string=0x00000000004C1D50 ")!"
 *   insn=0x00000000004C1D50 string=0x00000000004C1D54 "j"
 *   insn=0x00000000004C1D54 string=0x00000000004C1D58 "*"
 *   insn=0x00000000004C1D54 string=0x00000000004C1DC0 "*"
 *   insn=0x00000000004C1D58 string=0x00000000004C1D5C "K"
 *   insn=0x00000000004C1D5C string=0x00000000004C1D60 "+"
 *   insn=0x00000000004C1D68 string=0x00000000004C1DA4 "_"
 *   insn=0x00000000004C1D74 string=0x00000000004C1D78 "(a"
 *   insn=0x00000000004C1D80 string=0x00000000004C1D84 "\n"
 *   insn=0x00000000004C1D84 string=0x00000000004C1D88 "J=G"
 *   insn=0x00000000004C1D88 string=0x00000000004C1D8C ")!"
 *   insn=0x00000000004C1D90 string=0x00000000004C1D94 "*"
 *   insn=0x00000000004C1D94 string=0x00000000004C1D98 "K"
 *   insn=0x00000000004C1D98 string=0x00000000004C1D9C "+"
 *   insn=0x00000000004C1DB0 string=0x00000000004C1DB4 "|"
 *   insn=0x00000000004C1DC0 string=0x00000000004C1DC4 "K"
 *   insn=0x00000000004C1DC4 string=0x00000000004C1DC8 "+"
 *   insn=0x00000000004C1DC8 string=0x00000000004C1DCC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramState::RegisterClass(_QWORD *a1, char **a2)
{
  void *v3; // x0
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+8h] [xbp-48h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  luaL_newmetatable(*a1, *a2);
  sub_566BB8((int)v9, "__index");
  lua_pushlstring();
  v3 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v9[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v3);
  }
  lua_pushvalue();
  lua_settable();
  luaL_register();
  lua_settop();
  sub_566BB8((int)v9, *a2);
  luaL_register();
  lua_settop();
  v4 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v9[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v4);
  }
}

