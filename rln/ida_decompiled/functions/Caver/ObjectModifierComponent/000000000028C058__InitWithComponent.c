/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C058
 * Mangled: _ZN5Caver23ObjectModifierComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ObjectModifierComponent::InitWithComponent(Caver::ObjectModifierComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x000000000028C058 string=0x000000000028C05C ""
 *   insn=0x000000000028C05C string=0x000000000028C060 "!"
 *   insn=0x000000000028C060 string=0x000000000028C064 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectModifierComponent::InitWithComponent(
        Caver::ObjectModifierComponent *this,
        const Caver::ObjectModifierComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

