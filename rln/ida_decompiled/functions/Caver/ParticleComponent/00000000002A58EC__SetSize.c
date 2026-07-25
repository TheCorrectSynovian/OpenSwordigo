/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A58EC
 * Mangled: _ZN5Caver17ParticleComponent7SetSizeEf
 * Demangled: Caver::ParticleComponent::SetSize(float)
 *
 * Callers: 1
 *   0x00000000002A556C  Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000002A58F8 string=0x00000000002A58FC "!"
 *   insn=0x00000000002A5900 string=0x00000000002A5904 "  ""
 *   insn=0x00000000002A5908 string=0x00000000002A591C "! "
 *   insn=0x00000000002A5910 string=0x00000000002A5914 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleComponent::SetSize(__int64 this, float a2)
{
  __int64 v2; // x8
  float v3; // s1
  float v4; // s2
  float v5; // s1

  v2 = *(_QWORD *)(this + 120);
  *(float *)(this + 128) = a2;
  if ( v2 )
  {
    v3 = *(float *)(v2 + 84) / *(float *)(v2 + 88);
    if ( v3 <= 1.0 )
    {
      v5 = v3 * a2;
    }
    else
    {
      v4 = a2 / v3;
      v5 = a2;
      a2 = v4;
    }
    *(float *)(this + 132) = v5;
    *(float *)(this + 136) = a2;
  }
  return this;
}

