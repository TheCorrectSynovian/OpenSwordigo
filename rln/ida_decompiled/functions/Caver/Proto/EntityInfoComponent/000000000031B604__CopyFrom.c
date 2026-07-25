/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B604
 * Mangled: _ZN5Caver5Proto19EntityInfoComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::EntityInfoComponent::CopyFrom(Caver::Proto::EntityInfoComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFD60  Caver::Proto::EntityInfoComponent::MergeFrom(Caver::Proto::EntityInfoComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000031B618 string=0x000000000031B61C "@"
 *   insn=0x000000000031B624 string=0x000000000031B628 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityInfoComponent::CopyFrom(
        Caver::Proto::EntityInfoComponent *this,
        const Caver::Proto::EntityInfoComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::EntityInfoComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::EntityInfoComponent::MergeFrom();
  }
}

