/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201100
 * Mangled: ._ZN5Caver7Program14InitWithStringERKSsPSs
 * Demangled: Caver::Program::InitWithString(std::string const&,std::string *)
 *
 * Callers: 2
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x00000000004C0068  Caver::Program::~Program()
 *
 * Callees: 1
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201108 string=0x000000000020110C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Program::InitWithString()
{
  return _ZN5Caver7Program14InitWithStringERKSsPSs();
}

