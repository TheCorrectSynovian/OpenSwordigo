/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302584
 * Mangled: _ZN5Caver5Proto5Scene8CopyFromERKS1_
 * Demangled: Caver::Proto::Scene::CopyFrom(Caver::Proto::Scene const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202F80  Caver::Proto::Scene::MergeFrom(Caver::Proto::Scene const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000302598 string=0x000000000030259C "@"
 *   insn=0x00000000003025A4 string=0x00000000003025A8 ""
 *   insn=0x00000000003025BC string=0x00000000003025C0 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Scene::CopyFrom(Caver::Proto::Scene *this, const Caver::Proto::Scene *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Scene *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Scene::MergeFrom(this, a2);
  }
}

