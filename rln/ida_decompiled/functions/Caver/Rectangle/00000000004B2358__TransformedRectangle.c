/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2358
 * Mangled: _ZNK5Caver9Rectangle20TransformedRectangleERKNS_7Matrix4E
 * Demangled: Caver::Rectangle::TransformedRectangle(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x0000000000202A40  Caver::Rectangle::TransformedRectangle(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000002038B0  Caver::Rectangle::Transform(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000004B2360 string=0x00000000004B2364 "SE"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Rectangle::TransformedRectangle@<X0>(
        Caver::Rectangle *this@<X0>,
        const Caver::Matrix4 *a2@<X1>,
        Caver::Rectangle *a3@<X8>)
{
  *(_OWORD *)a3 = *(_OWORD *)this;
  return Caver::Rectangle::Transform(a3, a2);
}

