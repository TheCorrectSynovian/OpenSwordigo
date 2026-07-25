/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A99AC
 * Mangled: _ZN5Caver14GUIRoundedRect21CreateWithOuterBoundsERKNS_9RectangleE
 * Demangled: Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F5550  Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x0000000000203CD0  Caver::GUIRoundedRect::CreateSprite(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000004A99AC string=0x00000000004A99B0 ""
 *   insn=0x00000000004A99B0 string=0x00000000004A99B4 " "
 *   insn=0x00000000004A99C8 string=0x00000000004A99CC "a8""
 *   insn=0x00000000004A99D8 string=0x00000000004A99DC "!8%"
 *   insn=0x00000000004A99DC string=0x00000000004A99E0 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIRoundedRect::CreateWithOuterBounds(__int64 this, const Caver::Rectangle *a2)
{
  float v2; // s1
  float32x2_t v3; // d4
  float v4; // s2
  float v5; // s5
  float v6; // s0
  float v7; // s1

  if ( *(_QWORD *)this )
  {
    v3.n64_u32[0] = *(_DWORD *)(this + 60);
    v2 = *(float *)(this + 64);
    v5 = *(float *)(this + 68);
    v4 = *(float *)(this + 72);
    *(_OWORD *)(this + 12) = *(_OWORD *)a2;
    v6 = (float)(*(float *)(this + 20) - v2) - v3.n64_f32[0];
    v3.n64_f32[1] = v5;
    v7 = (float)(*(float *)(this + 24) - v4) - v5;
    *(float32x2_t *)(this + 28) = vadd_f32(*(float32x2_t *)(this + 12), v3);
    *(float *)(this + 36) = v6;
    *(float *)(this + 40) = v7;
    return Caver::GUIRoundedRect::CreateSprite((Caver::GUIRoundedRect *)this);
  }
  return this;
}

