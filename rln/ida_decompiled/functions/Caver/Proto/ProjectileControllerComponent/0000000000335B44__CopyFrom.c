/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335B44
 * Mangled: _ZN5Caver5Proto29ProjectileControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ProjectileControllerComponent::CopyFrom(Caver::Proto::ProjectileControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF4F0  Caver::Proto::ProjectileControllerComponent::MergeFrom(Caver::Proto::ProjectileControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000335B58 string=0x0000000000335B5C "@"
 *   insn=0x0000000000335B64 string=0x0000000000335B68 ""
 *   insn=0x0000000000335B7C string=0x0000000000335B80 "\&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ProjectileControllerComponent::CopyFrom(
        Caver::Proto::ProjectileControllerComponent *this,
        const Caver::Proto::ProjectileControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ProjectileControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ProjectileControllerComponent::MergeFrom();
  }
}

