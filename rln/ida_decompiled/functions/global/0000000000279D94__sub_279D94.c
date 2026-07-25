/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000279D94
 * Mangled: sub_279D94
 * Demangled: sub_279D94
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *
 * Referenced strings: 12
 *   insn=0x0000000000279DA8 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000279DB0 string=0x0000000000279DB4 "w\n"
 *   insn=0x0000000000279DB4 string=0x0000000000279DB8 "`"
 *   insn=0x0000000000279DB4 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000279DBC string=0x0000000000279DC0 " "
 *   insn=0x0000000000279DC0 string=0x0000000000279DC4 "a#"
 *   insn=0x0000000000279DC4 string=0x0000000000279DC8 "!P@"
 *   insn=0x0000000000279DEC string=0x0000000000279DF0 "5"
 *   insn=0x0000000000279DF4 string=0x0000000000279DF8 ")"
 *   insn=0x0000000000279E00 string=0x0000000000279E04 ""
 *   insn=0x0000000000279E14 string=0x00000000001F7560 "0'"
 *   insn=0x0000000000279E20 string=0x00000000001F7180 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_279D94(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x20
  int v6; // w8
  __int64 v7; // x22
  __int64 v8; // x23
  Caver::GameState *v9; // x0
  bool v10; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2
    && (v3 = *v2) != 0
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ItemDropComponent::Interface), (v5 = v4) != 0) )
  {
    v6 = *(_DWORD *)(v4 + 136);
    if ( v6 >= 1 )
    {
      v7 = 0;
      v8 = 8;
      do
      {
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 144) + v8) - 24LL) )
        {
          v9 = *(Caver::GameState **)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 32LL) + 16LL);
          if ( !v9 )
            goto LABEL_12;
          Caver::GameState::CurrentLevelState(v9);
          if ( (Caver::StateProperties::HasFlag() & 1) == 0 )
            goto LABEL_12;
          v6 = *(_DWORD *)(v5 + 136);
        }
        ++v7;
        v8 += 32;
      }
      while ( v7 < v6 );
    }
    v10 = 1;
  }
  else
  {
LABEL_12:
    v10 = 0;
  }
  Caver::ProgramState::PushBool(v1, v10);
  return 1;
}

