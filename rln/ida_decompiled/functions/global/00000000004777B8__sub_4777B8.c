/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004777B8
 * Mangled: sub_4777B8
 * Demangled: sub_4777B8
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 16
 *   insn=0x00000000004777C0 string=0x00000000004777C4 ""
 *   insn=0x00000000004777C4 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004777D0 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004777E4 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004777E8 string=0x00000000004777EC "h"
 *   insn=0x00000000004777EC string=0x0000000000584004 "5"
 *   insn=0x00000000004777F0 string=0x00000000004777F4 "b"
 *   insn=0x00000000004777F4 string=0x00000000004777F8 "h"
 *   insn=0x0000000000477804 string=0x0000000000477808 "!"
 *   insn=0x0000000000477808 string=0x000000000047780C "  #"
 *   insn=0x0000000000477810 string=0x0000000000477814 "h"
 *   insn=0x0000000000477814 string=0x0000000000477818 "`"
 *   insn=0x0000000000477818 string=0x000000000047781C "("
 *   insn=0x0000000000477820 string=0x0000000000477824 "_"
 *   insn=0x0000000000477824 string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000477828 string=0x000000000047782C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4777B8(void *a1)
{
  Caver::ProgramState *v1; // x20
  __int64 *v2; // x0
  __int64 v3; // x19
  float v4; // s0
  float v5; // s0
  int v6; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
    if ( v3 )
    {
      v5 = v4 * 0.017453;
      if ( fabsf(v5 - *(float *)(v3 + 128)) > 0.0001 )
      {
        v6 = *(unsigned __int8 *)(v3 + 180);
        *(float *)(v3 + 128) = v5;
        if ( !v6 )
        {
          Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v3);
          *(_BYTE *)(v3 + 180) = 1;
        }
      }
    }
  }
  else
  {
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
  }
  return 0;
}

