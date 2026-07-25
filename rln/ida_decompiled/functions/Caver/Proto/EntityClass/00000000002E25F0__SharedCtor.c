/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E25F0
 * Mangled: _ZN5Caver5Proto11EntityClass10SharedCtorEv
 * Demangled: Caver::Proto::EntityClass::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000002E25F0 string=0x00000000002E25F4 " "
 *   insn=0x00000000002E25F4 string=0x00000000002E25F8 "F"
 *   insn=0x00000000002E25F8 string=0x00000000002E25FC "\t "
 *   insn=0x00000000002E25FC string=0x00000000002E2600 ")}C"
 *   insn=0x00000000002E2600 string=0x00000000002E2604 "\n "
 *   insn=0x00000000002E2608 string=0x00000000002E260C "* "
 *   insn=0x00000000002E260C string=0x00000000002E2610 " "
 *   insn=0x00000000002E2610 string=0x00000000002E2614 "\n|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::EntityClass::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::EntityClass::_default_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::EntityClass::_default_title_;
  this[2].n128_u64[0] = 16843008;
  this[1] = result;
  this[2].n128_u64[1] = 0;
  return result;
}

