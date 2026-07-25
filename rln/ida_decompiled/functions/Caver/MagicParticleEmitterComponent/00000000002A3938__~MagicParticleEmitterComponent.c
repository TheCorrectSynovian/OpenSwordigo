/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3938
 * Mangled: _ZN5Caver29MagicParticleEmitterComponentD0Ev
 * Demangled: Caver::MagicParticleEmitterComponent::~MagicParticleEmitterComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDA20  Caver::ParticleEmitterComponent::~ParticleEmitterComponent()
 *   0x00000000002A3970  Caver::MagicParticleEmitterComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002A3944 string=0x00000000002A3948 "6h"
 *   insn=0x00000000002A3948 string=0x00000000001FDA20 "0'"
 *   insn=0x00000000002A3954 string=0x00000000002A3958 "VN"
 *   insn=0x00000000002A3958 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A3960 string=0x00000000002A3964 "SN"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicParticleEmitterComponent::~MagicParticleEmitterComponent(
        Caver::MagicParticleEmitterComponent *this)
{
  Caver::ParticleEmitterComponent::~ParticleEmitterComponent(this);
  operator delete(this);
}

