/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029DB8C
 * Mangled: _ZThn16_N5Caver32SkellyMonsterControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200EB0  Caver::MonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::GetBindings()
{
  return Caver::MonsterControllerComponent::GetBindings();
}

