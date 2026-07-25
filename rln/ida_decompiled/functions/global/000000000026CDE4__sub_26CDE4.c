/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CDE4
 * Mangled: sub_26CDE4
 * Demangled: sub_26CDE4
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 11
 *   insn=0x000000000026CDEC string=0x000000000026CDF0 "|9"
 *   insn=0x000000000026CDF0 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026CDF8 string=0x000000000026CDFC "e>"
 *   insn=0x000000000026CDFC string=0x000000000026CE00 " "
 *   insn=0x000000000026CDFC string=0x00000000001FC790 "0'"
 *   insn=0x000000000026CE0C string=0x000000000026CE10 "!"
 *   insn=0x000000000026CE18 string=0x000000000026CE1C "T"
 *   insn=0x000000000026CE2C string=0x000000000026CE30 ",+"
 *   insn=0x000000000026CE30 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026CE34 string=0x000000000026CE38 "h"
 *   insn=0x000000000026CE4C string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26CDE4(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  _QWORD *v4; // x0
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2
    && (v3 = *v2) != 0
    && (v4 = (_QWORD *)Caver::SceneObject::ComponentWithInterface(
                         v3,
                         (__int64)Caver::EntityControllerComponent::Interface),
        (v5 = v4) != 0)
    && ((v6 = v4[16]) != 0
     || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 14), (const Caver::Component *)v4),
         (v6 = v5[16]) != 0)) )
  {
    v7 = *(_DWORD *)(v6 + 112);
  }
  else
  {
    v7 = 0;
  }
  Caver::ProgramState::PushInt(v1, v7);
  return 1;
}

