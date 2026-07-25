/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A82FC
 * Mangled: _ZN5Caver13GUIViewLayout30LayoutForViewWithFrameInBoundsERKNS_9RectangleES3_f
 * Demangled: Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x0000000000203420  Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FE470  boost::detail::shared_count::shared_count<Caver::GUIViewLayout>(Caver::GUIViewLayout *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *
 * Referenced strings: 27
 *   insn=0x00000000004A8314 string=0x00000000004A8318 ""
 *   insn=0x00000000004A8324 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A8328 string=0x00000000004A832C ""
 *   insn=0x00000000004A8338 string=0x00000000004A833C "a"
 *   insn=0x00000000004A8348 string=0x00000000004A834C "?"
 *   insn=0x00000000004A8368 string=0x00000000004A836C "AX"
 *   insn=0x00000000004A8378 string=0x00000000004A837C "ui"
 *   insn=0x00000000004A8380 string=0x00000000004A8384 ""
 *   insn=0x00000000004A8384 string=0x00000000004A8388 "m"
 *   insn=0x00000000004A8388 string=0x00000000004A838C "a"
 *   insn=0x00000000004A8390 string=0x00000000004A8394 "`\n@-"
 *   insn=0x00000000004A8398 string=0x00000000004A839C "2'"
 *   insn=0x00000000004A839C string=0x00000000004A83A0 "3\n'"
 *   insn=0x00000000004A83A8 string=0x00000000004A83AC "f'"
 *   insn=0x00000000004A83AC string=0x00000000004A83B0 "@"3"
 *   insn=0x00000000004A83C0 string=0x00000000004A83C4 "!"
 *   insn=0x00000000004A83C8 string=0x00000000004A83CC ""
 *   insn=0x00000000004A83CC string=0x00000000004A83E8 "F(&"
 *   insn=0x00000000004A83F4 string=0x00000000004A83F8 "C8$"
 *   insn=0x00000000004A83FC string=0x00000000004A8400 "c"
 *   insn=0x00000000004A8404 string=0x00000000004A8408 ""
 *   insn=0x00000000004A8408 string=0x00000000004A8424 "I"
 *   insn=0x00000000004A840C string=0x00000000004A8410 "B(#"
 *   insn=0x00000000004A8418 string=0x00000000004A841C "B"
 *   insn=0x00000000004A8428 string=0x00000000004A842C "\tQ"
 *   insn=0x00000000004A8430 string=0x00000000004A8434 "i"
 *   insn=0x00000000004A8434 string=0x00000000004A8438 "\tA"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(
        Caver::GUIViewLayout *this@<X0>,
        const Caver::Rectangle *a2@<X1>,
        float a3@<S0>,
        __int64 *a4@<X8>)
{
  _QWORD *v9; // x0
  __int64 v10; // x8
  float v11; // s1
  float v12; // s3
  float v13; // s5
  float v14; // s17
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s16
  float v19; // s1
  float v20; // s0
  float v21; // s1
  int v22; // w9
  float v23; // s0
  float v24; // s3
  float v25; // s2
  float v26; // s3
  int v27; // w10
  float v28; // s2

  v9 = (_QWORD *)operator new(0x70u);
  v9[2] = 0;
  v9[3] = 0;
  *v9 = &byte_6FD2F8;
  v9[1] = 0;
  v9[5] = 0;
  *a4 = (__int64)v9;
  v9[12] = 0;
  v9[13] = 0x3F80000000000000LL;
  v9[9] = 0;
  v9[10] = 0;
  v9[6] = 0;
  v9[7] = v9 + 5;
  v9[8] = v9 + 5;
  v9[11] = 0;
  boost::detail::shared_count::shared_count<Caver::GUIViewLayout>();
  boost::detail::sp_enable_shared_from_this();
  v10 = *a4;
  *(float *)(*a4 + 108) = a3;
  v11 = *((float *)this + 2);
  v12 = *((float *)this + 3);
  v14 = *((float *)a2 + 2);
  v13 = *((float *)a2 + 3);
  v15 = *(float *)this;
  v16 = *((float *)this + 1);
  v18 = *(float *)a2;
  v17 = *((float *)a2 + 1);
  if ( (float)(*(float *)this + (float)(v11 * 0.5)) >= (float)(*(float *)a2 + (float)(v14 * 0.5)) )
  {
    v23 = (float)(v18 + v14) - (float)(v15 + v11);
    v21 = 0.0;
    v20 = v23 / a3;
    v22 = 2;
  }
  else
  {
    v19 = v15 - v18;
    v20 = 0.0;
    v21 = v19 / a3;
    v22 = 1;
  }
  if ( (float)(v16 + (float)(v12 * 0.5)) >= (float)(v17 + (float)(v13 * 0.5)) )
  {
    v28 = (float)(v17 + v13) - (float)(v16 + v12);
    v26 = 0.0;
    v25 = v28 / a3;
    v27 = 8;
  }
  else
  {
    v24 = v16 - v17;
    v25 = 0.0;
    v26 = v24 / a3;
    v27 = 4;
  }
  *(float *)(v10 + 84) = v21;
  *(float *)(v10 + 88) = v20;
  *(_DWORD *)(v10 + 80) = v27 | v22;
  *(float *)(v10 + 92) = v26;
  *(float *)(v10 + 96) = v25;
  *(_QWORD *)(v10 + 100) = *((_QWORD *)this + 1);
}

