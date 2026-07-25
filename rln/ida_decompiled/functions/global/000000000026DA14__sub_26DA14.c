/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026DA14
 * Mangled: sub_26DA14
 * Demangled: sub_26DA14
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x000000000026DA24 string=0x000000000026DA28 "U"
 *   insn=0x000000000026DA30 string=0x000000000026DA34 "k6"
 *   insn=0x000000000026DA34 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026DA3C string=0x000000000026DA40 "T;"
 *   insn=0x000000000026DA40 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026DA50 string=0x000000000026DA54 "!"
 *   insn=0x000000000026DA5C string=0x000000000026DA60 "3"
 *   insn=0x000000000026DA74 string=0x000000000058804E "roam"
 *   insn=0x000000000026DA88 string=0x0000000000588053 "follow"
 *   insn=0x000000000026DA94 string=0x000000000026DA98 "`"
 *   insn=0x000000000026DA9C string=0x000000000058805A "fight"
 *   insn=0x000000000026DAB0 string=0x000000000026DAB4 ""
 *   insn=0x000000000026DAB8 string=0x000000000026DAC8 "h"
 *   insn=0x000000000026DAD0 string=0x000000000026DAD4 ")"
 *   insn=0x000000000026DADC string=0x000000000026DAE0 "a"
 *   insn=0x000000000026DB0C string=0x000000000026DB10 ")=G"
 *   insn=0x000000000026DB10 string=0x000000000026DB14 "!"
 *   insn=0x000000000026DB18 string=0x000000000026DB1C "\t"
 *   insn=0x000000000026DB18 string=0x000000000026DB30 "\t"
 *   insn=0x000000000026DB1C string=0x000000000026DB20 "*"
 *   insn=0x000000000026DB20 string=0x000000000026DB24 "\n"
 *   insn=0x000000000026DB2C string=0x000000000026DB3C "?"
 *   insn=0x000000000026DB30 string=0x000000000026DB34 "*"
 *   insn=0x000000000026DB34 string=0x000000000026DB38 "\n"
 *   insn=0x000000000026DB3C string=0x000000000026DB40 ","
 *   insn=0x000000000026DB50 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026DB58 string=0x000000000026DB5C "J"
 *   insn=0x000000000026DB60 string=0x000000000026DB64 "(a"
 *   insn=0x000000000026DB70 string=0x000000000026DB74 "J=G"
 *   insn=0x000000000026DB74 string=0x000000000026DB78 ")!"
 *   insn=0x000000000026DB7C string=0x000000000026DB80 "*"
 *   insn=0x000000000026DB7C string=0x000000000026DBAC "*"
 *   insn=0x000000000026DB80 string=0x000000000026DB84 "K"
 *   insn=0x000000000026DB84 string=0x000000000026DB88 "+"
 *   insn=0x000000000026DB8C string=0x000000000026DB90 "_"
 *   insn=0x000000000026DBA4 string=0x000000000026DBA8 "GO"
 *   insn=0x000000000026DBAC string=0x000000000026DBB0 "K"
 *   insn=0x000000000026DBB0 string=0x000000000026DBB4 "+"
 *   insn=0x000000000026DBB4 string=0x000000000026DBB8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26DA14(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x19
  int v5; // w8
  void *v6; // x0
  unsigned int *v8; // x8
  int v9; // w9
  __int64 v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
      if ( v4 )
      {
        Caver::ProgramState::StringAtStackIndex(v10, v1, 2);
        if ( (unsigned int)sub_5689E0((int)v10, "roam") )
        {
          if ( (unsigned int)sub_5689E0((int)v10, "follow") )
            v5 = (unsigned int)sub_5689E0((int)v10, "fight") ? 0 : 3;
          else
            v5 = 2;
        }
        else
        {
          v5 = 1;
        }
        *(_DWORD *)(v4 + 248) = v5;
        v6 = (void *)(v10[0] - 24);
        if ( (__int64 *)(v10[0] - 24) != &qword_6FD2E0 )
        {
          v8 = (unsigned int *)(v10[0] - 8);
          if ( &pthread_create )
          {
            do
              v9 = __ldaxr(v8);
            while ( __stlxr(v9 - 1, v8) );
          }
          else
          {
            v9 = (*v8)--;
          }
          if ( v9 <= 0 )
            operator delete(v6);
        }
      }
    }
  }
  return 0;
}

