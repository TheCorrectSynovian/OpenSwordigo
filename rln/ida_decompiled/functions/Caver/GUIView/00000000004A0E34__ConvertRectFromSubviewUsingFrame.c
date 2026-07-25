/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0E34
 * Mangled: _ZNK5Caver7GUIView32ConvertRectFromSubviewUsingFrameERKNS_9RectangleEPKS0_S3_
 * Demangled: Caver::GUIView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&,Caver::GUIView const*,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F4AC0  Caver::GUIView::ConvertRectFromSubviewUsingFrame(Caver::Rectangle const&,Caver::GUIView const*,Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004A0E34 string=0x00000000004A0E38 "A@H"
 *   insn=0x00000000004A0E38 string=0x00000000004A0E3C "b"
 *   insn=0x00000000004A0E3C string=0x00000000004A0E40 ")"
 *   insn=0x00000000004A0E4C string=0x00000000004A0E50 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::GUIView::ConvertRectFromSubviewUsingFrame@<D0>(
        float32x2_t *a1@<X1>,
        __int64 a2@<X2>,
        float32x2_t *a3@<X3>,
        float32x2_t *a4@<X8>)
{
  unsigned __int64 v4; // x9
  float32x2_t result; // d0

  v4 = a1[1].n64_u64[0];
  result.n64_u64[0] = vadd_f32(
                        vsub_f32((float32x2_t)a1->n64_u64[0], *(float32x2_t *)(a2 + 132)),
                        (float32x2_t)a3->n64_u64[0]).n64_u64[0];
  a4->n64_u64[0] = result.n64_u64[0];
  a4[1].n64_u64[0] = v4;
  return result;
}

