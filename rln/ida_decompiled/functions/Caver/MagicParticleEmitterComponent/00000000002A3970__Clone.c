/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3970
 * Mangled: _ZNK5Caver29MagicParticleEmitterComponent5CloneEv
 * Demangled: Caver::MagicParticleEmitterComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002A3938  Caver::MagicParticleEmitterComponent::~MagicParticleEmitterComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBC30  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000001FBEC0  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x00000000002A39E8  Caver::MagicParticleEmitterComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000002A3984 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A3988 string=0x00000000002A398C "Ma"
 *   insn=0x00000000002A398C string=0x00000000002A3990 """
 *   insn=0x00000000002A398C string=0x00000000001FBEC0 "0'"
 *   insn=0x00000000002A3990 string=0x00000000002A3994 ""
 *   insn=0x00000000002A39A0 string=0x00000000002A39A4 "\n"
 *   insn=0x00000000002A39A4 string=0x00000000002A39A8 "\tA"
 *   insn=0x00000000002A39A8 string=0x00000000002A39AC ""
 *   insn=0x00000000002A39AC string=0x00000000002A39B0 "@"
 *   insn=0x00000000002A39B4 string=0x00000000002A39B8 "i"
 *   insn=0x00000000002A39B8 string=0x00000000002A39BC "`"
 *   insn=0x00000000002A39C0 string=0x00000000001FBC30 "0'"
 *   insn=0x00000000002A39D8 string=0x00000000002A39DC "5N"
 *   insn=0x00000000002A39DC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicParticleEmitterComponent::Clone(Caver::MagicParticleEmitterComponent *this)
{
  __int64 v2; // x19
  __int128 v3; // q0

  v2 = operator new(0x1E0u);
  Caver::ParticleEmitterComponent::ParticleEmitterComponent((Caver::ParticleEmitterComponent *)v2);
  *(_DWORD *)(v2 + 472) = 0;
  *(_QWORD *)&v3 = &off_6C3188;
  *((_QWORD *)&v3 + 1) = &off_6C31C8;
  *(_QWORD *)v2 = off_6C3070;
  *(_OWORD *)(v2 + 16) = v3;
  Caver::ParticleEmitterComponent::InitWithComponent((Caver::ParticleEmitterComponent *)v2, this);
  return v2;
}

