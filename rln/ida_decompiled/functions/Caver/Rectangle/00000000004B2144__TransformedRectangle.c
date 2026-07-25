/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2144
 * Mangled: _ZNK5Caver9Rectangle20TransformedRectangleERKNS_7Vector2EfS3_
 * Demangled: Caver::Rectangle::TransformedRectangle(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB7D0  Caver::Rectangle::Rotate(float)
 *
 * Referenced strings: 16
 *   insn=0x00000000004B214C string=0x00000000004B2150 "A"
 *   insn=0x00000000004B2160 string=0x00000000004B2164 "$$"
 *   insn=0x00000000004B2164 string=0x00000000004B2168 """"
 *   insn=0x00000000004B2174 string=0x00000000004B2178 "b"
 *   insn=0x00000000004B2178 string=0x00000000004B217C "d"
 *   insn=0x00000000004B2180 string=0x00000000004B2184 "B($"
 *   insn=0x00000000004B2180 string=0x00000000004B2194 "(  "
 *   insn=0x00000000004B2188 string=0x00000000004B218C "b"
 *   insn=0x00000000004B218C string=0x00000000004B2190 "d\n"
 *   insn=0x00000000004B2198 string=0x00000000004B219C "b(!"
 *   insn=0x00000000004B219C string=0x00000000004B21A0 "!@!"
 *   insn=0x00000000004B21A0 string=0x00000000004B21A4 "b"
 *   insn=0x00000000004B21A4 string=0x00000000004B21A8 "a"
 *   insn=0x00000000004B21B0 string=0x00000000001FB7D0 "0'"
 *   insn=0x00000000004B21B4 string=0x00000000004B21B8 "a"
 *   insn=0x00000000004B21C0 string=0x00000000004B21C4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Rectangle::TransformedRectangle@<D0>(
        Caver::Rectangle *this@<X0>,
        float32x2_t *a2@<X1>,
        float a3@<S0>,
        const Caver::Vector2 *a4@<X2>,
        float *a5@<X8>)
{
  float v5; // s6
  float v8; // s4
  float v9; // s2
  float v10; // s3
  float v11; // s1
  float32x2_t result; // d0

  v5 = *((float *)a4 + 1);
  v8 = *(float *)a4 * *((float *)this + 2);
  v9 = *(float *)a4 * *(float *)this;
  v10 = v5 * *((float *)this + 1);
  v11 = v5 * *((float *)this + 3);
  *a5 = v9;
  a5[1] = v10;
  a5[2] = v8;
  a5[3] = v11;
  if ( v8 < 0.0 )
  {
    *a5 = v9 + v8;
    a5[2] = -v8;
  }
  if ( v11 < 0.0 )
  {
    a5[1] = v10 + v11;
    a5[3] = -v11;
  }
  Caver::Rectangle::Rotate((Caver::Rectangle *)a5, a3);
  result.n64_u64[0] = vadd_f32((float32x2_t)a2->n64_u64[0], *(float32x2_t *)a5).n64_u64[0];
  *(float32x2_t *)a5 = result;
  return result;
}

