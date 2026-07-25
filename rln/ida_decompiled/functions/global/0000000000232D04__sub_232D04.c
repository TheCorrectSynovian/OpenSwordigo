/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232D04
 * Mangled: sub_232D04
 * Demangled: sub_232D04
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000233044  Caver::ProgramComponent::className(void)
 *
 * Referenced strings: 14
 *   insn=0x0000000000232D10 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000232D1C string=0x0000000000232D20 "@"
 *   insn=0x0000000000232D1C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000232D30 string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000232D38 string=0x0000000000232D3C ""
 *   insn=0x0000000000232D48 string=0x00000000001F8520 "0'"
 *   insn=0x0000000000232D4C string=0x0000000000232D50 "X@"
 *   insn=0x0000000000232D50 string=0x0000000000232D54 ""
 *   insn=0x0000000000232D54 string=0x0000000000232D58 "MA9"
 *   insn=0x0000000000232D60 string=0x0000000000232D64 ""
 *   insn=0x0000000000232D74 string=0x0000000000232D78 ""
 *   insn=0x0000000000232D7C string=0x0000000000232D80 "!"
 *   insn=0x0000000000232D88 string=0x0000000000232D8C " "
 *   insn=0x0000000000232D98 string=0x0000000000232D9C "-1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_232D04(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w8
  __int64 v5; // x0
  __int64 v6; // x8
  bool v7; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( !v2 )
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
    return;
  }
  v3 = *v2;
  v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
  if ( !v3 )
    return;
  if ( v4 )
  {
    Caver::SceneObject::ComponentWithIdentifier(v3);
    if ( !v5 )
      return;
  }
  else
  {
    v5 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ProgramComponent::Interface);
    if ( !v5 )
      return;
  }
  v6 = *(_QWORD *)(v5 + 176);
  if ( v6 )
    v7 = *(_BYTE *)(v6 + 83) == 0;
  else
    v7 = 0;
  Caver::ProgramState::PushBool(v1, v7);
}

