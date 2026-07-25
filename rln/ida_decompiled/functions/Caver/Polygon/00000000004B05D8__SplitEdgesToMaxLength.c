/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B05D8
 * Mangled: _ZN5Caver7Polygon21SplitEdgesToMaxLengthEf
 * Demangled: Caver::Polygon::SplitEdgesToMaxLength(float)
 *
 * Callers: 1
 *   0x0000000000201370  Caver::Polygon::SplitEdgesToMaxLength(float)
 *
 * Callees: 4
 *   0x00000000001F5280  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,Caver::Vector2 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 51
 *   insn=0x00000000004B0600 string=0x00000000004B0604 "U"
 *   insn=0x00000000004B060C string=0x00000000004B0610 ""
 *   insn=0x00000000004B0614 string=0x00000000004B0618 "i"
 *   insn=0x00000000004B0618 string=0x00000000004B061C "h"
 *   insn=0x00000000004B061C string=0x00000000004B0620 "\n"
 *   insn=0x00000000004B0620 string=0x00000000004B0624 "J"
 *   insn=0x00000000004B0624 string=0x00000000004B0628 "_"
 *   insn=0x00000000004B0630 string=0x00000000004B0634 "\n\t("
 *   insn=0x00000000004B0634 string=0x00000000004B0638 "t""
 *   insn=0x00000000004B0638 string=0x00000000004B063C "l"
 *   insn=0x00000000004B063C string=0x00000000004B0640 "v}@"
 *   insn=0x00000000004B064C string=0x00000000004B0650 "k1@-"
 *   insn=0x00000000004B0654 string=0x00000000004B0658 "8+"
 *   insn=0x00000000004B0658 string=0x00000000004B065C ".8,"
 *   insn=0x00000000004B0670 string=0x00000000004B0674 "\t"
 *   insn=0x00000000004B0670 string=0x00000000004B074C "+"
 *   insn=0x00000000004B0674 string=0x00000000004B0678 " !)"
 *   insn=0x00000000004B0678 string=0x00000000004B067C "g"
 *   insn=0x00000000004B0680 string=0x00000000004B0684 "\t"
 *   insn=0x00000000004B0680 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B0690 string=0x00000000004B0694 " "
 *   insn=0x00000000004B0690 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000004B06A0 string=0x00000000004B073C "h"
 *   insn=0x00000000004B06B0 string=0x00000000004B06B4 ")"
 *   insn=0x00000000004B06B8 string=0x00000000004B06BC "h"
 *   insn=0x00000000004B06C8 string=0x00000000004B06CC ""\t""
 *   insn=0x00000000004B06CC string=0x00000000004B06D0 "\n"
 *   insn=0x00000000004B06D0 string=0x00000000004B06D4 "@ "
 *   insn=0x00000000004B06D4 string=0x00000000004B06D8 "B!"
 *   insn=0x00000000004B06D8 string=0x00000000004B06DC "A!"
 *   insn=0x00000000004B06DC string=0x00000000004B06E0 "a) "
 *   insn=0x00000000004B06E4 string=0x00000000004B06E8 "?"
 *   insn=0x00000000004B06EC string=0x00000000004B06F0 "!"
 *   insn=0x00000000004B06F0 string=0x00000000004B06F4 "j"
 *   insn=0x00000000004B06F4 string=0x00000000004B06F8 "?"
 *   insn=0x00000000004B06FC string=0x00000000004B0700 ""
 *   insn=0x00000000004B0704 string=0x00000000004B0708 "A"
 *   insn=0x00000000004B0708 string=0x00000000004B070C "h\n"
 *   insn=0x00000000004B0710 string=0x00000000004B0720 "h"
 *   insn=0x00000000004B071C string=0x00000000001F5280 "P'"
 *   insn=0x00000000004B0720 string=0x00000000004B0724 "?"
 *   insn=0x00000000004B0724 string=0x00000000004B0728 "Z#"
 *   insn=0x00000000004B0728 string=0x00000000004B072C ""
 *   insn=0x00000000004B072C string=0x00000000004B0730 "h"
 *   insn=0x00000000004B0730 string=0x00000000004B0734 "A"
 *   insn=0x00000000004B0738 string=0x00000000004B0740 "i"
 *   insn=0x00000000004B0744 string=0x00000000004B0748 "J"
 *   insn=0x00000000004B074C string=0x00000000004B0750 ""
 *   insn=0x00000000004B0750 string=0x00000000004B0754 "_"
 *   insn=0x00000000004B0758 string=0x00000000004B075C ""
 *   insn=0x00000000004B079C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Polygon::SplitEdgesToMaxLength(__int64 this, float a2)
{
  __int64 v2; // x19
  int v4; // w9
  int v5; // w8
  int v6; // w11
  float v7; // s10
  __int64 v8; // x12
  __int64 v9; // x22
  __int64 v10; // x10
  float *v11; // x11
  float *v12; // x12
  float v13; // s11
  float v14; // s12
  float v15; // s14
  float v16; // s0
  float v17; // s9
  int v18; // w23
  __int64 v19; // x24
  float v20; // s9
  __int64 v21; // x26
  __int64 v22; // x8
  __int64 v23; // x9
  float v24; // s2
  float v25; // s0
  __int64 v26; // x8
  float v27; // [xsp+10h] [xbp-90h] BYREF
  float v28; // [xsp+14h] [xbp-8Ch]
  __int64 v29; // [xsp+18h] [xbp-88h]

  v2 = this;
  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(unsigned __int8 *)(this + 33);
  v5 = *(_DWORD *)this;
  if ( *(_DWORD *)this + v4 - 1 >= 1 )
  {
    v6 = 0;
    v7 = a2 * a2;
    do
    {
      v8 = *(_QWORD *)(v2 + 8);
      v9 = v6;
      v10 = v6 + 1LL;
      v11 = (float *)(v8 + 8LL * v6);
      v12 = (float *)(v8 + 8 * v10);
      v13 = *v11;
      v14 = v11[1];
      v15 = v12[1] - v14;
      v16 = (float)((float)(*v12 - *v11) * (float)(*v12 - *v11)) + (float)(v15 * v15);
      if ( v16 > v7 )
      {
        v17 = sqrtf(v16);
        v27 = *v12 - *v11;
        v28 = v15;
        this = Caver::Vector2::Normalize((Caver::Vector2 *)&v27);
        v18 = vcvtms_s32_f32(v17 / a2);
        if ( v18 <= 0 )
        {
          v5 = *(_DWORD *)v2;
        }
        else
        {
          v19 = 0;
          v20 = v17 / (float)(v18 + 1);
          v21 = 8 * v9;
          do
          {
            v22 = *(_QWORD *)(v2 + 8);
            v23 = *(_QWORD *)(v2 + 16);
            v24 = v20 * (float)(int)++v19;
            v25 = v14 + (float)(v24 * v28);
            if ( v22 + v21 + 8 != v23 || v23 == *(_QWORD *)(v2 + 24) )
            {
              this = std::vector<Caver::Vector2>::_M_insert_aux();
            }
            else
            {
              v26 = v22 + v21;
              *(float *)(v26 + 8) = v13 + (float)(v24 * v27);
              *(float *)(v26 + 12) = v25;
              *(_QWORD *)(v2 + 16) = v26 + 16;
            }
            v21 += 8;
            v5 = *(_DWORD *)v2 + 1;
            *(_DWORD *)v2 = v5;
          }
          while ( v18 != v19 );
        }
        LOBYTE(v4) = *(_BYTE *)(v2 + 33);
        LODWORD(v10) = v9 + v18 + 1;
      }
      v6 = v10;
    }
    while ( (int)v10 < v5 + (char)(v4 - 1) );
  }
  return this;
}

