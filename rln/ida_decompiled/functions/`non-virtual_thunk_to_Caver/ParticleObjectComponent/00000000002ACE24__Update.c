/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACE24
 * Mangled: _ZThn24_N5Caver23ParticleObjectComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::ParticleObjectComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001FBEE0  Caver::PhysicsObjectState::Update(float)
 *
 * Referenced strings: 17
 *   insn=0x00000000002ACE34 string=0x00000000002ACE38 ""
 *   insn=0x00000000002ACE34 string=0x00000000005837A4 "o"
 *   insn=0x00000000002ACE48 string=0x00000000002ACE4C "!(""
 *   insn=0x00000000002ACE5C string=0x00000000002ACE60 "h"
 *   insn=0x00000000002ACE78 string=0x00000000002ACE7C "az@"
 *   insn=0x00000000002ACE88 string=0x00000000002ACE8C " ( "
 *   insn=0x00000000002ACE8C string=0x00000000002ACE90 "`z"
 *   insn=0x00000000002ACE94 string=0x00000000002ACE98 "a"
 *   insn=0x00000000002ACE9C string=0x00000000002ACEA0 " ( "
 *   insn=0x00000000002ACEA4 string=0x00000000002ACEA8 "!"
 *   insn=0x00000000002ACEA8 string=0x00000000002ACEAC "  ""
 *   insn=0x00000000002ACEAC string=0x00000000002ACEB0 ""
 *   insn=0x00000000002ACEB0 string=0x00000000002ACEB4 "h"
 *   insn=0x00000000002ACEB4 string=0x00000000002ACEB8 "`"
 *   insn=0x00000000002ACEC4 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002ACEC8 string=0x00000000002ACECC "h"
 *   insn=0x00000000002ACEE4 string=0x00000000001FBEE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ParticleObjectComponent::Update(__int64 this, float a2)
{
  __int64 v3; // x19
  float v4; // s0
  float v5; // s1
  __int64 v6; // x20
  float v7; // s1
  float v8; // s0
  int v9; // w8

  v3 = *(_QWORD *)(this + 16);
  v4 = *(float *)(this + 252) + a2;
  v5 = *(float *)(this + 256) + -0.001;
  *(float *)(this + 252) = v4;
  if ( v4 <= v5 )
  {
    v6 = this - 24;
    *(float *)(v3 + 120) = *(float *)(v3 + 120) + (float)(*(float *)(this + 248) * a2);
    v7 = *(float *)(v3 + 128);
    v8 = v7 + (float)(*(float *)(this + 260) * a2);
    if ( fabsf(v8 - v7) > 0.0001 )
    {
      v9 = *(unsigned __int8 *)(v3 + 180);
      *(float *)(v3 + 128) = v8;
      if ( !v9 )
      {
        Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v3);
        *(_BYTE *)(v3 + 180) = 1;
      }
    }
    return Caver::PhysicsObjectState::Update((Caver::PhysicsObjectState *)(v6 + 136), a2);
  }
  else
  {
    *(_BYTE *)(v3 + 232) = 1;
  }
  return this;
}

