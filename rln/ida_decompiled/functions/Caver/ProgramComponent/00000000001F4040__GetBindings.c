/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4040
 * Mangled: ._ZN5Caver16ProgramComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ProgramComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000231818  Caver::StringForTrigger(Caver::ProgramComponent::Trigger)
 *
 * Callees: 1
 *   0x0000000000231818  Caver::StringForTrigger(Caver::ProgramComponent::Trigger)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4048 string=0x00000000001F404C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ProgramComponent::GetBindings()
{
  JUMPOUT(0x2319A8);
}

