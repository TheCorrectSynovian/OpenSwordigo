/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D55D0
 * Mangled: _ZN5Caver5Proto7Program10SharedCtorEv
 * Demangled: Caver::Proto::Program::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000002D55D4 string=0x00000000002D55D8 ""
 *   insn=0x00000000002D55DC string=0x00000000002D55E0 ")mB"
 *   insn=0x00000000002D55E4 string=0x00000000002D55E8 "J9@"
 *   insn=0x00000000002D55EC string=0x00000000002D55F0 " "
 *   insn=0x00000000002D55F4 string=0x00000000002D55F8 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::Program::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::Program::_default_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::Program::_default_string_;
  this[1] = result;
  this[2].n128_u64[0] = (unsigned __int64)&Caver::Proto::Program::_default_bytes_;
  this[2].n128_u32[2] = 0;
  return result;
}

