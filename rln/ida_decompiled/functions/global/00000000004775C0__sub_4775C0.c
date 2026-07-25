/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004775C0
 * Mangled: sub_4775C0
 * Demangled: sub_4775C0
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
 * Referenced strings: 27
 *   insn=0x00000000004775D0 string=0x00000000004775D4 "U"
 *   insn=0x00000000004775E0 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004775E8 string=0x00000000004775EC "i"
 *   insn=0x00000000004775EC string=0x00000000004775F0 "`"
 *   insn=0x00000000004775EC string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477604 string=0x0000000000477608 "b"
 *   insn=0x000000000047760C string=0x0000000000477610 "S"
 *   insn=0x0000000000477610 string=0x0000000000477614 "4"
 *   insn=0x000000000047761C string=0x0000000000477620 "l."
 *   insn=0x0000000000477624 string=0x0000000000477628 "ar@"
 *   insn=0x0000000000477628 string=0x000000000047762C "h"
 *   insn=0x0000000000477634 string=0x0000000000477638 "!"
 *   insn=0x0000000000477638 string=0x000000000047763C "  ""
 *   insn=0x0000000000477644 string=0x0000000000477648 "h"
 *   insn=0x0000000000477648 string=0x000000000047764C "\t"
 *   insn=0x000000000047764C string=0x0000000000477670 "`r"
 *   insn=0x0000000000477658 string=0x000000000047765C "#8#"
 *   insn=0x000000000047765C string=0x0000000000477660 "c"
 *   insn=0x0000000000477660 string=0x0000000000477664 "` ""
 *   insn=0x0000000000477664 string=0x0000000000477668 "I"
 *   insn=0x0000000000477668 string=0x000000000047766C ")"
 *   insn=0x0000000000477670 string=0x0000000000477674 "\t"
 *   insn=0x0000000000477674 string=0x0000000000477678 "h"
 *   insn=0x0000000000477684 string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000477688 string=0x000000000047768C "h"
 *   insn=0x0000000000477690 string=0x0000000000477694 "hz"
 *   insn=0x00000000004776C0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4775C0(void *a1)
{
  Caver::ProgramState *v1; // x20
  __int64 *v2; // x0
  __int64 v3; // x19
  const Caver::Vector3 *v4; // x0
  const Caver::Vector3 *v5; // x20
  float v6; // w9
  float *v7; // x8
  float v9; // [xsp+0h] [xbp-30h] BYREF
  float v10; // [xsp+4h] [xbp-2Ch]
  __int64 v11; // [xsp+8h] [xbp-28h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::PointerAtStackIndex(v1);
  v5 = v4;
  if ( v3 && v4 )
  {
    Caver::Vector2::Vector2((Caver::Vector2 *)&v9, v4);
    if ( fabsf(v9 - *(float *)(v3 + 112)) <= 0.0001 )
    {
      v7 = (float *)(v3 + 116);
      if ( fabsf(v10 - *(float *)(v3 + 116)) <= 0.0001 )
      {
LABEL_12:
        *(_DWORD *)(v3 + 120) = *((_DWORD *)v5 + 2);
        return 0;
      }
      v6 = v10;
    }
    else
    {
      v6 = v10;
      v7 = (float *)(v3 + 116);
    }
    *(float *)(v3 + 112) = v9;
    *v7 = v6;
    if ( !*(_BYTE *)(v3 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v3);
      *(_BYTE *)(v3 + 180) = 1;
    }
    goto LABEL_12;
  }
  return 0;
}

