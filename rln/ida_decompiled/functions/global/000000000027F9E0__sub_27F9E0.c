/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F9E0
 * Mangled: sub_27F9E0
 * Demangled: sub_27F9E0
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *
 * Referenced strings: 13
 *   insn=0x000000000027F9F0 string=0x000000000027F9F4 "U"
 *   insn=0x000000000027F9FC string=0x000000000027FA00 "x"
 *   insn=0x000000000027FA00 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000027FA08 string=0x000000000027FA0C "a"
 *   insn=0x000000000027FA0C string=0x000000000027FA10 "`"
 *   insn=0x000000000027FA0C string=0x00000000001FC790 "0'"
 *   insn=0x000000000027FA1C string=0x000000000027FA20 "\"
 *   insn=0x000000000027FA28 string=0x000000000027FA2C "!#"
 *   insn=0x000000000027FA2C string=0x000000000027FA30 "!pG"
 *   insn=0x000000000027FA3C string=0x000000000027FA40 "T"
 *   insn=0x000000000027FA48 string=0x000000000027FA4C "a"
 *   insn=0x000000000027FA60 string=0x000000000027FA64 "K"
 *   insn=0x000000000027FA90 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_27F9E0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  const Caver::Vector3 *v4; // x0
  const Caver::Vector3 *v5; // x19
  __int64 v6; // x20
  _QWORD v8[2]; // [xsp+0h] [xbp-30h] BYREF

  v8[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::PointerAtStackIndex(v1);
    v5 = v4;
    if ( v3 )
    {
      v6 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::PhysicsObjectComponent::Interface);
      if ( v6 )
      {
        Caver::Vector2::Vector2((Caver::Vector2 *)v8, v5);
        *(_QWORD *)(v6 + 224) = v8[0];
      }
    }
  }
  else
  {
    Caver::ProgramState::PointerAtStackIndex(v1);
  }
  return 0;
}

