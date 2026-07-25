/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E06A0
 * Mangled: _ZN5Caver13OverlayButton6UpdateEf
 * Demangled: Caver::OverlayButton::Update(float)
 *
 * Callers: 1
 *   0x0000000000200E30  Caver::OverlayButton::Update(float)
 *
 * Callees: 2
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 13
 *   insn=0x00000000003E06AC string=0x00000000003E06B0 ""
 *   insn=0x00000000003E06B8 string=0x00000000003E06BC "`"
 *   insn=0x00000000003E06BC string=0x00000000003E06C0 "  "
 *   insn=0x00000000003E06C4 string=0x00000000003E06DC "`"
 *   insn=0x00000000003E06C8 string=0x00000000003E06CC "  "
 *   insn=0x00000000003E06CC string=0x00000000003E06D0 "`"
 *   insn=0x00000000003E06D0 string=0x00000000003E06D4 "E"
 *   insn=0x00000000003E06DC string=0x00000000003E06E0 "("
 *   insn=0x00000000003E06E4 string=0x00000000003E06E8 "I"
 *   insn=0x00000000003E06E8 string=0x00000000003E06EC """
 *   insn=0x00000000003E06F0 string=0x00000000003E06F4 "`"
 *   insn=0x00000000003E070C string=0x00000000003E0710 "X"
 *   insn=0x00000000003E071C string=0x00000000003E0720 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::OverlayButton::Update(Caver::OverlayButton *this, float a2)
{
  float v4; // s0
  float v5; // s0
  float v6; // s0
  float v7; // s0
  float result; // s0

  Caver::GUIView::Update(this, a2);
  v4 = *((float *)this + 119);
  if ( v4 > 0.0 )
  {
    v5 = v4 - a2;
    *((float *)this + 119) = v5;
    if ( v5 < 0.0 )
      *((_DWORD *)this + 119) = 0;
  }
  v6 = *((float *)this + 116) + a2;
  *((float *)this + 116) = v6;
  v7 = v6 * 6.28318531 * 1.25 + -1.57079633;
  result = (float)(sinf(v7) * 0.5) + 0.5;
  *((float *)this + 117) = result;
  return result;
}

