/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026307C
 * Mangled: _ZN5Caver24CollectableItemComponent16HandleCollectionEv
 * Demangled: Caver::CollectableItemComponent::HandleCollection(void)
 *
 * Callers: 1
 *   0x00000000001FCAD0  Caver::CollectableItemComponent::HandleCollection(void)
 *
 * Callees: 17
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F71F0  Caver::StateProperties::AddFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000263D6C  Caver::CollectableItemComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 79
 *   insn=0x000000000026308C string=0x0000000000263090 "U"
 *   insn=0x00000000002630A4 string=0x00000000002630A8 ""
 *   insn=0x00000000002630AC string=0x00000000002630B0 "h"
 *   insn=0x00000000002630AC string=0x0000000000263104 "hV@"
 *   insn=0x00000000002630B0 string=0x00000000002630B4 ""
 *   insn=0x00000000002630B8 string=0x00000000002630BC "@"
 *   insn=0x00000000002630BC string=0x00000000002630E4 "h"
 *   insn=0x00000000002630C0 string=0x00000000002630C4 "'Q"
 *   insn=0x00000000002630C4 string=0x00000000001F7560 "0'"
 *   insn=0x00000000002630CC string=0x00000000002630D0 ",P"
 *   insn=0x00000000002630D0 string=0x00000000002630D4 "`"
 *   insn=0x00000000002630D0 string=0x00000000001F7180 "0'"
 *   insn=0x00000000002630D8 string=0x00000000002630DC ""
 *   insn=0x00000000002630DC string=0x00000000002630E0 "("
 *   insn=0x00000000002630E8 string=0x00000000002630EC ""
 *   insn=0x00000000002630F0 string=0x00000000002630F4 "Q"
 *   insn=0x00000000002630FC string=0x0000000000263100 "<P"
 *   insn=0x0000000000263100 string=0x00000000001F71F0 "0'"
 *   insn=0x0000000000263108 string=0x000000000026310C "aB"
 *   insn=0x0000000000263114 string=0x0000000000263118 "Jo"
 *   insn=0x0000000000263120 string=0x0000000000263124 "a"
 *   insn=0x0000000000263138 string=0x000000000026313C "3"
 *   insn=0x000000000026313C string=0x0000000000263140 "h"
 *   insn=0x0000000000263140 string=0x0000000000263144 ""
 *   insn=0x0000000000263144 string=0x0000000000263148 "h"
 *   insn=0x000000000026314C string=0x0000000000263150 "h"
 *   insn=0x0000000000263154 string=0x0000000000263158 "\t@"
 *   insn=0x000000000026315C string=0x0000000000263160 "h\n@"
 *   insn=0x0000000000263160 string=0x0000000000263164 ""
 *   insn=0x0000000000263164 string=0x0000000000263168 "h\n"
 *   insn=0x000000000026316C string=0x0000000000263170 "h"
 *   insn=0x0000000000263174 string=0x0000000000263178 "@"
 *   insn=0x000000000026318C string=0x00000000002631A4 "KL"
 *   insn=0x00000000002631A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002631AC string=0x00000000002631B0 "4"
 *   insn=0x00000000002631B4 string=0x00000000002631B8 ""
 *   insn=0x00000000002631C4 string=0x00000000002631C8 "\t@"
 *   insn=0x00000000002631D4 string=0x00000000002631D8 ""
 *   insn=0x00000000002631E4 string=0x00000000002631E8 "@"
 *   insn=0x00000000002631F8 string=0x00000000002631FC "T"
 *   insn=0x000000000026320C string=0x0000000000263210 "T"
 *   insn=0x0000000000263218 string=0x000000000026321C "q`"
 *   insn=0x000000000026321C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000263224 string=0x0000000000263228 "Ze"
 *   insn=0x0000000000263228 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000263230 string=0x0000000000263234 "@"
 *   insn=0x0000000000263238 string=0x000000000026323C "!"
 *   insn=0x0000000000263258 string=0x000000000026325C "5b"
 *   insn=0x000000000026325C string=0x00000000001FBB30 "0'"
 *   insn=0x0000000000263260 string=0x0000000000263264 "\t$"
 *   insn=0x0000000000263264 string=0x0000000000263268 ")"
 *   insn=0x0000000000263270 string=0x0000000000263274 "A"
 *   insn=0x0000000000263274 string=0x000000000026329C "\t$"
 *   insn=0x000000000026329C string=0x00000000002632A0 ")=G"
 *   insn=0x00000000002632A0 string=0x00000000002632A4 "!"
 *   insn=0x00000000002632A8 string=0x00000000002632AC "\t"
 *   insn=0x00000000002632A8 string=0x00000000002632C0 "\t"
 *   insn=0x00000000002632AC string=0x00000000002632B0 "*"
 *   insn=0x00000000002632B0 string=0x00000000002632B4 "\n"
 *   insn=0x00000000002632BC string=0x00000000002632CC "?"
 *   insn=0x00000000002632C0 string=0x00000000002632C4 "*"
 *   insn=0x00000000002632C4 string=0x00000000002632C8 "\n"
 *   insn=0x00000000002632CC string=0x00000000002632D0 "L"
 *   insn=0x00000000002632D4 string=0x00000000002632D8 "3"
 *   insn=0x00000000002632E4 string=0x00000000002632E8 "\n$"
 *   insn=0x00000000002632E8 string=0x00000000002632EC "J"
 *   insn=0x00000000002632F0 string=0x00000000002632F4 "(a"
 *   insn=0x00000000002632FC string=0x0000000000263300 "\n$"
 *   insn=0x0000000000263300 string=0x0000000000263304 "J=G"
 *   insn=0x0000000000263304 string=0x0000000000263308 ")!"
 *   insn=0x000000000026330C string=0x0000000000263310 "*"
 *   insn=0x000000000026330C string=0x000000000026333C "*"
 *   insn=0x0000000000263310 string=0x0000000000263314 "K"
 *   insn=0x0000000000263314 string=0x0000000000263318 "+"
 *   insn=0x000000000026331C string=0x0000000000263320 "_"
 *   insn=0x0000000000263334 string=0x0000000000263338 "cy"
 *   insn=0x000000000026333C string=0x0000000000263340 "K"
 *   insn=0x0000000000263340 string=0x0000000000263344 "+"
 *   insn=0x0000000000263344 string=0x0000000000263348 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollectableItemComponent::HandleCollection(__int64 this)
{
  __int64 v1; // x19
  _QWORD *v2; // x20
  Caver::GameState *v3; // x0
  Caver::SceneObject *v4; // x2
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  Caver::SceneObjectLib *v8; // [xsp+40h] [xbp-38h] BYREF
  _QWORD *v9; // [xsp+48h] [xbp-30h]
  __int64 v10; // [xsp+50h] [xbp-28h]

  v1 = this;
  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (_QWORD *)(this + 128);
  if ( *(_QWORD *)(*(_QWORD *)(this + 128) - 24LL) )
  {
    v3 = *(Caver::GameState **)(*(_QWORD *)(*(_QWORD *)(this + 40) + 32LL) + 16LL);
    if ( !v3 )
      goto LABEL_5;
    Caver::GameState::CurrentLevelState(v3);
    this = Caver::StateProperties::HasFlag();
    if ( (this & 1) != 0 )
      return this;
    if ( *(_QWORD *)(*v2 - 24LL) )
    {
LABEL_5:
      Caver::GameState::CurrentLevelState(*(Caver::GameState **)(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 32LL) + 16LL));
      this = Caver::StateProperties::AddFlag();
    }
  }
  if ( *(_QWORD *)(v1 + 168) )
  {
    Caver::Component::NewProgramStateForProgram(
      (__int64 *)&v8,
      (Caver::Component *)v1,
      (const Caver::Program *)(v1 + 144));
    this = (__int64)v8;
    if ( v8 )
    {
      Caver::SceneObjectLib::PushSceneObject(v8, *(Caver::ProgramState **)(v1 + 40), v4);
      this = Caver::ProgramState::Execute(v8, 1);
    }
    v5 = v9;
    if ( v9 )
    {
      v6 = v9[1] - 1LL;
      v9[1] = v6;
      if ( !v6 )
      {
        this = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v7 = v5[2] - 1LL;
        v5[2] = v7;
        if ( !v7 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return this;
}

