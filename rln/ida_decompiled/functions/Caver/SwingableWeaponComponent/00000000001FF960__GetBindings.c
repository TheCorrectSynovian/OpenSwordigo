/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF960
 * Mangled: ._ZN5Caver24SwingableWeaponComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SwingableWeaponComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002C4414  Caver::SwingableWeaponComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000002C4414  Caver::SwingableWeaponComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF968 string=0x00000000001FF96C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SwingableWeaponComponent::GetBindings()
{
  return _ZN5Caver24SwingableWeaponComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

