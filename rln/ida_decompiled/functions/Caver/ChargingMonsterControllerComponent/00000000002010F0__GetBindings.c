/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002010F0
 * Mangled: ._ZN5Caver34ChargingMonsterControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ChargingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000295924  Caver::ChargingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x0000000000295924  Caver::ChargingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002010F8 string=0x00000000002010FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ChargingMonsterControllerComponent::GetBindings()
{
  return _ZN5Caver34ChargingMonsterControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

