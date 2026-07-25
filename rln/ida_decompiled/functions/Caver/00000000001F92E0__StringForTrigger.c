/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F92E0
 * Mangled: ._ZN5Caver16StringForTriggerENS_16ProgramComponent7TriggerE
 * Demangled: Caver::StringForTrigger(Caver::ProgramComponent::Trigger)
 *
 * Callers: 2
 *   0x0000000000231FC8  Caver::ProgramComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000232370  Caver::ProgramComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000231818  Caver::StringForTrigger(Caver::ProgramComponent::Trigger)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F92E8 string=0x00000000001F92EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StringForTrigger()
{
  return _ZN5Caver16StringForTriggerENS_16ProgramComponent7TriggerE();
}

