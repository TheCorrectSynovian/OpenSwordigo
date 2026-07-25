/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A1014
 * Mangled: _ZN5Caver7GUIView9SetBoundsERKNS_9RectangleE
 * Demangled: Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x0000000000200DE0  Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200F10  Caver::Matrix4::Ortho(float,float,float,float,float,float)
 *
 * Referenced strings: 55
 *   insn=0x00000000004A1024 string=0x00000000004A1028 "T"
 *   insn=0x00000000004A1038 string=0x00000000004A103C "!"
 *   insn=0x00000000004A1040 string=0x00000000004A1044 "\t"
 *   insn=0x00000000004A1044 string=0x00000000004A1048 " 5G"
 *   insn=0x00000000004A1044 string=0x0000000000583734 "o"
 *   insn=0x00000000004A1048 string=0x00000000004A104C "!8""
 *   insn=0x00000000004A104C string=0x00000000004A1050 "!"
 *   insn=0x00000000004A1050 string=0x00000000004A1054 "   "
 *   insn=0x00000000004A1054 string=0x00000000004A1058 "i"
 *   insn=0x00000000004A1058 string=0x00000000004A1064 "a"
 *   insn=0x00000000004A105C string=0x00000000004A1060 ""
 *   insn=0x00000000004A1060 string=0x00000000004A107C "!@"
 *   insn=0x00000000004A1064 string=0x00000000004A1068 """
 *   insn=0x00000000004A1068 string=0x00000000004A106C "A8!"
 *   insn=0x00000000004A106C string=0x00000000004A1070 "!"
 *   insn=0x00000000004A1070 string=0x00000000004A1074 "   "
 *   insn=0x00000000004A107C string=0x00000000004A1080 "b"
 *   insn=0x00000000004A1080 string=0x00000000004A1084 "!8""
 *   insn=0x00000000004A1084 string=0x00000000004A1088 "!"
 *   insn=0x00000000004A1088 string=0x00000000004A108C "   "
 *   insn=0x00000000004A108C string=0x00000000004A1090 "i"
 *   insn=0x00000000004A1090 string=0x00000000004A109C "a"
 *   insn=0x00000000004A1094 string=0x00000000004A1098 ""
 *   insn=0x00000000004A1098 string=0x00000000004A10C4 " "
 *   insn=0x00000000004A109C string=0x00000000004A10A0 """
 *   insn=0x00000000004A10A0 string=0x00000000004A10A4 "A8!"
 *   insn=0x00000000004A10A4 string=0x00000000004A10A8 "!"
 *   insn=0x00000000004A10A8 string=0x00000000004A10AC "   "
 *   insn=0x00000000004A10B0 string=0x00000000004A10B4 ")"
 *   insn=0x00000000004A10B8 string=0x00000000004A10BC "?"
 *   insn=0x00000000004A10D4 string=0x00000000004A10D8 "h"
 *   insn=0x00000000004A10D8 string=0x00000000004A10DC "`"
 *   insn=0x00000000004A10DC string=0x00000000004A10E0 "!"
 *   insn=0x00000000004A10E4 string=0x00000000004A10E8 "h"
 *   insn=0x00000000004A10E8 string=0x00000000004A10EC "a(!"
 *   insn=0x00000000004A10F8 string=0x00000000004A10FC "h"
 *   insn=0x00000000004A10FC string=0x00000000004A1100 "i"
 *   insn=0x00000000004A1108 string=0x00000000004A110C "\t"
 *   insn=0x00000000004A110C string=0x00000000004A1110 "J"
 *   insn=0x00000000004A1110 string=0x00000000004A1114 ")"
 *   insn=0x00000000004A1114 string=0x00000000004A1118 ")"
 *   insn=0x00000000004A1118 string=0x00000000004A111C "+"
 *   insn=0x00000000004A1124 string=0x00000000004A1128 "i"
 *   insn=0x00000000004A1124 string=0x00000000004A1134 "l"
 *   insn=0x00000000004A1130 string=0x00000000004A1174 "KE@"
 *   insn=0x00000000004A113C string=0x00000000004A1140 "i"
 *   insn=0x00000000004A1140 string=0x00000000004A1144 "m"
 *   insn=0x00000000004A1144 string=0x00000000004A1148 ")"
 *   insn=0x00000000004A1164 string=0x00000000004A1168 "a"
 *   insn=0x00000000004A1174 string=0x00000000004A1178 "+E"
 *   insn=0x00000000004A1178 string=0x00000000004A117C "?"
 *   insn=0x00000000004A1184 string=0x00000000004A1188 "h"
 *   insn=0x00000000004A118C string=0x00000000004A1190 "-@"
 *   insn=0x00000000004A11A4 string=0x00000000004A11BC "ET"
 *   insn=0x00000000004A11BC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::GUIView::SetBounds(float *this, const Caver::Rectangle *a2)
{
  float *v2; // x19
  _BOOL4 v3; // w9
  bool v4; // w21
  float v5; // s1
  float v6; // w9
  float v7; // s0
  float v8; // s3
  float v9; // s2
  float *v10; // x9
  unsigned __int64 v11; // x11
  float *v12; // x9
  __int64 *v13; // x10
  __int64 v14; // x9
  _OWORD *v15; // x13
  __int128 *v16; // x14
  __int64 v17; // x15
  __int128 v18; // q0
  __int128 v19; // q1
  int v20; // t1
  __int64 v21[2]; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v22[7]; // [xsp+18h] [xbp-58h] BYREF

  v2 = this;
  v22[6] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = fabsf(*(float *)a2 - this[33]) > 0.001 || fabsf(*((float *)a2 + 1) - this[34]) > 0.001;
  if ( fabsf(*((float *)a2 + 2) - this[35]) <= 0.001 )
  {
    v5 = fabsf(*((float *)a2 + 3) - this[36]);
    v4 = v5 <= 0.001;
    if ( !v3 && v5 <= 0.001 )
      return this;
  }
  else
  {
    v4 = 0;
  }
  *(_OWORD *)(this + 33) = *(_OWORD *)a2;
  v6 = this[36];
  v7 = this[33];
  v8 = this[34];
  v9 = this[35];
  this[31] = v9;
  this[32] = v6;
  this = (float *)Caver::Matrix4::Ortho(v21, (Caver::Matrix4 *)this, v7, v8 + v6, v7 + v9, v8, -1.0, 1.0);
  v10 = v2 + 42;
  if ( v2 + 57 > v2 + 42 )
    v10 = v2 + 57;
  v11 = (((unsigned __int64)v10 - 165 - (unsigned __int64)v2) >> 2) + 1;
  if ( v11 >= 8 )
  {
    v14 = v11 & 0x7FFFFFFFFFFFFFF8LL;
    v13 = (__int64 *)((char *)v21 + v14 * 4);
    v15 = v2 + 45;
    v12 = &v2[v14 + 41];
    v16 = (__int128 *)v22;
    v17 = v11 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      v18 = *(v16 - 1);
      v19 = *v16;
      v17 -= 8;
      v16 += 2;
      *(v15 - 1) = v18;
      *v15 = v19;
      v15 += 2;
    }
    while ( v17 );
    if ( v11 == (v11 & 0x7FFFFFFFFFFFFFF8LL) )
      goto LABEL_15;
  }
  else
  {
    v12 = v2 + 41;
    v13 = v21;
  }
  do
  {
    v20 = *(_DWORD *)v13;
    v13 = (__int64 *)((char *)v13 + 4);
    *(_DWORD *)v12++ = v20;
  }
  while ( v12 < v2 + 57 );
LABEL_15:
  if ( !v4 )
    return (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)v2 + 88LL))(v2);
  return this;
}

