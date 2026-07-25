/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DF50
 * Mangled: _ZN5Caver5Proto24CollectableItemComponentC2Ev
 * Demangled: Caver::Proto::CollectableItemComponent::CollectableItemComponent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000032DF50 string=0x000000000032DF54 ""
 *   insn=0x000000000032DF60 string=0x000000000032DF64 ")5G"
 *   insn=0x000000000032DF68 string=0x000000000032DF6C "J"
 *   insn=0x000000000032DF6C string=0x000000000032DF70 "A"
 *   insn=0x000000000032DF70 string=0x000000000032DF74 " "
 *   insn=0x000000000032DF78 string=0x000000000032DF7C "@"
 *   insn=0x000000000032DF80 string=0x000000000032DF84 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::CollectableItemComponent::CollectableItemComponent(
        Caver::Proto::CollectableItemComponent *this)
{
  __n128 result; // q0

  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::CollectableItemComponent::_default_item_name_;
  *((_BYTE *)this + 40) = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::CollectableItemComponent::_default_identifier_;
  *((_QWORD *)this + 6) = 0;
  *(_QWORD *)this = off_6C9450;
  *(__n128 *)((char *)this + 24) = result;
  *((_DWORD *)this + 14) = 0;
  return result;
}

