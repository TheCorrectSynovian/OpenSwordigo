/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000427A3C
 * Mangled: _ZN5Caver7MapView22NearestNodeInDirectionEPNS_11MapViewNodeERKNS_7Vector2E
 * Demangled: Caver::MapView::NearestNodeInDirection(Caver::MapViewNode *,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000002028E0  Caver::MapView::NearestNodeInDirection(Caver::MapViewNode *,Caver::Vector2 const&)
 *
 * Callees: 4
 *   0x00000000001F4590  AngleDifference(float,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 28
 *   insn=0x0000000000427A5C string=0x0000000000427A60 "W"
 *   insn=0x0000000000427A78 string=0x0000000000427A7C "?"
 *   insn=0x0000000000427A7C string=0x0000000000427A80 "a"
 *   insn=0x0000000000427A84 string=0x0000000000427A88 "0"
 *   insn=0x0000000000427A90 string=0x0000000000427A94 "I"
 *   insn=0x0000000000427A90 string=0x0000000000583944 "\n"
 *   insn=0x0000000000427A94 string=0x0000000000427A98 "jEI"
 *   insn=0x0000000000427AA8 string=0x0000000000427AAC "_"
 *   insn=0x0000000000427AAC string=0x0000000000427AB0 " "
 *   insn=0x0000000000427AB0 string=0x0000000000427AB4 "Jg@9"
 *   insn=0x0000000000427AB0 string=0x0000000000427B34 "9"
 *   insn=0x0000000000427AB8 string=0x0000000000427ABC "H"
 *   insn=0x0000000000427AC8 string=0x0000000000427ACC "!"
 *   insn=0x0000000000427AD8 string=0x00000000001F6DE0 "0'"
 *   insn=0x0000000000427ADC string=0x0000000000427AE0 ""
 *   insn=0x0000000000427AF0 string=0x00000000001F4590 "P'"
 *   insn=0x0000000000427B04 string=0x0000000000427B08 "!!"
 *   insn=0x0000000000427B0C string=0x0000000000427B10 " "
 *   insn=0x0000000000427B14 string=0x0000000000427B18 "g"
 *   insn=0x0000000000427B18 string=0x0000000000427B1C " "
 *   insn=0x0000000000427B20 string=0x00000000001FD530 "0'"
 *   insn=0x0000000000427B24 string=0x0000000000427B28 "\tL)"
 *   insn=0x0000000000427B28 string=0x0000000000427B2C "TC"
 *   insn=0x0000000000427B34 string=0x0000000000427B38 "*"
 *   insn=0x0000000000427B38 string=0x0000000000427B3C "?"
 *   insn=0x0000000000427B40 string=0x0000000000427B44 "#"
 *   insn=0x0000000000427B50 string=0x0000000000427B54 "a"
 *   insn=0x0000000000427B80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t **__fastcall Caver::MapView::NearestNodeInDirection(
        Caver::MapView *this,
        float32x2_t **a2,
        const Caver::Vector2 *a3)
{
  __int64 v6; // x8
  __int64 v7; // x9
  float32x2_t **v8; // x20
  float v9; // s9
  __int64 v10; // x24
  unsigned __int64 v11; // x25
  float32x2_t **v12; // x26
  float v13; // s0
  float v14; // s8
  float v15; // s0
  float v16; // s0
  float v17; // s0
  _QWORD v19[2]; // [xsp+0h] [xbp-70h] BYREF

  v19[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((_QWORD *)this + 35);
  v7 = *((_QWORD *)this + 36);
  if ( v7 == v6 )
    return 0;
  v9 = 3.4028e38;
  v10 = 0;
  v8 = 0;
  v11 = 0;
  do
  {
    v12 = *(float32x2_t ***)(v6 + v10);
    if ( v12 != a2 && *((_BYTE *)v12 + 25) )
    {
      v19[0] = vsub_f32((*v12)[1], (*a2)[1]).n64_u64[0];
      Caver::Vector2::Angle(a3);
      v14 = v13;
      Caver::Vector2::Angle((Caver::Vector2 *)v19);
      AngleDifference(v14, v15);
      if ( fabsf(v16) < 0.01 )
      {
        v17 = sqrtf((float)(*(float *)v19 * *(float *)v19) + (float)(*((float *)v19 + 1) * *((float *)v19 + 1)));
        if ( v17 < v9 )
        {
          v9 = v17;
          v8 = v12;
        }
      }
      v6 = *((_QWORD *)this + 35);
      v7 = *((_QWORD *)this + 36);
    }
    ++v11;
    v10 += 16;
  }
  while ( v11 < (v7 - v6) >> 4 );
  return v8;
}

