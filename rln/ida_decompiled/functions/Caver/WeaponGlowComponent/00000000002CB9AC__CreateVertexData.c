/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB9AC
 * Mangled: _ZN5Caver19WeaponGlowComponent16CreateVertexDataEv
 * Demangled: Caver::WeaponGlowComponent::CreateVertexData(void)
 *
 * Callers: 1
 *   0x00000000002030F0  Caver::WeaponGlowComponent::CreateVertexData(void)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000002005C0  Caver::WeaponGlowComponent::CreateVertexData(int,int,int,int,float *,float *)
 *
 * Referenced strings: 27
 *   insn=0x00000000002CB9B8 string=0x00000000002CB9BC "T"
 *   insn=0x00000000002CB9D0 string=0x00000000002CB9D4 "b"
 *   insn=0x00000000002CB9E8 string=0x00000000002CB9EC "a"
 *   insn=0x00000000002CB9EC string=0x00000000002CB9F0 "#YA"
 *   insn=0x00000000002CB9F4 string=0x00000000002CB9F8 "B"
 *   insn=0x00000000002CB9F8 string=0x00000000002CB9FC "@ "
 *   insn=0x00000000002CB9FC string=0x00000000002CBA00 "c"
 *   insn=0x00000000002CBA00 string=0x00000000002CBA04 ""]A"
 *   insn=0x00000000002CBA04 string=0x00000000002CBA08 ""
 *   insn=0x00000000002CBA10 string=0x00000000002CBA14 "("
 *   insn=0x00000000002CBA14 string=0x00000000002CBA18 ")"
 *   insn=0x00000000002CBA18 string=0x00000000002CBA1C "A"
 *   insn=0x00000000002CBA28 string=0x00000000002CBA2C "!"
 *   insn=0x00000000002CBA30 string=0x00000000002CBA34 "h"
 *   insn=0x00000000002CBA38 string=0x00000000002CBA3C "h^@"
 *   insn=0x00000000002CBA38 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002CBA3C string=0x00000000002CBA40 "`^"
 *   insn=0x00000000002CBA40 string=0x00000000002CBA44 "h"
 *   insn=0x00000000002CBA48 string=0x00000000002CBA4C "E"
 *   insn=0x00000000002CBA4C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002CBA54 string=0x00000000002CBA58 "h"
 *   insn=0x00000000002CBA5C string=0x00000000002CBA60 "hf@"
 *   insn=0x00000000002CBA60 string=0x00000000002CBA64 "`f"
 *   insn=0x00000000002CBA64 string=0x00000000002CBA68 "h"
 *   insn=0x00000000002CBA6C string=0x00000000002CBA70 "<"
 *   insn=0x00000000002CBAA0 string=0x00000000002CBAB4 ""
 *   insn=0x00000000002CBAB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponGlowComponent::CreateVertexData(Caver::WeaponGlowComponent *this)
{
  float v2; // s2
  float v3; // s3
  float v4; // s2
  unsigned __int64 v5; // d1
  __int64 v6; // x0
  void *v7; // x8
  __int64 v8; // x0
  void *v9; // x8
  float v11[2]; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v12; // [xsp+8h] [xbp-38h]
  _QWORD v13[2]; // [xsp+10h] [xbp-30h] BYREF
  float v14; // [xsp+20h] [xbp-20h]
  __int64 v15; // [xsp+28h] [xbp-18h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((float *)this + 60);
  v3 = *((float *)this + 61);
  v13[0] = 0x4100000040400000LL;
  v4 = v2 / 50.0;
  v11[0] = 3.0;
  v5 = vmul_n_f32((float32x2_t)0x40A0000041200000LL, v3 / 10.0).n64_u64[0];
  v13[1] = vmul_n_f32((float32x2_t)0x42340000420C0000LL, v4).n64_u64[0];
  v14 = v4 * 50.0;
  LODWORD(v11[1]) = v5;
  v12 = v5;
  *((_DWORD *)this + 48) = 17;
  v6 = operator new[](0x110u);
  v7 = (void *)*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = v6;
  if ( v7 )
    operator delete[](v7);
  *((_DWORD *)this + 52) = 21;
  v8 = operator new[](0x3Fu);
  v9 = (void *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = v8;
  if ( v9 )
    operator delete[](v9);
  return Caver::WeaponGlowComponent::CreateVertexData(this, 1, 0, 0, 4, (float *)v13, v11);
}

