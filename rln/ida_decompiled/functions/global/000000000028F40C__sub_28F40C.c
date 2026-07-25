/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F40C
 * Mangled: sub_28F40C
 * Demangled: sub_28F40C
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFCD0  Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000028F8F8  Caver::SkillComponent::className(void)
 *
 * Referenced strings: 9
 *   insn=0x000000000028F41C string=0x000000000028F420 "U"
 *   insn=0x000000000028F42C string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000028F438 string=0x00000000001FC790 "0'"
 *   insn=0x000000000028F448 string=0x000000000028F44C "!pG"
 *   insn=0x000000000028F44C string=0x000000000028F450 "d"
 *   insn=0x000000000028F46C string=0x000000000028F470 "H"
 *   insn=0x000000000028F470 string=0x00000000001F5990 "P'"
 *   insn=0x000000000028F480 string=0x000000000028F484 "y@"
 *   insn=0x000000000028F4BC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_28F40C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  int v5; // w8
  __int64 v6; // [xsp+10h] [xbp-40h]
  __int64 v7; // [xsp+18h] [xbp-38h] BYREF
  int v8; // [xsp+20h] [xbp-30h]
  __int64 v9; // [xsp+28h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::SkillComponent::Interface);
      if ( v4 )
      {
        Caver::SceneObject::WorldPointFromLocalPoint();
        v5 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 120LL);
        v7 = v6;
        v8 = v5;
        Caver::ProgramState::PushVector3(v1, (const Caver::Vector3 *)&v7);
      }
    }
  }
}

