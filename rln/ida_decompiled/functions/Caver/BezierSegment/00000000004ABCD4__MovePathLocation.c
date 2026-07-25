/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABCD4
 * Mangled: _ZNK5Caver13BezierSegment16MovePathLocationEfif
 * Demangled: Caver::BezierSegment::MovePathLocation(float,int,float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 82
 *   insn=0x00000000004ABCF4 string=0x00000000004ABCF8 "\t"
 *   insn=0x00000000004ABCFC string=0x00000000004ABD00 "5"
 *   insn=0x00000000004ABD0C string=0x00000000004ABD10 "e"
 *   insn=0x00000000004ABD10 string=0x00000000004ABD14 "*"
 *   insn=0x00000000004ABD10 string=0x00000000004ABD1C "`"
 *   insn=0x00000000004ABD18 string=0x00000000004ABF68 "@"
 *   insn=0x00000000004ABD1C string=0x00000000004ABD20 "b"
 *   insn=0x00000000004ABD28 string=0x00000000004ABD2C "!8#"
 *   insn=0x00000000004ABD30 string=0x00000000004ABD34 "!!"
 *   insn=0x00000000004ABD38 string=0x00000000004ABD3C "\n"
 *   insn=0x00000000004ABD3C string=0x00000000004ABD40 "@!*"
 *   insn=0x00000000004ABD44 string=0x00000000004ABD54 "`"
 *   insn=0x00000000004ABD48 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004ABD4C string=0x00000000004ABD50 "\n"
 *   insn=0x00000000004ABD54 string=0x00000000004ABD58 "b"
 *   insn=0x00000000004ABD5C string=0x00000000004ABD60 "!8#"
 *   insn=0x00000000004ABD64 string=0x00000000004ABD68 "!!"
 *   insn=0x00000000004ABD6C string=0x00000000004ABD70 " "
 *   insn=0x00000000004ABD78 string=0x00000000004ABD7C " "
 *   insn=0x00000000004ABD78 string=0x00000000004ABD88 "a\nC-c"
 *   insn=0x00000000004ABD88 string=0x00000000004ABD8C "c"
 *   insn=0x00000000004ABD8C string=0x00000000004ABD90 "H) "
 *   insn=0x00000000004ABD90 string=0x00000000004ABD94 "!8#"
 *   insn=0x00000000004ABD94 string=0x00000000004ABD98 "B8$"
 *   insn=0x00000000004ABD98 string=0x00000000004ABD9C "!!"
 *   insn=0x00000000004ABD9C string=0x00000000004ABDA0 "B""
 *   insn=0x00000000004ABDA0 string=0x00000000004ABDA4 ""(""
 *   insn=0x00000000004ABDA4 string=0x00000000004ABDA8 "A"
 *   insn=0x00000000004ABDA8 string=0x00000000004ABDAC "  !"
 *   insn=0x00000000004ABDB0 string=0x00000000004ABDB4 "@"
 *   insn=0x00000000004ABDC8 string=0x00000000004ABDCC " I7"
 *   insn=0x00000000004ABDCC string=0x00000000004ABDD0 ")!"
 *   insn=0x00000000004ABDD0 string=0x00000000004ABDD4 "a\n@-"
 *   insn=0x00000000004ABDD8 string=0x00000000004ABDDC "c"
 *   insn=0x00000000004ABE04 string=0x00000000004ABE08 "e"
 *   insn=0x00000000004ABE0C string=0x00000000004ABE10 "'\n!"
 *   insn=0x00000000004ABE10 string=0x00000000004ABE14 "P\n#"
 *   insn=0x00000000004ABE18 string=0x00000000004ABE1C "gBC-1\n""
 *   insn=0x00000000004ABE1C string=0x00000000004ABE20 "1\n""
 *   insn=0x00000000004ABE20 string=0x00000000004ABE24 "R\n$"
 *   insn=0x00000000004ABE24 string=0x00000000004ABE28 "1*2"
 *   insn=0x00000000004ABE28 string=0x00000000004ABE2C "r\n%"
 *   insn=0x00000000004ABE2C string=0x00000000004ABE30 "s\n&"
 *   insn=0x00000000004ABE34 string=0x00000000004ABE38 "1*3"
 *   insn=0x00000000004ABE48 string=0x00000000004ABE4C "H*3"
 *   insn=0x00000000004ABE50 string=0x00000000004ABE54 "=* "
 *   insn=0x00000000004ABE58 string=0x00000000004ABE5C "\n"
 *   insn=0x00000000004ABE60 string=0x00000000004ABE64 "c"
 *   insn=0x00000000004ABE64 string=0x00000000004ABE68 "e"
 *   insn=0x00000000004ABE68 string=0x00000000004ABE6C "gBC-"
 *   insn=0x00000000004ABE70 string=0x00000000004ABE74 "h! "
 *   insn=0x00000000004ABE74 string=0x00000000004ABE78 " "
 *   insn=0x00000000004ABE8C string=0x00000000004ABE90 " \n "
 *   insn=0x00000000004ABE90 string=0x00000000004ABE94 ""
 *   insn=0x00000000004ABE94 string=0x00000000004ABE98 "`\t."
 *   insn=0x00000000004ABE98 string=0x00000000004ABE9C ")) "
 *   insn=0x00000000004ABE9C string=0x00000000004ABEA0 " I7"
 *   insn=0x00000000004ABEA0 string=0x00000000004ABEA4 "\nX/"
 *   insn=0x00000000004ABEA8 string=0x00000000004ABEAC "Q\t9"
 *   insn=0x00000000004ABEB0 string=0x00000000004ABEB4 "3\n "
 *   insn=0x00000000004ABEB4 string=0x00000000004ABEB8 "Q\t1"
 *   insn=0x00000000004ABEC4 string=0x00000000004ABEC8 "Q\t*"
 *   insn=0x00000000004ABEC8 string=0x00000000004ABECC "A\n!"
 *   insn=0x00000000004ABECC string=0x00000000004ABED0 "B\n""
 *   insn=0x00000000004ABED0 string=0x00000000004ABED4 "c\n#"
 *   insn=0x00000000004ABED4 string=0x00000000004ABED8 "d\n$"
 *   insn=0x00000000004ABED8 string=0x00000000004ABEDC "Q\t1"
 *   insn=0x00000000004ABEE4 string=0x00000000004ABEE8 "!(#"
 *   insn=0x00000000004ABEE8 string=0x00000000004ABEEC "B($"
 *   insn=0x00000000004ABEEC string=0x00000000004ABEF0 "'\n'"
 *   insn=0x00000000004ABEF0 string=0x00000000004ABEF4 "0\n0"
 *   insn=0x00000000004ABEF4 string=0x00000000004ABEF8 "!(%"
 *   insn=0x00000000004ABEF8 string=0x00000000004ABEFC "@( "
 *   insn=0x00000000004ABF04 string=0x00000000004ABF08 "(('"
 *   insn=0x00000000004ABF0C string=0x00000000004ABF10 " :("
 *   insn=0x00000000004ABF18 string=0x00000000004ABF1C "!!"
 *   insn=0x00000000004ABF20 string=0x00000000004ABF24 " "
 *   insn=0x00000000004ABF2C string=0x00000000004ABF3C " "
 *   insn=0x00000000004ABF30 string=0x00000000004ABF34 "a"
 *   insn=0x00000000004ABF34 string=0x00000000004ABE60 "a\n@-c"
 *   insn=0x00000000004ABF44 string=0x00000000004ABF48 "zE"
 *   insn=0x00000000004ABF48 string=0x00000000004ABF4C ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::BezierSegment::MovePathLocation(
        Caver::BezierSegment *this,
        long double a2,
        int a3,
        float a4)
{
  long double v4; // q10
  float v5; // s9
  float v7; // s13
  float v8; // s1
  float v9; // s2
  float v10; // s3
  float v11; // s4
  float v12; // s0
  float v13; // s7
  float v14; // s19
  float v15; // s16
  float v16; // s0
  float v17; // s17
  float v18; // s18
  float v19; // s5
  float v20; // s6
  float v21; // s19
  float v22; // s7
  float v23; // s16
  int v24; // w20
  float v25; // s8
  float v26; // s29
  float i; // s30
  float v28; // s0
  float v29; // s11
  float v30; // s18
  float v31; // s19
  float v32; // s0
  float v33; // s17
  float v34; // s7
  float v35; // s16
  float v36; // s17
  float v37; // s20

  v5 = *(float *)&a2;
  if ( a4 < 0.00001 )
    return a2;
  v7 = (float)(sqrtf(
                 (float)((float)(*((float *)this + 2) - *(float *)this) * (float)(*((float *)this + 2) - *(float *)this))
               + (float)((float)(*((float *)this + 3) - *((float *)this + 1))
                       * (float)(*((float *)this + 3) - *((float *)this + 1))))
             + sqrtf(
                 (float)((float)(*((float *)this + 4) - *((float *)this + 2))
                       * (float)(*((float *)this + 4) - *((float *)this + 2)))
               + (float)((float)(*((float *)this + 5) - *((float *)this + 3))
                       * (float)(*((float *)this + 5) - *((float *)this + 3)))))
     + sqrtf(
         (float)((float)(*((float *)this + 6) - *((float *)this + 4))
               * (float)(*((float *)this + 6) - *((float *)this + 4)))
       + (float)((float)(*((float *)this + 7) - *((float *)this + 5))
               * (float)(*((float *)this + 7) - *((float *)this + 5))));
  v8 = *(float *)this;
  v9 = *((float *)this + 1);
  v10 = *((float *)this + 2);
  v11 = *((float *)this + 3);
  v12 = fminf(fmaxf(*(float *)&a2, 0.0), 1.0);
  v13 = 1.0 - v12;
  v14 = (float)(v12 * 3.0) * (float)(1.0 - v12);
  v15 = v12 * (float)(v12 * 3.0);
  v16 = v12 * (float)(v12 * v12);
  v17 = v13 * (float)(v13 * v13);
  v18 = v13 * v14;
  v19 = *((float *)this + 4);
  v20 = *((float *)this + 5);
  v21 = v13 * v15;
  v22 = *((float *)this + 6);
  v23 = *((float *)this + 7);
  v24 = 1;
  v25 = (float)((float)((float)(v17 * *(float *)this) + (float)(v18 * v10)) + (float)(v21 * v19)) + (float)(v16 * v22);
  v26 = (float)((float)((float)(v17 * v9) + (float)(v18 * v11)) + (float)(v21 * v20)) + (float)(v16 * v23);
  for ( i = 0.0; ; i = i + v28 )
  {
    v29 = (float)((float)(a4 - i) * (float)((float)v24 / 7.0)) / v7;
    v5 = v5 + (float)(v29 * (float)a3);
    *(float *)&v4 = fminf(fmaxf(v5, 0.0), 1.0);
    v30 = (float)(1.0 - *(float *)&v4) * (float)((float)(1.0 - *(float *)&v4) * (float)(1.0 - *(float *)&v4));
    v31 = (float)(1.0 - *(float *)&v4) * (float)((float)(*(float *)&v4 * 3.0) * (float)(1.0 - *(float *)&v4));
    v32 = (float)(1.0 - *(float *)&v4) * (float)(*(float *)&v4 * (float)(*(float *)&v4 * 3.0));
    v33 = *(float *)&v4 * (float)(*(float *)&v4 * *(float *)&v4);
    v34 = v33 * v22;
    v35 = v33 * v23;
    v36 = v25;
    v37 = v26;
    v25 = (float)((float)((float)(v30 * v8) + (float)(v31 * v10)) + (float)(v32 * v19)) + v34;
    v26 = (float)((float)((float)(v30 * v9) + (float)(v31 * v11)) + (float)(v32 * v20)) + v35;
    v28 = sqrtf((float)((float)(v36 - v25) * (float)(v36 - v25)) + (float)((float)(v37 - v26) * (float)(v37 - v26)));
    if ( v24 == 7 )
      break;
    v8 = *(float *)this;
    v9 = *((float *)this + 1);
    v10 = *((float *)this + 2);
    v11 = *((float *)this + 3);
    v19 = *((float *)this + 4);
    v20 = *((float *)this + 5);
    v22 = *((float *)this + 6);
    v23 = *((float *)this + 7);
    if ( v29 < 0.0 )
      v28 = -v28;
    ++v24;
  }
  return v4;
}

