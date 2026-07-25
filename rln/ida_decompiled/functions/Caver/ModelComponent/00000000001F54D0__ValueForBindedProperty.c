/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F54D0
 * Mangled: ._ZN5Caver14ModelComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ModelComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000225A08  `non-virtual thunk to'Caver::ModelComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002258F4  Caver::ModelComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F54D8 string=0x00000000001F54DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelComponent::ValueForBindedProperty(Caver::ModelComponent *this, int a2)
{
  return _ZN5Caver14ModelComponent22ValueForBindedPropertyEi(this, a2);
}

