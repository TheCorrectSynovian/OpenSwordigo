/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314AB0
 * Mangled: _ZN5Caver5Proto15EntityComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::EntityComponent::CopyFrom(Caver::Proto::EntityComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F57D0  Caver::Proto::EntityComponent::MergeFrom(Caver::Proto::EntityComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000314AC4 string=0x0000000000314AC8 "@"
 *   insn=0x0000000000314AD0 string=0x0000000000314AD4 ""
 *   insn=0x0000000000314AE8 string=0x0000000000314AEC "9"
 *   insn=0x0000000000314AEC string=0x00000000001F57D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityComponent::CopyFrom(
        Caver::Proto::EntityComponent *this,
        const Caver::Proto::EntityComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::EntityComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::EntityComponent::MergeFrom();
  }
}

