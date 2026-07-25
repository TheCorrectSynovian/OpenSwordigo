/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232C7C
 * Mangled: sub_232C7C
 * Demangled: sub_232C7C
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002009F0  Caver::ProgramComponent::Execute(void)
 *   0x0000000000233044  Caver::ProgramComponent::className(void)
 *
 * Referenced strings: 14
 *   insn=0x0000000000232C88 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000232C94 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000232CA4 string=0x0000000000232CA8 "\n$"
 *   insn=0x0000000000232CA8 string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000232CAC string=0x0000000000232CB0 "4"
 *   insn=0x0000000000232CB0 string=0x0000000000232CB4 "H"
 *   insn=0x0000000000232CC0 string=0x0000000000232CC4 "`"
 *   insn=0x0000000000232CC0 string=0x00000000001F8520 "0'"
 *   insn=0x0000000000232CC4 string=0x0000000000232CC8 ""
 *   insn=0x0000000000232CC4 string=0x0000000000232CF0 "@7"
 *   insn=0x0000000000232CD4 string=0x0000000000232CD8 ""
 *   insn=0x0000000000232CDC string=0x0000000000232CE0 "!"
 *   insn=0x0000000000232CE4 string=0x0000000000232CE8 ">6"
 *   insn=0x0000000000232CE8 string=0x0000000000232CEC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_232C7C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w8
  Caver::ProgramComponent *v5; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
    if ( v3 )
    {
      if ( v4 )
      {
        Caver::SceneObject::ComponentWithIdentifier(v3);
        if ( !v5 )
          return 0;
        goto LABEL_8;
      }
      v5 = (Caver::ProgramComponent *)Caver::SceneObject::ComponentWithInterface(
                                        v3,
                                        (__int64)Caver::ProgramComponent::Interface);
      if ( v5 )
LABEL_8:
        Caver::ProgramComponent::Execute(v5);
    }
  }
  else
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
  }
  return 0;
}

