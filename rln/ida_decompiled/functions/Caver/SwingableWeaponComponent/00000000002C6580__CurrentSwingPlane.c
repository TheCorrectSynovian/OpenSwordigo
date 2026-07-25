/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C6580
 * Mangled: _ZN5Caver24SwingableWeaponComponent17CurrentSwingPlaneEv
 * Demangled: Caver::SwingableWeaponComponent::CurrentSwingPlane(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 27
 *   insn=0x00000000002C6590 string=0x00000000002C6594 "U"
 *   insn=0x00000000002C65A4 string=0x00000000002C65A8 "`"
 *   insn=0x00000000002C65A8 string=0x00000000002C65AC "a"
 *   insn=0x00000000002C65AC string=0x00000000002C65B0 "b"
 *   insn=0x00000000002C65B0 string=0x00000000002C65B4 "c"
 *   insn=0x00000000002C65B4 string=0x00000000002C65B8 "d"
 *   insn=0x00000000002C65B8 string=0x00000000002C65BC "e"
 *   insn=0x00000000002C65BC string=0x00000000002C65C0 "\t"
 *   insn=0x00000000002C65C4 string=0x00000000002C65C8 "!#"
 *   insn=0x00000000002C65CC string=0x00000000002C65D0 "D$"
 *   insn=0x00000000002C65D0 string=0x00000000002C65D4 "B%"
 *   insn=0x00000000002C65D8 string=0x00000000002C65DC "'"
 *   insn=0x00000000002C65E0 string=0x00000000002C65E4 "A8!"
 *   insn=0x00000000002C65E4 string=0x00000000002C65E8 "b8%"
 *   insn=0x00000000002C65EC string=0x00000000002C65F0 "$!"
 *   insn=0x00000000002C65F0 string=0x00000000002C65F4 "c($"
 *   insn=0x00000000002C65F4 string=0x00000000002C65F8 "D""
 *   insn=0x00000000002C65FC string=0x00000000002C6600 "` '"
 *   insn=0x00000000002C6620 string=0x00000000002C6624 "C"
 *   insn=0x00000000002C6624 string=0x00000000002C6628 "h"
 *   insn=0x00000000002C6638 string=0x00000000002C663C "#"
 *   insn=0x00000000002C6640 string=0x00000000002C6644 "!#"
 *   insn=0x00000000002C6644 string=0x00000000002C6648 "C"
 *   insn=0x00000000002C6648 string=0x00000000002C664C "B#"
 *   insn=0x00000000002C664C string=0x00000000002C6650 "c"
 *   insn=0x00000000002C6650 string=0x00000000002C6654 "!(""
 *   insn=0x00000000002C668C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__usercall Caver::SwingableWeaponComponent::CurrentSwingPlane@<X0>(float *this@<X0>, float *a2@<X8>)
{
  __int64 v2; // x19
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  float v8; // s4
  float v9; // s5
  float v10; // s6
  float v11; // s1
  float v12; // s3
  float v13; // s4
  float v14; // s2
  float v15; // s5
  float v16; // s1
  float v17; // s0
  float *v18; // x8
  float v19; // w9
  float v20; // w10
  float v21; // w11
  float v22; // s1
  float v23; // s0
  float v24; // s2
  float v25; // [xsp+8h] [xbp-38h] BYREF
  float v26; // [xsp+Ch] [xbp-34h]
  float v27; // [xsp+10h] [xbp-30h]
  __int64 v28; // [xsp+18h] [xbp-28h]

  v2 = (__int64)this;
  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this[101];
  v5 = this[99];
  v6 = this[102];
  v7 = this[100];
  v8 = this[98];
  v9 = this[97];
  v10 = v4 * v5;
  v11 = v5 * v7;
  v12 = v8 * v7;
  v13 = v6 * v8;
  v14 = v6 * v9;
  v15 = v4 * v9;
  v16 = v14 - v11;
  if ( (float)((float)((float)(v12 - v15) * (float)(v12 - v15))
             + (float)((float)((float)(v10 - v13) * (float)(v10 - v13)) + (float)(v16 * v16))) >= 0.00001 )
  {
    v25 = v10 - v13;
    v26 = v16;
    v27 = v12 - v15;
    this = (float *)Caver::Vector3::Normalize((Caver::Vector3 *)&v25);
    v18 = *(float **)(v2 + 40);
    v19 = v25;
    v20 = v26;
    v21 = v27;
    v22 = v18[28];
    v24 = v18[29];
    v23 = v18[30];
    *a2 = v25;
    a2[1] = v20;
    v17 = (float)(v23 * v21) + (float)((float)(v22 * v19) + (float)(v24 * v20));
    a2[2] = v21;
  }
  else
  {
    *(_QWORD *)a2 = 0;
    a2[2] = 0.0;
    v17 = 0.0;
  }
  a2[3] = v17;
  return this;
}

