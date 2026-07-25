/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330650
 * Mangled: _ZNK5Caver5Proto17ItemDropComponent3NewEv
 * Demangled: Caver::Proto::ItemDropComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x000000000033065C string=0x0000000000330660 ""
 *   insn=0x000000000033065C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000330660 string=0x0000000000330664 ""
 *   insn=0x0000000000330668 string=0x000000000033066C "mF"
 *   insn=0x0000000000330670 string=0x0000000000330674 "\t0"
 *   insn=0x000000000033067C string=0x0000000000330680 "aE"
 *   insn=0x0000000000330688 string=0x000000000033068C "A"
 *   insn=0x000000000033068C string=0x0000000000330690 ""
 *   insn=0x0000000000330694 string=0x0000000000330698 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::ItemDropComponent::New(Caver::Proto::ItemDropComponent *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x60u);
  v1[2].n128_u64[0] = (unsigned __int64)&v1[3].n128_u64[1];
  v1[3].n128_u32[0] = 4;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::ItemDropComponent::_default_item_name_;
  v1[2].n128_u64[1] = 0;
  v1->n128_u32[2] = 0;
  v1->n128_u64[0] = (unsigned __int64)off_6C95B8;
  v1[5].n128_u16[4] = 0;
  v1[5].n128_u32[3] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::ItemDropComponent::_default_item_identifier_;
  v1[1] = result;
  return result;
}

