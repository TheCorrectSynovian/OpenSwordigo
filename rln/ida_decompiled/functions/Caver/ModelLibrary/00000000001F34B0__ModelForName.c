/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F34B0
 * Mangled: ._ZN5Caver12ModelLibrary12ModelForNameERKSs
 * Demangled: Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callers: 2
 *   0x00000000002240E4  Caver::ModelComponent::LoadModel(void)
 *   0x0000000000225A10  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F34B8 string=0x00000000001F34BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ModelLibrary::ModelForName()
{
  return _ZN5Caver12ModelLibrary12ModelForNameERKSs();
}

