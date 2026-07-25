/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330114
 * Mangled: _ZN5Caver5Proto17ItemDropComponent10SharedCtorEv
 * Demangled: Caver::Proto::ItemDropComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000330118 string=0x000000000033011C "mF"
 *   insn=0x0000000000330120 string=0x0000000000330124 ")"
 *   insn=0x0000000000330130 string=0x0000000000330134 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::ItemDropComponent::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[5].n128_u16[4] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::ItemDropComponent::_default_item_name_;
  this[5].n128_u32[3] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::ItemDropComponent::_default_item_identifier_;
  this[1] = result;
  return result;
}

