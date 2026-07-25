/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE6C0
 * Mangled: _ZNK5Caver7Matrix411DeterminantEv
 * Demangled: Caver::Matrix4::Determinant(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004AE6E4 string=0x00000000004AE6E8 "Y!"
 *   insn=0x00000000004AE6F8 string=0x00000000004AE6FC "\%"
 *   insn=0x00000000004AE700 string=0x00000000004AE704 "B'"
 *   insn=0x00000000004AE714 string=0x00000000004AE718 "G\n1"
 *   insn=0x00000000004AE728 string=0x00000000004AE72C "H\n5"
 *   insn=0x00000000004AE72C string=0x00000000004AE730 "R\n7"
 *   insn=0x00000000004AE744 string=0x00000000004AE748 "X;;"
 *   insn=0x00000000004AE748 string=0x00000000004AE74C "B8#"
 *   insn=0x00000000004AE758 string=0x00000000004AE75C "P:3"
 *   insn=0x00000000004AE768 string=0x00000000004AE76C "94"
 *   insn=0x00000000004AE77C string=0x00000000004AE780 "B%"
 *   insn=0x00000000004AE780 string=0x00000000004AE784 "%:0"
 *   insn=0x00000000004AE784 string=0x00000000004AE788 "!&"
 *   insn=0x00000000004AE78C string=0x00000000004AE790 " ( "
 *   insn=0x00000000004AE794 string=0x00000000004AE798 "a$"
 *   insn=0x00000000004AE798 string=0x00000000004AE79C " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Matrix4::Determinant(Caver::Matrix4 *this)
{
  float v1; // s1
  float v2; // s2
  float v3; // s3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  float v8; // s16
  float v9; // s17
  float v10; // s18
  float v11; // s19
  float v12; // s20
  float v13; // s21

  v1 = *((float *)this + 1);
  v2 = *((float *)this + 4);
  v3 = *((float *)this + 5);
  v4 = *((float *)this + 8);
  v5 = *((float *)this + 9);
  v6 = *((float *)this + 12);
  v7 = *((float *)this + 13);
  v8 = *((float *)this + 2);
  v9 = *((float *)this + 3);
  v10 = *((float *)this + 6);
  v11 = *((float *)this + 7);
  v12 = *((float *)this + 10);
  v13 = *((float *)this + 11);
  return (float)((float)((float)(v4 * v7) - (float)(v6 * v5)) * (float)((float)(v8 * v11) - (float)(v10 * v9)))
       + (float)((float)((float)((float)((float)(v2 * v5) - (float)(v4 * v3))
                               * (float)((float)(v8 * *((float *)this + 15)) - (float)(*((float *)this + 14) * v9)))
                       + (float)((float)((float)((float)(*(float *)this * v7) - (float)(v6 * v1))
                                       * (float)((float)(v10 * v13) - (float)(v12 * v11)))
                               + (float)((float)((float)((float)(*(float *)this * v3) - (float)(v2 * v1))
                                               * (float)((float)(v12 * *((float *)this + 15))
                                                       - (float)(*((float *)this + 14) * v13)))
                                       - (float)((float)((float)(*(float *)this * v5) - (float)(v4 * v1))
                                               * (float)((float)(v10 * *((float *)this + 15))
                                                       - (float)(*((float *)this + 14) * v11))))))
               - (float)((float)((float)(v2 * v7) - (float)(v6 * v3)) * (float)((float)(v8 * v13) - (float)(v12 * v9))));
}

