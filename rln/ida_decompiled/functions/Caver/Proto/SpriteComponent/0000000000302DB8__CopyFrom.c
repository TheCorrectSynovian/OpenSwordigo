/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302DB8
 * Mangled: _ZN5Caver5Proto15SpriteComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SpriteComponent::CopyFrom(Caver::Proto::SpriteComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE560  Caver::Proto::SpriteComponent::MergeFrom(Caver::Proto::SpriteComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000302DCC string=0x0000000000302DD0 "@"
 *   insn=0x0000000000302DD8 string=0x0000000000302DDC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpriteComponent::CopyFrom(
        Caver::Proto::SpriteComponent *this,
        const Caver::Proto::SpriteComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SpriteComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SpriteComponent::MergeFrom();
  }
}

