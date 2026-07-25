/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B12DC
 * Mangled: _ZN5Caver10Quaternion18FromRotationMatrixERKNS_7Matrix4E
 * Demangled: Caver::Quaternion::FromRotationMatrix(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FAF00  Caver::Quaternion::FromRotationMatrix(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 42
 *   insn=0x00000000004B1300 string=0x00000000004B1304 "c(""
 *   insn=0x00000000004B1304 string=0x00000000004B1308 "h  "
 *   insn=0x00000000004B130C string=0x00000000004B1310 ""
 *   insn=0x00000000004B1310 string=0x00000000004B1314 "a(("
 *   insn=0x00000000004B1314 string=0x00000000004B1318 " "
 *   insn=0x00000000004B131C string=0x00000000004B1320 "g"
 *   insn=0x00000000004B1320 string=0x00000000004B1324 " "
 *   insn=0x00000000004B1328 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B1348 string=0x00000000004B134C "a8$"
 *   insn=0x00000000004B1360 string=0x00000000004B1364 "m"
 *   insn=0x00000000004B1364 string=0x00000000004B13F0 ""
 *   insn=0x00000000004B1368 string=0x00000000004B136C "-"
 *   insn=0x00000000004B136C string=0x00000000004B1370 ""
 *   insn=0x00000000004B137C string=0x00000000004B1380 " "
 *   insn=0x00000000004B1384 string=0x00000000004B1388 "g"
 *   insn=0x00000000004B1388 string=0x00000000004B138C " "
 *   insn=0x00000000004B138C string=0x00000000004B1390 "h0"
 *   insn=0x00000000004B13B0 string=0x00000000004B13B4 "`8$"
 *   insn=0x00000000004B13C8 string=0x00000000004B13CC "B@!"
 *   insn=0x00000000004B13CC string=0x00000000004B13D0 "!@!"
 *   insn=0x00000000004B13D0 string=0x00000000004B13D4 "c@!"
 *   insn=0x00000000004B13D4 string=0x00000000004B13D8 "`\n"
 *   insn=0x00000000004B13D8 string=0x00000000004B13DC "a"
 *   insn=0x00000000004B13F0 string=0x00000000004B13F4 "  ""
 *   insn=0x00000000004B13F4 string=0x00000000004B13F8 ""
 *   insn=0x00000000004B13F8 string=0x00000000004B13FC "!(("
 *   insn=0x00000000004B13F8 string=0x00000000004B1458 "B(("
 *   insn=0x00000000004B13FC string=0x00000000004B1400 " 8 "
 *   insn=0x00000000004B1404 string=0x00000000004B1408 " "
 *   insn=0x00000000004B140C string=0x00000000004B1410 "g"
 *   insn=0x00000000004B1410 string=0x00000000004B1414 " "
 *   insn=0x00000000004B1414 string=0x00000000004B1418 "F0"
 *   insn=0x00000000004B1438 string=0x00000000004B143C "`8&"
 *   insn=0x00000000004B143C string=0x00000000004B1440 "B($"
 *   insn=0x00000000004B1458 string=0x00000000004B145C "@8 "
 *   insn=0x00000000004B1460 string=0x00000000004B1464 " "
 *   insn=0x00000000004B1468 string=0x00000000004B146C "g"
 *   insn=0x00000000004B146C string=0x00000000004B1470 " "
 *   insn=0x00000000004B1470 string=0x00000000004B1474 "/0"
 *   insn=0x00000000004B1484 string=0x00000000004B1488 "!8""
 *   insn=0x00000000004B1488 string=0x00000000004B148C "b($"
 *   insn=0x00000000004B14A8 string=0x00000000004B14AC "c%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__usercall Caver::Quaternion::FromRotationMatrix@<X0>(float *this@<X0>, float *a2@<X8>)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  float v7; // s0
  float v8; // s0
  float v9; // s16
  float v10; // s0
  float v11; // s3
  float v12; // s4
  float v13; // s2
  float v14; // s0
  float v15; // s0
  float v16; // s1
  float v17; // s3
  float v18; // s0
  float v19; // s0
  float v20; // s16
  float v21; // s0
  float v22; // s3
  float v23; // s6

  v3 = *this;
  v4 = this[5];
  v5 = this[10];
  v6 = (float)(*this + v4) + v5;
  if ( v6 > 0.0 )
  {
    v7 = sqrtf(v6 + 1.0);
    v8 = v7 + v7;
    v9 = 1.0 / v8;
    v10 = v8 * 0.25;
    v11 = this[2] - this[8];
    v12 = this[4] - this[1];
    v13 = v9 * (float)(this[9] - this[6]);
LABEL_6:
    v16 = v9 * v11;
    v17 = v9 * v12;
    goto LABEL_7;
  }
  if ( v3 > v4 && v3 > v5 )
  {
    v14 = sqrtf((float)((float)(v3 + 1.0) - v4) - v5);
    v15 = v14 + v14;
    v9 = 1.0 / v15;
    v13 = v15 * 0.25;
    v11 = this[1] + this[4];
    v12 = this[2] + this[8];
    v10 = (float)(1.0 / v15) * (float)(this[9] - this[6]);
    goto LABEL_6;
  }
  if ( v4 <= v5 )
  {
    v21 = sqrtf((float)((float)(v5 + 1.0) - v3) - v4);
    v22 = v21 + v21;
    v23 = 1.0 / (float)(v21 + v21);
    v10 = v23 * (float)(this[4] - this[1]);
    v13 = v23 * (float)(this[2] + this[8]);
    v16 = v23 * (float)(this[6] + this[9]);
    v17 = v22 * 0.25;
  }
  else
  {
    v18 = sqrtf((float)((float)(v4 + 1.0) - v3) - v5);
    v19 = v18 + v18;
    v20 = 1.0 / v19;
    v16 = v19 * 0.25;
    v10 = (float)(1.0 / v19) * (float)(this[2] - this[8]);
    v13 = v20 * (float)(this[1] + this[4]);
    v17 = v20 * (float)(this[6] + this[9]);
  }
LABEL_7:
  *a2 = v10;
  a2[1] = -v13;
  a2[2] = -v16;
  a2[3] = -v17;
  return this;
}

