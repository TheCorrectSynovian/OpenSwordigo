/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF834
 * Mangled: _ZNK5Caver14TextureMapping19TexCoordForPositionERKNS_7Vector3E
 * Demangled: Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000001FF490  Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9480  Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(Caver::Vector2 const&)
 *
 * Referenced strings: 13
 *   insn=0x00000000004CF840 string=0x00000000004CF844 "T"
 *   insn=0x00000000004CF858 string=0x00000000004CF85C "!5G"
 *   insn=0x00000000004CF858 string=0x0000000000583734 "o"
 *   insn=0x00000000004CF860 string=0x00000000004CF864 "@ !"
 *   insn=0x00000000004CF864 string=0x00000000004CF868 "e"
 *   insn=0x00000000004CF868 string=0x00000000004CF874 "!"
 *   insn=0x00000000004CF87C string=0x00000000004CF880 "!"
 *   insn=0x00000000004CF880 string=0x00000000004CF884 " "
 *   insn=0x00000000004CF898 string=0x00000000004CF89C "8@"
 *   insn=0x00000000004CF898 string=0x00000000004CF8B8 "`"
 *   insn=0x00000000004CF8AC string=0x00000000001F9480 "0'"
 *   insn=0x00000000004CF8C8 string=0x00000000004CF8DC "}"
 *   insn=0x00000000004CF8DC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::TextureMapping::TexCoordForPosition@<X0>(
        __int64 *this@<X0>,
        float32x2_t *a2@<X1>,
        unsigned __int64 *a3@<X8>,
        double a4@<D0>)
{
  unsigned __int64 v5; // d0
  unsigned __int64 v6; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v7[2]; // [xsp+10h] [xbp-20h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  LODWORD(a4) = *((_DWORD *)this + 2);
  if ( fabsf(*(float *)&a4) >= 0.001 )
  {
    v5 = vadd_f32(
           vdiv_f32(
             vsub_f32((float32x2_t)a2->n64_u64[0], *(float32x2_t *)((char *)this + 12)),
             vdup_lane_s32(*(int32x2_t *)&a4, 0)),
           (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v7[0] = v5;
    this = (__int64 *)*this;
    if ( this )
    {
      if ( this[14] )
      {
        this = Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(
                 (__int64 *)&v6,
                 (Caver::Texture *)this,
                 (const Caver::Vector2 *)v7);
        v5 = v6;
        v7[0] = v6;
      }
    }
    *a3 = v5;
  }
  else
  {
    *a3 = 0;
  }
  return this;
}

