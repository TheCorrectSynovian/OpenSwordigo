/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAA68
 * Mangled: _ZN5Caver5Proto24CollectableItemComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::CollectableItemComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FAA74 string=0x00000000002FAA78 "2"
 *   insn=0x00000000002FAA78 string=0x00000000002FAA7C "`"
 *   insn=0x00000000002FAA78 string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollectableItemComponent::InitAsDefaultInstance(
        Caver::Proto::CollectableItemComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 6) = result;
  return result;
}

