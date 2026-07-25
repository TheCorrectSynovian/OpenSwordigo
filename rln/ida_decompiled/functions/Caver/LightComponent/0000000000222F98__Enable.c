/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222F98
 * Mangled: _ZN5Caver14LightComponent6EnableEPNS_16RenderingContextEi
 * Demangled: Caver::LightComponent::Enable(Caver::RenderingContext *,int)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8360  .glLightf
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FEE70  .glLightfv
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000202FA0  .glLightModelfv
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 50
 *   insn=0x0000000000222FAC string=0x0000000000222FB0 "V"
 *   insn=0x0000000000222FC4 string=0x0000000000222FC8 "hr@"
 *   insn=0x0000000000222FC8 string=0x0000000000222FCC "t"
 *   insn=0x0000000000222FD4 string=0x00000000002230A4 "h"
 *   insn=0x0000000000222FE8 string=0x0000000000222FEC "H"
 *   insn=0x0000000000222FEC string=0x0000000000222FF0 "`v@"
 *   insn=0x0000000000222FF0 string=0x0000000000222FF4 "a"
 *   insn=0x0000000000222FF4 string=0x0000000000222FF8 "`j"
 *   insn=0x0000000000222FFC string=0x0000000000223000 "!"
 *   insn=0x0000000000223000 string=0x0000000000223004 "@"
 *   insn=0x000000000022300C string=0x0000000000223010 "Y"
 *   insn=0x0000000000223024 string=0x0000000000223028 "h"
 *   insn=0x0000000000223024 string=0x00000000001F3C70 "P'"
 *   insn=0x000000000022302C string=0x0000000000223030 "\t9@"
 *   insn=0x0000000000223030 string=0x0000000000223034 "y@"
 *   insn=0x0000000000223048 string=0x000000000022304C "a@"
 *   insn=0x0000000000223060 string=0x0000000000223064 "`v@"
 *   insn=0x0000000000223064 string=0x0000000000223068 "a"
 *   insn=0x0000000000223068 string=0x000000000022306C "!@"
 *   insn=0x0000000000223074 string=0x0000000000223078 "!"
 *   insn=0x0000000000223078 string=0x000000000022307C "@"
 *   insn=0x0000000000223080 string=0x0000000000223084 "{o"
 *   insn=0x0000000000223088 string=0x000000000022308C "A@"
 *   insn=0x0000000000223098 string=0x000000000022309C "uo"
 *   insn=0x000000000022309C string=0x00000000002230A0 "5"
 *   insn=0x00000000002230A4 string=0x00000000002230A8 "a"
 *   insn=0x00000000002230AC string=0x00000000002230B0 "y@"
 *   insn=0x00000000002230B0 string=0x00000000002230B4 "\t9@"
 *   insn=0x00000000002230B8 string=0x00000000002230BC "h"
 *   insn=0x00000000002230D0 string=0x00000000001FC440 "0'"
 *   insn=0x00000000002230D8 string=0x00000000002230DC "`"
 *   insn=0x00000000002230E8 string=0x00000000002230EC ") "
 *   insn=0x00000000002230EC string=0x00000000002230F0 ")"
 *   insn=0x00000000002230F8 string=0x00000000002230FC "a@"
 *   insn=0x0000000000223110 string=0x0000000000223114 "Wo"
 *   insn=0x0000000000223114 string=0x0000000000223118 "`v@"
 *   insn=0x0000000000223118 string=0x000000000022311C "a"
 *   insn=0x000000000022311C string=0x0000000000223120 "!@"
 *   insn=0x0000000000223128 string=0x000000000022312C "!"
 *   insn=0x000000000022312C string=0x0000000000223130 "@"
 *   insn=0x0000000000223134 string=0x0000000000223138 "No"
 *   insn=0x000000000022313C string=0x0000000000223140 "A@"
 *   insn=0x000000000022314C string=0x0000000000223150 "Ho"
 *   insn=0x0000000000223150 string=0x0000000000223154 "`"
 *   insn=0x0000000000223160 string=0x0000000000223164 "`"
 *   insn=0x0000000000223160 string=0x00000000001F8360 "0'"
 *   insn=0x0000000000223164 string=0x0000000000223168 "!A"
 *   insn=0x000000000022316C string=0x0000000000223170 "|T"
 *   insn=0x0000000000223180 string=0x000000000022319C "ML"
 *   insn=0x000000000022319C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t *__fastcall Caver::LightComponent::Enable(
        float32x2_t *this,
        Caver::RenderingContext *a2,
        unsigned __int32 a3)
{
  float32x2_t *v3; // x19
  unsigned __int32 v5; // w8
  float v6; // s0
  unsigned __int64 v7; // d1
  unsigned __int64 v8; // d0
  unsigned __int64 v9; // x8
  __int64 v10; // x9
  float v11; // s0
  unsigned __int64 v12; // d1
  unsigned __int64 v13; // d0
  float v19; // s0
  __int64 v21; // [xsp+38h] [xbp-98h] BYREF
  __int128 v22; // [xsp+40h] [xbp-90h]
  unsigned __int64 v23; // [xsp+58h] [xbp-78h]
  unsigned __int64 v24; // [xsp+60h] [xbp-70h]
  __int64 v25; // [xsp+68h] [xbp-68h]
  int v26; // [xsp+70h] [xbp-60h]
  int v27; // [xsp+74h] [xbp-5Ch]
  unsigned __int64 v28; // [xsp+78h] [xbp-58h]
  unsigned __int64 v29; // [xsp+80h] [xbp-50h]
  __int64 v30; // [xsp+88h] [xbp-48h] BYREF
  int v31; // [xsp+90h] [xbp-40h]
  __int64 v32; // [xsp+98h] [xbp-38h]

  v3 = this;
  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = this[14].n64_u32[0];
  this[21].n64_u32[1] = a3;
  if ( v5 == 3 )
  {
    Caver::Vector2::Vector2((Caver::Vector2 *)&v21, (const Caver::Vector3 *)&this[20]);
    v19 = *(float *)(v3[5].n64_u64[0] + 128);
    v30 = v21;
    this = (float32x2_t *)Caver::Vector2::Rotate((Caver::Vector2 *)&v30, v19);
    if ( !*(_DWORD *)a2 )
    {
      glEnable();
      glLightfv();
      glLightfv();
      __asm { FMOV            V0.4S, #1.0 }
      glLightfv();
      glLightf();
      return (float32x2_t *)glLightf();
    }
  }
  else if ( v5 == 2 )
  {
    if ( !*(_DWORD *)a2 )
    {
      glEnable();
      v9 = v3[5].n64_u64[0];
      v10 = *(_QWORD *)(v9 + 112);
      LODWORD(v9) = *(_DWORD *)(v9 + 120);
      v30 = v10;
      v31 = v9;
      Caver::Vector3::Normalize((Caver::Vector3 *)&v30);
      v25 = v30;
      v26 = v31;
      v27 = 0;
      glLightfv();
      v11 = v3[14].n64_f32[1];
      v12 = vmul_n_f32(v3[15], v11).n64_u64[0];
      v13 = vmul_n_f32(v3[16], v11).n64_u64[0];
      v23 = v12;
      v24 = v13;
      glLightfv();
      __asm { FMOV            V0.4S, #1.0 }
      v22 = _Q0;
      return (float32x2_t *)glLightfv();
    }
  }
  else if ( v5 == 1 && !*(_DWORD *)a2 )
  {
    v6 = this[14].n64_f32[1];
    v7 = vmul_n_f32(this[15], v6).n64_u64[0];
    v8 = vmul_n_f32(this[16], v6).n64_u64[0];
    v28 = v7;
    v29 = v8;
    return (float32x2_t *)glLightModelfv();
  }
  return this;
}

