/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215418
 * Mangled: _ZN5Caver9Component17InitWithComponentEPKS0_
 * Demangled: Caver::Component::InitWithComponent(Caver::Component const*)
 *
 * Callers: 1
 *   0x0000000000215380  Caver::BoneControlledCollisionShapeComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x0000000000215418 string=0x000000000021541C ""
 *   insn=0x000000000021541C string=0x0000000000215420 "!"
 *   insn=0x0000000000215420 string=0x0000000000215424 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Component::InitWithComponent(Caver::Component *this, const Caver::Component *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56, (char *)a2 + 56);
}

