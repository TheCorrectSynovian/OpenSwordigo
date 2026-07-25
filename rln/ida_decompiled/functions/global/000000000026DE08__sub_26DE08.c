/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026DE08
 * Mangled: sub_26DE08
 * Demangled: sub_26DE08
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
 *   insn=0x000000000026DE10 string=0x000000000026DE14 "s5"
 *   insn=0x000000000026DE14 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026DE1C string=0x000000000026DE20 "\:"
 *   insn=0x000000000026DE20 string=0x000000000026DE24 "`"
 *   insn=0x000000000026DE20 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026DE28 string=0x000000000026DE2C " "
 *   insn=0x000000000026DE30 string=0x000000000026DE34 "!"
 *   insn=0x000000000026DE50 string=0x000000000026DE54 "#'"
 *   insn=0x000000000026DE54 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026DE58 string=0x000000000026DE5C ""
 *   insn=0x000000000026DE68 string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_26DE08(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  _QWORD *v4; // x0
  _QWORD *v5; // x20
  __int64 v6; // x8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = (_QWORD *)Caver::SceneObject::ComponentWithInterface(
                       v3,
                       (__int64)Caver::EntityControllerComponent::Interface);
      v5 = v4;
      if ( v4 )
      {
        v6 = v4[22];
        if ( v6
          || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 20), (const Caver::Component *)v4),
              (v6 = v5[22]) != 0) )
        {
          Caver::ProgramState::PushInt(v1, *(_DWORD *)(v6 + 32));
        }
      }
    }
  }
}

