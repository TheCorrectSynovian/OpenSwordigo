/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE7A8
 * Mangled: _ZNK5Caver7Matrix410IsSingularEv
 * Demangled: Caver::Matrix4::IsSingular(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004AE7CC string=0x00000000004AE7D0 "Y!"
 *   insn=0x00000000004AE7E0 string=0x00000000004AE7E4 "\%"
 *   insn=0x00000000004AE7E8 string=0x00000000004AE7EC "B'"
 *   insn=0x00000000004AE7FC string=0x00000000004AE800 "G\n1"
 *   insn=0x00000000004AE810 string=0x00000000004AE814 "H\n5"
 *   insn=0x00000000004AE814 string=0x00000000004AE818 "R\n7"
 *   insn=0x00000000004AE82C string=0x00000000004AE830 "X;;"
 *   insn=0x00000000004AE830 string=0x00000000004AE834 "B8#"
 *   insn=0x00000000004AE83C string=0x00000000004AE840 ":1"
 *   insn=0x00000000004AE840 string=0x00000000004AE844 "Q:3"
 *   insn=0x00000000004AE864 string=0x00000000004AE868 "B&"
 *   insn=0x00000000004AE868 string=0x00000000004AE86C "F:1"
 *   insn=0x00000000004AE86C string=0x00000000004AE870 "H"
 *   insn=0x00000000004AE870 string=0x00000000004AE874 "!'"
 *   insn=0x00000000004AE87C string=0x00000000004AE880 " ( "
 *   insn=0x00000000004AE884 string=0x00000000004AE888 "a%"
 *   insn=0x00000000004AE888 string=0x00000000004AE88C " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Matrix4::IsSingular(Caver::Matrix4 *this)
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
  return fabsf(
           (float)((float)((float)(v4 * v7) - (float)(v6 * v5)) * (float)((float)(v8 * v11) - (float)(v10 * v9)))
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
                 - (float)((float)((float)(v2 * v7) - (float)(v6 * v3)) * (float)((float)(v8 * v13) - (float)(v12 * v9))))) < 0.000001;
}

