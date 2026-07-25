/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203B70
 * Mangled: ._ZN5Caver13AudioListener17UpdateOrientationEv
 * Demangled: Caver::AudioListener::UpdateOrientation(void)
 *
 * Callers: 2
 *   0x00000000004D12E4  Caver::AudioListener::setGain(float)
 *   0x00000000004D1574  Caver::AudioListener::UpdateOrientation(void)
 *
 * Callees: 1
 *   0x00000000004D1574  Caver::AudioListener::UpdateOrientation(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203B78 string=0x0000000000203B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioListener::UpdateOrientation(Caver::AudioListener *this)
{
  return _ZN5Caver13AudioListener17UpdateOrientationEv(this);
}

