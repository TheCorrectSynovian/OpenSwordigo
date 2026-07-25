/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDDA0
 * Mangled: ._ZNK5Caver9Rectangle15RectangleInsideERKS0_
 * Demangled: Caver::Rectangle::RectangleInside(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x0000000000473948  Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000004B1810  Caver::Rectangle::RectangleInside(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDDA4 string=0x00000000004B1810 " "
 *   insn=0x00000000001FDDA8 string=0x00000000001FDDAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::RectangleInside(Caver::Rectangle *this, const Caver::Rectangle *a2)
{
  return _ZNK5Caver9Rectangle15RectangleInsideERKS0_(this, a2);
}

