/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0E10
 * Mangled: _ZNK5Caver7GUIView22ConvertRectFromSubviewERKNS_9RectangleEPKS0_
 * Demangled: Caver::GUIView::ConvertRectFromSubview(Caver::Rectangle const&,Caver::GUIView const*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004A0E10 string=0x00000000004A0E14 "A@H"
 *   insn=0x00000000004A0E14 string=0x00000000004A0E18 "B@G"
 *   insn=0x00000000004A0E18 string=0x00000000004A0E1C ")"
 *   insn=0x00000000004A0E28 string=0x00000000004A0E2C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::GUIView::ConvertRectFromSubview@<D0>(
        float32x2_t *a1@<X1>,
        __int64 a2@<X2>,
        float32x2_t *a3@<X8>)
{
  unsigned __int64 v3; // x9
  float32x2_t result; // d0

  v3 = a1[1].n64_u64[0];
  result.n64_u64[0] = vadd_f32(
                        vsub_f32((float32x2_t)a1->n64_u64[0], *(float32x2_t *)(a2 + 132)),
                        *(float32x2_t *)(a2 + 116)).n64_u64[0];
  a3->n64_u64[0] = result.n64_u64[0];
  a3[1].n64_u64[0] = v3;
  return result;
}

