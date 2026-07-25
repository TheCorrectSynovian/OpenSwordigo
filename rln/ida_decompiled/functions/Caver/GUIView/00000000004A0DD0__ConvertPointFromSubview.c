/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0DD0
 * Mangled: _ZNK5Caver7GUIView23ConvertPointFromSubviewERKNS_7Vector2EPKS0_
 * Demangled: Caver::GUIView::ConvertPointFromSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Callers: 1
 *   0x00000000001F34A0  Caver::GUIView::ConvertPointFromSubview(Caver::Vector2 const&,Caver::GUIView const*)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004A0DD0 string=0x00000000004A0DD4 "!"
 *   insn=0x00000000004A0DD4 string=0x00000000004A0DD8 "B@G"
 *   insn=0x00000000004A0DD8 string=0x00000000004A0DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::GUIView::ConvertPointFromSubview@<D0>(
        float32x2_t *a1@<X1>,
        __int64 a2@<X2>,
        float32x2_t *a3@<X8>)
{
  float32x2_t result; // d0

  result.n64_u64[0] = vadd_f32(
                        vsub_f32((float32x2_t)a1->n64_u64[0], *(float32x2_t *)(a2 + 132)),
                        *(float32x2_t *)(a2 + 116)).n64_u64[0];
  a3->n64_u64[0] = result.n64_u64[0];
  return result;
}

