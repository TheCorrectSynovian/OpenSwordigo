/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFC08
 * Mangled: _ZN5Caver12OrientedRect15OBFromRectangleERKNS_9RectangleE
 * Demangled: Caver::OrientedRect::OBFromRectangle(Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004AFC08 string=0x00000000004AFC0C "I"
 *   insn=0x00000000004AFC0C string=0x00000000004AFC10 """
 *   insn=0x00000000004AFC14 string=0x00000000004AFC18 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::OrientedRect::OBFromRectangle@<D0>(float32x2_t *a1@<X0>, __int64 a2@<X8>)
{
  float32x2_t v2; // d1
  float32x2_t result; // d0

  v2.n64_u64[0] = vmul_f32(a1[1], (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  result.n64_u64[0] = vadd_f32((float32x2_t)a1->n64_u64[0], v2).n64_u64[0];
  *(_OWORD *)(a2 + 8) = xmmword_597340;
  *(float32x2_t *)a2 = result;
  *(float32x2_t *)(a2 + 24) = v2;
  return result;
}

