/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C3E0
 * Mangled: _ZN5Caver5Proto19BackgroundComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::BackgroundComponent::CopyFrom(Caver::Proto::BackgroundComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF4B0  Caver::Proto::BackgroundComponent::MergeFrom(Caver::Proto::BackgroundComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000031C3F4 string=0x000000000031C3F8 "@"
 *   insn=0x000000000031C400 string=0x000000000031C404 ""
 *   insn=0x000000000031C418 string=0x000000000031C41C "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BackgroundComponent::CopyFrom(
        Caver::Proto::BackgroundComponent *this,
        const Caver::Proto::BackgroundComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::BackgroundComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::BackgroundComponent::MergeFrom();
  }
}

