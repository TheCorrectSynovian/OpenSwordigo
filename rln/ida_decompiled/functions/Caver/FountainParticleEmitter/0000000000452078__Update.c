/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000452078
 * Mangled: _ZN5Caver23FountainParticleEmitter6UpdateEf
 * Demangled: Caver::FountainParticleEmitter::Update(float)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F5D50  Caver::VaryingColor::RandomColor(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB550  Caver::ParticleSystem::AddParticle(Caver::Particle const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202350  Caver::ParticleEmitter::ConvertLocalParticleToWorld(Caver::Particle *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004529C0  Caver::FountainParticleEmitter::type(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 234
 *   insn=0x00000000004520A8 string=0x00000000004520AC "\t"
 *   insn=0x00000000004520AC string=0x00000000004520B0 "V"
 *   insn=0x00000000004520BC string=0x00000000004520C0 " ! "
 *   insn=0x00000000004520C8 string=0x00000000004520CC "hf@"
 *   insn=0x00000000004520CC string=0x00000000004520D0 "h"
 *   insn=0x00000000004520D0 string=0x00000000004520D4 "-@"
 *   insn=0x00000000004520D0 string=0x00000000004520DC "h"
 *   insn=0x00000000004520D4 string=0x00000000004520D8 ""
 *   insn=0x00000000004520D8 string=0x00000000004520F4 "`"
 *   insn=0x00000000004520DC string=0x00000000004520E0 "a"
 *   insn=0x00000000004520E4 string=0x00000000004520E8 ""
 *   insn=0x00000000004520EC string=0x00000000004520F0 ""
 *   insn=0x00000000004520FC string=0x0000000000452100 "`"
 *   insn=0x0000000000452114 string=0x0000000000452118 "9"
 *   insn=0x000000000045211C string=0x0000000000452120 "!"
 *   insn=0x0000000000452124 string=0x0000000000584004 "5"
 *   insn=0x0000000000452128 string=0x000000000045212C ".5G"
 *   insn=0x0000000000452128 string=0x0000000000583734 "o"
 *   insn=0x0000000000452144 string=0x0000000000452148 "!iO"
 *   insn=0x0000000000452148 string=0x000000000045214C "xt"
 *   insn=0x000000000045214C string=0x0000000000452150 "t"
 *   insn=0x0000000000452158 string=0x000000000045215C ""
 *   insn=0x000000000045216C string=0x0000000000452170 "|"
 *   insn=0x0000000000452174 string=0x0000000000452178 "`"
 *   insn=0x000000000045217C string=0x000000000045218C "hf@"
 *   insn=0x0000000000452180 string=0x0000000000452184 ""
 *   insn=0x0000000000452190 string=0x00000000004521A4 "h"
 *   insn=0x0000000000452198 string=0x000000000045219C "5"
 *   insn=0x00000000004521A4 string=0x00000000004521A8 ""
 *   insn=0x00000000004521A8 string=0x00000000004521AC "A"
 *   insn=0x00000000004521B8 string=0x00000000004521BC "5"
 *   insn=0x00000000004521C0 string=0x00000000004521C4 ""
 *   insn=0x00000000004521D4 string=0x00000000004521D8 "\t@"
 *   insn=0x00000000004521E0 string=0x00000000004521E4 ""
 *   insn=0x00000000004521F4 string=0x00000000004521F8 "@"
 *   insn=0x0000000000452218 string=0x000000000045221C "h&B"
 *   insn=0x0000000000452224 string=0x0000000000452260 "h"
 *   insn=0x0000000000452228 string=0x000000000045222C "h&B"
 *   insn=0x0000000000452228 string=0x00000000001FCE30 "0'"
 *   insn=0x000000000045222C string=0x0000000000452230 "\n|@"
 *   insn=0x0000000000452230 string=0x0000000000452234 ")"
 *   insn=0x0000000000452234 string=0x0000000000452238 ")"
 *   insn=0x0000000000452238 string=0x000000000045223C "K\t"
 *   insn=0x000000000045223C string=0x0000000000452240 "i"
 *   insn=0x0000000000452240 string=0x0000000000452244 "yi"
 *   insn=0x0000000000452248 string=0x000000000045224C "h/"
 *   insn=0x000000000045224C string=0x0000000000452250 "hf@"
 *   insn=0x0000000000452254 string=0x0000000000452258 "\t"
 *   insn=0x0000000000452254 string=0x00000000004522A8 "h"
 *   insn=0x0000000000452260 string=0x0000000000452264 "\t"
 *   insn=0x0000000000452264 string=0x0000000000452268 ""
 *   insn=0x0000000000452268 string=0x000000000045226C ""
 *   insn=0x000000000045226C string=0x0000000000452270 "}"
 *   insn=0x0000000000452278 string=0x0000000000452830 ""
 *   insn=0x000000000045227C string=0x0000000000452280 "h"
 *   insn=0x0000000000452280 string=0x0000000000452284 "\t"
 *   insn=0x0000000000452284 string=0x0000000000452288 ""
 *   insn=0x0000000000452288 string=0x000000000045228C ""
 *   insn=0x000000000045228C string=0x0000000000452290 "}"
 *   insn=0x0000000000452290 string=0x0000000000452294 "\t"
 *   insn=0x0000000000452294 string=0x0000000000452298 "("
 *   insn=0x00000000004522A0 string=0x00000000004522A4 "e"
 *   insn=0x00000000004522B0 string=0x00000000004522B4 ""
 *   insn=0x00000000004522B8 string=0x00000000004522BC "\t"
 *   insn=0x00000000004522C0 string=0x00000000004522C4 " "
 *   insn=0x00000000004522C4 string=0x00000000004522C8 "hf@"
 *   insn=0x00000000004522D0 string=0x00000000004522D4 " "
 *   insn=0x00000000004522D4 string=0x00000000004522D8 "\n(-"
 *   insn=0x00000000004522D8 string=0x00000000004522DC "h"
 *   insn=0x00000000004522DC string=0x00000000004522E8 "h"
 *   insn=0x00000000004522F0 string=0x00000000004522F4 ""
 *   insn=0x00000000004522FC string=0x0000000000452300 "@\t "
 *   insn=0x0000000000452300 string=0x0000000000452304 " ) "
 *   insn=0x000000000045230C string=0x0000000000452310 ""
 *   insn=0x0000000000452310 string=0x00000000001F5730 "P'"
 *   insn=0x0000000000452314 string=0x0000000000452318 "hf@"
 *   insn=0x0000000000452318 string=0x000000000045231C "h"
 *   insn=0x000000000045231C string=0x0000000000452320 "\t"
 *   insn=0x000000000045231C string=0x0000000000452328 "h"
 *   insn=0x0000000000452320 string=0x0000000000452324 ""
 *   insn=0x0000000000452330 string=0x0000000000452334 ""
 *   insn=0x0000000000452338 string=0x000000000045233C "\t"
 *   insn=0x0000000000452340 string=0x0000000000452344 " "
 *   insn=0x0000000000452348 string=0x000000000045234C "hf@"
 *   insn=0x0000000000452350 string=0x0000000000452354 " "
 *   insn=0x000000000045235C string=0x0000000000452360 "\n(!"
 *   insn=0x0000000000452360 string=0x0000000000452364 "h"
 *   insn=0x0000000000452364 string=0x0000000000452370 "h"
 *   insn=0x0000000000452368 string=0x000000000045236C ""
 *   insn=0x000000000045236C string=0x0000000000452388 "@\t "
 *   insn=0x0000000000452378 string=0x000000000045237C ""
 *   insn=0x0000000000452380 string=0x0000000000452384 "hf@"
 *   insn=0x0000000000452390 string=0x0000000000452394 " \t "
 *   insn=0x00000000004523B0 string=0x00000000004523B4 ""
 *   insn=0x00000000004523B4 string=0x00000000004523D4 "h"
 *   insn=0x00000000004523C0 string=0x00000000004523C4 "hf@"
 *   insn=0x00000000004523C8 string=0x0000000000452478 "h"
 *   insn=0x00000000004523CC string=0x00000000004523D0 "/"
 *   insn=0x00000000004523D0 string=0x000000000045248C ""
 *   insn=0x00000000004523DC string=0x00000000004523E0 ""
 *   insn=0x00000000004523F0 string=0x00000000004523F4 " "
 *   insn=0x00000000004523F4 string=0x00000000004523F8 "hf@"
 *   insn=0x0000000000452400 string=0x0000000000452404 ")"
 *   insn=0x0000000000452404 string=0x0000000000452408 "h"
 *   insn=0x0000000000452408 string=0x0000000000452414 "h"
 *   insn=0x0000000000452410 string=0x0000000000452428 " \t "
 *   insn=0x000000000045241C string=0x0000000000452420 ""
 *   insn=0x000000000045246C string=0x0000000000452470 "hf@"
 *   insn=0x0000000000452480 string=0x0000000000452484 ""
 *   insn=0x0000000000452494 string=0x0000000000452498 "f"
 *   insn=0x0000000000452494 string=0x00000000004524E4 "hf@"
 *   insn=0x0000000000452498 string=0x000000000045249C " "
 *   insn=0x000000000045249C string=0x00000000004524A0 "hf@"
 *   insn=0x00000000004524A8 string=0x00000000004524AC " "
 *   insn=0x00000000004524AC string=0x00000000004524B0 "\t(-"
 *   insn=0x00000000004524B0 string=0x00000000004524B4 "h"
 *   insn=0x00000000004524B4 string=0x00000000004524C0 "h"
 *   insn=0x00000000004524C8 string=0x00000000004524CC ""
 *   insn=0x00000000004524D4 string=0x00000000004524D8 " \t "
 *   insn=0x00000000004524D8 string=0x00000000004524DC " ( "
 *   insn=0x00000000004524E8 string=0x00000000004524FC "h"
 *   insn=0x00000000004524F0 string=0x00000000004524F4 ","
 *   insn=0x00000000004524F4 string=0x00000000004524F8 ""
 *   insn=0x00000000004524F4 string=0x0000000000452518 "F"
 *   insn=0x0000000000452504 string=0x0000000000452508 ""
 *   insn=0x0000000000452518 string=0x000000000045251C " "
 *   insn=0x000000000045251C string=0x0000000000452520 "hf@"
 *   insn=0x0000000000452528 string=0x000000000045252C " "
 *   insn=0x000000000045252C string=0x0000000000452530 "\t(-"
 *   insn=0x0000000000452530 string=0x0000000000452534 "h"
 *   insn=0x0000000000452534 string=0x0000000000452540 "h"
 *   insn=0x0000000000452548 string=0x000000000045254C ""
 *   insn=0x0000000000452554 string=0x0000000000452558 " \t "
 *   insn=0x0000000000452558 string=0x000000000045255C " ( "
 *   insn=0x000000000045256C string=0x00000000001F5D50 "P'"
 *   insn=0x0000000000452580 string=0x0000000000452584 "+"
 *   insn=0x0000000000452584 string=0x0000000000452588 " "
 *   insn=0x0000000000452590 string=0x0000000000452594 " "
 *   insn=0x00000000004525A4 string=0x00000000004525A8 """
 *   insn=0x00000000004525A8 string=0x00000000004525AC " "
 *   insn=0x00000000004525B4 string=0x00000000004525B8 " "
 *   insn=0x00000000004525D0 string=0x00000000004525D4 "hf@"
 *   insn=0x00000000004525D4 string=0x00000000004525D8 "h"
 *   insn=0x00000000004525D8 string=0x00000000004525DC "\t!@"
 *   insn=0x00000000004525D8 string=0x00000000004525E4 "h"
 *   insn=0x00000000004525DC string=0x00000000004525E0 ""
 *   insn=0x00000000004525E0 string=0x00000000004525FC ""
 *   insn=0x00000000004525EC string=0x00000000004525F0 ""
 *   insn=0x00000000004525F4 string=0x00000000004525F8 "\t"
 *   insn=0x00000000004525FC string=0x0000000000452600 " "
 *   insn=0x0000000000452604 string=0x0000000000452608 "hf@"
 *   insn=0x000000000045260C string=0x0000000000452610 " "
 *   insn=0x0000000000452618 string=0x000000000045261C "\n(!"
 *   insn=0x0000000000452620 string=0x0000000000452638 "h"
 *   insn=0x0000000000452624 string=0x0000000000452628 "@\t "
 *   insn=0x0000000000452628 string=0x000000000045262C " ) "
 *   insn=0x0000000000452630 string=0x0000000000452634 ""
 *   insn=0x0000000000452634 string=0x0000000000452660 "\t1@"
 *   insn=0x0000000000452640 string=0x0000000000452644 ""
 *   insn=0x0000000000452648 string=0x000000000045264C "hf@"
 *   insn=0x000000000045264C string=0x0000000000452650 "@\t "
 *   insn=0x0000000000452650 string=0x0000000000452654 " ) "
 *   insn=0x0000000000452658 string=0x000000000045265C ""
 *   insn=0x000000000045265C string=0x00000000004527FC "h"
 *   insn=0x0000000000452664 string=0x0000000000452668 " "
 *   insn=0x000000000045266C string=0x0000000000452670 "hf@"
 *   insn=0x0000000000452674 string=0x0000000000452678 " "
 *   insn=0x0000000000452680 string=0x0000000000452684 "\n(!"
 *   insn=0x0000000000452684 string=0x0000000000452688 "("
 *   insn=0x0000000000452688 string=0x00000000004526AC "h"
 *   insn=0x0000000000452690 string=0x0000000000452694 "@\t "
 *   insn=0x0000000000452698 string=0x000000000045269C " \t "
 *   insn=0x00000000004526B4 string=0x00000000004526B8 ""
 *   insn=0x00000000004526BC string=0x00000000004526C0 "@\t "
 *   insn=0x00000000004526C8 string=0x00000000004526CC "hf@"
 *   insn=0x00000000004526CC string=0x00000000004526D0 " \t "
 *   insn=0x00000000004526DC string=0x0000000000452818 "h"
 *   insn=0x00000000004526E0 string=0x00000000004526E4 " \t "
 *   insn=0x00000000004526F8 string=0x00000000004526FC "l*@"
 *   insn=0x00000000004526FC string=0x0000000000452700 "hf@"
 *   insn=0x0000000000452700 string=0x0000000000452704 "iZ@"
 *   insn=0x0000000000452704 string=0x0000000000452708 "h"
 *   insn=0x0000000000452708 string=0x0000000000452714 "h"
 *   insn=0x000000000045271C string=0x0000000000452720 ""
 *   insn=0x000000000045272C string=0x0000000000452730 " \t "
 *   insn=0x0000000000452730 string=0x0000000000452734 "A"
 *   insn=0x0000000000452748 string=0x000000000045274C "!"
 *   insn=0x000000000045274C string=0x0000000000452750 "bI"
 *   insn=0x000000000045275C string=0x0000000000452760 "!"
 *   insn=0x0000000000452768 string=0x000000000045276C "a"
 *   insn=0x000000000045276C string=0x0000000000452770 "!"
 *   insn=0x000000000045277C string=0x0000000000452780 "@ "
 *   insn=0x0000000000452788 string=0x000000000045278C "`"
 *   insn=0x0000000000452794 string=0x0000000000452798 ""
 *   insn=0x00000000004527A0 string=0x00000000004527A4 "k"
 *   insn=0x00000000004527A4 string=0x00000000004527A8 "5"
 *   insn=0x00000000004527A4 string=0x00000000001FB550 "0'"
 *   insn=0x00000000004527A8 string=0x00000000004527EC "`"
 *   insn=0x00000000004527AC string=0x00000000004527B0 ""
 *   insn=0x00000000004527C0 string=0x00000000004527C4 "\t@"
 *   insn=0x00000000004527CC string=0x00000000004527D0 ""
 *   insn=0x00000000004527E0 string=0x00000000004527E4 "@"
 *   insn=0x0000000000452804 string=0x0000000000452808 ""
 *   insn=0x000000000045280C string=0x0000000000452810 "\t"
 *   insn=0x0000000000452818 string=0x000000000045281C "!"
 *   insn=0x0000000000452820 string=0x0000000000452824 ""
 *   insn=0x0000000000452878 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000452884 string=0x0000000000452888 ""
 *   insn=0x0000000000452894 string=0x0000000000452898 "\t@"
 *   insn=0x00000000004528A4 string=0x00000000004528A8 ""
 *   insn=0x00000000004528B4 string=0x00000000004528B8 "@"
 *   insn=0x00000000004528C8 string=0x00000000004528CC "5"
 *   insn=0x00000000004528D0 string=0x00000000004528D4 ""
 *   insn=0x00000000004528E0 string=0x00000000004528E4 "\t@"
 *   insn=0x00000000004528F0 string=0x00000000004528F4 ""
 *   insn=0x0000000000452900 string=0x0000000000452904 "@"
 *   insn=0x000000000045292C string=0x0000000000452930 "`f@"
 *   insn=0x0000000000452930 string=0x0000000000452934 ""
 *   insn=0x0000000000452934 string=0x0000000000452938 "A"
 *   insn=0x0000000000452938 string=0x000000000045293C "h"
 *   insn=0x000000000045293C string=0x0000000000452940 "@"
 *   insn=0x0000000000452940 string=0x0000000000452948 "`"
 *   insn=0x0000000000452944 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000452948 string=0x000000000045294C "@"
 *   insn=0x000000000045294C string=0x0000000000452950 "X"
 *   insn=0x000000000045294C string=0x0000000000452954 "t\n@"
 *   insn=0x0000000000452950 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000452954 string=0x0000000000452958 "4"
 *   insn=0x000000000045295C string=0x0000000000452960 ""
 *   insn=0x000000000045296C string=0x0000000000452970 "\t@"
 *   insn=0x000000000045297C string=0x0000000000452980 ""
 *   insn=0x000000000045298C string=0x0000000000452990 "@"
 *   insn=0x00000000004529A4 string=0x00000000004529A8 "B"
 *   insn=0x00000000004529B0 string=0x00000000004529B4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FountainParticleEmitter::Update(Caver::FountainParticleEmitter *this, float a2)
{
  Caver::FountainParticleEmitter *v3; // x19
  __int64 v4; // x8
  float v5; // s8
  float v6; // s0
  float v7; // s13
  _QWORD *v8; // x21
  __int64 v9; // x28
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  Caver *v13; // x0
  float *v14; // x8
  float v15; // s9
  Caver::Vector2 *v16; // x0
  __int64 v17; // x8
  float v18; // s10
  float v19; // s0
  Caver *v20; // x0
  __int64 v21; // kr00_8
  __int64 v22; // x8
  float v23; // s9
  Caver *v24; // x0
  __int64 v25; // x8
  float v26; // s10
  float v27; // s0
  float v28; // s0
  __int64 v29; // x8
  float v30; // s0
  int v31; // w0
  __int64 v32; // x8
  float v33; // s9
  float v34; // s0
  float v35; // s0
  __int64 v36; // x8
  float v37; // s9
  float v38; // s0
  __int64 v39; // x8
  int v40; // w0
  __int64 v41; // x8
  float v42; // s9
  float v43; // s0
  Caver *v44; // x0
  Caver *v45; // x0
  float v46; // s0
  Caver *v47; // x0
  float v48; // s0
  __int64 v49; // x8
  float v50; // s9
  Caver *v51; // x0
  __int64 v52; // x8
  float v53; // s10
  float v54; // s0
  float v55; // s9
  int v56; // w0
  __int64 v57; // x8
  float v58; // s10
  float v59; // s0
  float v60; // s9
  float v61; // s0
  float v62; // s0
  float v63; // s0
  Caver *v64; // x0
  float32x2_t v65; // d12
  __int64 v66; // x8
  float v67; // s9
  float v68; // s0
  float v69; // s0
  _QWORD *v70; // x21
  __int64 v71; // x8
  __int64 v72; // x8
  __int64 v73; // [xsp+58h] [xbp-F8h] BYREF
  float v74; // [xsp+60h] [xbp-F0h]
  float32x2_t v75; // [xsp+68h] [xbp-E8h] BYREF
  __int128 v76; // [xsp+70h] [xbp-E0h]
  float32x2_t v77; // [xsp+80h] [xbp-D0h]
  unsigned __int64 v78; // [xsp+88h] [xbp-C8h]
  __int128 v79; // [xsp+90h] [xbp-C0h]
  __int128 v80; // [xsp+A0h] [xbp-B0h]
  int v81; // [xsp+B0h] [xbp-A0h]
  __int64 v82; // [xsp+B8h] [xbp-98h]

  v3 = this;
  v82 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 >= 0.0001 )
  {
    v4 = *((_QWORD *)this + 25);
    if ( v4 )
      v5 = *(float *)(v4 + 44);
    else
      LODWORD(v5) = COERCE_UNSIGNED_INT128(
                      ((long double (__fastcall *)(Caver::FountainParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)this + 32LL))(
                        this,
                        11));
    v6 = *((float *)v3 + 54) + a2;
    *((float *)v3 + 54) = v6;
    if ( v6 > v5 )
    {
      v7 = -0.5;
      do
      {
        v9 = *((_QWORD *)v3 + 1);
        v8 = (_QWORD *)*((_QWORD *)v3 + 2);
        *((float *)v3 + 54) = v6 - v5;
        if ( v8 )
          ++v8[1];
        v10 = *((_QWORD *)v3 + 25);
        if ( v10 )
        {
          *(_DWORD *)(v9 + 164) = *(_DWORD *)(v10 + 40);
          if ( !v8 )
            goto LABEL_16;
        }
        else
        {
          *(float *)(v9 + 164) = (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(
                                   v3,
                                   10);
          if ( !v8 )
            goto LABEL_16;
        }
        v11 = v8[1] - 1LL;
        v8[1] = v11;
        if ( !v11 )
        {
          this = (Caver::FountainParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
          v12 = v8[2] - 1LL;
          v8[2] = v12;
          if ( !v12 )
            this = (Caver::FountainParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        }
LABEL_16:
        v76 = 0u;
        v77.n64_u64[0] = 0;
        v78 = 0xFFFFFFFF00000000LL;
        v81 = 0;
        v79 = xmmword_583800;
        v80 = xmmword_589600;
        if ( *((_QWORD *)v3 + 4) == *((_QWORD *)v3 + 5) )
        {
          if ( (int)(-1171354717
                   * ((*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) - *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL)) >> 3)) <= 0 )
            return;
          v13 = (Caver *)Caver::fastrandom(this);
          LODWORD(v76) = (int)v13
                       % (int)(-1171354717
                             * ((*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) - *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL)) >> 3));
          if ( (v76 & 0x80000000) != 0 )
            return;
        }
        else
        {
          v13 = (Caver *)Caver::fastrandom(this);
          LODWORD(v76) = *(_DWORD *)(*((_QWORD *)v3 + 4)
                                   + 4
                                   * ((int)v13
                                    % (unsigned __int64)((__int64)(*((_QWORD *)v3 + 5) - *((_QWORD *)v3 + 4)) >> 2)));
          if ( (v76 & 0x80000000) != 0 )
            return;
        }
        v14 = (float *)*((_QWORD *)v3 + 25);
        if ( v14 )
          v15 = *v14;
        else
          LODWORD(v15) = COERCE_UNSIGNED_INT128(
                           ((long double (__fastcall *)(Caver::FountainParticleEmitter *, _QWORD))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
                             v3,
                             0));
        v16 = (Caver::Vector2 *)Caver::fastrandom(v13);
        v17 = *((_QWORD *)v3 + 25);
        v18 = (float)((float)(int)v16 / (float)Caver::FASTRANDOM_MAX) + v7;
        if ( v17 )
          v19 = *(float *)(v17 + 4);
        else
          v16 = (Caver::Vector2 *)(*(__int64 (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(
                                    v3,
                                    1);
        v20 = (Caver *)Caver::Vector2::FromAngle(&v73, v16, (float)(v15 + (float)(v18 * v19)) * 0.017453);
        v21 = v73;
        v22 = *((_QWORD *)v3 + 25);
        if ( v22 )
          v23 = *(float *)(v22 + 20);
        else
          LODWORD(v23) = COERCE_UNSIGNED_INT128(
                           ((long double (__fastcall *)(Caver::FountainParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
                             v3,
                             5));
        v24 = (Caver *)Caver::fastrandom(v20);
        v25 = *((_QWORD *)v3 + 25);
        v26 = (float)((float)((float)(int)v24 / (float)Caver::FASTRANDOM_MAX)
                    + (float)((float)(int)v24 / (float)Caver::FASTRANDOM_MAX))
            + -1.0;
        if ( v25 )
        {
          v27 = *(float *)(v25 + 24);
        }
        else
        {
          v24 = (Caver *)(*(__int64 (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(
                           v3,
                           6);
          v25 = *((_QWORD *)v3 + 25);
        }
        v28 = v23 * (float)((float)(v26 * v27) + 1.0);
        v77.n64_f32[0] = *(float *)&v21 * v28;
        v77.n64_f32[1] = *((float *)&v21 + 1) * v28;
        *(float *)&v78 = v28 * 0.0;
        *((_QWORD *)&v76 + 1) = 0;
        DWORD1(v76) = 0;
        if ( v25 )
        {
          if ( *(float *)(v25 + 8) <= 0.001 )
            goto LABEL_35;
        }
        else if ( (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 2) <= 0.001 )
        {
LABEL_35:
          v29 = *((_QWORD *)v3 + 25);
          if ( v29 )
            goto LABEL_36;
          goto LABEL_42;
        }
        v31 = Caver::fastrandom(v24);
        v32 = *((_QWORD *)v3 + 25);
        v33 = (float)v31 / (float)Caver::FASTRANDOM_MAX;
        if ( v32 )
          v34 = *(float *)(v32 + 8);
        else
          v34 = (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 2);
        v35 = v33 * v34;
        *(float *)&v73 = *(float *)&v21 * v35;
        *((float *)&v73 + 1) = *((float *)&v21 + 1) * v35;
        v74 = v35 * 0.0;
        v24 = (Caver *)Caver::Vector2::Vector2((Caver::Vector2 *)&v75, (const Caver::Vector3 *)&v73);
        *(float32x2_t *)((char *)&v76 + 4) = vadd_f32(v75, *(float32x2_t *)((char *)&v76 + 4));
        *((float *)&v76 + 3) = *((float *)&v76 + 3) + 0.0;
        v29 = *((_QWORD *)v3 + 25);
        if ( v29 )
        {
LABEL_36:
          v30 = *(float *)(v29 + 12);
          goto LABEL_43;
        }
LABEL_42:
        v30 = (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 3);
LABEL_43:
        v7 = -0.5;
        if ( v30 > 0.001 )
        {
          v24 = (Caver *)Caver::fastrandom(v24);
          v36 = *((_QWORD *)v3 + 25);
          v37 = (float)((float)(int)v24 / (float)Caver::FASTRANDOM_MAX) + -0.5;
          if ( v36 )
            v38 = *(float *)(v36 + 12);
          else
            v38 = (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 3);
          *((float *)&v76 + 1) = *((float *)&v76 + 1) + (float)(v37 * v38);
        }
        v39 = *((_QWORD *)v3 + 25);
        if ( v39 )
        {
          if ( *(float *)(v39 + 16) <= 0.001 )
            goto LABEL_56;
        }
        else if ( (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 4) <= 0.001 )
        {
          goto LABEL_56;
        }
        v40 = Caver::fastrandom(v24);
        v41 = *((_QWORD *)v3 + 25);
        v42 = (float)((float)v40 / (float)Caver::FASTRANDOM_MAX) + -0.5;
        if ( v41 )
          v43 = *(float *)(v41 + 16);
        else
          v43 = (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 4);
        *((float *)&v76 + 2) = *((float *)&v76 + 2) + (float)(v42 * v43);
LABEL_56:
        Caver::VaryingColor::RandomColor(&v73, (Caver::FountainParticleEmitter *)((char *)v3 + 168));
        Caver::Color::FromFloatColor();
        HIDWORD(v78) = v75.n64_u32[0];
        v45 = (Caver *)Caver::fastrandom(v44);
        v46 = (float)((float)(int)v45 / (float)Caver::FASTRANDOM_MAX) * 6.28318531;
        *(float *)&v79 = v46;
        v47 = (Caver *)Caver::fastrandom(v45);
        v48 = (float)((float)((float)(int)v47 / (float)Caver::FASTRANDOM_MAX) * 0.3) * 6.28318531;
        *((float *)&v79 + 1) = v48;
        v49 = *((_QWORD *)v3 + 25);
        if ( v49 )
          v50 = *(float *)(v49 + 32);
        else
          LODWORD(v50) = COERCE_UNSIGNED_INT128(
                           ((long double (__fastcall *)(Caver::FountainParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
                             v3,
                             8));
        v51 = (Caver *)Caver::fastrandom(v47);
        v52 = *((_QWORD *)v3 + 25);
        v53 = (float)((float)((float)(int)v51 / (float)Caver::FASTRANDOM_MAX)
                    + (float)((float)(int)v51 / (float)Caver::FASTRANDOM_MAX))
            + -1.0;
        if ( v52 )
        {
          *((float *)&v79 + 3) = v50 + (float)(v53 * *(float *)(v52 + 56));
LABEL_62:
          v55 = *(float *)(v52 + 48);
          goto LABEL_63;
        }
        v54 = (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 14);
        v52 = *((_QWORD *)v3 + 25);
        *((float *)&v79 + 3) = v50 + (float)(v53 * v54);
        if ( v52 )
          goto LABEL_62;
        LODWORD(v55) = COERCE_UNSIGNED_INT128(
                         ((long double (__fastcall *)(Caver::FountainParticleEmitter *, __int64))*(_QWORD *)(*(_QWORD *)v3 + 32LL))(
                           v3,
                           12));
LABEL_63:
        v56 = Caver::fastrandom(v51);
        v57 = *((_QWORD *)v3 + 25);
        v58 = (float)((float)((float)v56 / (float)Caver::FASTRANDOM_MAX)
                    + (float)((float)v56 / (float)Caver::FASTRANDOM_MAX))
            + -1.0;
        if ( v57 )
        {
          v59 = v55 * (float)((float)(v58 * *(float *)(v57 + 52)) + 1.0);
          v60 = *((float *)&v79 + 3);
          *((float *)&v80 + 3) = v59;
        }
        else
        {
          v61 = (*(float (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 13);
          v57 = *((_QWORD *)v3 + 25);
          v62 = v55 * (float)((float)(v58 * v61) + 1.0);
          v60 = *((float *)&v79 + 3);
          *((float *)&v80 + 3) = v62;
          if ( !v57 )
          {
            (*(void (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 9);
            goto LABEL_67;
          }
        }
        v63 = *(float *)(v57 + 36);
LABEL_67:
        *((float *)&v79 + 2) = v60 * v63;
        DWORD2(v80) = 1065353216;
        Caver::ParticleEmitter::ConvertLocalParticleToWorld();
        v65.n64_u64[0] = *(_QWORD *)((unsigned __int64)v3 + 80);
        v66 = *((_QWORD *)v3 + 25);
        v67 = *((float *)v3 + 22);
        if ( v66 )
          v68 = *(float *)(v66 + 28);
        else
          v64 = (Caver *)(*(__int64 (__fastcall **)(Caver::FountainParticleEmitter *, __int64))(*(_QWORD *)v3 + 32LL))(
                           v3,
                           7);
        v77.n64_u64[0] = vadd_f32(vmul_n_f32(v65, v68), v77).n64_u64[0];
        *(float *)&v78 = (float)(v67 * v68) + *(float *)&v78;
        v69 = (float)((float)(int)Caver::fastrandom(v64) / (float)Caver::FASTRANDOM_MAX) * 0.016667;
        *(float32x2_t *)((char *)&v76 + 4) = vadd_f32(vmul_n_f32(v77, v69), *(float32x2_t *)((char *)&v76 + 4));
        *((float *)&v76 + 3) = (float)(*(float *)&v78 * v69) + *((float *)&v76 + 3);
        v70 = (_QWORD *)*((_QWORD *)v3 + 2);
        if ( v70 )
          ++v70[1];
        Caver::ParticleSystem::AddParticle();
        if ( v70 )
        {
          v71 = v70[1] - 1LL;
          v70[1] = v71;
          if ( !v71 )
          {
            this = (Caver::FountainParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v70 + 16LL))(v70);
            v72 = v70[2] - 1LL;
            v70[2] = v72;
            if ( !v72 )
              this = (Caver::FountainParticleEmitter *)(*(__int64 (__fastcall **)(_QWORD *))(*v70 + 24LL))(v70);
          }
        }
        v6 = *((float *)v3 + 54);
      }
      while ( v6 > v5 );
    }
  }
}

