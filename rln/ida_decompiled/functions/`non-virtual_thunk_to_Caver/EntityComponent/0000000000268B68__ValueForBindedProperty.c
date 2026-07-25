/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268B68
 * Mangled: _ZThn16_N5Caver15EntityComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002688A4  Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000202610  Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::EntityComponent::ValueForBindedProperty(
        Caver::EntityComponent *this,
        int a2)
{
  return Caver::EntityComponent::ValueForBindedProperty((Caver::EntityComponent *)((char *)this - 16), a2);
}

