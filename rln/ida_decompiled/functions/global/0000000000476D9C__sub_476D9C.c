/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476D9C
 * Mangled: sub_476D9C
 * Demangled: sub_476D9C
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 48
 *   insn=0x0000000000476DA8 string=0x0000000000476DAC "T"
 *   insn=0x0000000000476DB8 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000476DC0 string=0x0000000000476DC4 "s"
 *   insn=0x0000000000476DC4 string=0x0000000000476DC8 "`"
 *   insn=0x0000000000476DC4 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000476DC8 string=0x0000000000476DCC "i"
 *   insn=0x0000000000476DC8 string=0x0000000000476DF4 "h"
 *   insn=0x0000000000476DCC string=0x0000000000476DD0 ""
 *   insn=0x0000000000476DD0 string=0x0000000000476DD4 ")"
 *   insn=0x0000000000476DD4 string=0x0000000000476DD8 ")a"
 *   insn=0x0000000000476DDC string=0x0000000000476DE0 "("
 *   insn=0x0000000000476DE8 string=0x0000000000476DEC "/"
 *   insn=0x0000000000476DF4 string=0x0000000000476DF8 ""
 *   insn=0x0000000000476DF8 string=0x0000000000476DFC "a"
 *   insn=0x0000000000476E08 string=0x0000000000476E0C "I"
 *   insn=0x0000000000476E0C string=0x00000000001FBB30 "0'"
 *   insn=0x0000000000476E10 string=0x0000000000476E14 "i"
 *   insn=0x0000000000476E14 string=0x0000000000476E18 ")"
 *   insn=0x0000000000476E20 string=0x0000000000476E24 "A"
 *   insn=0x0000000000476E24 string=0x0000000000476E4C "i"
 *   insn=0x0000000000476E4C string=0x0000000000476E50 ")=G"
 *   insn=0x0000000000476E50 string=0x0000000000476E54 "!"
 *   insn=0x0000000000476E58 string=0x0000000000476E5C "\t"
 *   insn=0x0000000000476E58 string=0x0000000000476E70 "\t"
 *   insn=0x0000000000476E5C string=0x0000000000476E60 "*"
 *   insn=0x0000000000476E60 string=0x0000000000476E64 "\n"
 *   insn=0x0000000000476E6C string=0x0000000000476E7C "?"
 *   insn=0x0000000000476E70 string=0x0000000000476E74 "*"
 *   insn=0x0000000000476E74 string=0x0000000000476E78 "\n"
 *   insn=0x0000000000476E7C string=0x0000000000476E80 "L"
 *   insn=0x0000000000476E84 string=0x0000000000476E88 "G"
 *   insn=0x0000000000476E90 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000476E94 string=0x0000000000476E98 "j"
 *   insn=0x0000000000476E98 string=0x0000000000476E9C "J"
 *   insn=0x0000000000476EA0 string=0x0000000000476EA4 "(a"
 *   insn=0x0000000000476EAC string=0x0000000000476EB0 "j"
 *   insn=0x0000000000476EB0 string=0x0000000000476EB4 "J=G"
 *   insn=0x0000000000476EB4 string=0x0000000000476EB8 ")!"
 *   insn=0x0000000000476EBC string=0x0000000000476EC0 "*"
 *   insn=0x0000000000476EBC string=0x0000000000476EEC "*"
 *   insn=0x0000000000476EC0 string=0x0000000000476EC4 "K"
 *   insn=0x0000000000476EC4 string=0x0000000000476EC8 "+"
 *   insn=0x0000000000476ECC string=0x0000000000476ED0 "_"
 *   insn=0x0000000000476EDC string=0x0000000000476EE0 "1"
 *   insn=0x0000000000476EE4 string=0x0000000000476EE8 "w*"
 *   insn=0x0000000000476EEC string=0x0000000000476EF0 "K"
 *   insn=0x0000000000476EF0 string=0x0000000000476EF4 "+"
 *   insn=0x0000000000476EF4 string=0x0000000000476EF8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_476D9C(void *a1)
{
  Caver::ProgramState *v1; // x0
  __int64 *v2; // x0
  __int64 v3; // x8
  void *v4; // x0
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+8h] [xbp-28h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    v8[0] = &byte_6FD2F8;
    if ( v3 )
      sub_56A6A8(v8);
  }
  else
  {
    v8[0] = &byte_6FD2F8;
  }
  Caver::ProgramState::PushString();
  v4 = (void *)(v8[0] - 24LL);
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
      operator delete(v4);
  }
  return 1;
}

