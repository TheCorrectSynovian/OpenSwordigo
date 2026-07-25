/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9AA0
 * Mangled: ._ZN5Caver18TouchableComponent17InitWithComponentEPKS0_
 * Demangled: Caver::TouchableComponent::InitWithComponent(Caver::TouchableComponent const*)
 *
 * Callers: 1
 *   0x0000000000240060  Caver::TouchableComponent::~TouchableComponent()
 *
 * Callees: 1
 *   0x000000000023F410  Caver::TouchableComponent::InitWithComponent(Caver::TouchableComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9AA8 string=0x00000000001F9AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TouchableComponent::InitWithComponent(
        Caver::TouchableComponent *this,
        const Caver::TouchableComponent *a2)
{
  return _ZN5Caver18TouchableComponent17InitWithComponentEPKS0_(this, a2);
}

