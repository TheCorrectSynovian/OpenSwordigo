/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B538
 * Mangled: _ZN5Caver5Proto14ShapeComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ShapeComponent::CopyFrom(Caver::Proto::ShapeComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002032D0  Caver::Proto::ShapeComponent::MergeFrom(Caver::Proto::ShapeComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000030B54C string=0x000000000030B550 "@"
 *   insn=0x000000000030B558 string=0x000000000030B55C ""
 *   insn=0x000000000030B570 string=0x000000000030B574 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShapeComponent::CopyFrom(
        Caver::Proto::ShapeComponent *this,
        const Caver::Proto::ShapeComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ShapeComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ShapeComponent::MergeFrom();
  }
}

