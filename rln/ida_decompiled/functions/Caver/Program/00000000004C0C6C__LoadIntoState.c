/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C0C6C
 * Mangled: _ZNK5Caver7Program13LoadIntoStateEP9lua_State
 * Demangled: Caver::Program::LoadIntoState(lua_State *)
 *
 * Callers: 1
 *   0x00000000001FC860  Caver::Program::LoadIntoState(lua_State *)
 *
 * Callees: 9
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000001FF6F0  luaL_loadbuffer(lua_State *,char const*,ulong,char const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x00000000004C0C78 string=0x00000000004C0C7C "T"
 *   insn=0x00000000004C0C88 string=0x00000000004C0C8C ""
 *   insn=0x00000000004C0C98 string=0x000000000059C633 "program"
 *   insn=0x00000000004C0CA0 string=0x00000000004C0CA4 """
 *   insn=0x00000000004C0CA8 string=0x00000000004C0CAC " "
 *   insn=0x00000000004C0CBC string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004C0CD0 string=0x00000000004C0CD4 ")"
 *   insn=0x00000000004C0CD4 string=0x00000000004C0CD8 ")"
 *   insn=0x00000000004C0CE4 string=0x00000000004C0D14 ")"
 *   insn=0x00000000004C0D00 string=0x00000000004C0D58 "^"
 *   insn=0x00000000004C0D14 string=0x00000000004C0D18 ")=G"
 *   insn=0x00000000004C0D18 string=0x00000000004C0D1C "!"
 *   insn=0x00000000004C0D20 string=0x00000000004C0D24 "\t"
 *   insn=0x00000000004C0D20 string=0x00000000004C0D38 "\t"
 *   insn=0x00000000004C0D24 string=0x00000000004C0D28 "*"
 *   insn=0x00000000004C0D28 string=0x00000000004C0D2C "\n"
 *   insn=0x00000000004C0D34 string=0x00000000004C0D44 "?"
 *   insn=0x00000000004C0D38 string=0x00000000004C0D3C "*"
 *   insn=0x00000000004C0D3C string=0x00000000004C0D40 "\n"
 *   insn=0x00000000004C0D58 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C0D6C string=0x00000000001F9460 "0'"
 *   insn=0x00000000004C0D70 string=0x00000000004C0D74 "!"
 *   insn=0x00000000004C0D74 string=0x00000000004C0D78 "!"
 *   insn=0x00000000004C0D80 string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Program::LoadIntoState(__int64 a1)
{
  char *v1; // x0
  void *v2; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+18h] [xbp-28h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_QWORD *)(a1 + 24) )
    return 0;
  if ( (unsigned int)luaL_loadbuffer() )
  {
    v1 = (char *)lua_tolstring();
    sub_566BB8((int)v6, v1);
    v2 = (void *)(v6[0] - 24LL);
    if ( (__int64 *)(v6[0] - 24LL) != &qword_6FD2E0 )
    {
      v4 = (unsigned int *)(v6[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v5 = __ldaxr(v4);
        while ( __stlxr(v5 - 1, v4) );
      }
      else
      {
        v5 = (*v4)--;
      }
      if ( v5 <= 0 )
        operator delete(v2);
    }
    return 0;
  }
  return 1;
}

