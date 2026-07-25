/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047743C
 * Mangled: sub_47743C
 * Demangled: sub_47743C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 23
 *   insn=0x000000000047744C string=0x0000000000477450 "U"
 *   insn=0x000000000047745C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477468 string=0x000000000047746C "`"
 *   insn=0x0000000000477468 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004774A0 string=0x00000000004774A4 "ar@"
 *   insn=0x00000000004774A4 string=0x00000000004774A8 "h"
 *   insn=0x00000000004774B0 string=0x00000000004774B4 "!"
 *   insn=0x00000000004774B4 string=0x00000000004774B8 "  ""
 *   insn=0x00000000004774C0 string=0x00000000004774C4 "h"
 *   insn=0x00000000004774C4 string=0x00000000004774C8 "\t"
 *   insn=0x00000000004774C8 string=0x00000000004774EC "`r"
 *   insn=0x00000000004774D4 string=0x00000000004774D8 "#8#"
 *   insn=0x00000000004774D8 string=0x00000000004774DC "c"
 *   insn=0x00000000004774DC string=0x00000000004774E0 "` ""
 *   insn=0x00000000004774E0 string=0x00000000004774E4 "I"
 *   insn=0x00000000004774E4 string=0x00000000004774E8 ")"
 *   insn=0x00000000004774EC string=0x00000000004774F0 "\t"
 *   insn=0x00000000004774F0 string=0x00000000004774F4 "h"
 *   insn=0x00000000004774FC string=0x0000000000477500 "("
 *   insn=0x0000000000477500 string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000477504 string=0x0000000000477508 "h"
 *   insn=0x0000000000477518 string=0x0000000000477534 "g"
 *   insn=0x0000000000477534 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_47743C(void *a1)
{
  Caver::ProgramState *v1; // x20
  __int64 *v2; // x0
  __int64 v3; // x19
  const Caver::Vector3 *v4; // x0
  float v5; // w9
  float *v6; // x8
  float v8; // [xsp+0h] [xbp-30h] BYREF
  float v9; // [xsp+4h] [xbp-2Ch]
  __int64 v10; // [xsp+8h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v3 && v4 )
  {
    Caver::Vector2::Vector2((Caver::Vector2 *)&v8, v4);
    if ( fabsf(v8 - *(float *)(v3 + 112)) <= 0.0001 )
    {
      v6 = (float *)(v3 + 116);
      if ( fabsf(v9 - *(float *)(v3 + 116)) <= 0.0001 )
        return 0;
      v5 = v9;
    }
    else
    {
      v5 = v9;
      v6 = (float *)(v3 + 116);
    }
    *(float *)(v3 + 112) = v8;
    *v6 = v5;
    if ( !*(_BYTE *)(v3 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v3);
      *(_BYTE *)(v3 + 180) = 1;
    }
  }
  return 0;
}

