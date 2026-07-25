/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000306C9C
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::GroundPolygonComponent::CopyFrom(Caver::Proto::GroundPolygonComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB5E0  Caver::Proto::GroundPolygonComponent::MergeFrom(Caver::Proto::GroundPolygonComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000306CB0 string=0x0000000000306CB4 "@"
 *   insn=0x0000000000306CBC string=0x0000000000306CC0 ""
 *   insn=0x0000000000306CD4 string=0x0000000000306CD8 "B"
 *   insn=0x0000000000306CD8 string=0x00000000001FB5E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundPolygonComponent::CopyFrom(
        Caver::Proto::GroundPolygonComponent *this,
        const Caver::Proto::GroundPolygonComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GroundPolygonComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GroundPolygonComponent::MergeFrom();
  }
}

