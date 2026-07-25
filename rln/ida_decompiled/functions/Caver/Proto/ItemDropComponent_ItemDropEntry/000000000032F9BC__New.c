/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F9BC
 * Mangled: _ZNK5Caver5Proto31ItemDropComponent_ItemDropEntry3NewEv
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x000000000032F9C8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032F9CC string=0x000000000032F9D0 ""
 *   insn=0x000000000032F9D8 string=0x000000000032F9DC ")B"
 *   insn=0x000000000032F9E0 string=0x000000000032F9E4 "J"
 *   insn=0x000000000032F9E4 string=0x000000000032F9E8 "A"
 *   insn=0x000000000032F9E8 string=0x000000000032F9EC " "
 *   insn=0x000000000032F9EC string=0x000000000032F9F0 ""
 *   insn=0x000000000032F9F0 string=0x000000000032F9F4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::New(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x30u);
  v1->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::ItemDropComponent_ItemDropEntry::_default_template_name_;
  v1->n128_u64[0] = (unsigned __int64)off_6C9540;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::ItemDropComponent_ItemDropEntry::_default_item_identifier_;
  v1[1] = result;
  v1[2].n128_u64[0] = 0;
  v1[2].n128_u64[1] = 0;
  return result;
}

