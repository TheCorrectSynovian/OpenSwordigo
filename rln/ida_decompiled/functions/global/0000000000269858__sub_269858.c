/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000269858
 * Mangled: sub_269858
 * Demangled: sub_269858
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFCD0  Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *
 * Referenced strings: 13
 *   insn=0x0000000000269864 string=0x0000000000269868 "T"
 *   insn=0x0000000000269874 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000269880 string=0x0000000000269884 "@"
 *   insn=0x0000000000269880 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000269884 string=0x000000000026988C ""
 *   insn=0x0000000000269898 string=0x000000000026989C " "
 *   insn=0x00000000002698A0 string=0x00000000002698A4 "!0F"
 *   insn=0x00000000002698A4 string=0x00000000002698A8 "N["
 *   insn=0x00000000002698A4 string=0x000000000026168C " $"
 *   insn=0x00000000002698AC string=0x00000000002698B0 ""
 *   insn=0x00000000002698B0 string=0x00000000002698B4 "\t"
 *   insn=0x00000000002698D8 string=0x00000000002698F0 "x2"
 *   insn=0x00000000002698F0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_269858(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject *v2; // x0
  __int64 v3; // x0
  int v4; // w9
  unsigned __int64 v6; // [xsp+8h] [xbp-28h] BYREF
  int v7; // [xsp+10h] [xbp-20h]
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v2 = *(Caver::SceneObject **)v2;
  v6 = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
  v7 = 2139095039;
  if ( v2 )
  {
    v3 = Caver::SceneObject::ComponentWithInterface(v2, (__int64)Caver::EntityComponent::Interface);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 272);
      v6 = *(_QWORD *)(v3 + 264);
      v7 = v4;
    }
  }
  Caver::ProgramState::PushVector3(v1, (const Caver::Vector3 *)&v6);
  return 1;
}

