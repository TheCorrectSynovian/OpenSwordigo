/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5938
 * Mangled: _ZN5Caver17ParticleComponent23AddTypeToParticleSystemEPNS_14ParticleSystemE
 * Demangled: Caver::ParticleComponent::AddTypeToParticleSystem(Caver::ParticleSystem *)
 *
 * Callers: 1
 *   0x00000000001F61C0  Caver::ParticleComponent::AddTypeToParticleSystem(Caver::ParticleSystem *)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203A20  Caver::Component::ShouldPrepare(void)
 *   0x0000000000203BB0  Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Referenced strings: 11
 *   insn=0x00000000002A5948 string=0x00000000002A594C "V"
 *   insn=0x00000000002A595C string=0x00000000002A5960 "h"
 *   insn=0x00000000002A596C string=0x00000000002A5970 "H"
 *   insn=0x00000000002A5970 string=0x00000000002A5998 "`BH"
 *   insn=0x00000000002A5974 string=0x00000000002A5978 "*x"
 *   insn=0x00000000002A597C string=0x00000000002A5980 "h"
 *   insn=0x00000000002A5984 string=0x00000000002A5988 "!@"
 *   insn=0x00000000002A5990 string=0x00000000002A5994 "H"
 *   insn=0x00000000002A59B4 string=0x00000000002A59B8 "`"
 *   insn=0x00000000002A59C8 string=0x00000000002A59E0 "<B"
 *   insn=0x00000000002A59E0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleComponent::AddTypeToParticleSystem(__int64 this, Caver::ParticleSystem *a2)
{
  _DWORD *v2; // x19
  _QWORD *v3; // x21

  v2 = (_DWORD *)this;
  _ReadStatusReg(TPIDR_EL0);
  if ( (*(_DWORD *)(this + 140) & 0x80000000) != 0 )
  {
    v3 = (_QWORD *)(this + 120);
    if ( *(_QWORD *)(this + 120) )
      goto LABEL_6;
    this = Caver::Component::ShouldPrepare((Caver::Component *)this);
    if ( (this & 1) != 0 )
      this = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 64LL))(v2);
    if ( *v3 )
    {
LABEL_6:
      this = Caver::ParticleSystem::AddParticleType();
      v2[35] = this;
    }
  }
  return this;
}

