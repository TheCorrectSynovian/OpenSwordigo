/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022CFD4
 * Mangled: _ZN5Caver20OverlayTextComponent17InitWithComponentEPKS0_
 * Demangled: Caver::OverlayTextComponent::InitWithComponent(Caver::OverlayTextComponent const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5810  Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 6
 *   insn=0x000000000022CFE4 string=0x000000000022CFE8 "\n""
 *   insn=0x000000000022CFE8 string=0x000000000022CFEC "a"
 *   insn=0x000000000022CFE8 string=0x00000000001F5810 "P'"
 *   insn=0x000000000022CFF4 string=0x000000000022CFF8 "h>@"
 *   insn=0x000000000022CFF8 string=0x000000000022CFFC "aB"
 *   insn=0x000000000022D008 string=0x000000000022D00C "hN@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::InitWithComponent(
        Caver::OverlayTextComponent *this,
        const Caver::OverlayTextComponent *a2)
{
  __int64 result; // x0

  Caver::OverlayComponent::InitWithComponent(this, a2);
  sub_56A6A8((char *)this + 112);
  *((_QWORD *)this + 15) = *((_QWORD *)a2 + 15);
  result = sub_56A6A8((char *)this + 144);
  *((_QWORD *)this + 19) = *((_QWORD *)a2 + 19);
  return result;
}

