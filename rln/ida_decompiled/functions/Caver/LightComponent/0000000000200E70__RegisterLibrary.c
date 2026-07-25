/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E70
 * Mangled: ._ZN5Caver14LightComponent15RegisterLibraryEv
 * Demangled: Caver::LightComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000221B34  Caver::LightComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000221B88  Caver::LightComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E78 string=0x0000000000200E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightComponent::RegisterLibrary(Caver::LightComponent *this)
{
  return _ZN5Caver14LightComponent15RegisterLibraryEv(this);
}

