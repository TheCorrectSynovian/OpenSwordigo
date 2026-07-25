/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DF94
 * Mangled: _ZN5Caver5Proto24CollectableItemComponent10SharedCtorEv
 * Demangled: Caver::Proto::CollectableItemComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000032DF9C string=0x000000000032DFA0 "5G"
 *   insn=0x000000000032DFA4 string=0x000000000032DFA8 ")"
 *   insn=0x000000000032DFB4 string=0x000000000032DFB8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::CollectableItemComponent::SharedCtor(Caver::Proto::CollectableItemComponent *this)
{
  __n128 result; // q0

  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 40) = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::CollectableItemComponent::_default_item_name_;
  *((_QWORD *)this + 6) = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::CollectableItemComponent::_default_identifier_;
  *(__n128 *)((char *)this + 24) = result;
  *((_DWORD *)this + 14) = 0;
  return result;
}

