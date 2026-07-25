/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023FC58
 * Mangled: _ZN5Caver18TouchableComponent7PrepareEv
 * Demangled: Caver::TouchableComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FDFC0  Caver::TouchableComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000023FC58 string=0x00000000001FDFC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TouchableComponent::Prepare(Caver::TouchableComponent *this)
{
  return Caver::TouchableComponent::RegisterLibrary(this);
}

