/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026B404
 * Mangled: _ZThn16_N5Caver25EntityControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCEE0  Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000026B408 string=0x00000000001FCEE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::EntityControllerComponent::ValueForBindedProperty(
        Caver::EntityControllerComponent *this,
        int a2)
{
  return Caver::EntityControllerComponent::ValueForBindedProperty(
           (Caver::EntityControllerComponent *)((char *)this - 16),
           a2);
}

