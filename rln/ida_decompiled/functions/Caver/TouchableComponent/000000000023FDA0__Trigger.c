/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023FDA0
 * Mangled: _ZN5Caver18TouchableComponent7TriggerEv
 * Demangled: Caver::TouchableComponent::Trigger(void)
 *
 * Callers: 1
 *   0x00000000001FF770  Caver::TouchableComponent::Trigger(void)
 *
 * Callees: 17
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000023DE3C  Caver::GUITextBubble::~GUITextBubble()
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 74
 *   insn=0x000000000023FDB0 string=0x000000000023FDB4 "U"
 *   insn=0x000000000023FDC0 string=0x000000000023FDC4 "hN@"
 *   insn=0x000000000023FDC8 string=0x000000000023FDCC "a"
 *   insn=0x000000000023FDC8 string=0x000000000023FE40 "<"
 *   insn=0x000000000023FDE0 string=0x000000000023FDE4 "a"
 *   insn=0x000000000023FDE4 string=0x000000000023FDE8 "f"
 *   insn=0x000000000023FDF8 string=0x000000000023FDFC "4"
 *   insn=0x000000000023FE00 string=0x000000000023FE04 ""
 *   insn=0x000000000023FE14 string=0x000000000023FE18 "\t@"
 *   insn=0x000000000023FE20 string=0x000000000023FE24 ""
 *   insn=0x000000000023FE34 string=0x000000000023FE38 "@"
 *   insn=0x000000000023FE40 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000023FE44 string=0x000000000023FE48 "!"
 *   insn=0x000000000023FE48 string=0x0000000000584965 "click"
 *   insn=0x000000000023FE54 string=0x000000000023FE58 "X"
 *   insn=0x000000000023FE68 string=0x000000000023FE6C "5"
 *   insn=0x000000000023FE6C string=0x00000000001F5340 "P'"
 *   insn=0x000000000023FE74 string=0x000000000023FE78 "@"
 *   insn=0x000000000023FE78 string=0x000000000023FE7C ""
 *   insn=0x000000000023FE7C string=0x000000000023FE80 ""
 *   insn=0x000000000023FE84 string=0x000000000023FE88 ""
 *   insn=0x000000000023FE88 string=0x000000000023FE8C ""
 *   insn=0x000000000023FE94 string=0x000000000023FE98 ")%"
 *   insn=0x000000000023FE98 string=0x000000000023FE9C ")"
 *   insn=0x000000000023FEA8 string=0x000000000023FEAC "`>@"
 *   insn=0x000000000023FEA8 string=0x000000000023FEE8 ")%"
 *   insn=0x000000000023FEAC string=0x000000000023FEB0 "@"
 *   insn=0x000000000023FEB0 string=0x000000000023FEB4 "`"
 *   insn=0x000000000023FECC string=0x000000000023FED0 "!"
 *   insn=0x000000000023FEE8 string=0x000000000023FEEC ")=G"
 *   insn=0x000000000023FEEC string=0x000000000023FEF0 "!"
 *   insn=0x000000000023FEF4 string=0x000000000023FEF8 "\t"
 *   insn=0x000000000023FEF4 string=0x000000000023FF0C "\t"
 *   insn=0x000000000023FEF8 string=0x000000000023FEFC "*"
 *   insn=0x000000000023FEFC string=0x000000000023FF00 "\n"
 *   insn=0x000000000023FF08 string=0x000000000023FF18 "?"
 *   insn=0x000000000023FF0C string=0x000000000023FF10 "*"
 *   insn=0x000000000023FF10 string=0x000000000023FF14 "\n"
 *   insn=0x000000000023FF20 string=0x000000000023FF24 " "
 *   insn=0x000000000023FF24 string=0x000000000023FF28 "`>@"
 *   insn=0x000000000023FF28 string=0x000000000023FF2C "`"
 *   insn=0x000000000023FF34 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023FF44 string=0x000000000023FF48 ""
 *   insn=0x000000000023FF4C string=0x000000000023FF50 "a"
 *   insn=0x000000000023FF54 string=0x000000000023FF58 "\t@"
 *   insn=0x000000000023FF64 string=0x000000000023FF68 ""
 *   insn=0x000000000023FF6C string=0x000000000023FF70 "a"
 *   insn=0x000000000023FF74 string=0x000000000023FF78 "@"
 *   insn=0x000000000023FF88 string=0x000000000023FF8C "N"
 *   insn=0x000000000023FF90 string=0x000000000023FF94 "*%"
 *   insn=0x000000000023FF94 string=0x000000000023FF98 "J"
 *   insn=0x000000000023FF9C string=0x000000000023FFA0 "(a"
 *   insn=0x000000000023FFA8 string=0x000000000023FFAC "*%"
 *   insn=0x000000000023FFAC string=0x000000000023FFB0 "J=G"
 *   insn=0x000000000023FFB0 string=0x000000000023FFB4 ")!"
 *   insn=0x000000000023FFB8 string=0x000000000023FFBC "*"
 *   insn=0x000000000023FFB8 string=0x000000000023FFE8 "*"
 *   insn=0x000000000023FFBC string=0x000000000023FFC0 "K"
 *   insn=0x000000000023FFC0 string=0x000000000023FFC4 "+"
 *   insn=0x000000000023FFC8 string=0x000000000023FFCC "_"
 *   insn=0x000000000023FFCC string=0x000000000023FFD0 "l"
 *   insn=0x000000000023FFE0 string=0x000000000023FFE4 "8"
 *   insn=0x000000000023FFE8 string=0x000000000023FFEC "K"
 *   insn=0x000000000023FFEC string=0x000000000023FFF0 "+"
 *   insn=0x000000000023FFF0 string=0x000000000023FFF4 "_"
 *   insn=0x000000000023FFFC string=0x0000000000240000 "1"
 *   insn=0x0000000000240010 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000024001C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000240024 string=0x0000000000240028 "@"
 *   insn=0x0000000000240028 string=0x000000000024002C "!%"
 *   insn=0x000000000024002C string=0x0000000000240030 "!|A"
 *   insn=0x0000000000240030 string=0x0000000000240034 "k"
 *   insn=0x0000000000240030 string=0x000000000023E174 "@%"
 *   insn=0x0000000000240048 string=0x00000000001FABE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TouchableComponent::Trigger(Caver::TouchableComponent *this)
{
  Caver::TouchableComponent *v1; // x19
  Caver::SceneObject *v2; // x2
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w8
  char *v7; // x0
  Caver::SceneObject *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  _DWORD *v11; // [xsp+28h] [xbp-48h]
  Caver::SceneObjectLib *v12; // [xsp+30h] [xbp-40h] BYREF
  _QWORD *v13; // [xsp+38h] [xbp-38h]
  __int64 v14; // [xsp+48h] [xbp-28h]

  v1 = this;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_QWORD *)this + 19) )
  {
    Caver::Component::NewProgramStateForProgram(
      (__int64 *)&v12,
      this,
      (Caver::TouchableComponent *)((char *)this + 128));
    this = v12;
    if ( v12 )
    {
      Caver::SceneObjectLib::PushSceneObject(v12, *((Caver::ProgramState **)v1 + 5), v2);
      this = (Caver::TouchableComponent *)Caver::ProgramState::Execute(v12, 1);
    }
    v3 = v13;
    if ( v13 )
    {
      v4 = v13[1] - 1LL;
      v13[1] = v4;
      if ( !v4 )
      {
        this = (Caver::TouchableComponent *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          this = (Caver::TouchableComponent *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
  }
  Caver::AudioSystem::sharedSystem(this);
  sub_566BB8((int)&v12, "click");
  Caver::AudioSystem::PlaySoundEffectWithName();
  if ( v11 )
  {
    v6 = v11[2] - 1;
    v11[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)())(*(_QWORD *)v11 + 8LL))();
  }
  v7 = (char *)v12 - 24;
  if ( (__int64 *)((char *)v12 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)((char *)v12 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
    {
      operator delete(v7);
      v8 = (Caver::SceneObject *)*((_QWORD *)v1 + 15);
      if ( v8 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  v8 = (Caver::SceneObject *)*((_QWORD *)v1 + 15);
  if ( !v8 )
LABEL_13:
    v8 = (Caver::SceneObject *)*((_QWORD *)v1 + 5);
LABEL_14:
  Caver::SceneObject::HandleMessage(v8, 22, v1);
}

