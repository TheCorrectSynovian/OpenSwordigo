/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2A00
 * Mangled: _ZN5Caver5Image20ConvertToPixelFormatENS_11PixelFormatEb
 * Demangled: Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *
 * Callers: 2
 *   0x00000000001F7E30  Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *   0x00000000004D2868  Caver::Image::Resize(int,int)
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8DE0  Caver::Image::GetPixel(int,int)
 *   0x00000000001FDAA0  Caver::Image::SetPixel(int,int,Caver::FloatColor const&)
 *   0x00000000004D2D24  Caver::Image::LoadFromFile(std::string const&,Caver::ImageType,bool)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 68
 *   insn=0x00000000004D2A24 string=0x00000000004D2A28 "Y"
 *   insn=0x00000000004D2A28 string=0x00000000004D2A2C "("
 *   insn=0x00000000004D2A3C string=0x00000000004D2A40 "z"
 *   insn=0x00000000004D2A44 string=0x00000000004D2A48 "H"
 *   insn=0x00000000004D2A48 string=0x00000000004D2A4C "\t}@"
 *   insn=0x00000000004D2A4C string=0x00000000004D2A50 ")}"
 *   insn=0x00000000004D2A50 string=0x00000000004D2A54 "}|"
 *   insn=0x00000000004D2A60 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D2A70 string=0x00000000004D2A74 "_"
 *   insn=0x00000000004D2A90 string=0x00000000004D2A94 "z"
 *   insn=0x00000000004D2A90 string=0x00000000001F8DE0 "0'"
 *   insn=0x00000000004D2AAC string=0x00000000004D2AB0 "x\n@"
 *   insn=0x00000000004D2AC4 string=0x00000000004D2AC8 "v"
 *   insn=0x00000000004D2ACC string=0x00000000004D2AD0 ")"
 *   insn=0x00000000004D2AD0 string=0x00000000004D2AD8 "("
 *   insn=0x00000000004D2ADC string=0x00000000004D2AE4 "I"
 *   insn=0x00000000004D2AE4 string=0x00000000004D2AE8 ")}h&"
 *   insn=0x00000000004D2AE8 string=0x00000000004D2AEC "h&"
 *   insn=0x00000000004D2AEC string=0x00000000004D2AF0 "(}@"
 *   insn=0x00000000004D2B00 string=0x00000000004D2B04 "`"
 *   insn=0x00000000004D2B04 string=0x00000000004D2B08 "h"
 *   insn=0x00000000004D2B08 string=0x00000000004D2B0C "`"
 *   insn=0x00000000004D2B10 string=0x00000000004D2B14 "x\n@"
 *   insn=0x00000000004D2B10 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004D2B1C string=0x00000000004D2B20 "k"
 *   insn=0x00000000004D2B20 string=0x00000000004D2B24 "h"
 *   insn=0x00000000004D2B24 string=0x00000000004D2B28 "\t"
 *   insn=0x00000000004D2B38 string=0x00000000004D2B3C "*"
 *   insn=0x00000000004D2B3C string=0x00000000004D2B40 ""
 *   insn=0x00000000004D2B4C string=0x00000000004D2C64 "_"
 *   insn=0x00000000004D2B74 string=0x00000000001FDAA0 "0'"
 *   insn=0x00000000004D2B88 string=0x00000000004D2B8C "h"
 *   insn=0x00000000004D2B90 string=0x00000000004D2B94 "\t"
 *   insn=0x00000000004D2BA0 string=0x00000000004D2BA4 "J"
 *   insn=0x00000000004D2BA4 string=0x00000000004D2BCC "x\n@"
 *   insn=0x00000000004D2BA8 string=0x00000000004D2BAC "J"
 *   insn=0x00000000004D2BB0 string=0x00000000004D2BB4 "B@m"
 *   insn=0x00000000004D2BB8 string=0x00000000004D2BBC "%"
 *   insn=0x00000000004D2BC4 string=0x00000000004D2BC8 "B"
 *   insn=0x00000000004D2BCC string=0x00000000004D2BD0 "\n"
 *   insn=0x00000000004D2BD4 string=0x00000000004D2BD8 "\n"
 *   insn=0x00000000004D2BDC string=0x00000000004D2C0C "\n}"
 *   insn=0x00000000004D2BE0 string=0x00000000004D2BE4 "J"
 *   insn=0x00000000004D2BE8 string=0x00000000004D2BEC "c"
 *   insn=0x00000000004D2BF0 string=0x00000000004D2BF4 "%"
 *   insn=0x00000000004D2BF4 string=0x00000000004D2BF8 "\n}"
 *   insn=0x00000000004D2BF8 string=0x00000000004D2BFC "B"
 *   insn=0x00000000004D2C00 string=0x00000000004D2C04 "b"
 *   insn=0x00000000004D2C08 string=0x00000000004D2C10 "J"
 *   insn=0x00000000004D2C14 string=0x00000000004D2C18 "c"
 *   insn=0x00000000004D2C1C string=0x00000000004D2C20 "%"
 *   insn=0x00000000004D2C24 string=0x00000000004D2C28 "B"
 *   insn=0x00000000004D2C2C string=0x00000000004D2C30 "b"
 *   insn=0x00000000004D2C30 string=0x00000000004D2C34 "*"
 *   insn=0x00000000004D2C34 string=0x00000000004D2C38 "I"
 *   insn=0x00000000004D2C3C string=0x00000000004D2C40 ""@m"
 *   insn=0x00000000004D2C44 string=0x00000000004D2C48 "!"
 *   insn=0x00000000004D2C4C string=0x00000000004D2C50 "!"
 *   insn=0x00000000004D2C50 string=0x00000000004D2C54 " "
 *   insn=0x00000000004D2C7C string=0x00000000004D2C80 "h"
 *   insn=0x00000000004D2CA4 string=0x00000000004D2CA8 "~"
 *   insn=0x00000000004D2CA8 string=0x00000000004D2CAC "h"
 *   insn=0x00000000004D2CB8 string=0x00000000004D2CBC "x\n@"
 *   insn=0x00000000004D2CC4 string=0x00000000004D2CC8 ""
 *   insn=0x00000000004D2CD0 string=0x00000000004D2CD4 "("
 *   insn=0x00000000004D2CDC string=0x00000000004D2CE0 "a"
 *   insn=0x00000000004D2CE0 string=0x00000000004D2D0C "q"
 *   insn=0x00000000004D2D0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Image::ConvertToPixelFormat(__int64 a1, int a2, char a3)
{
  int v5; // w24
  int v6; // w26
  unsigned __int64 v8; // x0
  _OWORD *v9; // x20
  int i; // w23
  int j; // w24
  int v12; // w8
  int v13; // w8
  int v14; // w9
  unsigned __int64 v15; // x0
  __int64 v16; // x8
  void *v17; // x0
  int v18; // w8
  int v19; // w21
  int v20; // w23
  float32x2_t v27; // d10
  int v29; // w26
  int k; // w22
  _QWORD *v31; // x8
  float32x2_t v32; // d12
  float32x2_t v33; // d13
  float32x2_t v34; // d0
  float32x2_t v35; // d1
  float32x2_t *v36; // x10
  unsigned __int64 v37; // d3
  float32x2_t *v38; // x11
  int v39; // w10
  unsigned __int64 v40; // d3
  int v41; // w10
  float32x2_t *v42; // x11
  unsigned __int64 v43; // d3
  float32x2_t *v44; // x9
  unsigned __int64 v45; // d1
  int v46; // w8
  int m; // w21
  int n; // w22
  float32x2_t v49[2]; // [xsp+8h] [xbp-98h] BYREF
  __int128 v50; // [xsp+18h] [xbp-88h] BYREF
  __int64 v51; // [xsp+28h] [xbp-78h]

  v51 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 8);
  if ( is_mul_ok(v6 * v5, 0x10u) )
    v8 = 16LL * v6 * v5;
  else
    v8 = -1;
  v9 = (_OWORD *)operator new[](v8);
  if ( v5 >= 1 )
  {
    for ( i = 0; i < v5; ++i )
    {
      if ( v6 >= 1 )
      {
        for ( j = 0; j < v6; ++j )
        {
          Caver::Image::GetPixel((__int64 *)&v50, (Caver::Image *)a1, j, i);
          v6 = *(_DWORD *)(a1 + 4);
          v12 = j + i * v6;
          v9[v12] = v50;
        }
        v5 = *(_DWORD *)(a1 + 8);
      }
    }
  }
  *(_DWORD *)(a1 + 12) = a2;
  if ( (unsigned int)(a2 - 1) > 7 )
    v13 = 0;
  else
    v13 = dword_598170[a2 - 1];
  v14 = v6 * v5 * v13;
  *(_DWORD *)(a1 + 16) = v13;
  *(_DWORD *)(a1 + 20) = v14;
  if ( v14 < 0LL )
    v15 = -1;
  else
    v15 = v14;
  v16 = operator new[](v15);
  v17 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v16;
  if ( v17 )
  {
    operator delete[](v17);
    v5 = *(_DWORD *)(a1 + 8);
  }
  if ( (a3 & 1) != 0 )
  {
    if ( v5 >= 1 )
    {
      v18 = *(_DWORD *)(a1 + 4);
      v19 = 0;
      v20 = 1;
      __asm
      {
        FMOV            V8.2S, #0.4375
        FMOV            V9.2S, #0.3125
      }
      v27.n64_u64[0] = vdup_n_s32(0x3D800000u).n64_u64[0];
      __asm { FMOV            V11.2S, #0.1875 }
      do
      {
        v29 = v19 + 1;
        if ( v18 >= 1 )
        {
          for ( k = 0; k < v18; ++k )
          {
            v31 = &v9[k + v19 * v18];
            v33.n64_u64[0] = v31[1];
            *(_QWORD *)&v50 = *v31;
            v32.n64_u64[0] = v50;
            *((float32x2_t *)&v50 + 1) = v33;
            Caver::Image::SetPixel((Caver::Image *)a1, k, v19, (const Caver::FloatColor *)&v50);
            Caver::Image::GetPixel((__int64 *)v49, (Caver::Image *)a1, k, v19);
            v18 = *(_DWORD *)(a1 + 4);
            v34.n64_u64[0] = vsub_f32(v32, v49[0]).n64_u64[0];
            v35.n64_u64[0] = vsub_f32(v33, v49[1]).n64_u64[0];
            if ( k < v18 - 1 )
            {
              v36 = (float32x2_t *)&v9[k + 1 + v19 * v18];
              v37 = vadd_f32(vmul_f32(v35, _D8), v36[1]).n64_u64[0];
              v36->n64_u64[0] = vadd_f32(vmul_f32(v34, _D8), (float32x2_t)v36->n64_u64[0]).n64_u64[0];
              v36[1].n64_u64[0] = v37;
            }
            v5 = *(_DWORD *)(a1 + 8);
            if ( v19 < v5 - 1 )
            {
              if ( k )
              {
                v38 = (float32x2_t *)&v9[k - 1 + v20 * v18];
                v39 = v18 * v29;
                v40 = vadd_f32(vmul_f32(v35, _D11), v38[1]).n64_u64[0];
                v38->n64_u64[0] = vadd_f32(vmul_f32(v34, _D11), (float32x2_t)v38->n64_u64[0]).n64_u64[0];
                v38[1].n64_u64[0] = v40;
              }
              else
              {
                v39 = v18 * v29;
              }
              v41 = v39 + k;
              v42 = (float32x2_t *)&v9[v41];
              v43 = vadd_f32(vmul_f32(v35, _D9), v42[1]).n64_u64[0];
              v42->n64_u64[0] = vadd_f32(vmul_f32(v34, _D9), (float32x2_t)v42->n64_u64[0]).n64_u64[0];
              v42[1].n64_u64[0] = v43;
              if ( k < v18 - 1 )
              {
                v44 = (float32x2_t *)&v9[v41 + 1];
                v45 = vadd_f32(vmul_f32(v35, v27), v44[1]).n64_u64[0];
                v44->n64_u64[0] = vadd_f32(vmul_f32(v34, v27), (float32x2_t)v44->n64_u64[0]).n64_u64[0];
                v44[1].n64_u64[0] = v45;
              }
            }
          }
        }
        ++v20;
        ++v19;
      }
      while ( v29 < v5 );
    }
  }
  else if ( v5 >= 1 )
  {
    v46 = *(_DWORD *)(a1 + 4);
    for ( m = 0; m < v5; ++m )
    {
      if ( v46 >= 1 )
      {
        for ( n = 0; n < v46; ++n )
        {
          Caver::Image::SetPixel((Caver::Image *)a1, n, m, (const Caver::FloatColor *)&v9[n + m * v46]);
          v46 = *(_DWORD *)(a1 + 4);
        }
        v5 = *(_DWORD *)(a1 + 8);
      }
    }
  }
  operator delete[](v9);
}

