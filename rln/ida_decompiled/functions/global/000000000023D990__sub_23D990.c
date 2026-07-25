/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023D990
 * Mangled: sub_23D990
 * Demangled: sub_23D990
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000023DCF0  Caver::TextBubbleComponent::className(void)
 *
 * Referenced strings: 14
 *   insn=0x000000000023D99C string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000023D9A4 string=0x000000000023D9A8 "z"
 *   insn=0x000000000023D9A8 string=0x00000000001FC790 "0'"
 *   insn=0x000000000023D9B4 string=0x000000000023D9B8 "!%"
 *   insn=0x000000000023D9B8 string=0x000000000023D9BC "!"
 *   insn=0x000000000023D9BC string=0x000000000023D9C0 ""
 *   insn=0x000000000023D9BC string=0x000000000023DD48 " %"
 *   insn=0x000000000023D9C4 string=0x000000000023D9C8 "<@"
 *   insn=0x000000000023D9C8 string=0x000000000023D9CC "\t"
 *   insn=0x000000000023D9CC string=0x000000000023D9D0 "A@"
 *   insn=0x000000000023D9D0 string=0x000000000023D9D4 ")"
 *   insn=0x000000000023D9D4 string=0x000000000023D9D8 ")"
 *   insn=0x000000000023D9E0 string=0x000000000023DA00 ""
 *   insn=0x000000000023DA04 string=0x000000000023DA08 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_23D990(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  char v5; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2
    && (v3 = *v2) != 0
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::TextBubbleComponent::Interface)) != 0
    && *(_QWORD *)(*(_QWORD *)(v4 + 120) + 128LL) >= (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120)
                                                                                              + 40LL)
                                                                                  - 24LL)
                                                                      - 1LL) )
  {
    if ( *(_BYTE *)(v4 + 116) )
      v5 = *(_BYTE *)(v4 + 117) == 0;
    else
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  Caver::ProgramState::PushBool(v1, v5);
  return 1;
}

