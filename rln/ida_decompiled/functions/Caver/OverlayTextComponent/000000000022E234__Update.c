/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E234
 * Mangled: _ZN5Caver20OverlayTextComponent6UpdateEf
 * Demangled: Caver::OverlayTextComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x000000000022E234 string=0x000000000022E238 "("
 *   insn=0x000000000022E244 string=0x00000000005837A4 "o"
 *   insn=0x000000000022E248 string=0x000000000022E24C "`( "
 *   insn=0x000000000022E24C string=0x000000000022E250 "#(""
 *   insn=0x000000000022E254 string=0x000000000022E258 "c($"
 *   insn=0x000000000022E260 string=0x000000000022E264 ""
 *   insn=0x000000000022E26C string=0x000000000022E270 "\t"
 *   insn=0x000000000022E280 string=0x000000000022E284 " 8 "
 *   insn=0x000000000022E288 string=0x000000000022E28C "  "
 *   insn=0x000000000022E290 string=0x000000000022E294 "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::Update(__int64 this, float a2)
{
  float v2; // s1
  float v3; // s2
  float v4; // s0
  __int64 v5; // x8
  float v6; // s0

  if ( *(_BYTE *)(this + 176) )
  {
    v2 = *(float *)(this + 184);
    v3 = *(float *)(this + 188);
    v4 = *(float *)(this + 180) + a2;
    *(float *)(this + 180) = v4;
    if ( v4 <= (float)((float)(v2 + v3) + -0.001) )
    {
      v6 = fminf(1.0 - (float)((float)(v4 - v2) / v3), 1.0);
      *(float *)(this + 172) = v6;
      if ( v6 < 0.0 )
        *(_DWORD *)(this + 172) = 0;
    }
    else
    {
      v5 = *(_QWORD *)(this + 40);
      *(_BYTE *)(this + 176) = 0;
      *(_BYTE *)(v5 + 232) = 1;
    }
  }
  return this;
}

