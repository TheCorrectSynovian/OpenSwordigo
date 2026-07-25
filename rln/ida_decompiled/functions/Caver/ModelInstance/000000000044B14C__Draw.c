/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044B14C
 * Mangled: _ZN5Caver13ModelInstance4DrawEPNS_16RenderingContextE
 * Demangled: Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *
 * Callers: 2
 *   0x00000000001FD870  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *   0x000000000044AE48  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F69F0  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FDE90  .glMaterialfv
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 40
 *   insn=0x000000000044B160 string=0x000000000044B164 "U"
 *   insn=0x000000000044B174 string=0x000000000044B178 "h"
 *   insn=0x000000000044B178 string=0x000000000044B17C "\t"
 *   insn=0x000000000044B17C string=0x000000000044B180 ""
 *   insn=0x000000000044B180 string=0x000000000044B184 ""
 *   insn=0x000000000044B194 string=0x000000000044B198 "h"
 *   insn=0x000000000044B19C string=0x000000000044B1A0 "iv"
 *   insn=0x000000000044B1A0 string=0x000000000044B1A4 ""
 *   insn=0x000000000044B1A4 string=0x000000000044B1A8 "\t"
 *   insn=0x000000000044B1AC string=0x000000000044B1B0 "\t"
 *   insn=0x000000000044B1B0 string=0x000000000044B1B4 "`BC"
 *   insn=0x000000000044B1B0 string=0x000000000044B250 "h"
 *   insn=0x000000000044B1B8 string=0x000000000044B1BC "c"
 *   insn=0x000000000044B1C0 string=0x000000000044B1C4 "A"
 *   insn=0x000000000044B1C4 string=0x000000000044B1C8 " "
 *   insn=0x000000000044B1C8 string=0x000000000044B1CC "A"
 *   insn=0x000000000044B1D0 string=0x000000000044B1D4 "b2@"
 *   insn=0x000000000044B1DC string=0x000000000044B1E0 "!"
 *   insn=0x000000000044B1E4 string=0x000000000044B1E8 "*"
 *   insn=0x000000000044B1E8 string=0x00000000001FDE90 "0'"
 *   insn=0x000000000044B1F4 string=0x000000000044B1F8 "&"
 *   insn=0x000000000044B1F8 string=0x000000000044B1FC "h"
 *   insn=0x000000000044B200 string=0x000000000044B204 ""
 *   insn=0x000000000044B200 string=0x000000000044B258 "h"
 *   insn=0x000000000044B204 string=0x000000000044B270 "h"
 *   insn=0x000000000044B208 string=0x000000000044B20C "aBC"
 *   insn=0x000000000044B210 string=0x000000000044B214 "c>@"
 *   insn=0x000000000044B214 string=0x000000000044B218 "d2@"
 *   insn=0x000000000044B220 string=0x000000000044B224 "A#"
 *   insn=0x000000000044B228 string=0x000000000044B22C "!$"
 *   insn=0x000000000044B23C string=0x000000000044B240 "T"
 *   insn=0x000000000044B24C string=0x00000000001FB1A0 "0'"
 *   insn=0x000000000044B25C string=0x000000000044B260 "iv"
 *   insn=0x000000000044B260 string=0x000000000044B264 ""
 *   insn=0x000000000044B27C string=0x000000000044B280 "h"
 *   insn=0x000000000044B27C string=0x00000000001F69F0 "0'"
 *   insn=0x000000000044B288 string=0x000000000044B28C "\t"
 *   insn=0x000000000044B28C string=0x000000000044B290 ""
 *   insn=0x000000000044B290 string=0x000000000044B294 ""
 *   insn=0x000000000044B2C8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ModelInstance::Draw(__int64 this, Caver::RenderingContext *a2)
{
  __int64 v2; // x19
  __int64 v4; // x22
  __int64 i; // x23
  float32x2_t *v6; // x8
  float32x2_t v7; // d1
  float v8; // s2
  float v9; // s2
  float v10; // s3
  float v11; // s4
  _QWORD v12[2]; // [xsp+8h] [xbp-58h] BYREF
  float32x2_t v13; // [xsp+18h] [xbp-48h]
  unsigned __int64 v14; // [xsp+20h] [xbp-40h]
  __int64 v15; // [xsp+28h] [xbp-38h]

  v2 = this;
  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (int)((*(_QWORD *)(*(_QWORD *)this + 16LL) - *(_QWORD *)(*(_QWORD *)this + 8LL)) >> 4) >= 1 )
  {
    v4 = 0;
    for ( i = 0; i < (int)((*(_QWORD *)(*(_QWORD *)v2 + 16LL) - *(_QWORD *)(*(_QWORD *)v2 + 8LL)) >> 4); ++i )
    {
      v6 = **(float32x2_t ***)(*(_QWORD *)(v2 + 40) + v4);
      if ( *((_BYTE *)a2 + 114) )
      {
        if ( !*(_DWORD *)a2 )
        {
          v7.n64_u64[0] = vmul_f32(v6[23], *(float32x2_t *)(v2 + 60)).n64_u64[0];
          v13.n64_u64[0] = vmul_f32(v6[22], *(float32x2_t *)(v2 + 52)).n64_u64[0];
          v14 = v7.n64_u64[0];
          v8 = *(float *)(v2 + 48);
          v12[0] = vmul_n_f32(v13, v8).n64_u64[0];
          v12[1] = vmul_n_f32(v7, v8).n64_u64[0];
          glMaterialfv();
          glMaterialfv();
          if ( !*(_BYTE *)(v2 + 68) )
            goto LABEL_10;
LABEL_9:
          Caver::RenderingContext::BindTexture(
            a2,
            *(Caver::Texture **)(**(_QWORD **)(*(_QWORD *)(v2 + 40) + v4) + 216LL));
          goto LABEL_10;
        }
      }
      else
      {
        v9 = v6[23].n64_f32[0];
        v10 = *(float *)(v2 + 60);
        v11 = *(float *)(v2 + 48);
        v13.n64_u64[0] = vmul_n_f32(vmul_f32(v6[22], *(float32x2_t *)(v2 + 52)), v11).n64_u64[0];
        *(float *)&v14 = (float)(v9 * v10) * v11;
        HIDWORD(v14) = 0;
        Caver::Color::FromFloatColor();
        Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v12);
      }
      if ( *(_BYTE *)(v2 + 68) )
        goto LABEL_9;
LABEL_10:
      this = Caver::MeshInstance::Draw(*(Caver::MeshInstance **)(*(_QWORD *)(v2 + 40) + v4), a2);
      v4 += 16;
    }
  }
  return this;
}

