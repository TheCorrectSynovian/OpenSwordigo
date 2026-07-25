/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CBF58
 * Mangled: _ZN5Caver7Texture21LoadFromParentTextureEv
 * Demangled: Caver::Texture::LoadFromParentTexture(void)
 *
 * Callers: 1
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000004CBF58 string=0x00000000004CBF5C "\t9@"
 *   insn=0x00000000004CBF5C string=0x00000000004CBF60 "*M@"
 *   insn=0x00000000004CBF60 string=0x00000000004CBF64 "\nM"
 *   insn=0x00000000004CBF64 string=0x00000000004CBF68 "*9@"
 *   insn=0x00000000004CBF68 string=0x00000000004CBF6C "\n9"
 *   insn=0x00000000004CBF6C string=0x00000000004CBF70 "*E@"
 *   insn=0x00000000004CBF70 string=0x00000000004CBF74 "\nE"
 *   insn=0x00000000004CBF74 string=0x00000000004CBF78 " "
 *   insn=0x00000000004CBF7C string=0x00000000004CBF80 ")"
 *   insn=0x00000000004CBF88 string=0x00000000004CBF8C ")<"
 *   insn=0x00000000004CBF8C string=0x00000000004CBF90 "i"
 *   insn=0x00000000004CBFA0 string=0x00000000004CBFA4 "B"
 *   insn=0x00000000004CBFA4 string=0x00000000004CBFA8 "a"
 *   insn=0x00000000004CBFA8 string=0x00000000004CBFAC "B"
 *   insn=0x00000000004CBFAC string=0x00000000004CBFB0 " "
 *   insn=0x00000000004CBFC0 string=0x00000000004CBFC4 "\t"
 *   insn=0x00000000004CBFC8 string=0x00000000004CBFCC """
 *   insn=0x00000000004CBFCC string=0x00000000004CBFD0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::Texture::LoadFromParentTexture(
        Caver::Texture *this))(_QWORD, Caver::Texture *)
{
  __int64 v2; // x9
  int32x2_t v3; // d0
  unsigned __int64 v4; // d1
  float v5; // s1
  float32x2_t v6; // d0
  unsigned __int64 v7; // d2
  unsigned __int64 v8; // d0
  __int64 (__fastcall ***result)(_QWORD, Caver::Texture *); // x0

  v2 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 19) = *(_QWORD *)(v2 + 152);
  *((_DWORD *)this + 14) = *(_DWORD *)(v2 + 56);
  *((_DWORD *)this + 17) = *(_DWORD *)(v2 + 68);
  v3.n64_u64[0] = *(unsigned __int64 *)(v2 + 60);
  v4 = vceqz_s32(v3).n64_u64[0];
  *(int32x2_t *)((char *)this + 60) = v3;
  if ( (v4 & 1) == 0 && (v4 & 0x100000000LL) == 0 )
  {
    v5 = *((float *)this + 27);
    v6.n64_u64[0] = vcvt_f32_s32(v3).n64_u64[0];
    v7 = vdiv_f32(vmul_n_f32(*(float32x2_t *)((char *)this + 76), v5), v6).n64_u64[0];
    v8 = vdiv_f32(vmul_n_f32(*(float32x2_t *)((char *)this + 84), v5), v6).n64_u64[0];
    *(_QWORD *)((char *)this + 92) = v7;
    *(_QWORD *)((char *)this + 100) = v8;
  }
  result = (__int64 (__fastcall ***)(_QWORD, Caver::Texture *))*((_QWORD *)this + 3);
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, Caver::Texture *))(**result)(result, this);
  return result;
}

