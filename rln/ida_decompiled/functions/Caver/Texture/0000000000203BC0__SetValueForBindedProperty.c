/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203BC0
 * Mangled: ._ZN5Caver7Texture25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::Texture::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000004CB934  `non-virtual thunk to'Caver::Texture::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000004CB868  Caver::Texture::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203BC4 string=0x00000000004CB868 "("
 *   insn=0x0000000000203BC8 string=0x0000000000203BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::SetValueForBindedProperty(
        Caver::Texture *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver7Texture25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

