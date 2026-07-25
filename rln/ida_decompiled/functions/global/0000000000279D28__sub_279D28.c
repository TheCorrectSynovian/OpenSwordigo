/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000279D28
 * Mangled: sub_279D28
 * Demangled: sub_279D28
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F71A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000202C70  Caver::ItemDropComponent::DropItemObjects(std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>> const&)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *
 * Referenced strings: 12
 *   insn=0x0000000000279D34 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000279D3C string=0x0000000000279D40 " "
 *   insn=0x0000000000279D3C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000279D48 string=0x0000000000279D4C "a#"
 *   insn=0x0000000000279D4C string=0x0000000000279D50 "!P@"
 *   insn=0x0000000000279D50 string=0x0000000000279D54 "#"
 *   insn=0x0000000000279D58 string=0x0000000000279D5C "S"
 *   insn=0x0000000000279D64 string=0x00000000001F71A0 "0'"
 *   insn=0x0000000000279D68 string=0x0000000000279D6C "("
 *   insn=0x0000000000279D6C string=0x0000000000279D70 ")"
 *   insn=0x0000000000279D70 string=0x0000000000279D74 "?"
 *   insn=0x0000000000279D74 string=0x0000000000279D78 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_279D28(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  Caver::ItemDropComponent *v4; // x0
  Caver::ItemDropComponent *v5; // x19

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = (Caver::ItemDropComponent *)Caver::SceneObject::ComponentWithInterface(
                                         v3,
                                         (__int64)Caver::ItemDropComponent::Interface);
      v5 = v4;
      if ( v4 )
      {
        Caver::ItemDropComponent::CreateItemObjects(v4);
        if ( *((_QWORD *)v5 + 20) != *((_QWORD *)v5 + 19) )
          Caver::ItemDropComponent::DropItemObjects();
      }
    }
  }
  return 0;
}

