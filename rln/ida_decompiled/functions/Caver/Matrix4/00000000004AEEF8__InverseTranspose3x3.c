/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AEEF8
 * Mangled: _ZNK5Caver7Matrix419InverseTranspose3x3Ev
 * Demangled: Caver::Matrix4::InverseTranspose3x3(void)
 *
 * Callers: 1
 *   0x00000000001F9D80  Caver::Matrix4::InverseTranspose3x3(void)
 *
 * Callees: 0
 *
 * Referenced strings: 43
 *   insn=0x00000000004AEF1C string=0x00000000004AEF20 "<+7"
 *   insn=0x00000000004AEF20 string=0x00000000004AEF24 "(# "
 *   insn=0x00000000004AEF24 string=0x00000000004AEF28 ")"
 *   insn=0x00000000004AEF28 string=0x00000000004AEF2C "Z\n#"
 *   insn=0x00000000004AEF34 string=0x00000000004AEF38 "8qG"
 *   insn=0x00000000004AEF38 string=0x00000000004AEF3C "P4"
 *   insn=0x00000000004AEF3C string=0x00000000004AEF40 "H# "
 *   insn=0x00000000004AEF40 string=0x00000000004AEF44 "<+:"
 *   insn=0x00000000004AEF48 string=0x00000000004AEF4C "\n&"
 *   insn=0x00000000004AEF4C string=0x00000000004AEF50 "9"
 *   insn=0x00000000004AEF50 string=0x00000000004AEF54 "W"
 *   insn=0x00000000004AEF58 string=0x00000000004AEF5C "h# "
 *   insn=0x00000000004AEF5C string=0x00000000004AEF60 ":+;"
 *   insn=0x00000000004AEF64 string=0x00000000004AEF68 "|3"
 *   insn=0x00000000004AEF68 string=0x00000000004AEF6C "9"
 *   insn=0x00000000004AEF6C string=0x00000000004AEF70 "w"
 *   insn=0x00000000004AEF78 string=0x00000000004AEF7C ";;<"
 *   insn=0x00000000004AEF80 string=0x00000000004AEF84 ":1"
 *   insn=0x00000000004AEF84 string=0x00000000004AEF88 "9"
 *   insn=0x00000000004AEF90 string=0x00000000004AEF94 "@#8"
 *   insn=0x00000000004AEF94 string=0x00000000004AEF98 "<;:"
 *   insn=0x00000000004AEFA0 string=0x00000000004AEFA4 "9"
 *   insn=0x00000000004AEFA4 string=0x00000000004AEFA8 "W"
 *   insn=0x00000000004AEFA8 string=0x00000000004AEFAC "`#8"
 *   insn=0x00000000004AEFAC string=0x00000000004AEFB0 "8;;"
 *   insn=0x00000000004AEFB4 string=0x00000000004AEFB8 "8"
 *   insn=0x00000000004AEFB8 string=0x00000000004AEFBC "W"
 *   insn=0x00000000004AEFC4 string=0x00000000004AEFC8 "A"
 *   insn=0x00000000004AEFD4 string=0x00000000004AEFD8 ":4"
 *   insn=0x00000000004AEFE4 string=0x00000000004AEFE8 "; "
 *   insn=0x00000000004AEFF0 string=0x00000000004AEFF4 "F&"
 *   insn=0x00000000004AEFF4 string=0x00000000004AEFF8 "b""
 *   insn=0x00000000004AEFFC string=0x00000000004AF000 "C:3"
 *   insn=0x00000000004AF00C string=0x00000000004AF010 "Q"
 *   insn=0x00000000004AF014 string=0x00000000004AF018 "S;5"
 *   insn=0x00000000004AF01C string=0x00000000004AF020 "f;&"
 *   insn=0x00000000004AF020 string=0x00000000004AF024 "!8""
 *   insn=0x00000000004AF02C string=0x00000000004AF030 "B\n1"
 *   insn=0x00000000004AF030 string=0x00000000004AF034 "d"
 *   insn=0x00000000004AF03C string=0x00000000004AF040 "!1"
 *   insn=0x00000000004AF044 string=0x00000000004AF048 "c1"
 *   insn=0x00000000004AF074 string=0x00000000004AF078 ")"
 *   insn=0x00000000004AF078 string=0x00000000004AF07C "\t="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Matrix4::InverseTranspose3x3@<S0>(Caver::Matrix4 *this@<X0>, __int64 a2@<X8>)
{
  float result; // s0
  float v3; // s5
  float v4; // s4
  float v5; // s1
  float v6; // s21
  float v7; // s3
  float v8; // s20
  float v9; // s2
  float v10; // s7
  float v11; // s23
  float v12; // s6
  float v13; // s18
  float v14; // s26
  float v15; // s25
  bool v16; // nf
  float v17; // s28
  float v18; // s26
  float v19; // s27
  float v20; // s26
  float v21; // s27
  float v22; // s28
  float v23; // s17
  bool v24; // cc
  float v25; // s27
  float v26; // s28
  float v27; // s26
  float v28; // s28
  float v29; // s26
  float v30; // s27
  float v31; // s24
  float v32; // s23
  float v33; // s27

  result = *((float *)this + 4);
  v3 = *((float *)this + 5);
  v4 = *(float *)this;
  v6 = *((float *)this + 9);
  v5 = *((float *)this + 10);
  v8 = *((float *)this + 1);
  v7 = *((float *)this + 2);
  v9 = *((float *)this + 8);
  v10 = *(float *)this * v3;
  v11 = 0.0;
  v12 = *((float *)this + 6);
  v13 = result * v6;
  v14 = (float)(result * v6) * v7;
  if ( (float)(v10 * v5) >= 0.0 )
    v15 = (float)(v10 * v5) + 0.0;
  else
    v15 = 0.0;
  if ( (float)(v10 * v5) < 0.0 )
    v11 = (float)(v10 * v5) + 0.0;
  v16 = v14 < 0.0;
  v17 = v15 + v14;
  v18 = v11 + v14;
  v19 = (float)(v9 * v8) * v12;
  if ( v16 )
    v11 = v18;
  else
    v15 = v17;
  v16 = v19 < 0.0;
  v20 = v15 + v19;
  v21 = v11 + v19;
  v22 = v7 * (float)(v3 * v9);
  if ( v16 )
    v11 = v21;
  else
    v15 = v20;
  v23 = result * v8;
  v24 = v22 > -0.0;
  v25 = v15 - v22;
  v26 = v11 - v22;
  v27 = v5 * (float)(result * v8);
  if ( v24 )
    v11 = v26;
  else
    v15 = v25;
  v24 = v27 > -0.0;
  v28 = v15 - v27;
  v29 = v11 - v27;
  v30 = (float)(v4 * v6) * v12;
  if ( v24 )
    v11 = v29;
  else
    v15 = v28;
  v31 = v15 - v30;
  if ( v30 > -0.0 )
  {
    v31 = v15;
    v11 = v11 - v30;
  }
  v32 = v31 + v11;
  if ( v32 != 0.0 )
  {
    v33 = v5 * result;
    result = -(float)((float)((float)(v4 * v12) - (float)(result * v7)) * (float)(1.0 / v32));
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 28) = 0;
    *(_QWORD *)(a2 + 52) = 0;
    *(_QWORD *)(a2 + 44) = 0;
    *(float *)a2 = (float)((float)(v3 * v5) - (float)(v6 * v12)) * (float)(1.0 / v32);
    *(float *)(a2 + 4) = -(float)((float)(v33 - (float)(v9 * v12)) * (float)(1.0 / v32));
    *(float *)(a2 + 16) = -(float)((float)((float)(v5 * v8) - (float)(v6 * v7)) * (float)(1.0 / v32));
    *(float *)(a2 + 20) = (float)((float)(v4 * v5) - (float)(v7 * v9)) * (float)(1.0 / v32);
    *(float *)(a2 + 32) = (float)((float)(v8 * v12) - (float)(v3 * v7)) * (float)(1.0 / v32);
    *(float *)(a2 + 36) = result;
    *(float *)(a2 + 8) = (float)(v13 - (float)(v3 * v9)) * (float)(1.0 / v32);
    *(float *)(a2 + 24) = -(float)((float)((float)(v4 * v6) - (float)(v9 * v8)) * (float)(1.0 / v32));
    *(float *)(a2 + 40) = (float)(v10 - v23) * (float)(1.0 / v32);
    *(_DWORD *)(a2 + 60) = 1065353216;
  }
  return result;
}

