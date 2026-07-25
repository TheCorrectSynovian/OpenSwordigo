/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FB90
 * Mangled: sub_27FB90
 * Demangled: sub_27FB90
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFCD0  Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *
 * Referenced strings: 12
 *   insn=0x000000000027FB9C string=0x000000000027FBA0 "T"
 *   insn=0x000000000027FBA8 string=0x000000000027FBAC ""
 *   insn=0x000000000027FBAC string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000027FBB8 string=0x000000000027FBBC "@"
 *   insn=0x000000000027FBB8 string=0x00000000001FC790 "0'"
 *   insn=0x000000000027FBC8 string=0x000000000027FBCC " "
 *   insn=0x000000000027FBCC string=0x000000000027FBD0 "!#"
 *   insn=0x000000000027FBD0 string=0x000000000027FBD4 "!pG"
 *   insn=0x000000000027FBDC string=0x000000000027FBE0 ""
 *   insn=0x000000000027FBE0 string=0x000000000027FBE4 "\tA"
 *   insn=0x000000000027FBF4 string=0x000000000027FBF8 "6"
 *   insn=0x000000000027FC20 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_27FB90(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject *v2; // x0
  __int64 v3; // x0
  int v4; // w9
  __int64 v6; // [xsp+8h] [xbp-28h] BYREF
  int v7; // [xsp+10h] [xbp-20h]
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v2 = *(Caver::SceneObject **)v2;
  v6 = 0;
  v7 = 0;
  if ( v2 )
  {
    v3 = Caver::SceneObject::ComponentWithInterface(v2, (__int64)Caver::PhysicsObjectComponent::Interface);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 264);
      v6 = *(_QWORD *)(v3 + 256);
      v7 = v4;
    }
  }
  Caver::ProgramState::PushVector3(v1, (const Caver::Vector3 *)&v6);
  return 1;
}

