/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F36C
 * Mangled: sub_28F36C
 * Demangled: sub_28F36C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000028F8F8  Caver::SkillComponent::className(void)
 *
 * Referenced strings: 18
 *   insn=0x000000000028F378 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000028F380 string=0x00000000001FC790 "0'"
 *   insn=0x000000000028F390 string=0x000000000028F394 "!pG"
 *   insn=0x000000000028F3A0 string=0x000000000028F3A4 "`f@"
 *   insn=0x000000000028F3A4 string=0x000000000028F3A8 " "
 *   insn=0x000000000028F3A8 string=0x000000000028F3AC ""
 *   insn=0x000000000028F3A8 string=0x000000000028F3CC "`Z@"
 *   insn=0x000000000028F3AC string=0x000000000028F3B0 ""
 *   insn=0x000000000028F3B8 string=0x000000000028F3BC "`f@"
 *   insn=0x000000000028F3BC string=0x000000000028F3C0 ""
 *   insn=0x000000000028F3C0 string=0x000000000028F3C4 ""
 *   insn=0x000000000028F3CC string=0x000000000028F3D0 "`"
 *   insn=0x000000000028F3D4 string=0x000000000028F3D8 ""
 *   insn=0x000000000028F3DC string=0x000000000028F3E0 "@"
 *   insn=0x000000000028F3E0 string=0x000000000028F3E4 ""
 *   insn=0x000000000028F3E4 string=0x000000000028F3E8 ""
 *   insn=0x000000000028F3EC string=0x000000000028F3F0 ""
 *   insn=0x000000000028F3F0 string=0x000000000028F3F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_28F36C(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x19
  __int64 v6; // x0
  void (*v7)(void); // x8
  __int64 v8; // x0
  int v9; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::SkillComponent::Interface);
      v5 = v4;
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 200);
        if ( v6 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 272LL))(v6) & 1) != 0 )
        {
          v7 = *(void (**)(void))(**(_QWORD **)(v5 + 200) + 288LL);
LABEL_10:
          v7();
          return 0;
        }
        v8 = *(_QWORD *)(v5 + 176);
        if ( v8 )
        {
          *(_BYTE *)(v8 + 232) = 1;
          *(_QWORD *)(v5 + 176) = 0;
          v9 = *(_DWORD *)(v8 + 8) - 1;
          *(_DWORD *)(v8 + 8) = v9;
          if ( !v9 )
          {
            v7 = *(void (**)(void))(*(_QWORD *)v8 + 8LL);
            goto LABEL_10;
          }
        }
      }
    }
  }
  return 0;
}

