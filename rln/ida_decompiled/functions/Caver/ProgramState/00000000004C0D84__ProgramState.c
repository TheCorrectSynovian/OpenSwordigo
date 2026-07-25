/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C0D84
 * Mangled: _ZN5Caver12ProgramStateC2EPS0_
 * Demangled: Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callers: 2
 *   0x00000000001FFF60  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x0000000000202BF0  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callees: 23
 *   0x00000000001F5B80  Caver::ProgramState::RegisterProgramLibrary(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB2A0  lua_newthread(lua_State *)
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *   0x00000000001FF570  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *   0x00000000001FF7F0  luaopen_string(lua_State *)
 *   0x0000000000200FD0  Caver::ProgramMath::RegisterLibraries(Caver::ProgramState *)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000201570  lua_atpanic(lua_State *,int (*)(lua_State *))
 *   0x0000000000202750  lua_pushstring(lua_State *,char const*)
 *   0x0000000000202B10  luaL_newstate(void)
 *   0x0000000000202E50  lua_call(lua_State *,int,int)
 *   0x00000000002034A0  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *   0x00000000002038F0  Caver::ProgramTable::SetPointerForPointerKey(void *,void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004C0C6C  Caver::Program::LoadIntoState(lua_State *)
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 81
 *   insn=0x00000000004C0D9C string=0x00000000004C0DA0 "vB"
 *   insn=0x00000000004C0DB0 string=0x00000000004C0DB4 "vZ"
 *   insn=0x00000000004C0DBC string=0x00000000004C0DC0 "h"
 *   insn=0x00000000004C0DDC string=0x00000000004C0DE0 "hV"
 *   insn=0x00000000004C0DE0 string=0x00000000004C0DE4 "u"
 *   insn=0x00000000004C0DE4 string=0x00000000004C0E10 "@"
 *   insn=0x00000000004C0DEC string=0x00000000004C0DF0 "|"
 *   insn=0x00000000004C0DF4 string=0x00000000004C0DF8 "*"
 *   insn=0x00000000004C0DF8 string=0x00000000004C0DFC "`"
 *   insn=0x00000000004C0DF8 string=0x00000000001FB2A0 "0'"
 *   insn=0x00000000004C0E04 string=0x00000000004C0E08 "V"
 *   insn=0x00000000004C0E08 string=0x00000000004C0E0C "\n"
 *   insn=0x00000000004C0E0C string=0x00000000004C0E34 "a"
 *   insn=0x00000000004C0E10 string=0x00000000004C0E14 "`"
 *   insn=0x00000000004C0E14 string=0x00000000004C0E18 "!"
 *   insn=0x00000000004C0E18 string=0x00000000004C0E1C "!"
 *   insn=0x00000000004C0E24 string=0x00000000004C0E28 "V"
 *   insn=0x00000000004C0E28 string=0x00000000001F5B80 "P'"
 *   insn=0x00000000004C0E2C string=0x00000000004C0E30 "h"
 *   insn=0x00000000004C0E34 string=0x00000000004C0E38 "("
 *   insn=0x00000000004C0E3C string=0x00000000004C0E40 "h2"
 *   insn=0x00000000004C0E40 string=0x00000000004C0E44 "a"
 *   insn=0x00000000004C0E44 string=0x00000000004C0E48 "a"
 *   insn=0x00000000004C0E48 string=0x00000000004C0E4C "iB"
 *   insn=0x00000000004C0E74 string=0x00000000004C0E78 "("
 *   insn=0x00000000004C0E78 string=0x00000000004C0E7C "\t\t@"
 *   insn=0x00000000004C0E7C string=0x00000000004C0E80 ")"
 *   insn=0x00000000004C0E80 string=0x00000000004C0E84 "\t\t"
 *   insn=0x00000000004C0E88 string=0x00000000004C0E8C "\t"
 *   insn=0x00000000004C0E8C string=0x00000000004C0E90 ")"
 *   insn=0x00000000004C0E94 string=0x00000000004C0E98 " "
 *   insn=0x00000000004C0EA0 string=0x00000000004C0EA4 " "
 *   insn=0x00000000004C0EAC string=0x00000000004C0EB0 "5"
 *   insn=0x00000000004C0EB4 string=0x00000000004C0EB8 ""
 *   insn=0x00000000004C0EC4 string=0x00000000004C0EC8 "\t@"
 *   insn=0x00000000004C0ED4 string=0x00000000004C0ED8 ""
 *   insn=0x00000000004C0EE4 string=0x00000000004C0EE8 "@"
 *   insn=0x00000000004C0EF8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C0F00 string=0x00000000004C0F04 "!"
 *   insn=0x00000000004C0F08 string=0x00000000004C0F0C "n"
 *   insn=0x00000000004C0F24 string=0x00000000004C0F28 "T"
 *   insn=0x00000000004C0F34 string=0x00000000004C0F38 "A"
 *   insn=0x00000000004C0F38 string=0x000000000058A53F "Program"
 *   insn=0x00000000004C0F48 string=0x00000000004C0F4C "`"
 *   insn=0x00000000004C0F5C string=0x00000000004C0F60 "`"
 *   insn=0x00000000004C0F64 string=0x00000000004C0F68 "j"
 *   insn=0x00000000004C0F6C string=0x00000000004C0F70 ")"
 *   insn=0x00000000004C0F70 string=0x00000000004C0F74 ")"
 *   insn=0x00000000004C0F80 string=0x00000000004C0F84 "`"
 *   insn=0x00000000004C0F80 string=0x00000000004C0FE0 ")"
 *   insn=0x00000000004C0F88 string=0x00000000004C0F8C "!"
 *   insn=0x00000000004C0F8C string=0x00000000004C0F90 "`"
 *   insn=0x00000000004C0F90 string=0x00000000004C0F94 "!l@"
 *   insn=0x00000000004C0F98 string=0x00000000004C0F9C "A\t"
 *   insn=0x00000000004C0F9C string=0x00000000004C0FA0 "`"
 *   insn=0x00000000004C0FA0 string=0x00000000004C0FA4 "a"
 *   insn=0x00000000004C0FAC string=0x00000000004C0FB0 "`"
 *   insn=0x00000000004C0FE0 string=0x00000000004C0FE4 ")=G"
 *   insn=0x00000000004C0FE4 string=0x00000000004C0FE8 "!"
 *   insn=0x00000000004C0FEC string=0x00000000004C0FF0 "\t"
 *   insn=0x00000000004C0FEC string=0x00000000004C1004 "\t"
 *   insn=0x00000000004C0FF0 string=0x00000000004C0FF4 "*"
 *   insn=0x00000000004C0FF4 string=0x00000000004C0FF8 "\n"
 *   insn=0x00000000004C1000 string=0x00000000004C1010 "?"
 *   insn=0x00000000004C1004 string=0x00000000004C1008 "*"
 *   insn=0x00000000004C1008 string=0x00000000004C100C "\n"
 *   insn=0x00000000004C1024 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C102C string=0x00000000004C1030 "*"
 *   insn=0x00000000004C1030 string=0x00000000004C1034 "J"
 *   insn=0x00000000004C1038 string=0x00000000004C103C "(a"
 *   insn=0x00000000004C1044 string=0x00000000004C1048 "\n"
 *   insn=0x00000000004C1048 string=0x00000000004C104C "J=G"
 *   insn=0x00000000004C104C string=0x00000000004C1050 ")!"
 *   insn=0x00000000004C1054 string=0x00000000004C1058 "*"
 *   insn=0x00000000004C1054 string=0x00000000004C1084 "*"
 *   insn=0x00000000004C1058 string=0x00000000004C105C "K"
 *   insn=0x00000000004C105C string=0x00000000004C1060 "+"
 *   insn=0x00000000004C1064 string=0x00000000004C1068 "_"
 *   insn=0x00000000004C1084 string=0x00000000004C1088 "K"
 *   insn=0x00000000004C1088 string=0x00000000004C108C "+"
 *   insn=0x00000000004C108C string=0x00000000004C1090 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::ProgramState(Caver::ProgramState *this, Caver::ProgramState *a2)
{
  Caver::ProgramTable *v3; // x20
  Caver::ProgramState *v4; // x1
  void *v5; // x1

  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = (char *)this + 16;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  v3 = (Caver::ProgramState *)((char *)this + 40);
  *(_WORD *)((char *)this + 81) = 1;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_BYTE *)this + 83) = 0;
  *((_DWORD *)this + 21) = 1065353216;
  if ( a2 )
  {
    lua_pushlightuserdata();
    *(_QWORD *)this = lua_newthread();
    lua_settable();
  }
  else
  {
    *(_QWORD *)this = luaL_newstate();
    lua_atpanic();
    Caver::ProgramState::RegisterProgramLibrary(this);
    Caver::ProgramMath::RegisterLibraries(this, v4);
  }
  v5 = *(void **)this;
  *((_DWORD *)this + 12) = -10002;
  *((_QWORD *)this + 5) = v5;
  *((_QWORD *)this + 7) = v5;
  *((_DWORD *)this + 16) = -10000;
  return Caver::ProgramTable::SetPointerForPointerKey(v3, v5, this);
}

