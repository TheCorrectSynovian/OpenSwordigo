/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4578
 * Mangled: _ZN5Caver14GUIPopoverView28AdjustContentFrameVerticallyENS_9RectangleE
 * Demangled: Caver::GUIPopoverView::AdjustContentFrameVertically(Caver::Rectangle)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004D4580 string=0x00000000004D4584 "\t"
 *   insn=0x00000000004D4584 string=0x00000000004D4588 "%@@"
 *   insn=0x00000000004D458C string=0x00000000004D4590 ")"
 *   insn=0x00000000004D4590 string=0x00000000004D4594 "\t"
 *   insn=0x00000000004D4594 string=0x00000000004D4598 "\n,@"
 *   insn=0x00000000004D4598 string=0x00000000004D459C "!"
 *   insn=0x00000000004D459C string=0x00000000004D45A0 "B"
 *   insn=0x00000000004D45A0 string=0x00000000004D45A4 "C"
 *   insn=0x00000000004D45A4 string=0x00000000004D45A8 "@( "
 *   insn=0x00000000004D45A8 string=0x00000000004D45AC "B(#"
 *   insn=0x00000000004D45B0 string=0x00000000004D45B4 "C($"
 *   insn=0x00000000004D45B8 string=0x00000000004D45BC "D(!"
 *   insn=0x00000000004D45BC string=0x00000000004D45C0 "f8!"
 *   insn=0x00000000004D45D8 string=0x00000000004D45DC "@  "
 *   insn=0x00000000004D45E0 string=0x00000000004D45F4 "A(!"
 *   insn=0x00000000004D45E8 string=0x00000000004D45EC "@  "
 *   insn=0x00000000004D45F4 string=0x00000000004D45F8 "!8 "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUIPopoverView::AdjustContentFrameVertically@<X0>(
        __int64 result@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X8>)
{
  __int64 v3; // d5
  float v4; // w9
  __int64 v5; // x10
  float v6; // s2
  float v7; // s0
  float v8; // s3
  float v9; // s2
  float v10; // s4

  *(_DWORD *)a3 = *(_DWORD *)a2;
  v3 = *(_QWORD *)(a2 + 4);
  *(_QWORD *)(a3 + 4) = v3;
  v4 = *(float *)(a2 + 12);
  *(float *)(a3 + 12) = v4;
  v5 = *(_QWORD *)(result + 88);
  v6 = *(float *)(v5 + 136);
  v7 = v6 + 10.0;
  v8 = (float)(v6 + *(float *)(v5 + 144)) + -10.0;
  if ( (float)(v6 + 10.0) <= *(float *)&v3 )
    v9 = *(float *)&v3;
  else
    v9 = v6 + 10.0;
  v10 = v9 + v4;
  if ( (float)(v9 + v4) > v8 )
    v9 = v8 - v4;
  if ( v7 <= *(float *)&v3 && v10 <= v8 )
  {
    if ( v9 >= v7 )
      return result;
LABEL_11:
    *(float *)(a3 + 12) = (float)(v9 + v4) - v7;
    *(float *)(a3 + 4) = v7;
    return result;
  }
  *(float *)(a3 + 4) = v9;
  if ( v9 < v7 )
    goto LABEL_11;
  return result;
}

