/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A8198
 * Mangled: _ZN5Caver13GUIViewLayout20FrameForViewInBoundsERKNS_9RectangleE
 * Demangled: Caver::GUIViewLayout::FrameForViewInBounds(Caver::Rectangle const&)
 *
 * Callers: 2
 *   0x00000000001F3580  Caver::GUIViewLayout::FrameForViewInBounds(Caver::Rectangle const&)
 *   0x00000000004A8028  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004A8198 string=0x00000000004A819C ""
 *   insn=0x00000000004A819C string=0x00000000004A81A0 "%"
 *   insn=0x00000000004A81A0 string=0x00000000004A81A4 "\nP@"
 *   insn=0x00000000004A81A8 string=0x00000000004A81AC "*"
 *   insn=0x00000000004A81AC string=0x00000000004A81B0 " "
 *   insn=0x00000000004A81B0 string=0x00000000004A81B4 "!@"
 *   insn=0x00000000004A81BC string=0x00000000004A81C0 "d"
 *   insn=0x00000000004A81C4 string=0x00000000004A81C8 "A#"
 *   insn=0x00000000004A81DC string=0x00000000004A81E0 """
 *   insn=0x00000000004A81E4 string=0x00000000004A81E8 "@( "
 *   insn=0x00000000004A81F0 string=0x00000000004A81F4 "*"
 *   insn=0x00000000004A81F4 string=0x00000000004A81F8 " "
 *   insn=0x00000000004A81F8 string=0x00000000004A81FC "!"
 *   insn=0x00000000004A8204 string=0x00000000004A8208 "$"
 *   insn=0x00000000004A820C string=0x00000000004A8210 "A#"
 *   insn=0x00000000004A8224 string=0x00000000004A8228 """
 *   insn=0x00000000004A822C string=0x00000000004A8230 "@( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUIViewLayout::FrameForViewInBounds@<X0>(
        __int64 result@<X0>,
        float *a2@<X1>,
        __int64 a3@<X8>)
{
  float v3; // w9
  float v4; // w11
  int v5; // w10
  float v6; // s0
  float v7; // s0

  *(_QWORD *)a3 = 0;
  v4 = *(float *)(result + 100);
  v3 = *(float *)(result + 104);
  *(float *)(a3 + 8) = v4;
  *(float *)(a3 + 12) = v3;
  v5 = *(_DWORD *)(result + 80);
  if ( (v5 & 1) != 0 )
  {
    v6 = *a2 + (float)(*(float *)(result + 84) * *(float *)(result + 108));
  }
  else
  {
    if ( (v5 & 2) == 0 )
      goto LABEL_6;
    v6 = (float)((float)(*a2 + a2[2]) - (float)(*(float *)(result + 88) * *(float *)(result + 108))) - v4;
  }
  *(float *)a3 = v6;
LABEL_6:
  if ( (v5 & 4) != 0 )
  {
    v7 = a2[1] + (float)(*(float *)(result + 92) * *(float *)(result + 108));
  }
  else
  {
    if ( (v5 & 8) == 0 )
      return result;
    v7 = (float)((float)(a2[1] + a2[3]) - (float)(*(float *)(result + 96) * *(float *)(result + 108))) - v3;
  }
  *(float *)(a3 + 4) = v7;
  return result;
}

