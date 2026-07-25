/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD720
 * Mangled: ._ZN5Caver24PressureTriggerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::PressureTriggerComponent::InitWithComponent(Caver::PressureTriggerComponent const*)
 *
 * Callers: 1
 *   0x00000000002B63F0  Caver::PressureTriggerComponent::~PressureTriggerComponent()
 *
 * Callees: 1
 *   0x00000000002B51E8  Caver::PressureTriggerComponent::InitWithComponent(Caver::PressureTriggerComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD728 string=0x00000000001FD72C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PressureTriggerComponent::InitWithComponent(
        Caver::PressureTriggerComponent *this,
        const Caver::PressureTriggerComponent *a2)
{
  return _ZN5Caver24PressureTriggerComponent17InitWithComponentEPKS0_(this, a2);
}

