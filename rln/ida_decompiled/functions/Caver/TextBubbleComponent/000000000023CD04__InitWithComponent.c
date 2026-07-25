/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CD04
 * Mangled: _ZN5Caver19TextBubbleComponent17InitWithComponentEPKS0_
 * Demangled: Caver::TextBubbleComponent::InitWithComponent(Caver::TextBubbleComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x000000000023CD04 string=0x000000000023CD08 ""
 *   insn=0x000000000023CD08 string=0x000000000023CD0C "!"
 *   insn=0x000000000023CD0C string=0x000000000023CD10 "\t "
 *   insn=0x000000000023CD14 string=0x000000000023CD18 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextBubbleComponent::InitWithComponent(
        Caver::TextBubbleComponent *this,
        const Caver::TextBubbleComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

