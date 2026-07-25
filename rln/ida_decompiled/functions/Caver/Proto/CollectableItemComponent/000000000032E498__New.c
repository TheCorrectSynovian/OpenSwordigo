/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032E498
 * Mangled: _ZNK5Caver5Proto24CollectableItemComponent3NewEv
 * Demangled: Caver::Proto::CollectableItemComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 7
 *   insn=0x000000000032E4A0 string=0x000000000032E4A4 "O"
 *   insn=0x000000000032E4A4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032E4A8 string=0x000000000032E4AC "5G"
 *   insn=0x000000000032E4B4 string=0x000000000032E4B8 ""
 *   insn=0x000000000032E4BC string=0x000000000032E4C0 "A"
 *   insn=0x000000000032E4C0 string=0x000000000032E4C4 "|"
 *   insn=0x000000000032E4C8 string=0x000000000032E4CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::CollectableItemComponent::New(Caver::Proto::CollectableItemComponent *this)
{
  __int64 v1; // x0
  __n128 result; // q0

  v1 = operator new(0x40u);
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::CollectableItemComponent::_default_item_name_;
  *(_DWORD *)(v1 + 16) = 0;
  *(_QWORD *)v1 = off_6C9450;
  *(_QWORD *)(v1 + 8) = 0;
  *(_BYTE *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::CollectableItemComponent::_default_identifier_;
  *(__n128 *)(v1 + 24) = result;
  return result;
}

