/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D3084
 * Mangled: _ZN5Caver5Image16PremultiplyAlphaEv
 * Demangled: Caver::Image::PremultiplyAlpha(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8DE0  Caver::Image::GetPixel(int,int)
 *   0x00000000001FDAA0  Caver::Image::SetPixel(int,int,Caver::FloatColor const&)
 *
 * Referenced strings: 16
 *   insn=0x00000000004D3094 string=0x00000000004D3098 "V"
 *   insn=0x00000000004D30A4 string=0x00000000004D30A8 "h"
 *   insn=0x00000000004D30A8 string=0x00000000004D30AC "h"
 *   insn=0x00000000004D30AC string=0x00000000004D30B0 "i\n@"
 *   insn=0x00000000004D30B0 string=0x00000000004D30B4 "?"
 *   insn=0x00000000004D30B8 string=0x00000000004D30BC "h"
 *   insn=0x00000000004D30DC string=0x00000000004D30E0 "@"
 *   insn=0x00000000004D30E0 string=0x00000000001F8DE0 "0'"
 *   insn=0x00000000004D30F4 string=0x00000000004D30F8 "!"
 *   insn=0x00000000004D3108 string=0x00000000004D310C "e"
 *   insn=0x00000000004D310C string=0x00000000004D3110 "h"
 *   insn=0x00000000004D310C string=0x00000000001FDAA0 "0'"
 *   insn=0x00000000004D311C string=0x00000000004D3120 "i\n@"
 *   insn=0x00000000004D3130 string=0x00000000004D3134 "h"
 *   insn=0x00000000004D3144 string=0x00000000004D315C "]"
 *   insn=0x00000000004D315C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Image *__fastcall Caver::Image::PremultiplyAlpha(Caver::Image *this)
{
  Caver::Image *v1; // x19
  int v2; // w9
  int v3; // w8
  int i; // w20
  int j; // w21
  unsigned __int64 v6; // [xsp+8h] [xbp-48h] BYREF
  float v7; // [xsp+10h] [xbp-40h]
  float v8; // [xsp+14h] [xbp-3Ch]
  float32x2_t v9; // [xsp+18h] [xbp-38h] BYREF
  float v10; // [xsp+20h] [xbp-30h]
  float v11; // [xsp+24h] [xbp-2Ch]
  __int64 v12; // [xsp+28h] [xbp-28h]

  v1 = this;
  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_BYTE *)this )
  {
    v2 = *((_DWORD *)this + 2);
    if ( v2 >= 1 )
    {
      v3 = *((_DWORD *)this + 1);
      for ( i = 0; i < v2; ++i )
      {
        if ( v3 >= 1 )
        {
          for ( j = 0; j < v3; ++j )
          {
            Caver::Image::GetPixel((__int64 *)&v9, v1, j, i);
            v6 = vmul_n_f32(v9, v11).n64_u64[0];
            v7 = v11 * v10;
            v8 = v11;
            this = (Caver::Image *)Caver::Image::SetPixel(v1, j, i, (const Caver::FloatColor *)&v6);
            v3 = *((_DWORD *)v1 + 1);
          }
          v2 = *((_DWORD *)v1 + 2);
        }
      }
    }
    *(_BYTE *)v1 = 1;
  }
  return this;
}

