/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028EF00
 * Mangled: _ZN5Caver14SkillComponent6UpdateEf
 * Demangled: Caver::SkillComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FEC90  Caver::SkillComponent::Update(float)
 *
 * Callees: 3
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 41
 *   insn=0x000000000028EF14 string=0x000000000028EF18 "V"
 *   insn=0x000000000028EF24 string=0x000000000028EF28 "uZ@"
 *   insn=0x000000000028EF28 string=0x000000000028EF2C "5\t"
 *   insn=0x000000000028EF2C string=0x000000000028EF30 "`"
 *   insn=0x000000000028EF30 string=0x000000000028EF34 "t""
 *   insn=0x000000000028EF40 string=0x00000000001F5990 "P'"
 *   insn=0x000000000028EF4C string=0x000000000028EF50 ""
 *   insn=0x000000000028EF54 string=0x000000000028EF58 "!"
 *   insn=0x000000000028EF58 string=0x000000000028EF5C "  ("
 *   insn=0x000000000028EF68 string=0x000000000028EF6C "\t"
 *   insn=0x000000000028EF78 string=0x000000000028EF7C ""8""
 *   insn=0x000000000028EF7C string=0x000000000028EF80 "B"
 *   insn=0x000000000028EF80 string=0x000000000028EF84 "@ ("
 *   insn=0x000000000028EF84 string=0x000000000028EF88 "I"
 *   insn=0x000000000028EF88 string=0x000000000028EF8C ")"
 *   insn=0x000000000028EF88 string=0x000000000028EFB0 "`"
 *   insn=0x000000000028EF90 string=0x000000000028EF94 "\t"
 *   insn=0x000000000028EFA4 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028EFB0 string=0x000000000028EFB4 "hZ@"
 *   insn=0x000000000028EFB4 string=0x000000000028EFB8 "\tx@"
 *   insn=0x000000000028EFB8 string=0x000000000028EFBC "\ty"
 *   insn=0x000000000028EFBC string=0x000000000028EFC0 "\t4@"
 *   insn=0x000000000028EFC0 string=0x000000000028EFC4 "\t5"
 *   insn=0x000000000028EFC4 string=0x000000000028EFC8 "ub@"
 *   insn=0x000000000028EFC8 string=0x000000000028EFCC "5"
 *   insn=0x000000000028EFD4 string=0x000000000028EFD8 "n"
 *   insn=0x000000000028EFE4 string=0x000000000028EFE8 "!"
 *   insn=0x000000000028EFE8 string=0x000000000028EFEC "  ("
 *   insn=0x000000000028EFF8 string=0x000000000028EFFC "\t"
 *   insn=0x000000000028F008 string=0x000000000028F00C ""8""
 *   insn=0x000000000028F00C string=0x000000000028F010 "B"
 *   insn=0x000000000028F010 string=0x000000000028F014 "@ ("
 *   insn=0x000000000028F014 string=0x000000000028F018 "I"
 *   insn=0x000000000028F018 string=0x000000000028F01C ")"
 *   insn=0x000000000028F018 string=0x000000000028F040 "h"
 *   insn=0x000000000028F020 string=0x000000000028F024 "\t"
 *   insn=0x000000000028F030 string=0x000000000028F034 "["
 *   insn=0x000000000028F040 string=0x000000000028F044 "ib@"
 *   insn=0x000000000028F044 string=0x000000000028F048 "y@"
 *   insn=0x000000000028F048 string=0x000000000028F04C "(y"
 *   insn=0x000000000028F078 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillComponent::Update(Caver::SkillComponent *this, float a2)
{
  __int64 v3; // x21
  float v4; // w9
  float *v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x21
  float v9; // w9
  float *v10; // x8
  float v11; // [xsp+0h] [xbp-40h]
  float v12; // [xsp+4h] [xbp-3Ch]

  _ReadStatusReg(TPIDR_EL0);
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
  {
    Caver::SceneObject::WorldPointFromLocalPoint();
    if ( fabsf(v11 - *(float *)(v3 + 112)) <= 0.0001 )
    {
      v5 = (float *)(v3 + 116);
      if ( fabsf(v12 - *(float *)(v3 + 116)) <= 0.0001 )
        goto LABEL_8;
      v4 = v12;
    }
    else
    {
      v4 = v12;
      v5 = (float *)(v3 + 116);
    }
    *(float *)(v3 + 112) = v11;
    *v5 = v4;
    if ( !*(_BYTE *)(v3 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v3);
      *(_BYTE *)(v3 + 180) = 1;
    }
LABEL_8:
    v6 = *((_QWORD *)this + 5);
    v7 = *((_QWORD *)this + 22);
    *(_DWORD *)(v7 + 120) = *(_DWORD *)(v6 + 120);
    *(_QWORD *)(v7 + 104) = *(_QWORD *)(v6 + 104);
    v8 = *((_QWORD *)this + 24);
    if ( !v8 )
      return;
    Caver::SceneObject::WorldPointFromLocalPoint();
    if ( fabsf(v11 - *(float *)(v8 + 112)) <= 0.0001 )
    {
      v10 = (float *)(v8 + 116);
      if ( fabsf(v12 - *(float *)(v8 + 116)) <= 0.0001 )
      {
LABEL_15:
        *(_DWORD *)(*((_QWORD *)this + 24) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 5) + 120LL);
        return;
      }
      v9 = v12;
    }
    else
    {
      v9 = v12;
      v10 = (float *)(v8 + 116);
    }
    *(float *)(v8 + 112) = v11;
    *v10 = v9;
    if ( !*(_BYTE *)(v8 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v8);
      *(_BYTE *)(v8 + 180) = 1;
    }
    goto LABEL_15;
  }
}

