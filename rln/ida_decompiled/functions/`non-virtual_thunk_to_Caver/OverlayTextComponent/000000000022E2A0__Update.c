/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E2A0
 * Mangled: _ZThn24_N5Caver20OverlayTextComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::OverlayTextComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x000000000022E2A0 string=0x000000000022E2A4 "("
 *   insn=0x000000000022E2B0 string=0x00000000005837A4 "o"
 *   insn=0x000000000022E2B4 string=0x000000000022E2B8 "`( "
 *   insn=0x000000000022E2B8 string=0x000000000022E2BC "#(""
 *   insn=0x000000000022E2C0 string=0x000000000022E2C4 "c($"
 *   insn=0x000000000022E2CC string=0x000000000022E2D0 "@"
 *   insn=0x000000000022E2D8 string=0x000000000022E2DC "\t"
 *   insn=0x000000000022E2EC string=0x000000000022E2F0 " 8 "
 *   insn=0x000000000022E2F4 string=0x000000000022E2F8 "  "
 *   insn=0x000000000022E2FC string=0x000000000022E300 "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OverlayTextComponent::Update(__int64 this, float a2)
{
  float v2; // s1
  float v3; // s2
  float v4; // s0
  __int64 v5; // x8
  float v6; // s0

  if ( *(_BYTE *)(this + 152) )
  {
    v2 = *(float *)(this + 160);
    v3 = *(float *)(this + 164);
    v4 = *(float *)(this + 156) + a2;
    *(float *)(this + 156) = v4;
    if ( v4 <= (float)((float)(v2 + v3) + -0.001) )
    {
      v6 = fminf(1.0 - (float)((float)(v4 - v2) / v3), 1.0);
      *(float *)(this + 148) = v6;
      if ( v6 < 0.0 )
        *(_DWORD *)(this + 148) = 0;
    }
    else
    {
      v5 = *(_QWORD *)(this + 16);
      *(_BYTE *)(this + 152) = 0;
      *(_BYTE *)(v5 + 232) = 1;
    }
  }
  return this;
}

