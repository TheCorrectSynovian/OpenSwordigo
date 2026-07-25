/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCDF0
 * Mangled: .alSourcei
 * Demangled: .alSourcei
 *
 * Callers: 2
 *   0x0000000000483B14  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x00000000004845E0  Caver::SoundEffectSource::isActive(void)
 *
 * Callees: 1
 *   0x00000000006FE9D8  alSourcei
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCDF8 string=0x00000000001FCDFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 alSourcei()
{
  return alSourcei();
}

