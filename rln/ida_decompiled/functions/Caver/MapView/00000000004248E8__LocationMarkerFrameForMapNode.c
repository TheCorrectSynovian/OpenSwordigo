/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004248E8
 * Mangled: _ZN5Caver7MapView29LocationMarkerFrameForMapNodeEPNS_7MapNodeE
 * Demangled: Caver::MapView::LocationMarkerFrameForMapNode(Caver::MapNode *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000004248E8 string=0x00000000004248EC "\n"
 *   insn=0x00000000004248EC string=0x00000000004248F0 "TA"
 *   insn=0x00000000004248F4 string=0x00000000004248F8 ")"
 *   insn=0x00000000004248F8 string=0x00000000004248FC "Iii"
 *   insn=0x00000000004248FC string=0x0000000000424900 "`"
 *   insn=0x0000000000424908 string=0x000000000042490C ")"
 *   insn=0x000000000042490C string=0x0000000000424910 "!"
 *   insn=0x0000000000424910 string=0x0000000000424914 "!(""
 *   insn=0x0000000000424914 string=0x0000000000424918 "c"
 *   insn=0x0000000000424918 string=0x000000000042491C """
 *   insn=0x000000000042491C string=0x0000000000424920 "#"
 *   insn=0x0000000000424920 string=0x0000000000424924 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __usercall Caver::MapView::LocationMarkerFrameForMapNode@<D0>(
        Caver::MapView *this@<X0>,
        Caver::MapNode *a2@<X1>,
        float32x2_t *a3@<X8>,
        int32x2_t a4@<D3>)
{
  double result; // d0
  float32x2_t v5; // d3

  result = *(double *)(*((_QWORD *)this + 85) + 124LL);
  a4.n64_u32[0] = 7.0;
  v5.n64_u64[0] = vdup_lane_s32(a4, 0).n64_u64[0];
  v5.n64_f32[0] = vmuls_n_f32(-0.5, *(float *)&result) + -3.0;
  a3->n64_u64[0] = vadd_f32(*(float32x2_t *)(**(_QWORD **)(*((_QWORD *)this + 35) + 16LL * *(_QWORD *)a2) + 8LL), v5).n64_u64[0];
  a3[1].n64_f64[0] = result;
  return result;
}

