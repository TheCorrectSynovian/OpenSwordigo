/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309E7C
 * Mangled: _ZN5Caver5Proto23TextureMappingComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::TextureMappingComponent::CopyFrom(Caver::Proto::TextureMappingComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAED0  Caver::Proto::TextureMappingComponent::MergeFrom(Caver::Proto::TextureMappingComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000309E90 string=0x0000000000309E94 "@"
 *   insn=0x0000000000309E9C string=0x0000000000309EA0 ""
 *   insn=0x0000000000309EB8 string=0x00000000001FAED0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::TextureMappingComponent::CopyFrom(
        Caver::Proto::TextureMappingComponent *this,
        const Caver::Proto::TextureMappingComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::TextureMappingComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::TextureMappingComponent::MergeFrom(this, a2);
  }
}

