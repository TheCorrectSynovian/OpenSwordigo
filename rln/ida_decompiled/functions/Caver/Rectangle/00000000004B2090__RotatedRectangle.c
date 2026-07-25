/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2090
 * Mangled: _ZNK5Caver9Rectangle16RotatedRectangleEf
 * Demangled: Caver::Rectangle::RotatedRectangle(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB7D0  Caver::Rectangle::Rotate(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000004B209C string=0x00000000001FB7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Rectangle::RotatedRectangle@<X0>(
        Caver::Rectangle *this@<X0>,
        float a2@<S0>,
        Caver::Rectangle *a3@<X8>)
{
  *(_OWORD *)a3 = *(_OWORD *)this;
  return Caver::Rectangle::Rotate(a3, a2);
}

