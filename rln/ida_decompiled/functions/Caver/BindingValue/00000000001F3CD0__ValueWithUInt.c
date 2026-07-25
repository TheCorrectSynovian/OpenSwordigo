/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3CD0
 * Mangled: ._ZN5Caver12BindingValue13ValueWithUIntEi
 * Demangled: Caver::BindingValue::ValueWithUInt(int)
 *
 * Callers: 1
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3CD8 string=0x00000000001F3CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::BindingValue::ValueWithUInt(Caver::BindingValue *this)
{
  JUMPOUT(0x488350);
}

