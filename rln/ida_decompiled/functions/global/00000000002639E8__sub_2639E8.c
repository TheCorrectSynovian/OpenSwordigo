/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002639E8
 * Mangled: sub_2639E8
 * Demangled: sub_2639E8
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000263D6C  Caver::CollectableItemComponent::className(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000002639F0 string=0x00000000002639F4 "{^"
 *   insn=0x00000000002639F4 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002639FC string=0x0000000000263A00 "dc"
 *   insn=0x0000000000263A00 string=0x0000000000263A04 "`"
 *   insn=0x0000000000263A00 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000263A08 string=0x0000000000263A0C " "
 *   insn=0x0000000000263A10 string=0x0000000000263A14 "!"
 *   insn=0x0000000000263A24 string=0x0000000000263A28 "\nn"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_2639E8(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::CollectableItemComponent::Interface);
      if ( v4 )
        Caver::ProgramState::PushBool(v1, *(_BYTE *)(v4 + 136));
    }
  }
}

