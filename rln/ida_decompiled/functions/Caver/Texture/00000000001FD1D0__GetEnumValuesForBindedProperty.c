/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD1D0
 * Mangled: ._ZN5Caver7Texture30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::Texture::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000004CB7B4  `non-virtual thunk to'Caver::Texture::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 1
 *   0x00000000004CAD94  Caver::Texture::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD1D8 string=0x00000000001FD1DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Texture::GetEnumValuesForBindedProperty()
{
  return _ZN5Caver7Texture30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE();
}

