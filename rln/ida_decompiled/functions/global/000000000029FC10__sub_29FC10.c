/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029FC10
 * Mangled: sub_29FC10
 * Demangled: sub_29FC10
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FB950  Caver::SnappingMonsterControllerComponent::Attack(void)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002A00D0  Caver::SnappingMonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 12
 *   insn=0x000000000029FC1C string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000029FC24 string=0x000000000029FC28 "`"
 *   insn=0x000000000029FC24 string=0x00000000001FC790 "0'"
 *   insn=0x000000000029FC2C string=0x000000000029FC30 "3"
 *   insn=0x000000000029FC30 string=0x000000000029FC34 "A""
 *   insn=0x000000000029FC34 string=0x000000000029FC38 "!"
 *   insn=0x000000000029FC38 string=0x00000000002A00D0 " ""
 *   insn=0x000000000029FC3C string=0x000000000029FC40 "h"
 *   insn=0x000000000029FC44 string=0x000000000029FC48 "h"
 *   insn=0x000000000029FC48 string=0x000000000029FC4C "H"
 *   insn=0x000000000029FC4C string=0x000000000029FC50 "@o"
 *   insn=0x000000000029FC50 string=0x00000000001FB950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_29FC10(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x19
  Caver::SnappingMonsterControllerComponent *v4; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      v4 = (Caver::SnappingMonsterControllerComponent *)Caver::SceneObject::ComponentWithInterface(
                                                          *v2,
                                                          (__int64)Caver::SnappingMonsterControllerComponent::Interface);
      if ( v4 )
      {
        if ( *((_BYTE *)v3 + 240) )
          Caver::SnappingMonsterControllerComponent::Attack(v4);
      }
    }
  }
  return 0;
}

