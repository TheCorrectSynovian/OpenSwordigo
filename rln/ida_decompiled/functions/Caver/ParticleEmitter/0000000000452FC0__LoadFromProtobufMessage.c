/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000452FC0
 * Mangled: _ZN5Caver15ParticleEmitter23LoadFromProtobufMessageERKNS_5Proto15ParticleEmitterE
 * Demangled: Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callers: 2
 *   0x0000000000201E50  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Callees: 23
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F67F0  Caver::ParticleEmitter::ParticleEmitter(void)
 *   0x00000000001F68C0  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>(Caver::TrailParticleEmitter *)
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7370  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>(Caver::BlastParticleEmitter *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FBA10  Caver::Vector2::RotateWithSinCos(float,float)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD0A0  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>(Caver::WhooshParticleEmitter *)
 *   0x00000000001FD5E0  Caver::FountainParticleEmitter::FountainParticleEmitter(void)
 *   0x00000000001FF3B0  Caver::WhooshParticleEmitter::WhooshParticleEmitter(void)
 *   0x0000000000201EC0  Caver::TrailParticleEmitter::TrailParticleEmitter(void)
 *   0x00000000002026A0  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x00000000002037F0  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>(Caver::SparkParticleEmitter *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 124
 *   insn=0x0000000000452FDC string=0x0000000000452FE0 "W"
 *   insn=0x0000000000452FF4 string=0x0000000000452FF8 "h"
 *   insn=0x0000000000452FF8 string=0x0000000000452FFC ""
 *   insn=0x0000000000453000 string=0x0000000000453004 "h"
 *   insn=0x0000000000453004 string=0x0000000000453008 "\t\n"
 *   insn=0x0000000000453008 string=0x0000000000453010 "(y"
 *   insn=0x0000000000453008 string=0x00000000005955E0 "<"
 *   insn=0x0000000000453010 string=0x0000000000453014 ""
 *   insn=0x000000000045301C string=0x0000000000453020 "p"
 *   insn=0x0000000000453020 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000453034 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000045303C string=0x00000000001F67F0 "0'"
 *   insn=0x0000000000453040 string=0x0000000000453044 ""
 *   insn=0x0000000000453044 string=0x0000000000453048 "A"
 *   insn=0x0000000000453058 string=0x000000000045305C ","
 *   insn=0x0000000000453058 string=0x00000000001F7370 "0'"
 *   insn=0x0000000000453060 string=0x0000000000453064 "_"
 *   insn=0x000000000045306C string=0x0000000000453070 "\"
 *   insn=0x0000000000453070 string=0x00000000001FD5E0 "0'"
 *   insn=0x000000000045307C string=0x0000000000453080 "#"
 *   insn=0x0000000000453084 string=0x0000000000453088 "V"
 *   insn=0x000000000045309C string=0x00000000004530A0 ""
 *   insn=0x00000000004530A0 string=0x00000000001F68C0 "0'"
 *   insn=0x00000000004530A8 string=0x00000000004530AC "M"
 *   insn=0x00000000004530C4 string=0x00000000001FD0A0 "0'"
 *   insn=0x00000000004530CC string=0x00000000004530D0 "D"
 *   insn=0x00000000004530F0 string=0x00000000004530F4 "IE"
 *   insn=0x00000000004530F4 string=0x00000000004530F8 "A"
 *   insn=0x0000000000453118 string=0x000000000045311C "h\n@"
 *   insn=0x000000000045311C string=0x0000000000453120 ")yF"
 *   insn=0x0000000000453124 string=0x0000000000453128 ")"
 *   insn=0x0000000000453128 string=0x000000000045312C "("
 *   insn=0x000000000045312C string=0x0000000000453130 "\t@"
 *   insn=0x0000000000453130 string=0x0000000000453134 "\n"
 *   insn=0x0000000000453134 string=0x0000000000453138 ""
 *   insn=0x0000000000453140 string=0x0000000000453144 "h"
 *   insn=0x0000000000453148 string=0x000000000045314C "("
 *   insn=0x0000000000453158 string=0x00000000001FA090 "0'"
 *   insn=0x0000000000453164 string=0x00000000001F3BC0 "P'"
 *   insn=0x0000000000453170 string=0x0000000000453174 "h"
 *   insn=0x0000000000453178 string=0x000000000045317C "h*@"
 *   insn=0x0000000000453180 string=0x0000000000453184 "v:@"
 *   insn=0x0000000000453184 string=0x0000000000453188 "(@"
 *   insn=0x0000000000453198 string=0x000000000045319C "`:@"
 *   insn=0x00000000004531A0 string=0x00000000004531A4 "\n"
 *   insn=0x00000000004531A4 string=0x00000000004531A8 "."
 *   insn=0x00000000004531AC string=0x00000000004531B0 "@"
 *   insn=0x00000000004531BC string=0x00000000004531C0 ""
 *   insn=0x00000000004531D0 string=0x0000000000453244 "i"
 *   insn=0x00000000004531D4 string=0x00000000004531D8 "@"
 *   insn=0x00000000004531E8 string=0x00000000004531EC "`"
 *   insn=0x00000000004531F0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004531F8 string=0x00000000004531FC "h"
 *   insn=0x0000000000453200 string=0x0000000000453204 "W"
 *   insn=0x0000000000453204 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000453210 string=0x0000000000453214 ""
 *   insn=0x0000000000453244 string=0x0000000000453248 ":yx"
 *   insn=0x0000000000453248 string=0x000000000045324C "H"
 *   insn=0x0000000000453258 string=0x000000000045325C "K"
 *   insn=0x000000000045326C string=0x000000000045329C ""
 *   insn=0x000000000045329C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004532B8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004532C4 string=0x00000000004532C8 "t"
 *   insn=0x00000000004532EC string=0x00000000004532F0 "4"
 *   insn=0x00000000004532F4 string=0x00000000004532F8 ""
 *   insn=0x0000000000453304 string=0x0000000000453308 "\t@"
 *   insn=0x0000000000453314 string=0x0000000000453318 ""
 *   insn=0x0000000000453324 string=0x0000000000453328 "@"
 *   insn=0x0000000000453334 string=0x0000000000453338 "c"
 *   insn=0x0000000000453350 string=0x0000000000453354 "U"
 *   insn=0x000000000045335C string=0x0000000000453360 ""
 *   insn=0x0000000000453370 string=0x0000000000453374 "\t\n"
 *   insn=0x0000000000453374 string=0x000000000045337C "(y"
 *   insn=0x000000000045337C string=0x0000000000453380 ""
 *   insn=0x000000000045339C string=0x00000000004533A0 "("
 *   insn=0x00000000004533AC string=0x00000000004533B0 ""
 *   insn=0x00000000004533B0 string=0x00000000004533B4 "A"
 *   insn=0x00000000004533C4 string=0x00000000004533C8 ","
 *   insn=0x00000000004533E8 string=0x00000000004533EC "#"
 *   insn=0x00000000004533F0 string=0x00000000004533F4 "{"
 *   insn=0x0000000000453408 string=0x000000000045340C "-"
 *   insn=0x0000000000453414 string=0x0000000000453418 "r"
 *   insn=0x0000000000453438 string=0x000000000045343C "IE"
 *   insn=0x000000000045343C string=0x0000000000453440 "A"
 *   insn=0x0000000000453450 string=0x0000000000453454 "\t"
 *   insn=0x0000000000453458 string=0x000000000045345C "a"
 *   insn=0x0000000000453470 string=0x0000000000453474 ""
 *   insn=0x000000000045347C string=0x0000000000453480 "h&"
 *   insn=0x00000000004534C0 string=0x00000000004534C4 "{"
 *   insn=0x00000000004534E4 string=0x00000000004534E8 "V"
 *   insn=0x00000000004534F8 string=0x00000000004534FC "h"
 *   insn=0x00000000004534FC string=0x0000000000453500 ""
 *   insn=0x0000000000453500 string=0x0000000000453504 "`"
 *   insn=0x0000000000453500 string=0x00000000004535A0 "`"
 *   insn=0x0000000000453508 string=0x000000000045350C "bB@"
 *   insn=0x0000000000453510 string=0x0000000000453514 "u"
 *   insn=0x000000000045351C string=0x0000000000453520 "A(#"
 *   insn=0x0000000000453544 string=0x0000000000453548 """
 *   insn=0x0000000000453548 string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000453594 string=0x0000000000453598 "h"
 *   insn=0x0000000000453598 string=0x000000000045359C "6"
 *   insn=0x000000000045359C string=0x0000000000453674 "`^@"
 *   insn=0x00000000004535A4 string=0x00000000004535A8 "bB@"
 *   insn=0x00000000004535B8 string=0x00000000004535BC "A(#"
 *   insn=0x00000000004535CC string=0x00000000004535D0 "`"
 *   insn=0x00000000004535D8 string=0x00000000004535DC ""
 *   insn=0x00000000004535DC string=0x00000000001FBA10 "0'"
 *   insn=0x00000000004535E0 string=0x00000000004535E4 "ab@"
 *   insn=0x00000000004535E4 string=0x00000000004535E8 "h"
 *   insn=0x00000000004535FC string=0x0000000000453600 "B!"
 *   insn=0x0000000000453600 string=0x0000000000453604 "c!"
 *   insn=0x0000000000453604 string=0x0000000000453608 "aN@"
 *   insn=0x000000000045360C string=0x0000000000453610 "dBD"
 *   insn=0x0000000000453610 string=0x0000000000453614 "@"
 *   insn=0x0000000000453614 string=0x0000000000453618 "a(!"
 *   insn=0x0000000000453628 string=0x000000000045362C "i"
 *   insn=0x0000000000453630 string=0x0000000000453634 "`"
 *   insn=0x0000000000453644 string=0x0000000000453648 "ab@"
 *   insn=0x0000000000453648 string=0x000000000045364C "h"
 *   insn=0x000000000045365C string=0x0000000000453660 "B!"
 *   insn=0x0000000000453660 string=0x0000000000453664 "c!"
 *   insn=0x000000000045368C string=0x0000000000453690 " 8`"
 *   insn=0x000000000045369C string=0x00000000004536A0 "ab@"
 *   insn=0x00000000004536A0 string=0x00000000004536A4 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ParticleEmitter::LoadFromProtobufMessage(
        Caver::ParticleEmitter *this@<X0>,
        const Caver::Proto::ParticleEmitter *a2@<X1>,
        __int64 *a3@<X8>)
{
  _QWORD *v5; // x20
  Caver::FountainParticleEmitter *v6; // x0
  Caver::TrailParticleEmitter *v7; // x0
  Caver::WhooshParticleEmitter *v8; // x0
  _QWORD *v9; // x20
  __int64 v10; // x20
  __int64 v11; // x21
  __int64 v12; // x9
  Caver::ParticleEmitter *v13; // x8
  __int64 v14; // x8
  __int64 v15; // x10
  Caver::ParticleEmitter *v16; // x8
  __int64 v17; // x9
  int v18; // w22
  int v19; // w0
  __int64 v20; // x8
  __int64 v21; // x24
  __int64 v22; // x25
  unsigned int v23; // w22
  __int64 v24; // x27
  __int64 v25; // x0
  void *v26; // x8
  __int64 v27; // x22
  float v28; // s0
  int v29; // w26
  __int64 v30; // [xsp+C0h] [xbp-68h] BYREF
  __int64 v31; // [xsp+C8h] [xbp-60h]
  __int64 v32; // [xsp+D0h] [xbp-58h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *a3 = 0;
  a3[1] = 0;
  switch ( *((_DWORD *)this + 3) )
  {
    case 1:
      v5 = (_QWORD *)operator new(0xD8u);
      memset(v5, 0, 0xD8u);
      Caver::ParticleEmitter::ParticleEmitter((Caver::ParticleEmitter *)v5);
      *v5 = off_6D4300;
      boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>();
      goto LABEL_7;
    case 2:
      v9 = (_QWORD *)operator new(0xD8u);
      memset(v9, 0, 0xD8u);
      Caver::ParticleEmitter::ParticleEmitter((Caver::ParticleEmitter *)v9);
      *v9 = off_6D4520;
      boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>();
      goto LABEL_7;
    case 3:
      v7 = (Caver::TrailParticleEmitter *)operator new(0xE0u);
      Caver::TrailParticleEmitter::TrailParticleEmitter(v7);
      boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>();
      goto LABEL_7;
    case 4:
      v8 = (Caver::WhooshParticleEmitter *)operator new(0xE0u);
      Caver::WhooshParticleEmitter::WhooshParticleEmitter(v8);
      boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>();
      goto LABEL_7;
    case 5:
      v6 = (Caver::FountainParticleEmitter *)operator new(0xE0u);
      Caver::FountainParticleEmitter::FountainParticleEmitter(v6);
      boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>();
LABEL_7:
      v11 = v30;
      v10 = v31;
      v30 = 0;
      *a3 = v11;
      a3[1] = v10;
      break;
    default:
      v11 = 0;
      break;
  }
  v12 = Caver::Proto::ParticleEmitter::default_instance_;
  if ( *((_QWORD *)this + 2) )
    v13 = this;
  else
    v13 = (Caver::ParticleEmitter *)Caver::Proto::ParticleEmitter::default_instance_;
  v14 = *((_QWORD *)v13 + 2);
  v15 = *(_QWORD *)(v14 + 12);
  LODWORD(v14) = *(_DWORD *)(v14 + 20);
  *(_QWORD *)(v11 + 56) = v15;
  *(_DWORD *)(v11 + 64) = v14;
  if ( *((_QWORD *)this + 3) )
    v16 = this;
  else
    v16 = (Caver::ParticleEmitter *)v12;
  Caver::FloatColorFromProtobufMessage(&v30, *((Caver **)v16 + 3), a2);
  Caver::FloatColor::GetHSLComponents((Caver::FloatColor *)&v30, (float *)(v11 + 168));
  v17 = *(_QWORD *)v11;
  *(_DWORD *)(v11 + 180) = HIDWORD(v31);
  *(_QWORD *)(v11 + 184) = *((_QWORD *)this + 4);
  *(_DWORD *)(v11 + 192) = *((_DWORD *)this + 10);
  v18 = *((_DWORD *)this + 14);
  if ( v18 >= (*(int (__fastcall **)(__int64))(v17 + 24))(v11) )
  {
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
    if ( v19 < 1 )
      return;
  }
  else
  {
    v19 = *((_DWORD *)this + 14);
    if ( v19 < 1 )
      return;
  }
  v20 = *(_QWORD *)(v11 + 200);
  v21 = 0;
  v22 = v19;
  do
  {
    v29 = *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v21);
    if ( !v20 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
      v24 = v23;
      v25 = operator new[](4LL * v23);
      v26 = *(void **)(v11 + 200);
      *(_QWORD *)(v11 + 200) = v25;
      if ( v26 )
        operator delete[](v26);
      if ( v23 )
      {
        v27 = 0;
        do
        {
          v28 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, (unsigned int)v27);
          v20 = *(_QWORD *)(v11 + 200);
          *(float *)(v20 + 4 * v27++) = v28;
        }
        while ( v24 != v27 );
      }
      else
      {
        v20 = *(_QWORD *)(v11 + 200);
      }
    }
    *(_DWORD *)(v20 + 4 * v21++) = v29;
  }
  while ( v21 < v22 );
}

