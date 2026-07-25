/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E15F8
 * Mangled: _ZN5Caver17OverlayMenuButton6UpdateEf
 * Demangled: Caver::OverlayMenuButton::Update(float)
 *
 * Callers: 1
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *
 * Callees: 2
 *   0x00000000001FE460  Caver::ParticleSystem::Update(float)
 *   0x0000000000200E30  Caver::OverlayButton::Update(float)
 *
 * Referenced strings: 3
 *   insn=0x00000000003E1608 string=0x00000000003E160C "`"
 *   insn=0x00000000003E160C string=0x00000000003E1610 ""
 *   insn=0x00000000003E1610 string=0x00000000003E1614 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayMenuButton::Update(Caver::OverlayMenuButton *this, float a2)
{
  Caver::ParticleSystem *v3; // x0

  v3 = (Caver::ParticleSystem *)*((_QWORD *)this + 64);
  if ( v3 )
    Caver::ParticleSystem::Update(v3, a2);
  return Caver::OverlayButton::Update(this, a2);
}

