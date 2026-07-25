/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000225A08
 * Mangled: _ZThn16_N5Caver14ModelComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ModelComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F54D0  Caver::ModelComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000225A0C string=0x00000000001F54D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ModelComponent::ValueForBindedProperty(
        Caver::ModelComponent *this,
        int a2)
{
  return Caver::ModelComponent::ValueForBindedProperty((Caver::ModelComponent *)((char *)this - 16), a2);
}

