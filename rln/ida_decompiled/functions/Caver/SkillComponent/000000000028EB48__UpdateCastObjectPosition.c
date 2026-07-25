/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028EB48
 * Mangled: _ZN5Caver14SkillComponent24UpdateCastObjectPositionEv
 * Demangled: Caver::SkillComponent::UpdateCastObjectPosition(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 23
 *   insn=0x000000000028EB58 string=0x000000000028EB5C "U"
 *   insn=0x000000000028EB64 string=0x000000000028EB68 "a""
 *   insn=0x000000000028EB6C string=0x000000000028EB70 "`"
 *   insn=0x000000000028EB70 string=0x000000000028EB74 "tZ@"
 *   insn=0x000000000028EB7C string=0x00000000001F5990 "P'"
 *   insn=0x000000000028EB90 string=0x000000000028EB94 "!"
 *   insn=0x000000000028EB94 string=0x000000000028EB98 "  ""
 *   insn=0x000000000028EBA4 string=0x000000000028EBA8 "\t"
 *   insn=0x000000000028EBB4 string=0x000000000028EBB8 "#8#"
 *   insn=0x000000000028EBB8 string=0x000000000028EBBC "c"
 *   insn=0x000000000028EBBC string=0x000000000028EBC0 "` ""
 *   insn=0x000000000028EBC0 string=0x000000000028EBC4 "I"
 *   insn=0x000000000028EBC4 string=0x000000000028EBC8 ")"
 *   insn=0x000000000028EBC4 string=0x000000000028EBEC "h"
 *   insn=0x000000000028EBCC string=0x000000000028EBD0 "\t"
 *   insn=0x000000000028EBDC string=0x000000000028EBE0 "p"
 *   insn=0x000000000028EBE0 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028EBEC string=0x000000000028EBF0 "iZ@"
 *   insn=0x000000000028EBF0 string=0x000000000028EBF4 "\ny@"
 *   insn=0x000000000028EBF4 string=0x000000000028EBF8 "*y"
 *   insn=0x000000000028EBF8 string=0x000000000028EBFC "5@"
 *   insn=0x000000000028EBFC string=0x000000000028EC00 "(5"
 *   insn=0x000000000028EC28 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillComponent::UpdateCastObjectPosition(Caver::SkillComponent *this)
{
  __int64 v2; // x20
  float v3; // w9
  float *v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  float v7; // [xsp+0h] [xbp-30h]
  float v8; // [xsp+4h] [xbp-2Ch]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 22);
  Caver::SceneObject::WorldPointFromLocalPoint();
  if ( fabsf(v7 - *(float *)(v2 + 112)) <= 0.0001 )
  {
    v4 = (float *)(v2 + 116);
    if ( fabsf(v8 - *(float *)(v2 + 116)) <= 0.0001 )
      goto LABEL_7;
    v3 = v8;
  }
  else
  {
    v3 = v8;
    v4 = (float *)(v2 + 116);
  }
  *(float *)(v2 + 112) = v7;
  *v4 = v3;
  if ( !*(_BYTE *)(v2 + 180) )
  {
    Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v2);
    *(_BYTE *)(v2 + 180) = 1;
  }
LABEL_7:
  v5 = *((_QWORD *)this + 5);
  v6 = *((_QWORD *)this + 22);
  *(_DWORD *)(v6 + 120) = *(_DWORD *)(v5 + 120);
  *(_QWORD *)(v6 + 104) = *(_QWORD *)(v5 + 104);
}

