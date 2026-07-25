/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200260
 * Mangled: ._ZN5Caver7ProgramC2ERKSs
 * Demangled: Caver::Program::Program(std::string const&)
 *
 * Callers: 1
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200268 string=0x000000000020026C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Program::Program()
{
  JUMPOUT(0x48851C);
}

