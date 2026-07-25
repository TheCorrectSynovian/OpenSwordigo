/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7900
 * Mangled: ._ZN5Caver15ParticleEmitter12TitleForTypeENS0_4TypeE
 * Demangled: Caver::ParticleEmitter::TitleForType(Caver::ParticleEmitter::Type)
 *
 * Callers: 2
 *   0x00000000002A9088  Caver::ParticleEmitterComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002A942C  Caver::ParticleEmitter::TitleForType(Caver::ParticleEmitter::Type)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7908 string=0x00000000001F790C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ParticleEmitter::TitleForType()
{
  return _ZN5Caver15ParticleEmitter12TitleForTypeENS0_4TypeE();
}

