/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000279F40
 * Mangled: sub_279F40
 * Demangled: sub_279F40
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 42
 *   insn=0x0000000000279F50 string=0x0000000000279F54 "V"
 *   insn=0x0000000000279F5C string=0x0000000000279F60 " "
 *   insn=0x0000000000279F60 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000279F68 string=0x0000000000279F6C "\t\n"
 *   insn=0x0000000000279F6C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000279F74 string=0x0000000000279F78 "`"
 *   insn=0x0000000000279F78 string=0x0000000000279F7C "a#"
 *   insn=0x0000000000279F7C string=0x0000000000279F80 "!P@"
 *   insn=0x0000000000279F90 string=0x0000000000279F94 "O"
 *   insn=0x0000000000279F94 string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000279FA8 string=0x0000000000279FAC "e""
 *   insn=0x0000000000279FB4 string=0x0000000000279FB8 ""
 *   insn=0x0000000000279FC8 string=0x0000000000279FCC "i#"
 *   insn=0x0000000000279FCC string=0x0000000000279FD0 ")"
 *   insn=0x0000000000279FDC string=0x0000000000279FE0 "I#"
 *   insn=0x0000000000279FE0 string=0x0000000000279FE4 ")=G"
 *   insn=0x0000000000279FE4 string=0x0000000000279FE8 "!"
 *   insn=0x0000000000279FE8 string=0x0000000000279FEC "i"
 *   insn=0x0000000000279FEC string=0x0000000000279FF0 "\t"
 *   insn=0x0000000000279FEC string=0x000000000027A038 "\t"
 *   insn=0x0000000000279FF0 string=0x0000000000279FF4 "*"
 *   insn=0x0000000000279FF4 string=0x0000000000279FF8 "\n"
 *   insn=0x000000000027A000 string=0x000000000027A044 "?"
 *   insn=0x000000000027A008 string=0x000000000027A00C "1"
 *   insn=0x000000000027A038 string=0x000000000027A03C "*"
 *   insn=0x000000000027A03C string=0x000000000027A040 "\n"
 *   insn=0x000000000027A044 string=0x000000000027A048 "L"
 *   insn=0x000000000027A058 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027A05C string=0x000000000027A060 "J#"
 *   insn=0x000000000027A060 string=0x000000000027A064 "J"
 *   insn=0x000000000027A068 string=0x000000000027A06C "(a"
 *   insn=0x000000000027A074 string=0x000000000027A078 "J#"
 *   insn=0x000000000027A078 string=0x000000000027A07C "J=G"
 *   insn=0x000000000027A07C string=0x000000000027A080 ")!"
 *   insn=0x000000000027A084 string=0x000000000027A088 "*"
 *   insn=0x000000000027A084 string=0x000000000027A0B4 "*"
 *   insn=0x000000000027A088 string=0x000000000027A08C "K"
 *   insn=0x000000000027A08C string=0x000000000027A090 "+"
 *   insn=0x000000000027A094 string=0x000000000027A098 "_"
 *   insn=0x000000000027A0B4 string=0x000000000027A0B8 "K"
 *   insn=0x000000000027A0B8 string=0x000000000027A0BC "+"
 *   insn=0x000000000027A0BC string=0x000000000027A0C0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_279F40(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  int v5; // w21
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  __int64 v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ItemDropComponent::Interface);
    v5 = Caver::ProgramState::IntAtStackIndex(v1, 2);
    if ( v4 )
    {
      Caver::ProgramState::StringAtStackIndex(v10, v1, 3);
      sub_56A6A8(*(_QWORD *)(v4 + 144) + 32LL * v5 + 8);
      v6 = (void *)(v10[0] - 24);
      if ( (__int64 *)(v10[0] - 24) != &qword_6FD2E0 )
      {
        v7 = (unsigned int *)(v10[0] - 8);
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
          operator delete(v6);
      }
    }
  }
  else
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
  }
  return 0;
}

