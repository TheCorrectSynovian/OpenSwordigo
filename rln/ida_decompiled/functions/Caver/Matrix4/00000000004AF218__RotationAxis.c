/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF218
 * Mangled: _ZN5Caver7Matrix412RotationAxisEffff
 * Demangled: Caver::Matrix4::RotationAxis(float,float,float,float)
 *
 * Callers: 1
 *   0x00000000001FC200  Caver::Matrix4::RotationAxis(float,float,float,float)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC670  .sin
 *   0x00000000001FCAE0  Caver::Vector4::Normalize(void)
 *   0x00000000001FE1C0  .cos
 *
 * Referenced strings: 28
 *   insn=0x00000000004AF228 string=0x00000000004AF22C "T"
 *   insn=0x00000000004AF238 string=0x00000000004AF23C ""
 *   insn=0x00000000004AF24C string=0x00000000004AF250 "$6"
 *   insn=0x00000000004AF250 string=0x00000000004AF254 ""
 *   insn=0x00000000004AF250 string=0x00000000001FCAE0 "0'"
 *   insn=0x00000000004AF25C string=0x00000000004AF260 "\t@b"
 *   insn=0x00000000004AF25C string=0x00000000001FC670 "0'"
 *   insn=0x00000000004AF27C string=0x00000000004AF280 "%!"
 *   insn=0x00000000004AF280 string=0x00000000004AF284 "&""
 *   insn=0x00000000004AF284 string=0x00000000004AF288 "g)"
 *   insn=0x00000000004AF288 string=0x00000000004AF28C "0#"
 *   insn=0x00000000004AF28C string=0x00000000004AF290 "Q)"
 *   insn=0x00000000004AF290 string=0x00000000004AF294 "R""
 *   insn=0x00000000004AF294 string=0x00000000004AF298 "B#"
 *   insn=0x00000000004AF298 string=0x00000000004AF29C "c#"
 *   insn=0x00000000004AF29C string=0x00000000004AF2A0 "!)"
 *   insn=0x00000000004AF2C8 string=0x00000000004AF2CC "'*0"
 *   insn=0x00000000004AF2CC string=0x00000000004AF2D0 "R* "
 *   insn=0x00000000004AF2D4 string=0x00000000004AF2D8 "Q8!"
 *   insn=0x00000000004AF2D8 string=0x00000000004AF2DC "!(""
 *   insn=0x00000000004AF2DC string=0x00000000004AF2E0 "`( "
 *   insn=0x00000000004AF2F4 string=0x00000000004AF2F8 "d"
 *   insn=0x00000000004AF2F8 string=0x00000000004AF2FC "eJ"
 *   insn=0x00000000004AF2FC string=0x00000000004AF300 "gF"
 *   insn=0x00000000004AF300 string=0x00000000004AF304 "p\n"
 *   insn=0x00000000004AF304 string=0x00000000004AF308 "a"
 *   insn=0x00000000004AF308 string=0x00000000004AF30C "`*"
 *   insn=0x00000000004AF334 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::Matrix4::RotationAxis(
        float a1@<S0>,
        float a2@<S1>,
        float a3@<S2>,
        float a4@<S3>,
        __int64 a5@<X8>)
{
  double v8; // d8
  float v9; // s9
  float v10; // s0
  float v11; // s6
  float v12; // s16
  float v13; // s2
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  float v18; // s18
  float v19; // s16
  float v20; // s17
  float v21; // s1
  float v22; // s0
  float v23; // [xsp+8h] [xbp-38h] BYREF
  float v24; // [xsp+Ch] [xbp-34h]
  float v25; // [xsp+10h] [xbp-30h]
  int v26; // [xsp+14h] [xbp-2Ch]
  __int64 v27; // [xsp+18h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v23 = a2;
  v24 = a3;
  v25 = a4;
  v26 = 0;
  Caver::Vector4::Normalize((Caver::Vector4 *)&v23);
  v8 = a1;
  v9 = sin(v8);
  v10 = cos(v8);
  v11 = (float)(1.0 - v10) * (float)(v23 * v24);
  v12 = (float)(1.0 - v10) * (float)(v23 * v25);
  v13 = (float)(1.0 - v10) * (float)(v24 * v25);
  v14 = (float)((float)(v23 * v23) * (float)(1.0 - v10)) + v10;
  v15 = v11 - (float)(v25 * v9);
  v16 = v11 + (float)(v25 * v9);
  v17 = (float)(v24 * v9) + v12;
  v18 = (float)((float)(1.0 - v10) * (float)(v24 * v24)) + v10;
  v19 = v12 - (float)(v24 * v9);
  v20 = v13 - (float)(v23 * v9);
  v21 = (float)(v23 * v9) + v13;
  v22 = (float)((float)(1.0 - v10) * (float)(v25 * v25)) + v10;
  *(_DWORD *)(a5 + 12) = 0;
  *(_DWORD *)(a5 + 28) = 0;
  *(_DWORD *)(a5 + 44) = 0;
  *(_QWORD *)(a5 + 48) = 0;
  *(_DWORD *)(a5 + 56) = 0;
  *(_DWORD *)(a5 + 60) = 1065353216;
  *(float *)a5 = v14;
  *(float *)(a5 + 4) = v16;
  *(float *)(a5 + 16) = v15;
  *(float *)(a5 + 20) = v18;
  *(float *)(a5 + 32) = v17;
  *(float *)(a5 + 36) = v20;
  *(float *)(a5 + 8) = v19;
  *(float *)(a5 + 24) = v21;
  *(float *)(a5 + 40) = v22;
}

