/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCEE0
 * Mangled: ._ZN5Caver25EntityControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x000000000026B404  `non-virtual thunk to'Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000026B284  Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCEE8 string=0x00000000001FCEEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityControllerComponent::ValueForBindedProperty(
        Caver::EntityControllerComponent *this,
        int a2)
{
  return _ZN5Caver25EntityControllerComponent22ValueForBindedPropertyEi(this, a2);
}

