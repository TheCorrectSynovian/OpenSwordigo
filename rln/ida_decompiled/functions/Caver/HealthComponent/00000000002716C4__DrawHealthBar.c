/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002716C4
 * Mangled: _ZN5Caver15HealthComponent13DrawHealthBarEPNS_16RenderingContextEPKNS_6CameraERKNS_9RectangleE
 * Demangled: Caver::HealthComponent::DrawHealthBar(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD140  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Referenced strings: 13
 *   insn=0x00000000002716D8 string=0x00000000002716DC "U"
 *   insn=0x0000000000271718 string=0x000000000027171C "A(!"
 *   insn=0x000000000027171C string=0x0000000000271720 "`"
 *   insn=0x0000000000271730 string=0x00000000001FD140 "0'"
 *   insn=0x0000000000271734 string=0x0000000000271738 "eB"
 *   insn=0x000000000027175C string=0x0000000000271760 "AA"
 *   insn=0x00000000002717A0 string=0x00000000002717A4 "B"
 *   insn=0x00000000002717A4 string=0x00000000002717A8 "!"
 *   insn=0x00000000002717AC string=0x00000000002717B0 "A"
 *   insn=0x00000000002717B4 string=0x00000000002717B8 " #"
 *   insn=0x00000000002717B8 string=0x00000000002717BC ""
 *   insn=0x00000000002717BC string=0x00000000002717C0 "\t"
 *   insn=0x000000000027180C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthComponent::DrawHealthBar(
        Caver::HealthComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Camera *a3,
        const Caver::Rectangle *a4)
{
  float32x2_t *v6; // x8
  float v7; // s2
  float v8; // s1
  int v10; // [xsp+0h] [xbp-80h] BYREF
  float32x2_t v11; // [xsp+8h] [xbp-78h] BYREF
  _OWORD v12[4]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v13; // [xsp+58h] [xbp-28h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (float32x2_t *)*((_QWORD *)this + 5);
  v7 = v6[15].n64_f32[0];
  *(float32x2_t *)&v12[0] = vadd_f32(v6[14], vmul_n_f32(*(float32x2_t *)((char *)this + 140), v6[17].n64_f32[1]));
  *((float *)v12 + 2) = v7 + 0.0;
  Caver::Camera::ScreenPointFromWorldPosition((__int64 *)&v11, a3, (const Caver::Vector3 *)v12, a4, 0);
  v12[2] = xmmword_6E9F10;
  v12[3] = xmmword_6E9F20;
  v12[0] = Caver::Matrix4::identityMatrix;
  v12[1] = xmmword_6E9F00;
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v12);
  *(float32x2_t *)&v12[0] = vadd_f32(v11, (float32x2_t)0xC0000000C1700000LL);
  *((_QWORD *)&v12[0] + 1) = 0x4080000041F00000LL;
  v10 = 1280068684;
  Caver::RenderingContext::FillRect(a2, (const Caver::Rectangle *)v12, (const Caver::Color *)&v10, 0.0);
  v8 = (float)*((int *)this + 32) / (float)*((int *)this + 31);
  *(float32x2_t *)&v12[0] = vadd_f32(v11, (float32x2_t)0xC0000000C1700000LL);
  *((float *)v12 + 2) = v8 * 30.0;
  HIDWORD(v12[0]) = 1082130432;
  v10 = -1090518849;
  return Caver::RenderingContext::FillRect(a2, (const Caver::Rectangle *)v12, (const Caver::Color *)&v10, 0.0);
}

