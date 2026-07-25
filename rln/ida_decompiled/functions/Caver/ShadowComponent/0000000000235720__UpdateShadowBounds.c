/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000235720
 * Mangled: _ZN5Caver15ShadowComponent18UpdateShadowBoundsEv
 * Demangled: Caver::ShadowComponent::UpdateShadowBounds(void)
 *
 * Callers: 1
 *   0x0000000000202820  Caver::ShadowComponent::UpdateShadowBounds(void)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x0000000000202A40  Caver::Rectangle::TransformedRectangle(Caver::Matrix4 const&)
 *
 * Referenced strings: 35
 *   insn=0x0000000000235730 string=0x0000000000235734 "T"
 *   insn=0x0000000000235740 string=0x0000000000235744 "`:@"
 *   insn=0x0000000000235744 string=0x0000000000235748 ""
 *   insn=0x0000000000235748 string=0x000000000023574C "\tq@"
 *   insn=0x0000000000235750 string=0x0000000000235754 " "
 *   insn=0x0000000000235754 string=0x0000000000235758 "`"
 *   insn=0x000000000023575C string=0x0000000000235760 "T"
 *   insn=0x0000000000235760 string=0x00000000001F74B0 "0'"
 *   insn=0x0000000000235774 string=0x0000000000235778 "`:@"
 *   insn=0x0000000000235778 string=0x000000000023577C "h"
 *   insn=0x000000000023577C string=0x0000000000235780 "`&"
 *   insn=0x0000000000235780 string=0x0000000000235784 "\t"
 *   insn=0x0000000000235784 string=0x0000000000235788 "y@"
 *   insn=0x0000000000235788 string=0x000000000023578C "(u@"
 *   insn=0x0000000000235790 string=0x0000000000235794 "h"
 *   insn=0x0000000000235794 string=0x0000000000235798 "`:@"
 *   insn=0x00000000002357A4 string=0x00000000002357A8 "`"
 *   insn=0x00000000002357A8 string=0x00000000002357AC "\t"
 *   insn=0x00000000002357AC string=0x00000000002357B0 "y@"
 *   insn=0x00000000002357B0 string=0x00000000002357B4 "(y@"
 *   insn=0x00000000002357B8 string=0x00000000002357BC "a"
 *   insn=0x00000000002357C0 string=0x00000000002357C4 "b"
 *   insn=0x00000000002357C4 string=0x00000000002357C8 "h"
 *   insn=0x00000000002357C8 string=0x00000000002357CC "!#"
 *   insn=0x00000000002357CC string=0x00000000002357D0 "c"
 *   insn=0x00000000002357D0 string=0x00000000002357D4 "i"
 *   insn=0x00000000002357D4 string=0x00000000002357D8 "j"
 *   insn=0x00000000002357D8 string=0x00000000002357DC "B8#"
 *   insn=0x00000000002357DC string=0x00000000002357E0 "a(!"
 *   insn=0x00000000002357E4 string=0x00000000002357E8 "b"
 *   insn=0x00000000002357E8 string=0x00000000002357EC "i"
 *   insn=0x00000000002357EC string=0x00000000002357F0 "j"
 *   insn=0x00000000002357F8 string=0x00000000002357FC "a"
 *   insn=0x00000000002357FC string=0x0000000000235800 "`"
 *   insn=0x0000000000235828 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowComponent::UpdateShadowBounds(Caver::ShadowComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  float v4; // s8
  float v5; // s0
  __int64 v6; // x8
  __int64 v7; // x0
  float v8; // s8
  float v9; // s0
  float v10; // s3
  int v11; // w9
  int v12; // w10
  float v13; // s2
  float v14; // s1
  float v15; // s3
  _QWORD v16[2]; // [xsp+8h] [xbp-88h] BYREF
  __int128 v17; // [xsp+18h] [xbp-78h]
  __int64 v18[9]; // [xsp+28h] [xbp-68h] BYREF

  v18[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  (*(void (__fastcall **)(_QWORD *__return_ptr))(**((_QWORD **)this + 14) + 224LL))(v16);
  Caver::SceneObject::WorldMatrix(v18, *((Caver::SceneObject **)this + 5));
  Caver::Rectangle::TransformedRectangle((Caver::Rectangle *)v16, (const Caver::Matrix4 *)v18);
  v2 = *((_QWORD *)this + 14);
  v3 = *((_QWORD *)this + 5);
  *((_OWORD *)this + 9) = v17;
  v4 = *(float *)(v3 + 120);
  v5 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  v6 = *((_QWORD *)this + 5);
  v7 = *((_QWORD *)this + 14);
  *((float *)this + 40) = v4 + (float)(v5 * *(float *)(v6 + 140));
  v8 = *(float *)(v6 + 120);
  v9 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v7 + 240LL))(v7);
  v10 = *((float *)this + 42);
  v11 = *((_DWORD *)this + 36);
  v12 = *((_DWORD *)this + 38);
  v13 = *((float *)this + 37) - v10;
  v14 = v10 + (float)(*((float *)this + 39) * 0.5);
  v15 = *(float *)(*((_QWORD *)this + 5) + 140LL);
  *((float *)this + 44) = v13;
  *((_DWORD *)this + 43) = v11;
  *((_DWORD *)this + 45) = v12;
  *((float *)this + 46) = v14;
  *((float *)this + 41) = v8 + (float)(v9 * v15);
}

