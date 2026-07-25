/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA7F0
 * Mangled: ._ZN5Caver14ObjectTemplate25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ObjectTemplate::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000460B48  Caver::ObjectTemplate::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000460B48  Caver::ObjectTemplate::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA7F8 string=0x00000000001FA7FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectTemplate::SetValueForBindedProperty(
        Caver::ObjectTemplate *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver14ObjectTemplate25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

