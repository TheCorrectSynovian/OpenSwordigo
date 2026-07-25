/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F548
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntry10SharedCtorEv
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000032F54C string=0x000000000032F550 "B"
 *   insn=0x000000000032F554 string=0x000000000032F558 ")"
 *   insn=0x000000000032F560 string=0x000000000032F564 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::ItemDropComponent_ItemDropEntry::_default_template_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::ItemDropComponent_ItemDropEntry::_default_item_identifier_;
  this[1] = result;
  return result;
}

