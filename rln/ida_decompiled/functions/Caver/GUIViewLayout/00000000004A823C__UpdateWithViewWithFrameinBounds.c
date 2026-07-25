/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A823C
 * Mangled: _ZN5Caver13GUIViewLayout31UpdateWithViewWithFrameinBoundsERKNS_9RectangleES3_
 * Demangled: Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds(Caver::Rectangle const&,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F4660  Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds(Caver::Rectangle const&,Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x00000000004A823C string=0x00000000004A8240 "F"
 *   insn=0x00000000004A8240 string=0x00000000004A8244 " @-Q"
 *   insn=0x00000000004A8244 string=0x00000000004A8248 "Q"
 *   insn=0x00000000004A824C string=0x00000000004A8250 "20"
 *   insn=0x00000000004A8258 string=0x00000000004A825C "3*3"
 *   insn=0x00000000004A825C string=0x00000000004A8260 "g0"
 *   insn=0x00000000004A8260 string=0x00000000004A8264 "@"3"
 *   insn=0x00000000004A826C string=0x00000000004A8288 "1*&"
 *   insn=0x00000000004A827C string=0x00000000004A8280 "!"
 *   insn=0x00000000004A8280 string=0x00000000004A8284 ""
 *   insn=0x00000000004A8284 string=0x00000000004A82A4 "G('"
 *   insn=0x00000000004A8290 string=0x00000000004A8294 " : "
 *   insn=0x00000000004A82B0 string=0x00000000004A82B4 "C8$"
 *   insn=0x00000000004A82B8 string=0x00000000004A82BC "c"
 *   insn=0x00000000004A82C0 string=0x00000000004A82C4 ""
 *   insn=0x00000000004A82C4 string=0x00000000004A82E0 "("
 *   insn=0x00000000004A82C8 string=0x00000000004A82CC "B(#"
 *   insn=0x00000000004A82D4 string=0x00000000004A82D8 "B"
 *   insn=0x00000000004A82E4 string=0x00000000004A82E8 "P"
 *   insn=0x00000000004A82EC string=0x00000000004A82F0 "("
 *   insn=0x00000000004A82F0 string=0x00000000004A82F4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds(__int64 result, float *a2, float *a3)
{
  float v3; // s1
  float v4; // s3
  float v5; // s5
  float v6; // s6
  float v7; // s0
  float v8; // s2
  float v9; // s4
  float v10; // s17
  float v11; // s6
  float v12; // s1
  float v13; // s0
  int v14; // w8
  float v15; // s1
  float v16; // s17
  float v17; // s0
  float v18; // s3
  float v19; // s2
  float v20; // s3
  int v21; // w9
  float v22; // s2

  v3 = a2[2];
  v4 = a2[3];
  v6 = a3[2];
  v5 = a3[3];
  v7 = *a2;
  v8 = a2[1];
  v10 = *a3;
  v9 = a3[1];
  if ( (float)(*a2 + (float)(v3 * 0.5)) >= (float)(*a3 + (float)(v6 * 0.5)) )
  {
    v16 = v10 + v6;
    v11 = *(float *)(result + 108);
    v17 = v16 - (float)(v7 + v3);
    v15 = 0.0;
    v13 = v17 / v11;
    v14 = 2;
  }
  else
  {
    v11 = *(float *)(result + 108);
    v12 = v7 - v10;
    v13 = 0.0;
    v14 = 1;
    v15 = v12 / v11;
  }
  if ( (float)(v8 + (float)(v4 * 0.5)) >= (float)(v9 + (float)(v5 * 0.5)) )
  {
    v22 = (float)(v9 + v5) - (float)(v8 + v4);
    v20 = 0.0;
    v19 = v22 / v11;
    v21 = 8;
  }
  else
  {
    v18 = v8 - v9;
    v19 = 0.0;
    v20 = v18 / v11;
    v21 = 4;
  }
  *(float *)(result + 84) = v15;
  *(float *)(result + 88) = v13;
  *(_DWORD *)(result + 80) = v21 | v14;
  *(float *)(result + 92) = v20;
  *(float *)(result + 96) = v19;
  *(_QWORD *)(result + 100) = *((_QWORD *)a2 + 1);
  return result;
}

