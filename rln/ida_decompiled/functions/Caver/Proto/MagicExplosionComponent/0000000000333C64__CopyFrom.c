/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333C64
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::MagicExplosionComponent::CopyFrom(Caver::Proto::MagicExplosionComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA070  Caver::Proto::MagicExplosionComponent::MergeFrom(Caver::Proto::MagicExplosionComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000333C78 string=0x0000000000333C7C "@"
 *   insn=0x0000000000333C84 string=0x0000000000333C88 ""
 *   insn=0x0000000000333CA0 string=0x00000000001FA070 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicExplosionComponent::CopyFrom(
        Caver::Proto::MagicExplosionComponent *this,
        const Caver::Proto::MagicExplosionComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MagicExplosionComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MagicExplosionComponent::MergeFrom();
  }
}

