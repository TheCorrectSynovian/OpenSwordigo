/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DDF40
 * Mangled: _ZN5Caver5Proto7MapZone10SharedCtorEv
 * Demangled: Caver::Proto::MapZone::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000002DDF40 string=0x00000000002DDF44 "H "
 *   insn=0x00000000002DDF44 string=0x00000000002DDF48 ""
 *   insn=0x00000000002DDF48 string=0x00000000002DDF4C "I "
 *   insn=0x00000000002DDF4C string=0x00000000002DDF50 ")"
 *   insn=0x00000000002DDF54 string=0x00000000002DDF58 "J "
 *   insn=0x00000000002DDF58 string=0x00000000002DDF5C "J"
 *   insn=0x00000000002DDF60 string=0x00000000002DDF64 " "
 *   insn=0x00000000002DDF68 string=0x00000000002DDF6C "\n0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::MapZone::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[5].n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::MapZone::_default_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::MapZone::_default_title_;
  this[1] = result;
  this[6].n128_u64[0] = (unsigned __int64)&Caver::Proto::MapZone::_default_music_;
  this[6].n128_u32[2] = 0;
  return result;
}

