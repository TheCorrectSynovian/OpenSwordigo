/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8540
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SwingableWeaponControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002C7EA8  Caver::SwingableWeaponControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000002C7EA8  Caver::SwingableWeaponControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8548 string=0x00000000001F854C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SwingableWeaponControllerComponent::GetBindings()
{
  return _ZN5Caver34SwingableWeaponControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

