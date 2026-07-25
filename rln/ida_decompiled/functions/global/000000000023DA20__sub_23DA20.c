/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023DA20
 * Mangled: sub_23DA20
 * Demangled: sub_23DA20
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F7450  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000023DCF0  Caver::TextBubbleComponent::className(void)
 *
 * Referenced strings: 10
 *   insn=0x000000000023DA28 string=0x000000000023DA2C "m"
 *   insn=0x000000000023DA2C string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000023DA34 string=0x000000000023DA38 "V"
 *   insn=0x000000000023DA38 string=0x00000000001FC790 "0'"
 *   insn=0x000000000023DA44 string=0x000000000023DA48 "!%"
 *   insn=0x000000000023DA48 string=0x000000000023DA4C "!"
 *   insn=0x000000000023DA4C string=0x000000000023DD48 " %"
 *   insn=0x000000000023DA64 string=0x00000000001F8D80 "0'"
 *   insn=0x000000000023DA6C string=0x000000000023DA70 "x"
 *   insn=0x000000000023DA70 string=0x00000000001F7450 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_23DA20(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  Caver::TextBubbleComponent *v4; // x20
  char v5; // w0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = (Caver::TextBubbleComponent *)Caver::SceneObject::ComponentWithInterface(
                                           v3,
                                           (__int64)Caver::TextBubbleComponent::Interface);
      if ( v4 )
      {
        v5 = Caver::ProgramState::BoolAtStackIndex(v1, 2);
        Caver::TextBubbleComponent::SetHandleTouches(v4, v5 & 1);
      }
    }
  }
  return 0;
}

