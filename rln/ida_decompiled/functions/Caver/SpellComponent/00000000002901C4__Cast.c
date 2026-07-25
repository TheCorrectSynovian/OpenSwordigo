/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002901C4
 * Mangled: _ZN5Caver14SpellComponent4CastEv
 * Demangled: Caver::SpellComponent::Cast(void)
 *
 * Callers: 1
 *   0x00000000001FA3D0  Caver::SpellComponent::Cast(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x00000000002901D0 string=0x00000000002901D4 "T"
 *   insn=0x00000000002901E0 string=0x00000000002901E4 "h:@"
 *   insn=0x00000000002901E4 string=0x00000000002901E8 "H"
 *   insn=0x00000000002901E8 string=0x00000000002901EC "i"
 *   insn=0x00000000002901E8 string=0x0000000000290210 "hV@"
 *   insn=0x00000000002901F4 string=0x00000000002901F8 ""9@"
 *   insn=0x00000000002901F8 string=0x00000000002901FC "#y@"
 *   insn=0x00000000002901FC string=0x0000000000290200 "!"
 *   insn=0x0000000000290204 string=0x0000000000290208 "a>"
 *   insn=0x0000000000290208 string=0x000000000029020C "`"
 *   insn=0x0000000000290214 string=0x0000000000290218 "aB"
 *   insn=0x0000000000290220 string=0x0000000000290224 ""
 *   insn=0x000000000029022C string=0x0000000000290230 "a"
 *   insn=0x0000000000290230 string=0x0000000000290234 "S"
 *   insn=0x0000000000290244 string=0x0000000000290248 "3"
 *   insn=0x0000000000290248 string=0x000000000029024C "h"
 *   insn=0x000000000029024C string=0x0000000000290250 ""
 *   insn=0x0000000000290250 string=0x0000000000290254 "h"
 *   insn=0x0000000000290258 string=0x000000000029025C "h"
 *   insn=0x0000000000290260 string=0x0000000000290264 "\t@"
 *   insn=0x0000000000290268 string=0x000000000029026C "h\n@"
 *   insn=0x000000000029026C string=0x0000000000290270 ""
 *   insn=0x0000000000290270 string=0x0000000000290274 "h\n"
 *   insn=0x0000000000290278 string=0x000000000029027C "h"
 *   insn=0x0000000000290280 string=0x0000000000290284 "@"
 *   insn=0x0000000000290298 string=0x00000000002902AC "\t"
 *   insn=0x00000000002902AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002902B4 string=0x00000000002902B8 "4"
 *   insn=0x00000000002902BC string=0x00000000002902C0 ""
 *   insn=0x00000000002902CC string=0x00000000002902D0 "\t@"
 *   insn=0x00000000002902DC string=0x00000000002902E0 ""
 *   insn=0x00000000002902EC string=0x00000000002902F0 "@"
 *   insn=0x00000000002902FC string=0x0000000000290300 "q"
 *   insn=0x0000000000290308 string=0x000000000029030C " 9@"
 *   insn=0x0000000000290310 string=0x0000000000290314 "\n@"
 *   insn=0x0000000000290314 string=0x0000000000290318 "J"
 *   insn=0x0000000000290318 string=0x000000000029031C "\n"
 *   insn=0x0000000000290324 string=0x0000000000290328 ""=@"
 *   insn=0x0000000000290328 string=0x000000000029032C "#"
 *   insn=0x000000000029032C string=0x0000000000290330 "!"
 *   insn=0x0000000000290340 string=0x0000000000290344 "@"
 *   insn=0x0000000000290344 string=0x0000000000290348 ""
 *   insn=0x0000000000290348 string=0x000000000029034C ""
 *   insn=0x000000000029034C string=0x0000000000290350 "@"
 *   insn=0x0000000000290350 string=0x0000000000290358 ""
 *   insn=0x000000000029035C string=0x0000000000290360 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t *__fastcall Caver::SpellComponent::Cast(float32x2_t *this)
{
  float32x2_t *v1; // x19
  float32x2_t *v2; // x8
  float32x2_t *v3; // x9
  float v4; // s0
  Caver::SceneObject *v5; // x2
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::SceneObjectLib *v9; // [xsp+8h] [xbp-28h] BYREF
  _QWORD *v10; // [xsp+10h] [xbp-20h]
  __int64 v11; // [xsp+18h] [xbp-18h]

  v1 = this;
  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (float32x2_t *)this[14].n64_u64[0];
  if ( v2 )
  {
    v3 = (float32x2_t *)this[5].n64_u64[0];
    v4 = v2[15].n64_f32[0] - v3[15].n64_f32[0];
    this[15].n64_u64[0] = vsub_f32(v2[14], v3[14]).n64_u64[0];
    this[16].n64_f32[0] = v4;
  }
  if ( this[21].n64_u64[0] )
  {
    Caver::Component::NewProgramStateForProgram(
      (__int64 *)&v9,
      (Caver::Component *)this,
      (const Caver::Program *)&this[18]);
    this = (float32x2_t *)v9;
    if ( v9 )
    {
      Caver::SceneObjectLib::PushSceneObject(v9, (Caver::ProgramState *)v1[5].n64_u64[0], v5);
      this = (float32x2_t *)Caver::ProgramState::Execute(v9, 1);
    }
    v6 = v10;
    if ( v10 )
    {
      v7 = v10[1] - 1LL;
      v10[1] = v7;
      if ( !v7 )
      {
        this = (float32x2_t *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
        v8 = v6[2] - 1LL;
        v6[2] = v8;
        if ( !v8 )
          return (float32x2_t *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
    }
  }
  return this;
}

