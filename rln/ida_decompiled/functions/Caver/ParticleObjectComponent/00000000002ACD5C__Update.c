/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACD5C
 * Mangled: _ZN5Caver23ParticleObjectComponent6UpdateEf
 * Demangled: Caver::ParticleObjectComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001FBEE0  Caver::PhysicsObjectState::Update(float)
 *
 * Referenced strings: 18
 *   insn=0x00000000002ACD70 string=0x00000000002ACD74 ""
 *   insn=0x00000000002ACD70 string=0x00000000005837A4 "o"
 *   insn=0x00000000002ACD74 string=0x00000000002ACD78 "`"
 *   insn=0x00000000002ACD78 string=0x00000000002ACD7C "a"
 *   insn=0x00000000002ACD80 string=0x00000000002ACD84 "t"
 *   insn=0x00000000002ACD88 string=0x00000000002ACD8C "`"
 *   insn=0x00000000002ACD8C string=0x00000000002ACD90 "!(""
 *   insn=0x00000000002ACD98 string=0x00000000002ACDB4 "`"
 *   insn=0x00000000002ACDC4 string=0x00000000002ACDC8 " ( "
 *   insn=0x00000000002ACDCC string=0x00000000002ACDD0 "`"
 *   insn=0x00000000002ACDD8 string=0x00000000002ACDDC " ( "
 *   insn=0x00000000002ACDE0 string=0x00000000002ACDE4 "!"
 *   insn=0x00000000002ACDE4 string=0x00000000002ACDE8 "  ""
 *   insn=0x00000000002ACDE8 string=0x00000000002ACDEC ""
 *   insn=0x00000000002ACDEC string=0x00000000002ACE0C "`""
 *   insn=0x00000000002ACE00 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002ACE1C string=0x00000000002ACE20 "0<"
 *   insn=0x00000000002ACE20 string=0x00000000001FBEE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleObjectComponent::Update(__int64 this, float a2)
{
  __int64 v2; // x19
  float v4; // s1
  __int64 v5; // x20
  float v6; // s0
  float v7; // s1
  float v8; // s0
  int v9; // w8

  v2 = this;
  v4 = *(float *)(this + 280);
  v5 = *(_QWORD *)(this + 40);
  v6 = *(float *)(this + 276) + a2;
  *(float *)(this + 276) = v6;
  if ( v6 <= (float)(v4 + -0.001) )
  {
    *(float *)(v5 + 120) = *(float *)(v5 + 120) + (float)(*(float *)(this + 272) * a2);
    v7 = *(float *)(v5 + 128);
    v8 = v7 + (float)(*(float *)(this + 284) * a2);
    if ( fabsf(v8 - v7) > 0.0001 )
    {
      v9 = *(unsigned __int8 *)(v5 + 180);
      *(float *)(v5 + 128) = v8;
      if ( !v9 )
      {
        Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v5);
        *(_BYTE *)(v5 + 180) = 1;
      }
    }
    return Caver::PhysicsObjectState::Update((Caver::PhysicsObjectState *)(v2 + 136), a2);
  }
  else
  {
    *(_BYTE *)(v5 + 232) = 1;
  }
  return this;
}

