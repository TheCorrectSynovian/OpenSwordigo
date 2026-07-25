/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000284B60
 * Mangled: _ZN5Caver18MagicBoltComponent6UpdateEf
 * Demangled: Caver::MagicBoltComponent::Update(float)
 *
 * Callers: 2
 *   0x00000000001F4DF0  Caver::MagicBoltComponent::Update(float)
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *
 * Callees: 16
 *   0x00000000001F3B00  Caver::ParticleEmitterComponent::RandomParticleType(void)
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8F10  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 211
 *   insn=0x0000000000284B8C string=0x0000000000284B90 "X"
 *   insn=0x0000000000284B90 string=0x0000000000284B94 ""
 *   insn=0x0000000000284B98 string=0x0000000000284B9C ""
 *   insn=0x0000000000284BA0 string=0x0000000000284BA4 "h"
 *   insn=0x0000000000284BA8 string=0x0000000000284C20 "t"
 *   insn=0x0000000000284BAC string=0x00000000001FDF30 "0'"
 *   insn=0x0000000000284BB0 string=0x0000000000284BB4 "!"
 *   insn=0x0000000000284BB4 string=0x0000000000588B7C "woosh3"
 *   insn=0x0000000000284BD8 string=0x00000000001F5340 "P'"
 *   insn=0x0000000000284BE0 string=0x0000000000284BE4 "@"
 *   insn=0x0000000000284BE4 string=0x0000000000284BE8 ""
 *   insn=0x0000000000284BE8 string=0x0000000000284BEC ""
 *   insn=0x0000000000284BF0 string=0x0000000000284BF4 ""
 *   insn=0x0000000000284BF4 string=0x0000000000284BF8 ""
 *   insn=0x0000000000284C00 string=0x0000000000284C04 "\t#"
 *   insn=0x0000000000284C04 string=0x0000000000284C08 ")"
 *   insn=0x0000000000284C10 string=0x0000000000284C14 "a5"
 *   insn=0x0000000000284C18 string=0x0000000000284C1C "h"
 *   insn=0x0000000000284C24 string=0x0000000000583944 "\n"
 *   insn=0x0000000000284C30 string=0x0000000000284C34 "$!"
 *   insn=0x0000000000284C34 string=0x0000000000284C38 "c($"
 *   insn=0x0000000000284C38 string=0x0000000000284C3C "` ""
 *   insn=0x0000000000284C3C string=0x0000000000284C40 "e"
 *   insn=0x0000000000284C40 string=0x0000000000284C44 "`"
 *   insn=0x0000000000284C4C string=0x0000000000284C50 "hr"
 *   insn=0x0000000000284C4C string=0x0000000000284C80 "h"
 *   insn=0x0000000000284C50 string=0x0000000000284C54 "a&A"
 *   insn=0x0000000000284C64 string=0x0000000000284C68 "@"
 *   insn=0x0000000000284C84 string=0x0000000000284C88 "\n"
 *   insn=0x0000000000284C84 string=0x0000000000284D00 "tj@"
 *   insn=0x0000000000284C88 string=0x0000000000284CB0 "t"
 *   insn=0x0000000000284C90 string=0x0000000000284C94 "_"
 *   insn=0x0000000000284C94 string=0x00000000001F8E10 "0'"
 *   insn=0x0000000000284C98 string=0x0000000000284C9C "ir"
 *   insn=0x0000000000284C9C string=0x0000000000284CA0 "("
 *   insn=0x0000000000284CA4 string=0x0000000000284CA8 "h"
 *   insn=0x0000000000284CCC string=0x0000000000284CD0 "!("
 *   insn=0x0000000000284CD8 string=0x0000000000284CDC "!(""
 *   insn=0x0000000000284CE0 string=0x0000000000284CE4 ""8""
 *   insn=0x0000000000284CE4 string=0x0000000000284CE8 "B"
 *   insn=0x0000000000284CE8 string=0x0000000000284CEC "@ #"
 *   insn=0x0000000000284CF8 string=0x0000000000284CFC "("
 *   insn=0x0000000000284D04 string=0x0000000000284D08 "`"
 *   insn=0x0000000000284D04 string=0x0000000000284D38 "`*A"
 *   insn=0x0000000000284D0C string=0x0000000000284D10 "t"
 *   insn=0x0000000000284D10 string=0x0000000000284D14 "tj@"
 *   insn=0x0000000000284D10 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000284D18 string=0x0000000000284D1C "Y"
 *   insn=0x0000000000284D1C string=0x0000000000285280 ""
 *   insn=0x0000000000284D24 string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000284D2C string=0x0000000000284D30 "tj@"
 *   insn=0x0000000000284D38 string=0x0000000000284D3C "h"
 *   insn=0x0000000000284D3C string=0x0000000000284D40 ")"
 *   insn=0x0000000000284D40 string=0x0000000000284D44 "*EK"
 *   insn=0x0000000000284D48 string=0x0000000000284D4C "`*"
 *   insn=0x0000000000284D50 string=0x0000000000284D54 "y@"
 *   insn=0x0000000000284D60 string=0x0000000000284D64 "!""
 *   insn=0x0000000000284D74 string=0x0000000000284D78 "("
 *   insn=0x0000000000284D78 string=0x0000000000588B48 "ff"
 *   insn=0x0000000000284D7C string=0x0000000000284D80 "\t"
 *   insn=0x0000000000284D84 string=0x0000000000284D88 "Z"
 *   insn=0x0000000000284D90 string=0x0000000000284D94 "*"
 *   insn=0x0000000000284D94 string=0x0000000000284D98 ")"
 *   insn=0x0000000000284D98 string=0x0000000000284D9C ""
 *   insn=0x0000000000284D9C string=0x0000000000284DA0 "OMK"
 *   insn=0x0000000000284DA8 string=0x0000000000284DAC ";+"
 *   insn=0x0000000000284DAC string=0x0000000000284DB0 """"
 *   insn=0x0000000000284DB0 string=0x0000000000284DB4 "!#"
 *   insn=0x0000000000284DB4 string=0x0000000000284DB8 "+"
 *   insn=0x0000000000284DBC string=0x0000000000284DC0 "t"
 *   insn=0x0000000000284DC0 string=0x0000000000284DC4 ";"
 *   insn=0x0000000000284DC8 string=0x0000000000284DCC "-"
 *   insn=0x0000000000284DD8 string=0x0000000000284DDC "`*"
 *   insn=0x0000000000284DE0 string=0x0000000000284DE4 "@"
 *   insn=0x0000000000284DE0 string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000284DF0 string=0x0000000000284DF4 " "
 *   insn=0x0000000000284E00 string=0x0000000000284E04 "K"
 *   insn=0x0000000000284E04 string=0x0000000000284E08 "\n"
 *   insn=0x0000000000284E04 string=0x00000000001F5730 "P'"
 *   insn=0x0000000000284E08 string=0x0000000000284E0C "@"
 *   insn=0x0000000000284E1C string=0x0000000000284E20 " "
 *   insn=0x0000000000284E34 string=0x0000000000284E38 "! "
 *   insn=0x0000000000284E38 string=0x0000000000284E3C "#"
 *   insn=0x0000000000284E3C string=0x0000000000284E40 "!"
 *   insn=0x0000000000284E40 string=0x0000000000284E44 "c(+"
 *   insn=0x0000000000284E44 string=0x0000000000284E48 "!(,"
 *   insn=0x0000000000284E4C string=0x0000000000284E50 "h"
 *   insn=0x0000000000284E54 string=0x0000000000284E58 "@"
 *   insn=0x0000000000284E64 string=0x0000000000284E68 " "
 *   insn=0x0000000000284E6C string=0x0000000000284E70 "uj@"
 *   insn=0x0000000000284E74 string=0x0000000000284E78 "u"
 *   insn=0x0000000000284E84 string=0x0000000000284E88 "uj@"
 *   insn=0x0000000000284E9C string=0x0000000000284EA0 "`j@"
 *   insn=0x0000000000284EA4 string=0x00000000001F3B00 "P'"
 *   insn=0x0000000000284EAC string=0x0000000000284EB0 "@"
 *   insn=0x0000000000284EC0 string=0x0000000000284EC4 " "
 *   insn=0x0000000000284EDC string=0x0000000000284EE0 "!"
 *   insn=0x0000000000284EE0 string=0x0000000000284EE4 ""
 *   insn=0x0000000000284EE4 string=0x00000000001F8F10 "0'"
 *   insn=0x0000000000284EE8 string=0x0000000000284EEC "5"
 *   insn=0x0000000000284EEC string=0x0000000000284F50 "`*A"
 *   insn=0x0000000000284EF0 string=0x0000000000284EF4 "@"
 *   insn=0x0000000000284EFC string=0x0000000000284F00 " "
 *   insn=0x0000000000284F10 string=0x0000000000284F14 "aj@"
 *   insn=0x0000000000284F24 string=0x0000000000284F28 "aj@"
 *   insn=0x0000000000284F2C string=0x0000000000284F30 ""
 *   insn=0x0000000000284F30 string=0x0000000000284F34 "@"
 *   insn=0x0000000000284F44 string=0x0000000000284F48 " "
 *   insn=0x0000000000284F58 string=0x0000000000284F5C "tj@"
 *   insn=0x0000000000284F60 string=0x0000000000284F64 "T"
 *   insn=0x0000000000284F64 string=0x0000000000284F8C "`"
 *   insn=0x0000000000284F6C string=0x0000000000284F70 "H"
 *   insn=0x0000000000284F78 string=0x0000000000284F7C ""
 *   insn=0x0000000000284F88 string=0x0000000000285000 "`.A"
 *   insn=0x0000000000284F94 string=0x0000000000284F98 "tj@"
 *   insn=0x0000000000284FB0 string=0x0000000000284FB4 ""
 *   insn=0x0000000000284FB8 string=0x0000000000284FBC "U"
 *   insn=0x0000000000284FD4 string=0x0000000000284FD8 "\t@"
 *   insn=0x0000000000284FE0 string=0x0000000000284FE4 ""
 *   insn=0x0000000000284FF4 string=0x0000000000284FF8 "@"
 *   insn=0x0000000000285000 string=0x0000000000285004 ""
 *   insn=0x0000000000285004 string=0x0000000000285008 "\tQK"
 *   insn=0x000000000028500C string=0x0000000000285010 "`."
 *   insn=0x0000000000285014 string=0x0000000000285018 "M"
 *   insn=0x0000000000285018 string=0x000000000028501C ""
 *   insn=0x0000000000285030 string=0x0000000000285034 "9"
 *   insn=0x0000000000285048 string=0x000000000028504C "+"
 *   insn=0x000000000028504C string=0x0000000000285050 "iO"
 *   insn=0x0000000000285050 string=0x0000000000285054 "I3"
 *   insn=0x0000000000285058 string=0x000000000028505C ")"
 *   insn=0x000000000028505C string=0x0000000000285060 "t""
 *   insn=0x0000000000285060 string=0x0000000000285064 "u"
 *   insn=0x0000000000285064 string=0x0000000000285068 "!""
 *   insn=0x0000000000285068 string=0x000000000028506C ","
 *   insn=0x000000000028506C string=0x0000000000285070 ""
 *   insn=0x0000000000285080 string=0x0000000000285084 "`."
 *   insn=0x0000000000285084 string=0x0000000000285088 "j"
 *   insn=0x0000000000285088 string=0x000000000028508C " "
 *   insn=0x0000000000285098 string=0x000000000028509C " "
 *   insn=0x00000000002850AC string=0x00000000002850B0 "`"
 *   insn=0x00000000002850B0 string=0x00000000002850B4 " "
 *   insn=0x00000000002850C4 string=0x00000000002850C8 " "
 *   insn=0x00000000002850DC string=0x00000000002850E0 "  "
 *   insn=0x00000000002850E4 string=0x00000000002850E8 "!($"
 *   insn=0x00000000002850F4 string=0x00000000002850F8 "@"
 *   insn=0x00000000002850F8 string=0x00000000002850FC "c($"
 *   insn=0x0000000000285100 string=0x0000000000285104 "h"
 *   insn=0x0000000000285110 string=0x0000000000285114 "!"
 *   insn=0x0000000000285114 string=0x0000000000285118 " "
 *   insn=0x0000000000285130 string=0x0000000000285134 ""
 *   insn=0x0000000000285138 string=0x000000000028513C "!"
 *   insn=0x000000000028513C string=0x0000000000285140 "!-"
 *   insn=0x0000000000285140 string=0x0000000000285144 ")"
 *   insn=0x0000000000285150 string=0x0000000000285154 "\n"
 *   insn=0x0000000000285154 string=0x0000000000285158 " "
 *   insn=0x0000000000285160 string=0x0000000000285164 ""
 *   insn=0x0000000000285164 string=0x0000000000285168 "?"
 *   insn=0x0000000000285168 string=0x000000000028516C ""
 *   insn=0x000000000028516C string=0x0000000000285170 ")"
 *   insn=0x0000000000285170 string=0x0000000000285174 "_"
 *   insn=0x0000000000285178 string=0x000000000028517C "H"
 *   insn=0x0000000000285184 string=0x0000000000285188 "i"
 *   insn=0x0000000000285190 string=0x0000000000285194 "vj@"
 *   insn=0x0000000000285198 string=0x000000000028519C "v"
 *   insn=0x000000000028519C string=0x00000000002851C8 "N"
 *   insn=0x00000000002851A4 string=0x00000000002851A8 "N"
 *   insn=0x00000000002851A8 string=0x00000000002851AC "vj@"
 *   insn=0x00000000002851BC string=0x00000000002851C0 "H"
 *   insn=0x00000000002851C0 string=0x00000000002851C4 "`j@"
 *   insn=0x00000000002851D0 string=0x00000000002851D4 " "
 *   insn=0x00000000002851E4 string=0x00000000002851E8 " "
 *   insn=0x0000000000285204 string=0x0000000000285208 "B"
 *   insn=0x000000000028520C string=0x0000000000285210 "6"
 *   insn=0x0000000000285210 string=0x0000000000285214 ""
 *   insn=0x0000000000285210 string=0x0000000000285274 "`.A"
 *   insn=0x0000000000285214 string=0x0000000000285218 " "
 *   insn=0x0000000000285220 string=0x0000000000285224 " "
 *   insn=0x0000000000285234 string=0x0000000000285238 "aj@"
 *   insn=0x0000000000285244 string=0x0000000000285248 "&"
 *   insn=0x0000000000285248 string=0x000000000028524C "aj@"
 *   insn=0x0000000000285250 string=0x0000000000285254 ""
 *   insn=0x0000000000285254 string=0x0000000000285258 "@"
 *   insn=0x0000000000285268 string=0x000000000028526C " "
 *   insn=0x0000000000285278 string=0x000000000028527C ","
 *   insn=0x00000000002852C0 string=0x00000000002852C4 ")=G"
 *   insn=0x00000000002852C4 string=0x00000000002852C8 "!"
 *   insn=0x00000000002852CC string=0x00000000002852D0 "\t"
 *   insn=0x00000000002852CC string=0x00000000002852E4 "\t"
 *   insn=0x00000000002852D0 string=0x00000000002852D4 "*"
 *   insn=0x00000000002852D4 string=0x00000000002852D8 "\n"
 *   insn=0x00000000002852E0 string=0x00000000002852F0 "?"
 *   insn=0x00000000002852E4 string=0x00000000002852E8 "*"
 *   insn=0x00000000002852E8 string=0x00000000002852EC "\n"
 *   insn=0x00000000002852F0 string=0x00000000002852F4 ","
 *   insn=0x00000000002852F8 string=0x00000000002852FC "*"
 *   insn=0x00000000002852FC string=0x0000000000285300 "F"
 *   insn=0x0000000000285304 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028530C string=0x0000000000285310 "\n#"
 *   insn=0x0000000000285310 string=0x0000000000285314 "J"
 *   insn=0x0000000000285318 string=0x000000000028531C "(a"
 *   insn=0x0000000000285328 string=0x000000000028532C "J=G"
 *   insn=0x000000000028532C string=0x0000000000285330 ")!"
 *   insn=0x0000000000285334 string=0x0000000000285338 "*"
 *   insn=0x0000000000285334 string=0x0000000000285364 "*"
 *   insn=0x0000000000285338 string=0x000000000028533C "K"
 *   insn=0x000000000028533C string=0x0000000000285340 "+"
 *   insn=0x0000000000285344 string=0x0000000000285348 "_"
 *   insn=0x000000000028535C string=0x0000000000285360 "Y"
 *   insn=0x0000000000285364 string=0x0000000000285368 "K"
 *   insn=0x0000000000285368 string=0x000000000028536C "+"
 *   insn=0x000000000028536C string=0x0000000000285370 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBoltComponent::Update(Caver::MagicBoltComponent *this, float a2)
{
  Caver::MagicBoltComponent *v2; // x19
  __int64 v4; // x0
  int v5; // w8
  __int64 v6; // x20
  float v7; // s1
  float v8; // s0
  float v9; // s1
  __int64 v10; // x20
  float v11; // s2
  float v12; // s4
  float v13; // s0
  float v14; // s1
  int v15; // w8
  _QWORD *v16; // x20
  float *v17; // x8
  float v18; // s0
  float v19; // s13
  float v20; // w23
  float v21; // w25
  Caver::Vector2 *v22; // x0
  float v23; // s0
  Caver *v24; // x0
  int v25; // w0
  float v26; // s0
  float32x2_t v27; // d1
  Caver::ParticleEmitterComponent *v28; // x21
  Caver::ParticleEmitterComponent *v29; // x0
  Caver *v30; // x0
  int v31; // w22
  float v32; // s0
  Caver::MagicBoltComponent *v33; // x21
  float v34; // s0
  __int64 v35; // x1
  float v36; // s0
  _QWORD *v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x21
  _QWORD *v40; // t2
  __int64 v41; // x9
  __int64 v42; // x8
  float v43; // s0
  float32x2_t v44; // d12
  Caver::Vector2 *v45; // x0
  float v46; // s0
  Caver *v47; // x0
  int v48; // w0
  float v49; // s0
  float32x2_t v50; // d1
  unsigned int v51; // s0
  unsigned int v52; // s1
  int v53; // w8
  float v54; // s0
  int v55; // w9
  float v56; // s1
  char v57; // w8
  char v58; // w9
  Caver::ParticleEmitterComponent *v59; // x22
  Caver::ParticleEmitterComponent *v60; // x0
  Caver *v61; // x0
  int v62; // w23
  float v63; // s0
  Caver::MagicBoltComponent *v64; // x22
  float v65; // s0
  __int64 v66; // x1
  float v67; // s0
  unsigned int *v68; // x8
  int v69; // w9
  float v70; // [xsp+Ch] [xbp-E4h]
  float v71; // [xsp+14h] [xbp-DCh]
  char v72; // [xsp+18h] [xbp-D8h]
  char v73; // [xsp+19h] [xbp-D7h]
  char v74; // [xsp+1Ah] [xbp-D6h]
  char v75; // [xsp+1Bh] [xbp-D5h]
  int v76; // [xsp+20h] [xbp-D0h] BYREF
  unsigned __int64 v77; // [xsp+28h] [xbp-C8h] BYREF
  int v78; // [xsp+30h] [xbp-C0h]
  float32x2_t v79; // [xsp+38h] [xbp-B8h] BYREF
  unsigned __int64 v80; // [xsp+40h] [xbp-B0h] BYREF
  float v81; // [xsp+48h] [xbp-A8h]
  __int64 v82; // [xsp+50h] [xbp-A0h]
  __int64 v83; // [xsp+58h] [xbp-98h]

  v2 = this;
  v83 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 305) )
  {
    Caver::AudioSystem::sharedSystem(this);
    sub_566BB8((int)&v80, "woosh3");
    Caver::AudioSystem::PlaySoundEffectWithName();
    v4 = v82;
    if ( v82 )
    {
      v5 = *(_DWORD *)(v82 + 8) - 1;
      *(_DWORD *)(v82 + 8) = v5;
      if ( !v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
    this = (Caver::MagicBoltComponent *)(v80 - 24);
    if ( (__int64 *)(v80 - 24) != &qword_6FD2E0 )
    {
      v68 = (unsigned int *)(v80 - 8);
      if ( &pthread_create )
      {
        do
          v69 = __ldaxr(v68);
        while ( __stlxr(v69 - 1, v68) );
      }
      else
      {
        v69 = (*v68)--;
      }
      if ( v69 <= 0 )
        operator delete(this);
    }
    *((_BYTE *)v2 + 305) = 1;
  }
  v6 = *((_QWORD *)v2 + 5);
  v7 = *(float *)(v6 + 108);
  if ( (float)((float)(*(float *)(v6 + 104) * *(float *)(v6 + 104)) + (float)(v7 * v7)) >= 0.01 )
  {
    LODWORD(v80) = *(_DWORD *)(v6 + 104);
    *((float *)&v80 + 1) = v7;
    this = (Caver::MagicBoltComponent *)Caver::Vector2::Normalize((Caver::Vector2 *)&v80);
    *(_QWORD *)((char *)v2 + 284) = v80;
    *((_DWORD *)v2 + 73) = 0;
    if ( *((_BYTE *)v2 + 304) )
      goto LABEL_16;
  }
  else
  {
    v8 = *((float *)v2 + 70);
    if ( v8 > 0.01 )
    {
      v9 = v8 * *((float *)v2 + 73);
      v80 = vmul_n_f32(*(float32x2_t *)((char *)v2 + 284), v8).n64_u64[0];
      v81 = v9;
      this = (Caver::MagicBoltComponent *)Caver::Vector2::Vector2((Caver::Vector2 *)&v77, (const Caver::Vector3 *)&v80);
      *(_QWORD *)(v6 + 104) = v77;
    }
    if ( *((_BYTE *)v2 + 304) )
    {
LABEL_16:
      v16 = (_QWORD *)*((_QWORD *)v2 + 26);
      if ( v16 )
        goto LABEL_20;
      goto LABEL_17;
    }
  }
  v10 = *((_QWORD *)v2 + 5);
  v12 = *(float *)(v10 + 112);
  v11 = *(float *)(v10 + 116);
  v13 = (float)(*(float *)(v10 + 104) * a2) + v12;
  v14 = (float)(*(float *)(v10 + 108) * a2) + v11;
  if ( fabsf(v13 - v12) <= 0.0001 && fabsf(v14 - v11) <= 0.0001 )
    goto LABEL_16;
  v15 = *(unsigned __int8 *)(v10 + 180);
  *(float *)(v10 + 112) = v13;
  *(float *)(v10 + 116) = v14;
  if ( v15 )
    goto LABEL_16;
  this = (Caver::MagicBoltComponent *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v10);
  *(_BYTE *)(v10 + 180) = 1;
  v16 = (_QWORD *)*((_QWORD *)v2 + 26);
  if ( v16 )
    goto LABEL_20;
LABEL_17:
  this = (Caver::MagicBoltComponent *)Caver::ComponentOutletBase::Connect(
                                        (Caver::MagicBoltComponent *)((char *)v2 + 192),
                                        v2);
  v16 = (_QWORD *)*((_QWORD *)v2 + 26);
  if ( !v16 )
    return;
LABEL_20:
  v17 = (float *)*((_QWORD *)v2 + 5);
  v18 = *((float *)v2 + 74) + a2;
  *((float *)v2 + 74) = v18;
  v19 = v17[30];
  v21 = v17[28];
  v20 = v17[29];
  v71 = v17[35] * 10.0;
  if ( v18 <= 0.015 )
    goto LABEL_30;
  do
  {
    *((float *)v2 + 74) = v18 + -0.015;
    v22 = (Caver::Vector2 *)Caver::fastrandom(this);
    v23 = (float)((float)(int)v22 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
    v24 = (Caver *)Caver::Vector2::FromAngle((__int64 *)&v79, v22, v23);
    v25 = Caver::fastrandom(v24);
    v81 = v19 + 0.0;
    v26 = (float)((float)((float)v25 / (float)Caver::FASTRANDOM_MAX) * 0.5) + 1.0;
    *(float *)&v80 = vmuls_n_f32(v71 * v26, v79.n64_f32[0]) + v21;
    *((float *)&v80 + 1) = vmuls_lane_f32(v71 * v26, v79, 1) + v20;
    v27.n64_u64[0] = *(unsigned __int64 *)(*((_QWORD *)v2 + 5) + 104LL);
    v78 = 0;
    v76 = 5855577;
    v77 = vsub_f32(v27, vmul_n_f32(v79, (float)((float)(v71 * 1.3) / 0.2) * v26)).n64_u64[0];
    v28 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 26);
    v29 = v28;
    if ( !v28 )
    {
      Caver::ComponentOutletBase::Connect((Caver::MagicBoltComponent *)((char *)v2 + 192), v2);
      v28 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 26);
      v29 = v28;
      if ( !v28 )
      {
        Caver::ComponentOutletBase::Connect((Caver::MagicBoltComponent *)((char *)v2 + 192), v2);
        v29 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 26);
      }
    }
    Caver::ParticleEmitterComponent::RandomParticleType(v29);
    v31 = (int)v30;
    v32 = (float)((float)(int)Caver::fastrandom(v30) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
    this = (Caver::MagicBoltComponent *)Caver::ParticleEmitterComponent::AddParticle(
                                          v28,
                                          v31,
                                          (const Caver::Vector3 *)&v80,
                                          (const Caver::Vector3 *)&v77,
                                          v32,
                                          (const Caver::Color *)&v76,
                                          0.2);
    v33 = this;
    if ( this )
    {
      v34 = (float)((float)(int)Caver::fastrandom(this) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
      *((float *)v33 + 9) = v34;
      v35 = *((_QWORD *)v2 + 26);
      if ( !v35 )
      {
        Caver::ComponentOutletBase::Connect((Caver::MagicBoltComponent *)((char *)v2 + 192), v2);
        v35 = *((_QWORD *)v2 + 26);
      }
      this = (Caver::MagicBoltComponent *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v35 + 120) + 24LL))(v35 + 120);
      v36 = *((float *)this + 32);
      *((_DWORD *)v33 + 10) = 1048576000;
      *((float *)v33 + 11) = (float)(v71 * 4.0) / v36;
    }
    v18 = *((float *)v2 + 74);
  }
  while ( v18 > 0.015 );
  v16 = (_QWORD *)*((_QWORD *)v2 + 26);
  if ( v16 )
  {
LABEL_30:
    v37 = (_QWORD *)v16[35];
    if ( v37 )
      goto LABEL_31;
  }
  else
  {
    this = (Caver::MagicBoltComponent *)Caver::ComponentOutletBase::Connect(
                                          (Caver::MagicBoltComponent *)((char *)v2 + 192),
                                          v2);
    v16 = (_QWORD *)*((_QWORD *)v2 + 26);
    v37 = (_QWORD *)v16[35];
    if ( v37 )
      goto LABEL_31;
  }
  this = (Caver::MagicBoltComponent *)Caver::ComponentOutletBase::Connect(
                                        (Caver::ComponentOutletBase *)(v16 + 33),
                                        (const Caver::Component *)v16);
  v37 = (_QWORD *)v16[35];
  if ( !v37 )
  {
LABEL_36:
    v38 = v16[41];
    v39 = (_QWORD *)v16[42];
    if ( !v39 )
      goto LABEL_33;
LABEL_37:
    v41 = v39[1];
    *(_DWORD *)(v38 + 164) = 0;
    v39[1] = v41;
    if ( !v41 )
    {
      this = (Caver::MagicBoltComponent *)(*(__int64 (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
      v42 = v39[2] - 1LL;
      v39[2] = v42;
      if ( !v42 )
        this = (Caver::MagicBoltComponent *)(*(__int64 (__fastcall **)(_QWORD *))(*v39 + 24LL))(v39);
    }
    goto LABEL_40;
  }
LABEL_31:
  if ( v37 == v16 )
    goto LABEL_36;
  v40 = v37 + 41;
  v38 = v37[41];
  v39 = (_QWORD *)v40[1];
  if ( v39 )
    goto LABEL_37;
LABEL_33:
  *(_DWORD *)(v38 + 164) = 0;
LABEL_40:
  v43 = *((float *)v2 + 75) + a2;
  *((float *)v2 + 75) = v43;
  if ( v43 > 0.03 )
  {
    v70 = v20;
    v44.n64_u64[0] = vdup_n_s32(0x3F19999Au).n64_u64[0];
    do
    {
      *((float *)v2 + 75) = v43 + -0.03;
      v45 = (Caver::Vector2 *)Caver::fastrandom(this);
      v46 = (float)((float)(int)v45 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
      v47 = (Caver *)Caver::Vector2::FromAngle((__int64 *)&v79, v45, v46);
      v48 = Caver::fastrandom(v47);
      v81 = v19 + 0.0;
      v49 = v71 * (float)((float)((float)((float)v48 / (float)Caver::FASTRANDOM_MAX) * 0.2) + 0.5);
      *(float *)&v80 = vmuls_n_f32(v49, v79.n64_f32[0]) + v21;
      *((float *)&v80 + 1) = vmuls_lane_f32(v49, v79, 1) + v70;
      v50.n64_u64[0] = *(unsigned __int64 *)(*((_QWORD *)v2 + 5) + 104LL);
      v78 = 0;
      v77 = vsub_f32(vmul_f32(v50, v44), vmul_n_f32(v79, v49 / 0.3)).n64_u64[0];
      Caver::Color::FromFloatColor();
      LOBYTE(v51) = v72;
      LOBYTE(v52) = v73;
      v54 = (float)v51 * 1.5;
      v53 = (int)v54;
      LOBYTE(v54) = v74;
      v56 = (float)v52 * 1.5;
      v55 = (int)v56;
      LOBYTE(v56) = v75;
      if ( v53 >= 255 )
        LOBYTE(v53) = -1;
      if ( v55 >= 255 )
        LOBYTE(v55) = -1;
      LOBYTE(v76) = v53;
      if ( (int)(float)((float)LODWORD(v54) * 1.5) >= 255 )
        v57 = -1;
      else
        v57 = (int)(float)((float)LODWORD(v54) * 1.5);
      BYTE1(v76) = v55;
      if ( (int)(float)((float)LODWORD(v56) * 1.5) >= 255 )
        v58 = -1;
      else
        v58 = (int)(float)((float)LODWORD(v56) * 1.5);
      BYTE2(v76) = v57;
      HIBYTE(v76) = v58;
      v59 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 26);
      v60 = v59;
      if ( !v59 )
      {
        Caver::ComponentOutletBase::Connect((Caver::MagicBoltComponent *)((char *)v2 + 192), v2);
        v59 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 26);
        v60 = v59;
        if ( !v59 )
        {
          Caver::ComponentOutletBase::Connect((Caver::MagicBoltComponent *)((char *)v2 + 192), v2);
          v60 = (Caver::ParticleEmitterComponent *)*((_QWORD *)v2 + 26);
        }
      }
      Caver::ParticleEmitterComponent::RandomParticleType(v60);
      v62 = (int)v61;
      v63 = (float)((float)(int)Caver::fastrandom(v61) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
      this = (Caver::MagicBoltComponent *)Caver::ParticleEmitterComponent::AddParticle(
                                            v59,
                                            v62,
                                            (const Caver::Vector3 *)&v80,
                                            (const Caver::Vector3 *)&v77,
                                            v63,
                                            (const Caver::Color *)&v76,
                                            0.3);
      v64 = this;
      if ( this )
      {
        v65 = (float)((float)(int)Caver::fastrandom(this) / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
        *((float *)v64 + 9) = v65;
        v66 = *((_QWORD *)v2 + 26);
        if ( !v66 )
        {
          Caver::ComponentOutletBase::Connect((Caver::MagicBoltComponent *)((char *)v2 + 192), v2);
          v66 = *((_QWORD *)v2 + 26);
        }
        this = (Caver::MagicBoltComponent *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v66 + 120) + 24LL))(v66 + 120);
        v67 = *((float *)this + 32);
        *((_DWORD *)v64 + 10) = 1065353216;
        *((float *)v64 + 11) = (float)(v71 * 3.0) / v67;
      }
      v43 = *((float *)v2 + 75);
    }
    while ( v43 > 0.03 );
  }
}

