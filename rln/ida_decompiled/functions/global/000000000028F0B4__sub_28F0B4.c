/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F0B4
 * Mangled: sub_28F0B4
 * Demangled: sub_28F0B4
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000201890  Caver::SkillComponent::BeginCasting(void)
 *   0x0000000000201CB0  Caver::SkillComponent::CreateSpellObject(void)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000028F8F8  Caver::SkillComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 62
 *   insn=0x000000000028F0C4 string=0x000000000028F0C8 "V"
 *   insn=0x000000000028F0D4 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000028F0E0 string=0x00000000001FC790 "0'"
 *   insn=0x000000000028F0F0 string=0x000000000028F0F4 "!pG"
 *   insn=0x000000000028F0F4 string=0x000000000028F0F8 ":"
 *   insn=0x000000000028F110 string=0x000000000028F114 ""
 *   insn=0x000000000028F12C string=0x000000000028F130 ""
 *   insn=0x000000000028F130 string=0x000000000028F134 ""
 *   insn=0x000000000028F138 string=0x000000000028F13C ""
 *   insn=0x000000000028F158 string=0x000000000028F15C "\t\t@"
 *   insn=0x000000000028F15C string=0x000000000028F160 ")"
 *   insn=0x000000000028F160 string=0x000000000028F164 "\t\t"
 *   insn=0x000000000028F170 string=0x000000000028F174 "\t@"
 *   insn=0x000000000028F170 string=0x000000000028F184 "h"
 *   insn=0x000000000028F174 string=0x000000000028F178 ")"
 *   insn=0x000000000028F178 string=0x000000000028F17C "\t"
 *   insn=0x000000000028F17C string=0x000000000028F180 "@"
 *   insn=0x000000000028F180 string=0x000000000028F228 ""
 *   insn=0x000000000028F194 string=0x000000000028F198 "@"
 *   insn=0x000000000028F198 string=0x000000000028F19C ""
 *   insn=0x000000000028F19C string=0x000000000028F1A0 ""
 *   insn=0x000000000028F1A4 string=0x000000000028F1A8 ""
 *   insn=0x000000000028F1A8 string=0x000000000028F1AC ""
 *   insn=0x000000000028F1D4 string=0x000000000028F1D8 "j"
 *   insn=0x000000000028F1EC string=0x000000000028F1F0 ")"
 *   insn=0x000000000028F1F8 string=0x000000000028F1FC "!"
 *   insn=0x000000000028F228 string=0x000000000028F22C ""
 *   insn=0x000000000028F240 string=0x000000000028F244 ")=G"
 *   insn=0x000000000028F244 string=0x000000000028F248 "!"
 *   insn=0x000000000028F24C string=0x000000000028F250 "\t"
 *   insn=0x000000000028F24C string=0x000000000028F264 "\t"
 *   insn=0x000000000028F250 string=0x000000000028F254 "*"
 *   insn=0x000000000028F254 string=0x000000000028F258 "\n"
 *   insn=0x000000000028F260 string=0x000000000028F270 "?"
 *   insn=0x000000000028F264 string=0x000000000028F268 "*"
 *   insn=0x000000000028F268 string=0x000000000028F26C "\n"
 *   insn=0x000000000028F270 string=0x000000000028F274 "l"
 *   insn=0x000000000028F278 string=0x000000000028F27C "Jl"
 *   insn=0x000000000028F284 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028F290 string=0x000000000028F294 "\t\t@"
 *   insn=0x000000000028F294 string=0x000000000028F298 ")"
 *   insn=0x000000000028F298 string=0x000000000028F29C "\t\t"
 *   insn=0x000000000028F29C string=0x000000000028F2A0 "!"
 *   insn=0x000000000028F2A0 string=0x000000000028F2A4 "\t"
 *   insn=0x000000000028F2A4 string=0x000000000028F2A8 ")"
 *   insn=0x000000000028F2AC string=0x000000000028F2B0 " "
 *   insn=0x000000000028F2C8 string=0x000000000028F2CC ")"
 *   insn=0x000000000028F2DC string=0x000000000028F2E0 ")=G"
 *   insn=0x000000000028F2E0 string=0x000000000028F2E4 "!"
 *   insn=0x000000000028F2E4 string=0x000000000028F2E8 "i"
 *   insn=0x000000000028F2E8 string=0x000000000028F2EC "\t"
 *   insn=0x000000000028F2E8 string=0x000000000028F314 "\t"
 *   insn=0x000000000028F2EC string=0x000000000028F2F0 "*"
 *   insn=0x000000000028F2F0 string=0x000000000028F2F4 "\n"
 *   insn=0x000000000028F2F8 string=0x000000000028F2FC "?"
 *   insn=0x000000000028F2FC string=0x000000000028F300 "l"
 *   insn=0x000000000028F304 string=0x000000000028F308 "'l"
 *   insn=0x000000000028F30C string=0x000000000028F310 "m"
 *   insn=0x000000000028F314 string=0x000000000028F318 "*"
 *   insn=0x000000000028F318 string=0x000000000028F31C "\n"
 *   insn=0x000000000028F31C string=0x000000000028F320 "?"
 *   insn=0x000000000028F320 string=0x000000000028F324 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_28F0B4(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x21
  _DWORD *v7; // x0
  int v8; // w9
  int v9; // w8
  Caver::SceneObject *v10; // x2
  Caver::ProgramState *v11; // x1
  unsigned int v12; // w19
  void *v13; // x0
  unsigned int *v15; // x8
  int v16; // w9
  _DWORD *v17; // [xsp+8h] [xbp-38h]
  __int64 v18[2]; // [xsp+10h] [xbp-30h] BYREF

  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::SkillComponent::Interface);
  else
    v4 = 0;
  Caver::ProgramState::StringAtStackIndex(v18, v1, 2);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v6 = v5;
  if ( !v4 )
    goto LABEL_18;
  if ( *(_QWORD *)(v18[0] - 24) )
  {
    Caver::ObjectLibrary::TemplateForName();
    if ( v17 )
      ++v17[2];
    v7 = *(_DWORD **)(v4 + 184);
    *(_QWORD *)(v4 + 184) = v17;
    if ( v7 && (v8 = v7[2] - 1, (v7[2] = v8) == 0) )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( !*(_QWORD *)(v4 + 184) )
        goto LABEL_13;
    }
    else if ( !v17 )
    {
LABEL_13:
      if ( v17 )
      {
        v9 = v17[2] - 1;
        v17[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)())(*(_QWORD *)v17 + 8LL))();
      }
      goto LABEL_16;
    }
    Caver::SkillComponent::CreateSpellObject((Caver::SkillComponent *)v4);
    goto LABEL_13;
  }
LABEL_16:
  *(_QWORD *)(v4 + 144) = *(_QWORD *)v6;
  *(_DWORD *)(v4 + 152) = *(_DWORD *)(v6 + 8);
  Caver::SkillComponent::BeginCasting((Caver::SkillComponent *)v4);
  v11 = *(Caver::ProgramState **)(v4 + 192);
  if ( v11 )
  {
    Caver::SceneObjectLib::PushSceneObject(v1, v11, v10);
    v12 = 1;
    goto LABEL_19;
  }
LABEL_18:
  v12 = 0;
LABEL_19:
  v13 = (void *)(v18[0] - 24);
  if ( (__int64 *)(v18[0] - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v18[0] - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v13);
  }
  return v12;
}

