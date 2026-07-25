/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F430
 * Mangled: _ZN5Caver5Proto18TouchableComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::TouchableComponent::CopyFrom(Caver::Proto::TouchableComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4BD0  Caver::Proto::TouchableComponent::MergeFrom(Caver::Proto::TouchableComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000032F444 string=0x000000000032F448 "@"
 *   insn=0x000000000032F450 string=0x000000000032F454 ""
 *   insn=0x000000000032F46C string=0x00000000001F4BD0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::TouchableComponent::CopyFrom(
        Caver::Proto::TouchableComponent *this,
        const Caver::Proto::TouchableComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::TouchableComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::TouchableComponent::MergeFrom();
  }
}

