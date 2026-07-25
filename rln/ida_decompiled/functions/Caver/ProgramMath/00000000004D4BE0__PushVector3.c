/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4BE0
 * Mangled: _ZN5Caver11ProgramMath11PushVector3EPNS_12ProgramStateERKNS_7Vector3E
 * Demangled: Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FE800  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *   0x00000000001FE9A0  Caver::ProgramState::NewUserData(ulong,std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 95
 *   insn=0x00000000004D4BF0 string=0x00000000004D4BF4 "U"
 *   insn=0x00000000004D4C08 string=0x000000000058A449 "Vector3"
 *   insn=0x00000000004D4C24 string=0x00000000004D4C28 "^"
 *   insn=0x00000000004D4C34 string=0x00000000004D4C38 ")"
 *   insn=0x00000000004D4C44 string=0x00000000004D4C48 "h"
 *   insn=0x00000000004D4C4C string=0x00000000004D4C50 "h\n@"
 *   insn=0x00000000004D4C7C string=0x00000000004D4C80 ")=G"
 *   insn=0x00000000004D4C80 string=0x00000000004D4C84 "!"
 *   insn=0x00000000004D4C88 string=0x00000000004D4C8C "\t"
 *   insn=0x00000000004D4C88 string=0x00000000004D4CA0 "\t"
 *   insn=0x00000000004D4C8C string=0x00000000004D4C90 "*"
 *   insn=0x00000000004D4C90 string=0x00000000004D4C94 "\n"
 *   insn=0x00000000004D4C9C string=0x00000000004D4CAC "?"
 *   insn=0x00000000004D4CA0 string=0x00000000004D4CA4 "*"
 *   insn=0x00000000004D4CA4 string=0x00000000004D4CA8 "\n"
 *   insn=0x00000000004D4CC0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D4CC8 string=0x00000000004D4CCC "J"
 *   insn=0x00000000004D4CD0 string=0x00000000004D4CD4 "(a"
 *   insn=0x00000000004D4CE0 string=0x00000000004D4CE4 "J=G"
 *   insn=0x00000000004D4CE4 string=0x00000000004D4CE8 ")!"
 *   insn=0x00000000004D4CEC string=0x00000000004D4CF0 "*"
 *   insn=0x00000000004D4CEC string=0x00000000004D4D1C "*"
 *   insn=0x00000000004D4CF0 string=0x00000000004D4CF4 "K"
 *   insn=0x00000000004D4CF4 string=0x00000000004D4CF8 "+"
 *   insn=0x00000000004D4CFC string=0x00000000004D4D00 "_"
 *   insn=0x00000000004D4D1C string=0x00000000004D4D20 "K"
 *   insn=0x00000000004D4D20 string=0x00000000004D4D24 "+"
 *   insn=0x00000000004D4D24 string=0x00000000004D4D28 "_"
 *   insn=0x00000000004D4D48 string=0x00000000004D4D4C "U"
 *   insn=0x00000000004D4D60 string=0x000000000058A45D "Rectangle"
 *   insn=0x00000000004D4D7C string=0x00000000004D4D80 ""
 *   insn=0x00000000004D4D8C string=0x00000000004D4D90 ")"
 *   insn=0x00000000004D4D9C string=0x00000000004D4DA0 "`"
 *   insn=0x00000000004D4DB4 string=0x00000000004D4E10 "0"
 *   insn=0x00000000004D4DCC string=0x00000000004D4DD0 ")=G"
 *   insn=0x00000000004D4DD0 string=0x00000000004D4DD4 "!"
 *   insn=0x00000000004D4DD8 string=0x00000000004D4DDC "\t"
 *   insn=0x00000000004D4DD8 string=0x00000000004D4DF0 "\t"
 *   insn=0x00000000004D4DDC string=0x00000000004D4DE0 "*"
 *   insn=0x00000000004D4DE0 string=0x00000000004D4DE4 "\n"
 *   insn=0x00000000004D4DEC string=0x00000000004D4DFC "?"
 *   insn=0x00000000004D4DF0 string=0x00000000004D4DF4 "*"
 *   insn=0x00000000004D4DF4 string=0x00000000004D4DF8 "\n"
 *   insn=0x00000000004D4E04 string=0x00000000004D4E08 "gU"
 *   insn=0x00000000004D4E18 string=0x00000000004D4E1C "J"
 *   insn=0x00000000004D4E20 string=0x00000000004D4E24 "(a"
 *   insn=0x00000000004D4E30 string=0x00000000004D4E34 "J=G"
 *   insn=0x00000000004D4E34 string=0x00000000004D4E38 ")!"
 *   insn=0x00000000004D4E3C string=0x00000000004D4E40 "*"
 *   insn=0x00000000004D4E3C string=0x00000000004D4E6C "*"
 *   insn=0x00000000004D4E40 string=0x00000000004D4E44 "K"
 *   insn=0x00000000004D4E44 string=0x00000000004D4E48 "+"
 *   insn=0x00000000004D4E4C string=0x00000000004D4E50 "_"
 *   insn=0x00000000004D4E5C string=0x00000000004D4E60 "QU"
 *   insn=0x00000000004D4E6C string=0x00000000004D4E70 "K"
 *   insn=0x00000000004D4E70 string=0x00000000004D4E74 "+"
 *   insn=0x00000000004D4E74 string=0x00000000004D4E78 "_"
 *   insn=0x00000000004D4E94 string=0x00000000004D4E98 "T"
 *   insn=0x00000000004D4EB4 string=0x00000000004D4EB8 "@G"
 *   insn=0x00000000004D4EB8 string=0x00000000004D4EBC """
 *   insn=0x00000000004D4EBC string=0x00000000004D4EC0 "#"
 *   insn=0x00000000004D4EC0 string=0x00000000004D4EC4 "B"
 *   insn=0x00000000004D4EC4 string=0x00000000004D4EC8 "c"
 *   insn=0x00000000004D4ED0 string=0x00000000004D4ED4 "K"
 *   insn=0x00000000004D4EDC string=0x00000000004D4EE0 ")"
 *   insn=0x00000000004D4EE8 string=0x00000000004D4EEC "!"
 *   insn=0x00000000004D4F10 string=0x00000000004D4F14 ")=G"
 *   insn=0x00000000004D4F14 string=0x00000000004D4F18 "!"
 *   insn=0x00000000004D4F1C string=0x00000000004D4F20 "\t"
 *   insn=0x00000000004D4F1C string=0x00000000004D4F34 "\t"
 *   insn=0x00000000004D4F20 string=0x00000000004D4F24 "*"
 *   insn=0x00000000004D4F24 string=0x00000000004D4F28 "\n"
 *   insn=0x00000000004D4F30 string=0x00000000004D4F40 "?"
 *   insn=0x00000000004D4F34 string=0x00000000004D4F38 "*"
 *   insn=0x00000000004D4F38 string=0x00000000004D4F3C "\n"
 *   insn=0x00000000004D4F40 string=0x00000000004D4F44 "l"
 *   insn=0x00000000004D4F5C string=0x00000000004D4F60 "J"
 *   insn=0x00000000004D4F64 string=0x00000000004D4F68 "(a"
 *   insn=0x00000000004D4F74 string=0x00000000004D4F78 "J=G"
 *   insn=0x00000000004D4F78 string=0x00000000004D4F7C ")!"
 *   insn=0x00000000004D4F80 string=0x00000000004D4F84 "*"
 *   insn=0x00000000004D4F80 string=0x00000000004D4FB0 "*"
 *   insn=0x00000000004D4F84 string=0x00000000004D4F88 "K"
 *   insn=0x00000000004D4F88 string=0x00000000004D4F8C "+"
 *   insn=0x00000000004D4F90 string=0x00000000004D4F94 "_"
 *   insn=0x00000000004D4FA8 string=0x00000000004D4FAC "F"
 *   insn=0x00000000004D4FB0 string=0x00000000004D4FB4 "K"
 *   insn=0x00000000004D4FB4 string=0x00000000004D4FB8 "+"
 *   insn=0x00000000004D4FB8 string=0x00000000004D4FBC "_"
 *   insn=0x00000000004D4FDC string=0x00000000004D4FE0 "T"
 *   insn=0x00000000004D4FEC string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D4FF8 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004D5000 string=0x00000000004D5004 ""
 *   insn=0x00000000004D5010 string=0x00000000004D5014 "\t"
 *   insn=0x00000000004D502C string=0x00000000001F7F40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramMath::PushVector3(
        Caver::ProgramMath *this,
        Caver::ProgramState *a2,
        const Caver::Vector3 *a3)
{
  __int64 v4; // x20
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+E0h] [xbp-38h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v8, "Vector3");
  v4 = Caver::ProgramState::NewUserData();
  v5 = (void *)(v8[0] - 24LL);
  if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v8[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v5);
  }
  *(_QWORD *)v4 = *(_QWORD *)a2;
  *(_DWORD *)(v4 + 8) = *((_DWORD *)a2 + 2);
}

