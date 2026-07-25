/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC0C0
 * Mangled: .alSourcePause
 * Demangled: .alSourcePause
 *
 * Callers: 1
 *   0x00000000004845E0  Caver::SoundEffectSource::isActive(void)
 *
 * Callees: 1
 *   0x00000000006FE958  alSourcePause
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC0C8 string=0x00000000001FC0CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 alSourcePause()
{
  return alSourcePause();
}

