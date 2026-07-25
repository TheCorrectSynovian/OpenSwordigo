/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A44F4
 * Mangled: _ZN5Caver24OrbitControllerComponent7PrepareEv
 * Demangled: Caver::OrbitControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Referenced strings: 31
 *   insn=0x00000000002A450C string=0x00000000002A4510 "h"
 *   insn=0x00000000002A4510 string=0x00000000002A4514 "\t9@"
 *   insn=0x00000000002A4514 string=0x00000000002A4518 "y@"
 *   insn=0x00000000002A4518 string=0x00000000002A451C "iJ"
 *   insn=0x00000000002A451C string=0x00000000002A4520 "h"
 *   insn=0x00000000002A4520 string=0x00000000002A4524 "Cb"
 *   insn=0x00000000002A4524 string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002A452C string=0x00000000002A4530 ""
 *   insn=0x00000000002A4540 string=0x00000000002A4548 "i"
 *   insn=0x00000000002A4548 string=0x00000000002A454C "!"
 *   insn=0x00000000002A455C string=0x00000000002A4560 "`"
 *   insn=0x00000000002A4560 string=0x00000000002A4564 "3b"
 *   insn=0x00000000002A4570 string=0x00000000002A4574 "("
 *   insn=0x00000000002A4574 string=0x00000000002A4578 ".b"
 *   insn=0x00000000002A4584 string=0x00000000002A4588 ")"
 *   insn=0x00000000002A4588 string=0x00000000002A458C ")b"
 *   insn=0x00000000002A4594 string=0x00000000002A4598 "h"
 *   insn=0x00000000002A459C string=0x00000000002A45A0 " "
 *   insn=0x00000000002A45A0 string=0x00000000002A45A4 "`"
 *   insn=0x00000000002A45A4 string=0x00000000002A45A8 ""b"
 *   insn=0x00000000002A45CC string=0x00000000002A45D0 "!"
 *   insn=0x00000000002A45D0 string=0x00000000002A45D4 ""
 *   insn=0x00000000002A45D8 string=0x00000000002A45DC "H3"
 *   insn=0x00000000002A45EC string=0x00000000002A45F0 "\t"
 *   insn=0x00000000002A45F4 string=0x00000000002A45F8 "#"
 *   insn=0x00000000002A45F8 string=0x00000000002A45FC "\t"
 *   insn=0x00000000002A4604 string=0x00000000002A4608 "B"
 *   insn=0x00000000002A4608 string=0x00000000002A460C "$"
 *   insn=0x00000000002A4610 string=0x00000000002A4614 "!"
 *   insn=0x00000000002A4620 string=0x00000000002A4624 "bZ"
 *   insn=0x00000000002A4624 string=0x00000000002A4628 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::OrbitControllerComponent::Prepare(float32x2_t *this)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  Caver *v4; // x0
  int v5; // s1
  float v6; // s0
  Caver *v7; // x0
  float v8; // s8
  Caver *v9; // x0
  float v10; // s9
  Caver *v11; // x0
  int v12; // s0
  Caver *v13; // x0
  unsigned int v14; // w20
  Caver *v15; // x0
  float32x2_t v16; // d8
  float result; // s0
  int v18; // [xsp+0h] [xbp-40h]

  v2 = this[5].n64_u64[0];
  v3 = *(_QWORD *)(v2 + 112);
  LODWORD(v2) = *(_DWORD *)(v2 + 120);
  this[18].n64_u64[0] = v3;
  this[19].n64_u32[0] = v2;
  v4 = (Caver *)Caver::fastrandom((Caver *)this);
  v5 = Caver::FASTRANDOM_MAX;
  this[20].n64_u32[0] = 1053609165;
  v6 = (float)((float)(int)v4 / (float)v5) * 6.28318531;
  this[19].n64_f32[1] = v6;
  v7 = (Caver *)Caver::fastrandom(v4);
  v8 = (float)(int)v7 / (float)Caver::FASTRANDOM_MAX;
  v9 = (Caver *)Caver::fastrandom(v7);
  v10 = (float)(int)v9 / (float)Caver::FASTRANDOM_MAX;
  v11 = (Caver *)Caver::fastrandom(v9);
  v12 = Caver::FASTRANDOM_MAX;
  this[20].n64_f32[1] = v8;
  this[21].n64_f32[0] = v10;
  this[21].n64_f32[1] = (float)(int)v11 / (float)v12;
  v13 = (Caver *)Caver::fastrandom(v11);
  v14 = (unsigned int)v13;
  v18 = Caver::FASTRANDOM_MAX;
  v15 = (Caver *)Caver::fastrandom(v13);
  v16.n64_u64[0] = vdiv_f32(
                     vcvt_f32_s32((int32x2_t)__PAIR64__((unsigned int)v15, v14)),
                     vcvt_f32_s32((int32x2_t)__PAIR64__(Caver::FASTRANDOM_MAX, v18))).n64_u64[0];
  result = (float)((float)((float)(int)Caver::fastrandom(v15) / (float)Caver::FASTRANDOM_MAX) * 0.15) + 0.05;
  this[22].n64_u64[0] = vadd_f32(vmul_f32(v16, vdup_n_s32(0x3E19999Au)), vdup_n_s32(0x3D4CCCCDu)).n64_u64[0];
  this[23].n64_f32[0] = result;
  return result;
}

