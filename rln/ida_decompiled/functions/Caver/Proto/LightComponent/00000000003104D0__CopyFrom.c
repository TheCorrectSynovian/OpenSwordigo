/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003104D0
 * Mangled: _ZN5Caver5Proto14LightComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::LightComponent::CopyFrom(Caver::Proto::LightComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201CA0  Caver::Proto::LightComponent::MergeFrom(Caver::Proto::LightComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000003104E4 string=0x00000000003104E8 "@"
 *   insn=0x00000000003104F0 string=0x00000000003104F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::LightComponent::CopyFrom(
        Caver::Proto::LightComponent *this,
        const Caver::Proto::LightComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::LightComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::LightComponent::MergeFrom();
  }
}

