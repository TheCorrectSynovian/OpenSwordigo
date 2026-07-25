/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEC60
 * Mangled: ._ZN5Caver23CharControllerComponent15RegisterLibraryEv
 * Demangled: Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000025B5D4  Caver::CharControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEC68 string=0x00000000001FEC6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::RegisterLibrary(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent15RegisterLibraryEv(this);
}

