/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDFC0
 * Mangled: ._ZN5Caver18TouchableComponent15RegisterLibraryEv
 * Demangled: Caver::TouchableComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000023FC58  Caver::TouchableComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000023FC5C  Caver::TouchableComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDFC8 string=0x00000000001FDFCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TouchableComponent::RegisterLibrary(Caver::TouchableComponent *this)
{
  return _ZN5Caver18TouchableComponent15RegisterLibraryEv(this);
}

