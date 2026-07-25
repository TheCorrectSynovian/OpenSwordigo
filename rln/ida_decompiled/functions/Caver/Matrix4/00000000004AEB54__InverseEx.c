/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AEB54
 * Mangled: _ZNK5Caver7Matrix49InverseExEv
 * Demangled: Caver::Matrix4::InverseEx(void)
 *
 * Callers: 1
 *   0x0000000000202F30  Caver::Matrix4::InverseEx(void)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 62
 *   insn=0x00000000004AEB6C string=0x00000000004AEB70 "I"
 *   insn=0x00000000004AEB70 string=0x00000000004AEB74 "*"
 *   insn=0x00000000004AEB98 string=0x00000000004AEB9C "e\n?"
 *   insn=0x00000000004AEBA0 string=0x00000000004AEBA4 "r\n="
 *   insn=0x00000000004AEBA8 string=0x00000000004AEBAC "x\n("
 *   insn=0x00000000004AEBD0 string=0x00000000004AEBD4 "P:4"
 *   insn=0x00000000004AEBD4 string=0x00000000004AEBD8 "/&"
 *   insn=0x00000000004AEBE0 string=0x00000000004AEBE4 "T;;"
 *   insn=0x00000000004AEBE4 string=0x00000000004AEBE8 "{&"
 *   insn=0x00000000004AEBEC string=0x00000000004AEBF0 "\$"
 *   insn=0x00000000004AEBF0 string=0x00000000004AEBF4 ")'"
 *   insn=0x00000000004AEBF4 string=0x00000000004AEBF8 "Z9+"
 *   insn=0x00000000004AEBF8 string=0x00000000004AEBFC "J1"
 *   insn=0x00000000004AEC00 string=0x00000000004AEC04 "k'"
 *   insn=0x00000000004AEC04 string=0x00000000004AEC08 "/;;"
 *   insn=0x00000000004AEC08 string=0x00000000004AEC0C "91"
 *   insn=0x00000000004AEC10 string=0x00000000004AEC14 "i$"
 *   insn=0x00000000004AEC14 string=0x00000000004AEC18 "\9+"
 *   insn=0x00000000004AEC18 string=0x00000000004AEC1C ");)"
 *   insn=0x00000000004AEC20 string=0x00000000004AEC24 "\n\n<"
 *   insn=0x00000000004AEC24 string=0x00000000004AEC28 "9;*"
 *   insn=0x00000000004AEC28 string=0x00000000004AEC2C "J\n;"
 *   insn=0x00000000004AEC30 string=0x00000000004AEC34 "M&"
 *   insn=0x00000000004AEC34 string=0x00000000004AEC38 "Y)9"
 *   insn=0x00000000004AEC40 string=0x00000000004AEC44 "Y)9"
 *   insn=0x00000000004AEC44 string=0x00000000004AEC48 "\n."
 *   insn=0x00000000004AEC48 string=0x00000000004AEC4C "9;*"
 *   insn=0x00000000004AEC4C string=0x00000000004AEC50 "J,"
 *   insn=0x00000000004AEC50 string=0x00000000004AEC54 "Y)9"
 *   insn=0x00000000004AEC54 string=0x00000000004AEC58 "(# "
 *   insn=0x00000000004AEC58 string=0x00000000004AEC5C "`"
 *   insn=0x00000000004AEC5C string=0x00000000004AEC60 "\n\t;"
 *   insn=0x00000000004AEC5C string=0x00000000004AEEC8 "("
 *   insn=0x00000000004AEC64 string=0x00000000004AEC68 "\n\t."
 *   insn=0x00000000004AEC68 string=0x00000000004AEC6C "\t,"
 *   insn=0x00000000004AECAC string=0x00000000004AECB0 "}\n)"
 *   insn=0x00000000004AECB8 string=0x00000000004AECBC "|\n<"
 *   insn=0x00000000004AECBC string=0x00000000004AECC0 "s\n;"
 *   insn=0x00000000004AED0C string=0x00000000004AED10 "^&"
 *   insn=0x00000000004AED18 string=0x00000000004AED1C "[\n'"
 *   insn=0x00000000004AED20 string=0x00000000004AED24 "U\n$"
 *   insn=0x00000000004AED28 string=0x00000000004AED2C "Q:"
 *   insn=0x00000000004AED30 string=0x00000000004AED34 "&"
 *   insn=0x00000000004AED34 string=0x00000000004AED38 "Y\n!"
 *   insn=0x00000000004AED38 string=0x00000000004AED3C "R2"
 *   insn=0x00000000004AED44 string=0x00000000004AED48 "V'"
 *   insn=0x00000000004AED50 string=0x00000000004AED54 "!"
 *   insn=0x00000000004AED8C string=0x00000000004AED90 "R:8"
 *   insn=0x00000000004AED90 string=0x00000000004AED94 "8+"
 *   insn=0x00000000004AEDA4 string=0x00000000004AEDA8 "K9 "
 *   insn=0x00000000004AEDAC string=0x00000000004AEDB0 "Q;9"
 *   insn=0x00000000004AEDB8 string=0x00000000004AEDBC "*8 "
 *   insn=0x00000000004AEDC4 string=0x00000000004AEDC8 "Z9&"
 *   insn=0x00000000004AEDD0 string=0x00000000004AEDD4 " 8 "
 *   insn=0x00000000004AEDE4 string=0x00000000004AEDE8 ")8)"
 *   insn=0x00000000004AEE0C string=0x00000000004AEE10 "!8."
 *   insn=0x00000000004AEE24 string=0x00000000004AEE28 "0*0"
 *   insn=0x00000000004AEE28 string=0x00000000004AEE2C "s*&"
 *   insn=0x00000000004AEE30 string=0x00000000004AEE34 "B(#"
 *   insn=0x00000000004AEE40 string=0x00000000004AEE44 "F:4"
 *   insn=0x00000000004AEEA8 string=0x00000000004AEEAC "A"
 *   insn=0x00000000004AEEF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__usercall Caver::Matrix4::InverseEx@<X0>(float *this@<X0>, float *a2@<X8>)
{
  float v2; // s19
  float v3; // s30
  float v4; // s22
  float v5; // s31
  float v6; // s21
  float v7; // s29
  float v8; // s8
  float v9; // s23
  float v10; // s0
  float v11; // s6
  float v12; // s2
  float v13; // s7
  float v14; // s1
  float v15; // s4
  float v16; // s3
  float v17; // s17
  float v18; // s5
  float v19; // s16
  float v20; // s18
  float v21; // s20
  float v22; // s24
  float v23; // s26
  float v24; // s14
  float v25; // s15
  float v26; // s27
  float v27; // s28
  float v28; // s9
  float v29; // s12
  float v30; // s25

  _ReadStatusReg(TPIDR_EL0);
  v2 = *this;
  v3 = this[1];
  v4 = this[4];
  v5 = this[5];
  v6 = this[8];
  v7 = this[9];
  v9 = this[12];
  v8 = this[13];
  v10 = this[2];
  v11 = this[3];
  v12 = this[6];
  v13 = this[7];
  v14 = this[10];
  v15 = this[11];
  v16 = this[14];
  v17 = this[15];
  v18 = (float)(*this * v5) - (float)(v4 * v3);
  v19 = (float)(*this * v7) - (float)(v6 * v3);
  v20 = (float)(*this * v8) - (float)(v9 * v3);
  v21 = (float)(v4 * v7) - (float)(v6 * v5);
  v22 = (float)(v4 * v8) - (float)(v9 * v5);
  v23 = (float)(v6 * v8) - (float)(v9 * v7);
  v24 = (float)(v10 * v15) - (float)(v14 * v11);
  v25 = (float)(v10 * v17) - (float)(v16 * v11);
  v26 = (float)(v12 * v15) - (float)(v14 * v13);
  v27 = (float)(v12 * v17) - (float)(v16 * v13);
  v28 = (float)(v14 * v17) - (float)(v16 * v15);
  v29 = (float)(v10 * v13) - (float)(v12 * v11);
  v30 = (float)(v23 * v29)
      + (float)((float)((float)(v21 * v25)
                      + (float)((float)(v20 * v26) + (float)((float)(v18 * v28) - (float)(v19 * v27))))
              - (float)(v22 * v24));
  if ( v30 != 0.0 )
  {
    *a2 = (float)(1.0 / v30) * (float)((float)(v8 * v26) + (float)((float)(v5 * v28) - (float)(v7 * v27)));
    a2[1] = (float)(1.0 / v30) * (float)((float)((float)(v7 * v25) - (float)(v3 * v28)) - (float)(v8 * v24));
    a2[4] = (float)(1.0 / v30) * (float)((float)((float)(v6 * v27) - (float)(v4 * v28)) - (float)(v9 * v26));
    a2[5] = (float)(1.0 / v30) * (float)((float)(v9 * v24) + (float)((float)(v2 * v28) - (float)(v6 * v25)));
    a2[8] = (float)(1.0 / v30) * (float)((float)((float)(v23 * v13) - (float)(v22 * v15)) + (float)(v21 * v17));
    a2[9] = (float)(1.0 / v30) * (float)((float)((float)(v20 * v15) - (float)(v23 * v11)) - (float)(v19 * v17));
    a2[12] = (float)(1.0 / v30) * (float)((float)((float)(v22 * v14) - (float)(v12 * v23)) - (float)(v21 * v16));
    a2[13] = (float)(1.0 / v30) * (float)((float)((float)(v10 * v23) - (float)(v20 * v14)) + (float)(v19 * v16));
    a2[2] = (float)(1.0 / v30) * (float)((float)(v8 * v29) + (float)((float)(v3 * v27) - (float)(v5 * v25)));
    a2[3] = (float)(1.0 / v30) * (float)((float)((float)(v5 * v24) - (float)(v3 * v26)) - (float)(v7 * v29));
    a2[6] = (float)(1.0 / v30) * (float)((float)((float)(v4 * v25) - (float)(v2 * v27)) - (float)(v9 * v29));
    a2[7] = (float)(1.0 / v30) * (float)((float)(v6 * v29) + (float)((float)(v2 * v26) - (float)(v4 * v24)));
    a2[10] = (float)(1.0 / v30) * (float)((float)((float)(v22 * v11) - (float)(v20 * v13)) + (float)(v18 * v17));
    a2[11] = (float)(1.0 / v30) * (float)((float)((float)(v19 * v13) - (float)(v21 * v11)) - (float)(v18 * v15));
    a2[14] = (float)(1.0 / v30) * (float)((float)((float)(v12 * v20) - (float)(v10 * v22)) - (float)(v18 * v16));
    a2[15] = (float)(1.0 / v30) * (float)((float)((float)(v10 * v21) - (float)(v19 * v12)) + (float)(v18 * v14));
  }
  return this;
}

