/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B24EC
 * Mangled: _ZN5Caver21RootsForCubicEquationEffffPf
 * Demangled: Caver::RootsForCubicEquation(float,float,float,float,float *)
 *
 * Callers: 1
 *   0x0000000000202100  Caver::RootsForCubicEquation(float,float,float,float,float *)
 *
 * Callees: 4
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FF180  .powf
 *   0x00000000001FF1F0  .cosf
 *   0x00000000001FF9F0  .acosf
 *
 * Referenced strings: 73
 *   insn=0x00000000004B250C string=0x00000000004B2510 "+"
 *   insn=0x00000000004B2510 string=0x00000000004B2514 "!%"
 *   insn=0x00000000004B2514 string=0x00000000004B2518 "E,"
 *   insn=0x00000000004B251C string=0x00000000004B2520 "!""
 *   insn=0x00000000004B2520 string=0x00000000004B2524 "b\t+"
 *   insn=0x00000000004B252C string=0x00000000004B2530 "e)+"
 *   insn=0x00000000004B2530 string=0x00000000004B2534 "c$"
 *   insn=0x00000000004B2534 string=0x00000000004B2538 "!"
 *   insn=0x00000000004B2538 string=0x00000000004B253C "c"
 *   insn=0x00000000004B253C string=0x00000000004B2540 " "
 *   insn=0x00000000004B2540 string=0x00000000004B2544 "a\t%"
 *   insn=0x00000000004B2544 string=0x00000000004B2548 "e\t!"
 *   insn=0x00000000004B2548 string=0x00000000004B254C "A"
 *   insn=0x00000000004B2554 string=0x00000000004B2558 "b(""
 *   insn=0x00000000004B2558 string=0x00000000004B255C ""
 *   insn=0x00000000004B255C string=0x00000000004B2560 " !"
 *   insn=0x00000000004B2560 string=0x00000000004B2564 "J"
 *   insn=0x00000000004B2568 string=0x00000000004B256C "B\t*"
 *   insn=0x00000000004B256C string=0x00000000004B2570 "# "
 *   insn=0x00000000004B2570 string=0x00000000004B2574 "B&"
 *   insn=0x00000000004B2574 string=0x00000000004B2578 "c"
 *   insn=0x00000000004B2578 string=0x00000000004B257C "h(""
 *   insn=0x00000000004B2588 string=0x00000000004B258C "("
 *   insn=0x00000000004B2588 string=0x00000000004B2640 "\t"
 *   insn=0x00000000004B2598 string=0x00000000004B259C " "
 *   insn=0x00000000004B25A0 string=0x00000000004B25A4 "I\t""
 *   insn=0x00000000004B25A4 string=0x00000000004B25A8 "g"
 *   insn=0x00000000004B25A8 string=0x00000000004B25AC " "
 *   insn=0x00000000004B25A8 string=0x00000000004B25B4 " "
 *   insn=0x00000000004B25B0 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B25BC string=0x00000000004B25C0 ")"
 *   insn=0x00000000004B25C0 string=0x00000000004B25C4 " !)"
 *   insn=0x00000000004B25C4 string=0x00000000004B25C8 ""
 *   insn=0x00000000004B25CC string=0x00000000004B25D0 "3\t"
 *   insn=0x00000000004B25CC string=0x00000000004B26E4 " "
 *   insn=0x00000000004B25D4 string=0x00000000004B25D8 "*))"
 *   insn=0x00000000004B25E4 string=0x00000000004B25E8 "@\t "
 *   insn=0x00000000004B25E8 string=0x00000000004B25EC ""
 *   insn=0x00000000004B25EC string=0x00000000004B25F0 "`"
 *   insn=0x00000000004B25F4 string=0x00000000004B25F8 "\n"
 *   insn=0x00000000004B2604 string=0x00000000004B2608 ")\t!"
 *   insn=0x00000000004B2614 string=0x00000000004B2618 " \t "
 *   insn=0x00000000004B2618 string=0x00000000004B261C "`"
 *   insn=0x00000000004B262C string=0x00000000004B2630 " \t "
 *   insn=0x00000000004B2630 string=0x00000000004B2634 "`\n"
 *   insn=0x00000000004B2638 string=0x00000000004B263C "7"
 *   insn=0x00000000004B2640 string=0x00000000004B2644 " !)"
 *   insn=0x00000000004B2650 string=0x00000000004B2654 "\t"
 *   insn=0x00000000004B2658 string=0x00000000004B265C "("
 *   insn=0x00000000004B265C string=0x00000000004B2660 "N\t "
 *   insn=0x00000000004B2660 string=0x00000000004B2664 "\n1J"
 *   insn=0x00000000004B266C string=0x00000000004B2670 "A"
 *   insn=0x00000000004B267C string=0x00000000004B2680 ""
 *   insn=0x00000000004B2688 string=0x00000000004B268C "\t!"
 *   insn=0x00000000004B2690 string=0x00000000004B2694 "A"
 *   insn=0x00000000004B26B4 string=0x00000000004B26D0 "s"
 *   insn=0x00000000004B26B8 string=0x0000000000583734 "o"
 *   insn=0x00000000004B26BC string=0x00000000004B26C0 "!) "
 *   insn=0x00000000004B26C0 string=0x00000000004B26C4 "#"
 *   insn=0x00000000004B26C4 string=0x00000000004B26C8 "` ""
 *   insn=0x00000000004B26D0 string=0x00000000004B26D4 " ) "
 *   insn=0x00000000004B26D4 string=0x00000000004B26D8 "`"
 *   insn=0x00000000004B26E8 string=0x00000000004B26EC "\t"
 *   insn=0x00000000004B26EC string=0x00000000004B26F0 "3"
 *   insn=0x00000000004B2708 string=0x00000000004B270C "  "
 *   insn=0x00000000004B2710 string=0x00000000004B2714 "a"
 *   insn=0x00000000004B2718 string=0x00000000004B271C "`"
 *   insn=0x00000000004B271C string=0x00000000004B2720 "\t"
 *   insn=0x00000000004B2720 string=0x00000000004B2724 "aji"
 *   insn=0x00000000004B2724 string=0x00000000004B2728 ""
 *   insn=0x00000000004B272C string=0x00000000004B2730 "!8 "
 *   insn=0x00000000004B2730 string=0x00000000004B2734 "aj)"
 *   insn=0x00000000004B2734 string=0x00000000004B2738 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RootsForCubicEquation(Caver *this, float a2, float a3, float a4, float a5, float *a6)
{
  float v6; // s11
  float v7; // s1
  float v8; // s2
  float v9; // s3
  float v10; // s0
  float v11; // s1
  float v12; // s10
  float v13; // s8
  float v15; // s8
  float v16; // s0
  float v17; // s9
  double v18; // d8
  float v19; // s0
  float v20; // s9
  float v21; // s0
  __int64 result; // x0
  float v23; // s9
  float v24; // s0
  float v25; // s14
  float v26; // s1
  float v27; // s9
  float v28; // s0
  float v29; // s2
  float v30; // s0
  float v31; // s1
  __int64 i; // x8
  __int64 v33; // x9
  float v34; // s1

  v6 = a3 / a2;
  v7 = (float)(a3 * -9.0) * a4;
  v8 = (float)((float)(a4 * 3.0) / a2) - (float)(v6 * v6);
  v9 = (float)(a5 * 27.0) / a2;
  v10 = (float)(v7 / a2) / a2;
  v11 = v8 / 3.0;
  v12 = (float)(v9 + (float)((float)(v6 * (float)(v6 * (float)(v6 + v6))) + v10)) / 27.0;
  v13 = (float)((float)(v11 * (float)(v11 * v11)) / 27.0) + (float)((float)(v12 * v12) * 0.25);
  if ( v13 >= -0.0001 )
  {
    v23 = sqrtf(v13);
    v24 = powf(fabsf((float)(v12 * -0.5) + v23), 0.33333);
    v25 = (float)(v12 * -0.5) - v23;
    if ( (float)((float)(v12 * -0.5) + v23) >= 0.0 )
      v26 = 1.0;
    else
      v26 = -1.0;
    v27 = v24 * v26;
    v28 = powf(fabsf(v25), 0.33333);
    if ( v25 >= 0.0 )
      v29 = 1.0;
    else
      v29 = -1.0;
    v30 = v28 * v29;
    if ( v13 <= 0.00001 && (v31 = v27 + v30, fabsf(v27 + v30) >= 0.001) )
    {
      if ( !this )
        return 2;
      result = 2;
      *(float *)this = v31;
      *((float *)this + 1) = v31 * -0.5;
    }
    else
    {
      if ( !this )
        return 1;
      *(float *)this = v27 + v30;
      result = 1;
    }
  }
  else
  {
    v15 = fabsf(v11);
    v16 = acosf((float)(v12 * -0.5) / sqrtf((float)((float)(v11 * v11) * v15) / 27.0));
    v17 = sqrtf(v15 / 3.0);
    if ( !this )
      return 3;
    v18 = v16;
    *(float *)this = (float)(v17 + v17) * cosf(v16 / 3.0);
    v19 = (v18 + 3.14159265) / 3.0;
    v20 = v17 * -2.0;
    *((float *)this + 1) = v20 * cosf(v19);
    v21 = (v18 + -3.14159265) / 3.0;
    *((float *)this + 2) = v20 * cosf(v21);
    result = 3;
  }
  for ( i = 0; i < result; ++i )
  {
    v33 = 4 * i;
    v34 = *((float *)this + i);
    *(float *)((char *)this + v33) = v34 - (float)(v6 / 3.0);
  }
  return result;
}

