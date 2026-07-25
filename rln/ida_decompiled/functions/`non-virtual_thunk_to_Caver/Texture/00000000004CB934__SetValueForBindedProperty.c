/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CB934
 * Mangled: _ZThn16_N5Caver7Texture25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::Texture::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203BC0  Caver::Texture::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::Texture::SetValueForBindedProperty(
        Caver::Texture *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::Texture::SetValueForBindedProperty((Caver::Texture *)((char *)this - 16), a2, a3);
}

