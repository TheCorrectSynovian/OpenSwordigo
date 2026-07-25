/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E1638
 * Mangled: _ZN5Caver17OverlayMenuButton8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::OverlayMenuButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F36E0  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F8DA0  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *   0x00000000001FF730  Caver::OverlayButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 9
 *   insn=0x00000000003E164C string=0x00000000003E1650 "W"
 *   insn=0x00000000003E1680 string=0x00000000003E1684 ""
 *   insn=0x00000000003E1690 string=0x00000000003E1694 "("
 *   insn=0x00000000003E1690 string=0x00000000001F7210 "0'"
 *   insn=0x00000000003E1694 string=0x00000000003E1698 "eB"
 *   insn=0x00000000003E16B0 string=0x00000000003E16B4 "H"
 *   insn=0x00000000003E16B4 string=0x00000000001F36E0 "P'"
 *   insn=0x00000000003E16C0 string=0x00000000001F8DA0 "0'"
 *   insn=0x00000000003E1700 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayMenuButton::DrawRect(
        Caver::ParticleSystem **this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::ParticleSystem *v8; // x0
  _OWORD v10[4]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v11; // [xsp+48h] [xbp-38h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( this[64] )
  {
    (*((void (__fastcall **)(Caver::ParticleSystem **, Caver::RenderingContext *, const Caver::Matrix4 *))*this + 37))(
      this,
      a2,
      a4);
    Caver::RenderingContext::SetIdentityMatrix(a2);
    v8 = this[64];
    v10[2] = xmmword_6E9F10;
    v10[3] = xmmword_6E9F20;
    v10[0] = Caver::Matrix4::identityMatrix;
    v10[1] = xmmword_6E9F00;
    Caver::ParticleSystem::BuildVertexDataWithTransform(v8, (const Caver::Matrix4 *)v10);
    Caver::ParticleSystem::Draw(this[64], a2);
  }
  return Caver::OverlayButton::DrawRect((Caver::OverlayButton *)this, a2, a3, a4);
}

