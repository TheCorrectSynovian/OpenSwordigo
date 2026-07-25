/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000279EBC
 * Mangled: sub_279EBC
 * Demangled: sub_279EBC
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *
 * Referenced strings: 14
 *   insn=0x0000000000279EC4 string=0x0000000000279EC8 "F"
 *   insn=0x0000000000279EC8 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000279ED0 string=0x0000000000279ED4 "/\n"
 *   insn=0x0000000000279ED4 string=0x0000000000279ED8 "`"
 *   insn=0x0000000000279ED4 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000279EDC string=0x0000000000279EE0 " "
 *   insn=0x0000000000279EE0 string=0x0000000000279EE4 "a#"
 *   insn=0x0000000000279EE4 string=0x0000000000279EE8 "!P@"
 *   insn=0x0000000000279EF8 string=0x0000000000279EFC "u"
 *   insn=0x0000000000279EFC string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000279F04 string=0x0000000000279F08 "\t|@"
 *   insn=0x0000000000279F0C string=0x0000000000279F10 ""
 *   insn=0x0000000000279F18 string=0x00000000001FBB30 "0'"
 *   insn=0x0000000000279F28 string=0x0000000000279F2C "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_279EBC(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ItemDropComponent::Interface);
    Caver::ProgramState::IntAtStackIndex(v1, 2);
    if ( v4 )
    {
      Caver::ProgramState::PushString();
      return 1;
    }
  }
  else
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
  }
  return 0;
}

