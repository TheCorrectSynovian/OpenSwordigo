/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D25C8
 * Mangled: _ZN5Caver5Image8SetPixelEiiRKNS_10FloatColorE
 * Demangled: Caver::Image::SetPixel(int,int,Caver::FloatColor const&)
 *
 * Callers: 1
 *   0x00000000001FDAA0  Caver::Image::SetPixel(int,int,Caver::FloatColor const&)
 *
 * Callees: 0
 *
 * Referenced strings: 81
 *   insn=0x00000000004D25C8 string=0x00000000004D25CC ""
 *   insn=0x00000000004D25D4 string=0x00000000004D25D8 "+"
 *   insn=0x00000000004D25D8 string=0x00000000004D25DC "\t"
 *   insn=0x00000000004D25DC string=0x00000000004D25E0 "k"
 *   insn=0x00000000004D25E0 string=0x00000000004D25E4 "\n"
 *   insn=0x00000000004D25E4 string=0x00000000004D25E8 "hy"
 *   insn=0x00000000004D25EC string=0x00000000004D25F0 ")"
 *   insn=0x00000000004D25F0 string=0x00000000004D25F4 ")}\n\n"
 *   insn=0x00000000004D25F4 string=0x00000000004D25F8 "\n"
 *   insn=0x00000000004D25FC string=0x00000000004D2600 "@"
 *   insn=0x00000000004D2600 string=0x00000000004D2604 "`"
 *   insn=0x00000000004D2600 string=0x00000000004D268C "a@-c"
 *   insn=0x00000000004D2600 string=0x00000000004D2700 "`"
 *   insn=0x00000000004D2600 string=0x00000000004D276C "c"
 *   insn=0x00000000004D2600 string=0x00000000004D27DC "`"
 *   insn=0x00000000004D2600 string=0x00000000004D27E4 "`"
 *   insn=0x00000000004D2600 string=0x00000000004D2834 "`"
 *   insn=0x00000000004D2608 string=0x00000000004D260C """
 *   insn=0x00000000004D2628 string=0x00000000004D262C "\t"
 *   insn=0x00000000004D262C string=0x00000000004D2630 "\t"
 *   insn=0x00000000004D2630 string=0x00000000004D2634 "`"
 *   insn=0x00000000004D2644 string=0x00000000004D2648 "\t"
 *   insn=0x00000000004D2648 string=0x00000000004D264C "\t"
 *   insn=0x00000000004D264C string=0x00000000004D2650 "`@"
 *   insn=0x00000000004D2660 string=0x00000000004D2664 "\t"
 *   insn=0x00000000004D2664 string=0x00000000004D2668 "\t\t"
 *   insn=0x00000000004D2668 string=0x00000000004D266C "`"
 *   insn=0x00000000004D267C string=0x00000000004D2680 "\t"
 *   insn=0x00000000004D2680 string=0x00000000004D2684 "\t"
 *   insn=0x00000000004D268C string=0x00000000004D2690 "c"
 *   insn=0x00000000004D2694 string=0x00000000004D2698 "!X "
 *   insn=0x00000000004D2698 string=0x00000000004D269C "BX "
 *   insn=0x00000000004D269C string=0x00000000004D26A0 "cX "
 *   insn=0x00000000004D26A8 string=0x00000000004D26AC "!h$"
 *   insn=0x00000000004D26AC string=0x00000000004D26B0 "Bh$"
 *   insn=0x00000000004D26B0 string=0x00000000004D26B4 "ch$"
 *   insn=0x00000000004D26BC string=0x00000000004D26C0 "!$"
 *   insn=0x00000000004D26C0 string=0x00000000004D26C4 "B$"
 *   insn=0x00000000004D26C4 string=0x00000000004D26C8 "c$"
 *   insn=0x00000000004D26D0 string=0x00000000004D26D4 "B($"
 *   insn=0x00000000004D26D4 string=0x00000000004D26D8 "!($"
 *   insn=0x00000000004D26D8 string=0x00000000004D26DC "J"
 *   insn=0x00000000004D26DC string=0x00000000004D26E0 "c($"
 *   insn=0x00000000004D26E0 string=0x00000000004D26E4 ")"
 *   insn=0x00000000004D26E4 string=0x00000000004D26E8 "J]"
 *   insn=0x00000000004D26E8 string=0x00000000004D26EC "k"
 *   insn=0x00000000004D26EC string=0x00000000004D26F0 "I1\t*"
 *   insn=0x00000000004D26F4 string=0x00000000004D26F8 ")"
 *   insn=0x00000000004D26F8 string=0x00000000004D26FC "4"
 *   insn=0x00000000004D26FC string=0x00000000004D27CC "\n"
 *   insn=0x00000000004D2704 string=0x00000000004D2708 """
 *   insn=0x00000000004D2724 string=0x00000000004D2728 "\t"
 *   insn=0x00000000004D2728 string=0x00000000004D272C "\t"
 *   insn=0x00000000004D272C string=0x00000000004D2730 "`"
 *   insn=0x00000000004D2740 string=0x00000000004D2744 "\t"
 *   insn=0x00000000004D2744 string=0x00000000004D2748 "\t"
 *   insn=0x00000000004D2748 string=0x00000000004D274C "`@"
 *   insn=0x00000000004D275C string=0x00000000004D2760 "\t"
 *   insn=0x00000000004D2760 string=0x00000000004D2764 "\t\t"
 *   insn=0x00000000004D276C string=0x00000000004D2770 "e@"
 *   insn=0x00000000004D2774 string=0x00000000004D2778 ")"
 *   insn=0x00000000004D2778 string=0x00000000004D277C "cX "
 *   insn=0x00000000004D2784 string=0x00000000004D2788 "%"
 *   insn=0x00000000004D2790 string=0x00000000004D2794 "ch!"
 *   insn=0x00000000004D27A0 string=0x00000000004D27A4 "c""
 *   insn=0x00000000004D27AC string=0x00000000004D27B0 "b(!"
 *   insn=0x00000000004D27B4 string=0x00000000004D27B8 "j"
 *   insn=0x00000000004D27B8 string=0x00000000004D27BC "I"
 *   insn=0x00000000004D27BC string=0x00000000004D27C0 "JiS"
 *   insn=0x00000000004D27C4 string=0x00000000004D27C8 "I-\t*\n"
 *   insn=0x00000000004D27CC string=0x00000000004D27D0 ")"
 *   insn=0x00000000004D27D0 string=0x00000000004D27D4 "\t"
 *   insn=0x00000000004D27E8 string=0x00000000004D27EC """
 *   insn=0x00000000004D2808 string=0x00000000004D280C "\t"
 *   insn=0x00000000004D280C string=0x00000000004D2810 "\t"
 *   insn=0x00000000004D2810 string=0x00000000004D2814 "`"
 *   insn=0x00000000004D2824 string=0x00000000004D2828 "\t"
 *   insn=0x00000000004D2828 string=0x00000000004D282C "\t"
 *   insn=0x00000000004D2838 string=0x00000000004D283C """
 *   insn=0x00000000004D2858 string=0x00000000004D285C "\t"
 *   insn=0x00000000004D285C string=0x00000000004D2860 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Image::SetPixel(Caver::Image *this, int a2, int a3, const Caver::FloatColor *a4, float result)
{
  _BYTE *v5; // x8
  unsigned int v6; // w9
  float v7; // s0

  v5 = (_BYTE *)(*((_QWORD *)this + 3) + (a2 + *((_DWORD *)this + 1) * a3) * *((_DWORD *)this + 4));
  switch ( *((_DWORD *)this + 3) )
  {
    case 1:
      *v5 = (unsigned int)(float)((float)(fmaxf(fminf(*(float *)a4, 1.0), 0.0) * 255.0) + 0.5);
      v5[1] = (unsigned int)(float)((float)(fmaxf(fminf(*((float *)a4 + 1), 1.0), 0.0) * 255.0) + 0.5);
      v5[2] = (unsigned int)(float)((float)(fmaxf(fminf(*((float *)a4 + 2), 1.0), 0.0) * 255.0) + 0.5);
      result = (float)(fmaxf(fminf(*((float *)a4 + 3), 1.0), 0.0) * 255.0) + 0.5;
      v5[3] = (unsigned int)result;
      return result;
    case 2:
      result = (float)(fmaxf(fminf(*((float *)a4 + 3), 1.0), 0.0) * 15.0) + 0.5;
      v6 = ((unsigned int)(float)((float)(fmaxf(fminf(*((float *)a4 + 1), 1.0), 0.0) * 15.0) + 0.5) << 8)
         | ((unsigned int)(float)((float)(fmaxf(fminf(*(float *)a4, 1.0), 0.0) * 15.0) + 0.5) << 12)
         | (16 * (unsigned int)(float)((float)(fmaxf(fminf(*((float *)a4 + 2), 1.0), 0.0) * 15.0) + 0.5));
      goto LABEL_6;
    case 4:
      *v5 = (unsigned int)(float)((float)(fmaxf(fminf(*(float *)a4, 1.0), 0.0) * 255.0) + 0.5);
      v5[1] = (unsigned int)(float)((float)(fmaxf(fminf(*((float *)a4 + 1), 1.0), 0.0) * 255.0) + 0.5);
      result = (float)(fmaxf(fminf(*((float *)a4 + 2), 1.0), 0.0) * 255.0) + 0.5;
      v5[2] = (unsigned int)result;
      return result;
    case 5:
      result = (float)(fmaxf(fminf(*((float *)a4 + 2), 1.0), 0.0) * 31.0) + 0.5;
      v6 = (32 * (unsigned int)(float)((float)(fmaxf(fminf(*((float *)a4 + 1), 1.0), 0.0) * 63.0) + 0.5))
         | ((unsigned int)(float)((float)(fmaxf(fminf(*(float *)a4, 1.0), 0.0) * 31.0) + 0.5) << 11);
LABEL_6:
      *(_WORD *)v5 = v6 | (unsigned int)result;
      return result;
    case 6:
      v7 = *(float *)a4;
      goto LABEL_10;
    case 7:
      v7 = *((float *)a4 + 3);
LABEL_10:
      result = (float)(fmaxf(fminf(v7, 1.0), 0.0) * 255.0) + 0.5;
      *v5 = (unsigned int)result;
      break;
    case 8:
      *v5 = (unsigned int)(float)((float)(fmaxf(fminf(*(float *)a4, 1.0), 0.0) * 255.0) + 0.5);
      result = (float)(fmaxf(fminf(*((float *)a4 + 3), 1.0), 0.0) * 255.0) + 0.5;
      v5[1] = (unsigned int)result;
      break;
    default:
      return result;
  }
  return result;
}

